// test.h
// Generated by decompiling test
// using Decompiler version 0.6.1.0.

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (40053D Eq_28 t40053D) (400550 Eq_31 t400550) (4005C0 Eq_32 t4005C0))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_17: (fn void ())
	T_17 (in rdx : (ptr Eq_17))
	T_33 (in rtld_fini : (ptr (fn void ())))
Eq_20: (fn void (ptr64))
	T_20 (in __align : ptr64)
Eq_26: (fn int32 ((ptr Eq_28), Eq_29, (ptr (ptr char)), (ptr Eq_31), (ptr Eq_32), (ptr Eq_17), (ptr void)))
	T_26 (in __libc_start_main : ptr64)
	T_27 (in signature of __libc_start_main : void)
Eq_28: (fn int32 (int32, (ptr (ptr char)), (ptr (ptr char))))
	T_28 (in main : (ptr (fn int32 (int32, (ptr (ptr char)), (ptr (ptr char))))))
	T_35 (in 0x000000000040053D : word64)
Eq_29: (union "Eq_29" (int32 u0) (word64 u1))
	T_29 (in argc : int32)
	T_36 (in qwArg00 : word64)
Eq_31: (fn void ())
	T_31 (in init : (ptr (fn void ())))
	T_38 (in 0x0000000000400550 : word64)
Eq_32: (fn void ())
	T_32 (in fini : (ptr (fn void ())))
	T_39 (in 0x00000000004005C0 : word64)
Eq_42: (fn void ())
	T_42 (in __hlt : ptr64)
Eq_70: (union "Eq_70" (word32 u0) ((ptr code) u1))
	T_70 (in 0x00000000 : word32)
Eq_76: (union "Eq_76" (int64 u0) (uint64 u1))
	T_76 (in rdx_13 : Eq_76)
	T_80 (in rax_4 >> 0x0000000000000003 >> 0x000000000000003F : word64)
Eq_78: (union "Eq_78" (int64 u0) (uint64 u1))
	T_78 (in rax_4 >> 0x0000000000000003 : word64)
Eq_81: (union "Eq_81" (int64 u0) (uint64 u1))
	T_81 (in rax_4 >> 0x0000000000000003 : word64)
Eq_82: (union "Eq_82" (int64 u0) (uint64 u1))
	T_82 (in (rax_4 >> 0x0000000000000003) + rdx_13 : word64)
Eq_87: (union "Eq_87" (int64 u0) (uint64 u1))
	T_87 (in rdx_45 : Eq_87)
	T_89 (in DPB(rdx_13, 0x00000000, 0) : word64)
	T_90 (in 0x0000000000000000 : word64)
Eq_105: (union "Eq_105" (word32 u0) ((ptr code) u1))
	T_105 (in 0x00000000 : word32)
Eq_113: (fn word64 (word64))
	T_113 (in deregister_tm_clones : ptr64)
	T_114 (in signature of deregister_tm_clones : void)
Eq_134: (fn void (word64))
	T_134 (in register_tm_clones : ptr64)
	T_135 (in signature of register_tm_clones : void)
	T_159 (in register_tm_clones : ptr64)
Eq_149: (union "Eq_149" (ptr64 u0) (word32 u1))
	T_149 (in rbp : word64)
	T_150 (in dwLoc04 : word32)
	T_151 (in qwLoc04 : word64)
	T_152 (in DPB(qwLoc04, dwLoc04, 0) : word64)
	T_155 (in fp - 0x0000000000000004 : word64)
Eq_156: (union "Eq_156" (word32 u0) ((ptr code) u1))
	T_156 (in 0x00000000 : word32)
Eq_169: (fn word64 ())
	T_169 (in f : ptr64)
	T_170 (in signature of f : void)
Eq_173: (fn void ())
	T_173 (in _init : ptr64)
	T_174 (in signature of _init : void)
Eq_206: (union "Eq_206" (word32 u0) ((ptr code) u1))
	T_206 (in r12_18[rbx_27 * 0x00000008] : word32)
// Type Variables ////////////
globals_t: (in globals : (ptr (struct "Globals")))
  Class: Eq_1
  DataType: (ptr Eq_1)
  OrigDataType: (ptr (struct "Globals"))
T_2: (in rax_4 : word64)
  Class: Eq_2
  DataType: word64
  OrigDataType: word64
