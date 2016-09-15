﻿#region License
/* 
 * Copyright (C) 1999-2016 John Källén.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; see the file COPYING.  If not, write to
 * the Free Software Foundation, 675 Mass Ave, Cambridge, MA 02139, USA.
 */
#endregion

using Reko.Arch.Pdp11;
using Reko.Core;
using Reko.Core.Machine;
using Reko.Core.Rtl;
using NUnit.Framework;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Reko.UnitTests.Arch.Pdp11
{
    [TestFixture]
    class RewriterTests : RewriterTestBase
    {
        private Pdp11Architecture arch = new Pdp11Architecture();
        private MemoryArea image;
        private Address addrBase = Address.Ptr16(0x0200);

        public override IProcessorArchitecture Architecture
        {
            get { return arch; }
        }

        protected override IEnumerable<RtlInstructionCluster> GetInstructionStream(Frame frame, IRewriterHost host)
        {
            var dasm = new Pdp11Disassembler(arch.CreateImageReader(image, 0), arch);
            return new Pdp11Rewriter(arch, dasm, frame, base.CreateHost());
        }

        public override Address LoadAddress
        {
            get { return addrBase; }
        }

        private void BuildTest(params ushort[] words)
        {
            var bytes = words
                .SelectMany(
                    w => new byte[] { (byte)w, (byte)(w >> 8) })
                .ToArray();
            image = new MemoryArea(LoadAddress, bytes);
        }

        [Test]
        public void Pdp11Rw_xor()
        {
            BuildTest(0x7811);
            AssertCode(
                "0|L--|0200(2): 6 instructions",
                "1|L--|v3 = Mem0[r1:word16]",
                "2|L--|r1 = r1 + 0x0002",
                "3|L--|r0 = r0 ^ v3",
                "4|L--|NZ = cond(r0)",
                "5|L--|V = false",
                "6|L--|C = false");
        }

        [Test]
        public void Pdp11Rw_mov()
        {
            BuildTest(0x12C2);
            AssertCode(
                "0|L--|0200(2): 3 instructions",
                "1|L--|r2 = Mem0[r3:word16]",
                "2|L--|NZ = cond(r2)",
                "3|L--|V = false");
        }

        [Test]
        public void Pdp11Rw_movb()
        {
            BuildTest(0x92C2);
            AssertCode(
                "0|L--|0200(2): 3 instructions",
                "1|L--|r2 = (int16) Mem0[r3:byte]",
                "2|L--|NZ = cond(r2)",
                "3|L--|V = false");
        }

        [Test]
        public void Pdp11Rw_clrb()
        {
            BuildTest(0x8A10);
            AssertCode(
                "0|L--|0200(2): 7 instructions",
                "1|L--|v3 = 0x00",
                "2|L--|Mem0[r0:byte] = v3",
                "3|L--|r0 = r0 + 0x0001",
                "4|L--|N = false",
                "5|L--|V = false",
                "6|L--|C = false",
                "7|L--|Z = true");
        }

        [Test]
        public void Pdp11Rw_jsr_relative()
        {
            BuildTest(0x09F7, 0x0582);  // jsr\tpc,0582(pc)
            AssertCode(
                "0|T--|0200(4): 1 instructions",
                "1|T--|call 0784 (2)");
        }

        [Test]
        public void Pdp11Rw_br()
        {
            BuildTest(0x01FF);  // br\t0200
            AssertCode(
                "0|T--|0200(2): 1 instructions",
                "1|T--|goto 0200");
        }

        [Test]
        public void Pdp11Rw_bne()
        {
            BuildTest(0x02FE);  // bne\t01FE
            AssertCode(
                "0|T--|0200(2): 1 instructions",
                "1|T--|if (Test(NE,Z)) branch 01FE");
        }

        [Test]
        public void Pdp11Rw_clr()
        {
            BuildTest(0x0A22);  // clr -(r2)
            AssertCode(
                "0|L--|0200(2): 6 instructions",
                "1|L--|r2 = r2 - 0x0002",
                "2|L--|Mem0[r2:word16] = 0x0000",
                "3|L--|N = false",
                "4|L--|V = false",
                "5|L--|C = false",
                "6|L--|Z = true");
        }

        [Test]
        public void Pdp11Rw_bisb()
        {
            BuildTest(0xD5DF, 0x2000, 0x0024);  // "bisb\t#0024,@#2000",
            AssertCode(
                "0|L--|0200(6): 4 instructions",
                "1|L--|v2 = Mem0[0x0024:word16] | 0x2000",
                "2|L--|Mem0[0x0024:word16] = v2",
                "3|L--|NZ = cond(v2)",
                "4|L--|V = false");
        }

        [Test]
        public void Pdp11Rw_tst()
        {
            BuildTest(0x8BF3, 0x0075); // tst 0075(r3)
            AssertCode(
                "0|L--|0200(4): 5 instructions",
                "1|L--|v4 = Mem0[r3 + 0x0075:byte]",
                "2|L--|v4 = v4 & v4",
                "3|L--|NZ = cond(v4)",
                "4|L--|V = false",
                "5|L--|C = false");
        }

        [Test]
        public void Pdp11Rw_bic()
        {
            BuildTest(0x45C4, 0x0001); // bic r4,#0001
            AssertCode(
                "0|L--|0200(4): 3 instructions",
                "1|L--|r4 = r4 & ~0x0001",
                "2|L--|NZ = cond(r4)",
                "3|L--|V = false");
        }

        [Test]
        public void Pdp11Rw_add()
        {
            BuildTest(0x65C2, 0x00B2); // add #00B2,r2
            AssertCode(
                "0|L--|0200(4): 2 instructions",
                "1|L--|r2 = r2 + 0x00B2",
                "2|L--|NZVC = cond(r2)");
        }

        [Test]
        public void Pdp11Rw_sub()
        {
            BuildTest(0xE5C6, 0x0010); // sub #0010,sp
            AssertCode(
                "0|L--|0200(4): 2 instructions",
                "1|L--|sp = sp - 0x0010",
                "2|L--|NZVC = cond(sp)");
        }


        [Test]
        public void Pdp11Rw_bit()
        {
            BuildTest(0x35C0, 0x1000); // bit #1000,r0
            AssertCode(
                "0|L--|0200(4): 3 instructions",
                "1|L--|r0 = r0 & 0x1000",
                "2|L--|NZ = cond(r0)",
                "3|L--|V = false");
        }

        [Test]
        public void Pdp11Rw_tst_predec()
        {
            BuildTest(0x0BE4);          // tst -(r4)
            AssertCode(
                "0|L--|0200(2): 6 instructions",
                "1|L--|r4 = r4 - 0x0002",
                "2|L--|v4 = Mem0[r4:word16]",
                "3|L--|v4 = v4 & v4",
                "4|L--|NZ = cond(v4)",
                "5|L--|V = false",
                "6|L--|C = false");
        }

        [Test]
        public void Pdp11Rw_dec()
        {
            BuildTest(0x0AC2);          // dec r2
            AssertCode(
                "0|L--|0200(2): 2 instructions",
                "1|L--|r2 = r2 - 0x0001",
                "2|L--|NZV = cond(r2)");
        }

        [Test]
        public void Pdp11Rw_Const()
        {
            BuildTest(0x15C0, 0x0397);          // mov #0397,r0
            AssertCode(
                  "0|L--|0200(4): 3 instructions",
                  "1|L--|r0 = 0x0397",
                  "2|L--|NZ = cond(r0)",
                  "3|L--|V = false");
        }

        [Test]
        public void Pdp11Rw_Indexed()
        {
            BuildTest(0x65F3, 0x0022, 0x0050); // add #0022,0050(r3)
            AssertCode(
                "0|L--|0200(6): 3 instructions",
                "1|L--|v3 = Mem0[r3 + 0x0050:word16] + 0x0022",
                "2|L--|Mem0[r3 + 0x0050:word16] = v3",
                "3|L--|NZVC = cond(v3)");
        }

        [Test]
        public void Pdp11Rw_IndexDeferred_pc()
        {
            BuildTest(0x453F, 0x7272); // bic(r4)+,@7272(pc)
            AssertCode(
                "0|L--|0200(4): 6 instructions",
                "1|L--|v3 = Mem0[r4:word16]",
                "2|L--|r4 = r4 + 0x0002",
                "3|L--|v5 = Mem0[0x0204:word16] & ~v3",
                "4|L--|Mem0[0x0204:word16] = v5",
                "5|L--|NZ = cond(v5)",
                "6|L--|V = false");
        }

        [Test]
        public void Pdp11Rw_PreDecDef()
        {
            BuildTest(0x1AE6);  //  mov @-(r3),-(sp)
            AssertCode(
                "0|L--|0200(2): 6 instructions",
                "1|L--|r3 = r3 - 0x0002",
                "2|L--|v3 = Mem0[Mem0[r3:ptr16]:word16]",
                "3|L--|sp = sp - 0x0002",
                "4|L--|Mem0[sp:word16] = v3",
                "5|L--|NZ = cond(v5)",
                "6|L--|V = false");
        }

        [Test]
        public void Pdp11Rw_jmp()
        {
            BuildTest(0x004C);  //﻿ 4C 00 jmp @r4
            AssertCode(
                "0|T--|0200(2): 1 instructions",
                "1|T--|goto r4");
        }

        [Test]
        public void Pdp11Rw_rts()
        {
            BuildTest(0x0087); // rts pc
            AssertCode(
                  "0|T--|0200(2): 1 instructions",
                  "1|T--|return (2,0)");
        }

        [Test]
        [Ignore]
        public void Pdp11Rw_PostIncrDef()
        {
            BuildTest(0x0BE4); // jmp @(r4)+
            AssertCode(
                 "0|T--|0200(2): 3 instructions",
                 "1|L--|v3 = Mem0[r4:word16]",
                 "2|L--|r4 = r4 + 0x0002",
                 "3|T--|goto v3");
        }

        [Test]
        public void Pdp11Rw_PostIncDst()
        {
            BuildTest(0x3520);  // bit (r4)+,-(r0)
            AssertCode(
                "0|L--|0200(2): 7 instructions",
                "1|L--|v3 = Mem0[r4:word16]",
                "2|L--|r4 = r4 + 0x0002",
                "3|L--|r0 = r0 - 0x0002",
                "4|L--|v5 = v3 & Mem0[r0:word16]",
                "5|L--|Mem0[r0:word16] = v5",
                "6|L--|NZ = cond(v5)",
                "7|L--|V = false");
        }

        [Test]
        public void Pdp11Rw_sxt()
        {
            BuildTest(0x0DC0);  // sxt r0
            AssertCode(
                "0|L--|0200(2): 2 instructions",
                "1|L--|r0 = 0 - N",
                "2|L--|Z = cond(r0)");
        }

        [Test]
        public void Pdp11Rw_jmpRel()
        {
            // 78 00 C2 1C jmp @1CC2(r0)
            BuildTest(0x0078, 0x1CC2);
            AssertCode(
                "0|T--|0200(4): 1 instructions",
                "1|T--|goto Mem0[r0 + 0x1CC2:ptr16]");
        }

        [Test]
        public void Pdp11Rw_div()
        {
            //17 72 C8 00 div #00C8,r0
            BuildTest(0x7217, 0x00C8);
            AssertCode(
                "0|L--|0200(4): 4 instructions",
                "1|L--|v3 = r0_r1",
                "2|L--|r0 = v3 / 0x00C8",
                "3|L--|r1 = v3 % 0x00C8",
                "4|L--|NZVC = cond(r0)");
        }
    }
}