T_3: (in 0000000000600FF8 : ptr64)
  Class: Eq_3
  DataType: (ptr word64)
  OrigDataType: (ptr (struct (0 T_6 t0000)))
T_4: (in 0x0000000000000000 : word64)
  Class: Eq_4
  DataType: word64
  OrigDataType: word64
T_5: (in 0x0000000000600FF8 + 0x0000000000000000 : word64)
  Class: Eq_5
  DataType: ptr64
  OrigDataType: ptr64
T_6: (in Mem0[0x0000000000600FF8 + 0x0000000000000000:word64] : word64)
  Class: Eq_2
  DataType: word64
  OrigDataType: word64
T_7: (in 0x0000000000000000 : word64)
  Class: Eq_2
  DataType: word64
  OrigDataType: word64
T_8: (in rax_4 == 0x0000000000000000 : bool)
  Class: Eq_8
  DataType: bool
  OrigDataType: bool
T_9: (in rsp_15 : word64)
  Class: Eq_9
  DataType: word64
  OrigDataType: word64
T_10: (in SCZO_16 : byte)
  Class: Eq_10
  DataType: byte
  OrigDataType: byte
T_11: (in rax_17 : word64)
  Class: Eq_11
  DataType: word64
  OrigDataType: word64
T_12: (in SZO_18 : byte)
  Class: Eq_12
  DataType: byte
  OrigDataType: byte
T_13: (in C_19 : byte)
  Class: Eq_13
  DataType: byte
  OrigDataType: byte
T_14: (in Z_20 : byte)
  Class: Eq_14
  DataType: byte
  OrigDataType: byte
T_15: (in __gmon_start__ : ptr64)
  Class: Eq_15
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_16: (in rax : word64)
  Class: Eq_16
  DataType: word64
  OrigDataType: word64
T_17: (in rdx : (ptr Eq_17))
  Class: Eq_17
  DataType: (ptr Eq_17)
  OrigDataType: (ptr (fn void ()))
T_18: (in qwArg00 : word64)
  Class: Eq_18
  DataType: word64
  OrigDataType: word64
T_19: (in dwArg04 : word32)
  Class: Eq_19
  DataType: word32
  OrigDataType: word32
T_20: (in __align : ptr64)
  Class: Eq_20
  DataType: (ptr Eq_20)
  OrigDataType: (ptr (fn T_24 (T_23)))
T_21: (in fp : ptr64)
  Class: Eq_21
  DataType: (ptr void)
  OrigDataType: (ptr void)
T_22: (in 0x0000000000000008 : word64)
  Class: Eq_22
  DataType: int64
  OrigDataType: int64
T_23: (in fp + 0x0000000000000008 : word64)
  Class: Eq_23
  DataType: ptr64
  OrigDataType: ptr64
T_24: (in __align(fp + 0x0000000000000008) : void)
  Class: Eq_24
  DataType: void
  OrigDataType: void
T_25: (in rax_19 : word64)
  Class: Eq_25
  DataType: word64
  OrigDataType: word64
T_26: (in __libc_start_main : ptr64)
  Class: Eq_26
  DataType: (ptr Eq_26)
  OrigDataType: (ptr (fn T_40 (T_35, T_36, T_37, T_38, T_39, T_17, T_21)))
T_27: (in signature of __libc_start_main : void)
  Class: Eq_26
  DataType: (ptr Eq_26)
  OrigDataType: 
T_28: (in main : (ptr (fn int32 (int32, (ptr (ptr char)), (ptr (ptr char))))))
  Class: Eq_28
  DataType: (ptr Eq_28)
  OrigDataType: 
T_29: (in argc : int32)
  Class: Eq_29
  DataType: Eq_29
  OrigDataType: 
T_30: (in ubp_av : (ptr (ptr char)))
  Class: Eq_30
  DataType: (ptr (ptr char))
  OrigDataType: 
T_31: (in init : (ptr (fn void ())))
  Class: Eq_31
  DataType: (ptr Eq_31)
  OrigDataType: 
T_32: (in fini : (ptr (fn void ())))
  Class: Eq_32
  DataType: (ptr Eq_32)
  OrigDataType: 
T_33: (in rtld_fini : (ptr (fn void ())))
  Class: Eq_17
  DataType: (ptr Eq_17)
  OrigDataType: 
T_34: (in stack_end : (ptr void))
  Class: Eq_21
  DataType: (ptr void)
  OrigDataType: 
T_35: (in 0x000000000040053D : word64)
  Class: Eq_28
  DataType: (ptr Eq_28)
  OrigDataType: (ptr (fn int32 (int32, (ptr (ptr char)), (ptr (ptr char)))))
T_36: (in qwArg00 : word64)
  Class: Eq_29
  DataType: Eq_29
  OrigDataType: (union (int32 u1) (word64 u0))
T_37: (in fp + 0x0000000000000008 : word64)
  Class: Eq_30
  DataType: (ptr (ptr char))
  OrigDataType: (ptr (ptr char))
T_38: (in 0x0000000000400550 : word64)
  Class: Eq_31
  DataType: (ptr Eq_31)
  OrigDataType: (ptr (fn void ()))
T_39: (in 0x00000000004005C0 : word64)
  Class: Eq_32
  DataType: (ptr Eq_32)
  OrigDataType: (ptr (fn void ()))
T_40: (in __libc_start_main(&globals->t40053D, qwArg00, fp + 0x0000000000000008, 0x0000000000400550, 0x00000000004005C0, rdx, fp) : int32)
  Class: Eq_40
  DataType: int32
  OrigDataType: int32
T_41: (in DPB(rax, __libc_start_main(&globals->t40053D, qwArg00, fp + 0x0000000000000008, 0x0000000000400550, 0x00000000004005C0, rdx, fp), 0) : word64)
  Class: Eq_25
  DataType: word64
  OrigDataType: word64
T_42: (in __hlt : ptr64)
  Class: Eq_42
  DataType: (ptr Eq_42)
  OrigDataType: (ptr (fn T_43 ()))
T_43: (in __hlt() : void)
  Class: Eq_43
  DataType: void
  OrigDataType: void
T_44: (in rsp : ptr64)
  Class: Eq_44
  DataType: ptr64
  OrigDataType: word64
T_45: (in r8 : word64)
  Class: Eq_45
  DataType: word64
  OrigDataType: word64
T_46: (in rax : word64)
  Class: Eq_46
  DataType: word64
  OrigDataType: word64
T_47: (in 0x00601047 : word32)
  Class: Eq_47
  DataType: word32
  OrigDataType: word32
T_48: (in DPB(rax, 0x00601047, 0) : word64)
  Class: Eq_48
  DataType: uint64
  OrigDataType: uint64
T_49: (in 0x000000000000000E : word64)
  Class: Eq_48
  DataType: uint64
  OrigDataType: uint64
T_50: (in DPB(rax, 0x00601047, 0) > 0x000000000000000E : bool)
  Class: Eq_50
  DataType: bool
  OrigDataType: bool
T_51: (in rax_37 : word64)
  Class: Eq_51
  DataType: word64
  OrigDataType: word64
T_52: (in 0x00000000 : word32)
  Class: Eq_52
  DataType: word32
  OrigDataType: word32
T_53: (in DPB(rax, 0x00000000, 0) : word64)
  Class: Eq_51
  DataType: word64
  OrigDataType: word64
T_54: (in 0x0000000000000000 : word64)
  Class: Eq_51
  DataType: word64
  OrigDataType: word64
T_55: (in rax_37 == 0x0000000000000000 : bool)
  Class: Eq_55
  DataType: bool
  OrigDataType: bool
T_56: (in fp : ptr64)
  Class: Eq_56
  DataType: ptr64
  OrigDataType: ptr64
T_57: (in 0x0000000000000004 : word64)
  Class: Eq_57
  DataType: int64
  OrigDataType: int64
T_58: (in fp + 0x0000000000000004 : word64)
  Class: Eq_44
  DataType: ptr64
  OrigDataType: ptr64
T_59: (in rsp_44 : ptr64)
  Class: Eq_44
  DataType: ptr64
  OrigDataType: word64
T_60: (in eax_45 : word32)
  Class: Eq_60
  DataType: word32
  OrigDataType: word32
T_61: (in rbp_46 : word64)
  Class: Eq_61
  DataType: word64
  OrigDataType: word64
T_62: (in r8_47 : word64)
  Class: Eq_62
  DataType: word64
  OrigDataType: word64
T_63: (in SCZO_48 : byte)
  Class: Eq_63
  DataType: byte
  OrigDataType: byte
T_64: (in rax_49 : word64)
  Class: Eq_64
  DataType: word64
  OrigDataType: word64
T_65: (in CZ_50 : byte)
  Class: Eq_65
  DataType: byte
  OrigDataType: byte
T_66: (in SZO_51 : byte)
  Class: Eq_66
  DataType: byte
  OrigDataType: byte
T_67: (in C_52 : byte)
  Class: Eq_67
  DataType: byte
  OrigDataType: byte
T_68: (in Z_53 : byte)
  Class: Eq_68
  DataType: byte
  OrigDataType: byte
T_69: (in edi_54 : word32)
  Class: Eq_69
  DataType: word32
  OrigDataType: word32
T_70: (in 0x00000000 : word32)
  Class: Eq_70
  DataType: word32
  OrigDataType: (union (word32 u0) ((ptr code) u1))
T_71: (in r8 : word64)
  Class: Eq_71
  DataType: word64
  OrigDataType: word64
T_72: (in rax_4 : int64)
  Class: Eq_72
  DataType: int64
  OrigDataType: int64
T_73: (in rax : word64)
  Class: Eq_73
  DataType: word64
  OrigDataType: word64
T_74: (in 0x00601040 : word32)
  Class: Eq_74
  DataType: word32
  OrigDataType: word32
T_75: (in DPB(rax, 0x00601040, 0) : word64)
  Class: Eq_72
  DataType: int64
  OrigDataType: word64
T_76: (in rdx_13 : Eq_76)
  Class: Eq_76
  DataType: Eq_76
  OrigDataType: (union (int64 u1) (uint64 u0))
T_77: (in 0x0000000000000003 : word64)
  Class: Eq_77
  DataType: word64
  OrigDataType: word64
T_78: (in rax_4 >> 0x0000000000000003 : word64)
  Class: Eq_78
  DataType: Eq_78
  OrigDataType: (union (int64 u0) (uint64 u1))
T_79: (in 0x000000000000003F : word64)
  Class: Eq_79
  DataType: word64
  OrigDataType: word64
T_80: (in rax_4 >> 0x0000000000000003 >> 0x000000000000003F : word64)
  Class: Eq_76
  DataType: Eq_76
  OrigDataType: uint64
T_81: (in rax_4 >> 0x0000000000000003 : word64)
  Class: Eq_81
  DataType: Eq_81
  OrigDataType: (union (int64 u1) (uint64 u0))
T_82: (in (rax_4 >> 0x0000000000000003) + rdx_13 : word64)
  Class: Eq_82
  DataType: Eq_82
  OrigDataType: (union (int64 u1) (uint64 u0))
T_83: (in 0x0000000000000001 : word64)
  Class: Eq_83
  DataType: word64
  OrigDataType: word64
T_84: (in (rax_4 >> 0x0000000000000003) + rdx_13 >> 0x0000000000000001 : word64)
  Class: Eq_84
  DataType: int64
  OrigDataType: int64
T_85: (in 0x0000000000000000 : word64)
  Class: Eq_84
  DataType: int64
  OrigDataType: word64
T_86: (in (rax_4 >> 0x0000000000000003) + rdx_13 >> 0x0000000000000001 != 0x0000000000000000 : bool)
  Class: Eq_86
  DataType: bool
  OrigDataType: bool
T_87: (in rdx_45 : Eq_87)
  Class: Eq_87
  DataType: Eq_87
  OrigDataType: (union (int64 u1) (uint64 u0))
T_88: (in 0x00000000 : word32)
  Class: Eq_88
  DataType: word32
  OrigDataType: word32
T_89: (in DPB(rdx_13, 0x00000000, 0) : word64)
  Class: Eq_87
  DataType: Eq_87
  OrigDataType: (union (int64 u1) (uint64 u0))
T_90: (in 0x0000000000000000 : word64)
  Class: Eq_87
  DataType: int64
  OrigDataType: word64
T_91: (in rdx_45 == 0x0000000000000000 : bool)
  Class: Eq_91
  DataType: bool
  OrigDataType: bool
T_92: (in rsp_53 : word64)
  Class: Eq_92
  DataType: word64
  OrigDataType: word64
T_93: (in eax_54 : word32)
  Class: Eq_93
  DataType: word32
  OrigDataType: word32
T_94: (in rbp_55 : word64)
  Class: Eq_94
  DataType: word64
  OrigDataType: word64
T_95: (in r8_56 : word64)
  Class: Eq_95
  DataType: word64
  OrigDataType: word64
T_96: (in SCZO_57 : byte)
  Class: Eq_96
  DataType: byte
  OrigDataType: byte
T_97: (in rax_58 : word64)
  Class: Eq_97
  DataType: word64
  OrigDataType: word64
T_98: (in rdx_59 : word64)
  Class: Eq_98
  DataType: word64
  OrigDataType: word64
T_99: (in Z_60 : byte)
  Class: Eq_99
  DataType: byte
  OrigDataType: byte
T_100: (in edx_61 : word32)
  Class: Eq_100
  DataType: word32
  OrigDataType: word32
T_101: (in SZO_62 : byte)
  Class: Eq_101
  DataType: byte
  OrigDataType: byte
T_102: (in C_63 : byte)
  Class: Eq_102
  DataType: byte
  OrigDataType: byte
T_103: (in rsi_64 : word64)
  Class: Eq_103
  DataType: word64
  OrigDataType: word64
T_104: (in edi_65 : word32)
  Class: Eq_104
  DataType: word32
  OrigDataType: word32
T_105: (in 0x00000000 : word32)
  Class: Eq_105
  DataType: word32
  OrigDataType: (union (word32 u0) ((ptr code) u1))
T_106: (in r8 : word64)
  Class: Eq_45
  DataType: word64
  OrigDataType: word64
T_107: (in 0000000000601040 : ptr64)
  Class: Eq_107
  DataType: (ptr byte)
  OrigDataType: (ptr (struct (0 T_110 t0000)))
T_108: (in 0x0000000000000000 : word64)
  Class: Eq_108
  DataType: word64
  OrigDataType: word64
T_109: (in 0x0000000000601040 + 0x0000000000000000 : word64)
  Class: Eq_109
  DataType: ptr64
  OrigDataType: ptr64
T_110: (in Mem0[0x0000000000601040 + 0x0000000000000000:byte] : byte)
  Class: Eq_110
  DataType: byte
  OrigDataType: byte
T_111: (in 0x00 : byte)
  Class: Eq_110
  DataType: byte
  OrigDataType: byte
T_112: (in Mem0[0x0000000000601040 + 0x0000000000000000:byte] != 0x00 : bool)
  Class: Eq_112
  DataType: bool
  OrigDataType: bool
T_113: (in deregister_tm_clones : ptr64)
  Class: Eq_113
  DataType: (ptr Eq_113)
  OrigDataType: (ptr (fn T_115 (T_106)))
T_114: (in signature of deregister_tm_clones : void)
  Class: Eq_113
  DataType: (ptr Eq_113)
  OrigDataType: 
T_115: (in deregister_tm_clones(r8) : word64)
  Class: Eq_115
  DataType: word64
  OrigDataType: word64
T_116: (in 0x01 : byte)
  Class: Eq_116
  DataType: byte
  OrigDataType: byte
T_117: (in 0000000000601040 : ptr64)
  Class: Eq_117
  DataType: (ptr byte)
  OrigDataType: (ptr (struct (0 T_120 t0000)))
T_118: (in 0x0000000000000000 : word64)
  Class: Eq_118
  DataType: word64
  OrigDataType: word64
T_119: (in 0x0000000000601040 + 0x0000000000000000 : word64)
  Class: Eq_119
  DataType: ptr64
  OrigDataType: ptr64
T_120: (in Mem17[0x0000000000601040 + 0x0000000000000000:byte] : byte)
  Class: Eq_116
  DataType: byte
  OrigDataType: byte
T_121: (in r8 : word64)
  Class: Eq_71
  DataType: word64
  OrigDataType: word64
T_122: (in fp : ptr64)
  Class: Eq_122
  DataType: ptr64
  OrigDataType: ptr64
T_123: (in rsp : word64)
  Class: Eq_122
  DataType: ptr64
  OrigDataType: ptr64
T_124: (in 0000000000600E20 : ptr64)
  Class: Eq_124
  DataType: (ptr word64)
  OrigDataType: (ptr (struct (0 T_127 t0000)))
T_125: (in 0x0000000000000000 : word64)
  Class: Eq_125
  DataType: word64
  OrigDataType: word64
T_126: (in 0x0000000000600E20 + 0x0000000000000000 : word64)
  Class: Eq_126
  DataType: ptr64
  OrigDataType: ptr64
T_127: (in Mem0[0x0000000000600E20 + 0x0000000000000000:word64] : word64)
  Class: Eq_127
  DataType: word64
  OrigDataType: word64
T_128: (in 0x0000000000000000 : word64)
  Class: Eq_128
  DataType: word64
  OrigDataType: word64
T_129: (in Mem0[0x0000000000600E20 + 0x0000000000000000:word64] - 0x0000000000000000 : word64)
  Class: Eq_129
  DataType: word64
  OrigDataType: word64
T_130: (in cond(Mem0[0x0000000000600E20 + 0x0000000000000000:word64] - 0x0000000000000000) : byte)
  Class: Eq_130
  DataType: byte
  OrigDataType: byte
T_131: (in SCZO : byte)
  Class: Eq_130
  DataType: byte
  OrigDataType: byte
T_132: (in Z : byte)
  Class: Eq_130
  DataType: byte
  OrigDataType: byte
T_133: (in Test(EQ,Z) : bool)
  Class: Eq_133
  DataType: Eq_133
  OrigDataType: 
T_134: (in register_tm_clones : ptr64)
  Class: Eq_134
  DataType: (ptr Eq_134)
  OrigDataType: (ptr (fn T_136 (T_121)))
T_135: (in signature of register_tm_clones : void)
  Class: Eq_134
  DataType: (ptr Eq_134)
  OrigDataType: 
T_136: (in register_tm_clones(r8) : void)
  Class: Eq_136
  DataType: void
  OrigDataType: void
T_137: (in 0x00000000 : word32)
  Class: Eq_137
  DataType: word32
  OrigDataType: word32
T_138: (in eax : word32)
  Class: Eq_137
  DataType: word32
  OrigDataType: word32
T_139: (in rax : word64)
  Class: Eq_139
  DataType: ui64
  OrigDataType: ui64
T_140: (in DPB(rax, eax, 0) : word64)
  Class: Eq_139
  DataType: ui64
  OrigDataType: word64
T_141: (in rax & rax : word64)
  Class: Eq_141
  DataType: ui64
  OrigDataType: ui64
T_142: (in cond(rax & rax) : byte)
  Class: Eq_130
  DataType: byte
  OrigDataType: byte
T_143: (in SZO : byte)
  Class: Eq_130
  DataType: byte
  OrigDataType: byte
T_144: (in false : bool)
  Class: Eq_144
  DataType: bool
  OrigDataType: bool
T_145: (in C : byte)
  Class: Eq_144
  DataType: bool
  OrigDataType: bool
T_146: (in Test(EQ,Z) : bool)
  Class: Eq_146
  DataType: Eq_146
  OrigDataType: 
T_147: (in 0x0000000000000004 : word64)
  Class: Eq_147
  DataType: ui64
  OrigDataType: ui64
T_148: (in fp - 0x0000000000000004 : word64)
  Class: Eq_122
  DataType: ptr64
  OrigDataType: ptr64
T_149: (in rbp : word64)
  Class: Eq_149
  DataType: Eq_149
  OrigDataType: ptr64
T_150: (in dwLoc04 : word32)
  Class: Eq_149
  DataType: Eq_149
  OrigDataType: (union (ptr64 u0) (word32 u1))
T_151: (in qwLoc04 : word64)
  Class: Eq_149
  DataType: Eq_149
  OrigDataType: word64
T_152: (in DPB(qwLoc04, dwLoc04, 0) : word64)
  Class: Eq_149
  DataType: Eq_149
  OrigDataType: word64
T_153: (in 0x00600E20 : word32)
  Class: Eq_153
  DataType: word32
  OrigDataType: word32
T_154: (in edi : word32)
  Class: Eq_153
  DataType: word32
  OrigDataType: word32
T_155: (in fp - 0x0000000000000004 : word64)
  Class: Eq_149
  DataType: Eq_149
  OrigDataType: ptr64
T_156: (in 0x00000000 : word32)
  Class: Eq_156
  DataType: word32
  OrigDataType: (union (word32 u0) ((ptr code) u1))
T_157: (in 0x0000000000000004 : word64)
  Class: Eq_157
  DataType: int64
  OrigDataType: int64
T_158: (in fp + 0x0000000000000004 : word64)
  Class: Eq_122
  DataType: ptr64
  OrigDataType: ptr64
T_159: (in register_tm_clones : ptr64)
  Class: Eq_134
  DataType: (ptr Eq_134)
  OrigDataType: (ptr (fn T_160 (T_121)))
T_160: (in register_tm_clones(r8) : void)
  Class: Eq_136
  DataType: void
  OrigDataType: void
T_161: (in rsp : ptr64)
  Class: Eq_161
  DataType: ptr64
  OrigDataType: word64
T_162: (in rsp_9 : word64)
  Class: Eq_162
  DataType: word64
  OrigDataType: word64
T_163: (in rbp_10 : word64)
  Class: Eq_163
  DataType: word64
  OrigDataType: word64
T_164: (in edi_11 : word32)
  Class: Eq_164
  DataType: word32
  OrigDataType: word32
T_165: (in putchar : ptr64)
  Class: Eq_165
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_166: (in fp : ptr64)
  Class: Eq_166
  DataType: ptr64
  OrigDataType: ptr64
T_167: (in 0x0000000000000004 : word64)
  Class: Eq_167
  DataType: int64
  OrigDataType: int64
T_168: (in fp + 0x0000000000000004 : word64)
  Class: Eq_161
  DataType: ptr64
  OrigDataType: ptr64
T_169: (in f : ptr64)
  Class: Eq_169
  DataType: (ptr Eq_169)
  OrigDataType: (ptr (fn T_171 ()))
T_170: (in signature of f : void)
  Class: Eq_169
  DataType: (ptr Eq_169)
  OrigDataType: 
T_171: (in f() : word64)
  Class: Eq_171
  DataType: word64
  OrigDataType: word64
T_172: (in rsi : word64)
  Class: Eq_172
  DataType: word64
  OrigDataType: word64
T_173: (in _init : ptr64)
  Class: Eq_173
  DataType: (ptr Eq_173)
  OrigDataType: (ptr (fn T_175 ()))
T_174: (in signature of _init : void)
  Class: Eq_173
  DataType: (ptr Eq_173)
  OrigDataType: 
T_175: (in _init() : void)
  Class: Eq_175
  DataType: void
  OrigDataType: void
T_176: (in r12_18 : (arr Eq_206))
  Class: Eq_176
  DataType: (ptr (arr Eq_206))
  OrigDataType: (ptr (struct (0 (arr T_210) a0000)))
T_177: (in 0000000000600E10 : ptr64)
  Class: Eq_176
  DataType: (ptr (arr Eq_206))
  OrigDataType: ptr64
T_178: (in rbx_27 : ui64)
  Class: Eq_178
  DataType: ui64
  OrigDataType: ui64
T_179: (in rbx : word64)
  Class: Eq_179
  DataType: word64
  OrigDataType: word64
T_180: (in 0x00000000 : word32)
  Class: Eq_180
  DataType: word32
  OrigDataType: word32
T_181: (in DPB(rbx, 0x00000000, 0) : word64)
  Class: Eq_178
  DataType: ui64
  OrigDataType: word64
T_182: (in 0000000000600E18 : ptr64)
  Class: Eq_182
  DataType: ptr64
  OrigDataType: ptr64
T_183: (in 0x0000000000600E18 - r12_18 : word64)
  Class: Eq_183
  DataType: Eq_183
  OrigDataType: 
T_184: (in 0x0000000000000003 : word64)
  Class: Eq_184
  DataType: Eq_184
  OrigDataType: 
T_185: (in 0x0000000000600E18 - r12_18 >> 0x0000000000000003 : word64)
  Class: Eq_185
  DataType: Eq_185
  OrigDataType: 
T_186: (in 0x0000000000000000 : word64)
  Class: Eq_185
  DataType: Eq_185
  OrigDataType: 
T_187: (in 0x0000000000600E18 - r12_18 >> 0x0000000000000003 == 0x0000000000000000 : bool)
  Class: Eq_187
  DataType: Eq_187
  OrigDataType: 
T_188: (in rsp_68 : word64)
  Class: Eq_188
  DataType: word64
  OrigDataType: word64
T_189: (in rdi_69 : word64)
  Class: Eq_189
  DataType: word64
  OrigDataType: word64
T_190: (in r15d_70 : word32)
  Class: Eq_190
  DataType: word32
  OrigDataType: word32
T_191: (in edi_71 : word32)
  Class: Eq_191
  DataType: word32
  OrigDataType: word32
T_192: (in rsi_72 : word64)
  Class: Eq_192
  DataType: word64
  OrigDataType: word64
T_193: (in r14_73 : word64)
  Class: Eq_193
  DataType: word64
  OrigDataType: word64
T_194: (in rbp_74 : word64)
  Class: Eq_194
  DataType: word64
  OrigDataType: word64
T_195: (in r13_75 : word64)
  Class: Eq_195
  DataType: word64
  OrigDataType: word64
T_196: (in rdx_76 : word64)
  Class: Eq_196
  DataType: word64
  OrigDataType: word64
T_197: (in r12_77 : word64)
  Class: Eq_197
  DataType: word64
  OrigDataType: word64
T_198: (in rbx_78 : word64)
  Class: Eq_198
  DataType: word64
  OrigDataType: word64
T_199: (in SCZO_79 : byte)
  Class: Eq_199
  DataType: byte
  OrigDataType: byte
T_200: (in ebx_80 : word32)
  Class: Eq_200
  DataType: word32
  OrigDataType: word32
T_201: (in SZO_81 : byte)
  Class: Eq_201
  DataType: byte
  OrigDataType: byte
T_202: (in C_82 : byte)
  Class: Eq_202
  DataType: byte
  OrigDataType: byte
T_203: (in Z_83 : byte)
  Class: Eq_203
  DataType: byte
  OrigDataType: byte
T_204: (in 0x00000008 : word32)
  Class: Eq_204
  DataType: ui32
  OrigDataType: ui32
T_205: (in rbx_27 * 0x00000008 : word64)
  Class: Eq_205
  DataType: ui64
  OrigDataType: ui64
T_206: (in r12_18[rbx_27 * 0x00000008] : word32)
  Class: Eq_206
  DataType: Eq_206
  OrigDataType: (union (word32 u0) ((ptr code) u1))
T_207: (in 0x0000000000000001 : word64)
  Class: Eq_207
  DataType: word64
  OrigDataType: word64
T_208: (in rbx_78 + 0x0000000000000001 : word64)
  Class: Eq_194
  DataType: word64
  OrigDataType: word64
T_209: (in rbx_78 + 0x0000000000000001 != rbp_74 : bool)
  Class: Eq_209
  DataType: bool
  OrigDataType: bool
T_210:
  Class: Eq_210
  DataType: Eq_206
  OrigDataType: (struct 0008 (0 T_206 t0000))
*/
typedef struct Globals {
	Eq_28 t40053D;	// 40053D
	Eq_31 t400550;	// 400550
	Eq_32 t4005C0;	// 4005C0
} Eq_1;

typedef void (Eq_17)();

typedef void (Eq_20)(ptr64);

typedef int32 (Eq_26)( *, Eq_29, char * *,  *,  *,  *, void);

typedef int32 (Eq_28)(int32 rdi, char * * rsi, char * * rdx);

typedef union Eq_29 {
	int32 u0;
	word64 u1;
} Eq_29;

typedef void (Eq_31)();

typedef void (Eq_32)();

typedef void (Eq_42)();

typedef union Eq_70 {
	word32 u0;
	<anonymous> * u1;
} Eq_70;

typedef union Eq_76 {
	int64 u0;
	uint64 u1;
} Eq_76;

typedef union Eq_78 {
	int64 u0;
	uint64 u1;
} Eq_78;

typedef union Eq_81 {
	int64 u0;
	uint64 u1;
} Eq_81;

typedef union Eq_82 {
	int64 u0;
	uint64 u1;
} Eq_82;

typedef union Eq_87 {
	int64 u0;
	uint64 u1;
} Eq_87;

typedef union Eq_105 {
	word32 u0;
	<anonymous> * u1;
} Eq_105;

typedef word64 (Eq_113)(word64);

typedef void (Eq_134)(word64);

typedef union Eq_149 {
	ptr64 u0;
	word32 u1;
} Eq_149;

typedef union Eq_156 {
	word32 u0;
	<anonymous> * u1;
} Eq_156;

typedef word64 (Eq_169)();

typedef void (Eq_173)();

typedef union Eq_206 {
	word32 u0;
	<anonymous> * u1;
} Eq_206;
