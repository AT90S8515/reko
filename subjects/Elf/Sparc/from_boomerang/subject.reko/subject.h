// subject.h
// Generated by decompiling subject.exe
// using Reko decompiler version 0.9.2.3.

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (10CB8 Eq_2 t10CB8) (10CF8 (str char) str10CF8) (10D00 (str char) str10D00) (20E3C ptr32 ptr20E3C) (20E58 ui32 dw20E58) (20E5C word32 dw20E5C) (20E60 ptr32 ptr20E60))
	globals_t (in globals : (ptr32 (struct "Globals")))
Eq_2: (fn void ())
	T_2 (in g1 : (ptr32 Eq_2))
	T_24 (in 0<32> : word32)
	T_40 (in func : (ptr32 (fn void ())))
	T_41 (in 0x10CB8<32> : word32)
Eq_7: (struct "Eq_7" (8 int32 dw0008))
	T_7 (in o7 : (ptr32 Eq_7))
	T_51 (in o7 : (ptr32 Eq_7))
	T_123 (in o7 : (ptr32 Eq_7))
	T_131 (in i7 : (ptr32 Eq_7))
Eq_38: (fn void ((ptr32 Eq_2)))
	T_38 (in atexit : ptr32)
	T_39 (in signature of atexit : void)
	T_55 (in atexit : ptr32)
Eq_43: (fn void (word32, word32, word32, word32, word32, word32, (ptr32 Eq_7)))
	T_43 (in _init : ptr32)
	T_44 (in signature of _init : void)
Eq_110: (fn int32 ((ptr32 char)))
	T_110 (in printf : ptr32)
	T_111 (in signature of printf : void)
Eq_115: (fn int32 ((ptr32 char)))
	T_115 (in printf : ptr32)
	T_116 (in signature of printf : void)
Eq_121: (fn void ((ptr32 Eq_7), word32, word32, word32, word32, word32, word32, ptr32, (ptr32 Eq_7)))
	T_121 (in fn00010C90 : ptr32)
	T_122 (in signature of fn00010C90 : void)
Eq_137: (struct "Eq_137" (FFFFFFF8 word32 dwFFFFFFF8))
	T_137 (in o7 + Mem0[o7 + 8<i32>:word32] : word32)
Eq_151: (struct "Eq_151" (8 int32 dw0008))
	T_151 (in o7 : (ptr32 Eq_151))
	T_154 (in o7 : (ptr32 Eq_151))
	T_162 (in i7 : (ptr32 Eq_151))
Eq_152: (fn void ((ptr32 Eq_151), word32, word32, word32, word32, word32, word32, ptr32, (ptr32 Eq_151)))
	T_152 (in fn00010CC8 : ptr32)
	T_153 (in signature of fn00010CC8 : void)
Eq_169: (struct "Eq_169" (FFFFFFFC (ptr32 code) ptrFFFFFFFC))
	T_169 (in o7 + Mem0[o7 + 8<i32>:word32] : word32)
// Type Variables ////////////
globals_t: (in globals : (ptr32 (struct "Globals")))
  Class: Eq_1
  DataType: (ptr32 Eq_1)
  OrigDataType: (ptr32 (struct "Globals"))
T_2: (in g1 : (ptr32 Eq_2))
  Class: Eq_2
  DataType: (ptr32 Eq_2)
  OrigDataType: (ptr32 (fn void ()))
T_3: (in o2 : word32)
  Class: Eq_3
  DataType: word32
  OrigDataType: word32
T_4: (in o3 : word32)
  Class: Eq_4
  DataType: word32
  OrigDataType: word32
T_5: (in o4 : word32)
  Class: Eq_5
  DataType: word32
  OrigDataType: word32
T_6: (in o5 : word32)
  Class: Eq_6
  DataType: word32
  OrigDataType: word32
T_7: (in o7 : (ptr32 Eq_7))
  Class: Eq_7
  DataType: (ptr32 Eq_7)
  OrigDataType: word32
T_8: (in fsr : ui32)
  Class: Eq_8
  DataType: ui32
  OrigDataType: word32
T_9: (in dwArg40 : ui32)
  Class: Eq_9
  DataType: ui32
  OrigDataType: ui32
T_10: (in fp : ptr32)
  Class: Eq_10
  DataType: ptr32
  OrigDataType: ptr32
T_11: (in 0x44<32> : word32)
  Class: Eq_11
  DataType: int32
  OrigDataType: int32
T_12: (in fp + 0x44<32> : word32)
  Class: Eq_12
  DataType: ptr32
  OrigDataType: ptr32
T_13: (in 0x20E60<32> : word32)
  Class: Eq_13
  DataType: (ptr32 ptr32)
  OrigDataType: (ptr32 (struct (0 T_14 t0000)))
T_14: (in Mem8[0x20E60<32>:word32] : word32)
  Class: Eq_12
  DataType: ptr32
  OrigDataType: word32
T_15: (in fp + 0x44<32> : word32)
  Class: Eq_15
  DataType: ptr32
  OrigDataType: ptr32
T_16: (in 2<32> : word32)
  Class: Eq_16
  DataType: word32
  OrigDataType: word32
T_17: (in dwArg40 << 2<32> : word32)
  Class: Eq_17
  DataType: ui32
  OrigDataType: ui32
T_18: (in 4<32> : word32)
  Class: Eq_18
  DataType: word32
  OrigDataType: word32
T_19: (in (dwArg40 << 2<32>) + 4<32> : word32)
  Class: Eq_19
  DataType: int32
  OrigDataType: int32
T_20: (in fp + 0x44<32> + ((dwArg40 << 2<32>) + 4<32>) : word32)
  Class: Eq_20
  DataType: ptr32
  OrigDataType: ptr32
T_21: (in 0x20E3C<32> : word32)
  Class: Eq_21
  DataType: (ptr32 ptr32)
  OrigDataType: (ptr32 (struct (0 T_22 t0000)))
T_22: (in Mem13[0x20E3C<32>:word32] : word32)
  Class: Eq_20
  DataType: ptr32
  OrigDataType: word32
T_23: (in true : bool)
  Class: Eq_23
  DataType: bool
  OrigDataType: bool
T_24: (in 0<32> : word32)
  Class: Eq_2
  DataType: (ptr32 Eq_2)
  OrigDataType: word32
T_25: (in g1 == null : bool)
  Class: Eq_25
  DataType: bool
  OrigDataType: bool
T_26: (in 0x20E58<32> : word32)
  Class: Eq_26
  DataType: (ptr32 ui32)
  OrigDataType: (ptr32 (struct (0 T_27 t0000)))
T_27: (in Mem27[0x20E58<32>:word32] : word32)
  Class: Eq_8
  DataType: ui32
  OrigDataType: word32
T_28: (in 0x20E58<32> : word32)
  Class: Eq_28
  DataType: (ptr32 ui32)
  OrigDataType: (ptr32 (struct (0 T_29 t0000)))
T_29: (in Mem27[0x20E58<32>:word32] : word32)
  Class: Eq_8
  DataType: ui32
  OrigDataType: ui32
T_30: (in 0x303FFFFF<32> : word32)
  Class: Eq_30
  DataType: ui32
  OrigDataType: ui32
T_31: (in g_dw20E58 & 0x303FFFFF<32> : word32)
  Class: Eq_8
  DataType: ui32
  OrigDataType: ui32
T_32: (in 0x20E58<32> : word32)
  Class: Eq_32
  DataType: (ptr32 ui32)
  OrigDataType: (ptr32 (struct (0 T_33 t0000)))
T_33: (in Mem33[0x20E58<32>:word32] : word32)
  Class: Eq_8
  DataType: ui32
  OrigDataType: word32
T_34: (in true : bool)
  Class: Eq_34
  DataType: bool
  OrigDataType: bool
T_35: (in 1<32> : word32)
  Class: Eq_35
  DataType: word32
  OrigDataType: word32
T_36: (in 0x20E5C<32> : word32)
  Class: Eq_36
  DataType: (ptr32 word32)
  OrigDataType: (ptr32 (struct (0 T_37 t0000)))
T_37: (in Mem44[0x20E5C<32>:word32] : word32)
  Class: Eq_35
  DataType: word32
  OrigDataType: word32
T_38: (in atexit : ptr32)
  Class: Eq_38
  DataType: (ptr32 Eq_38)
  OrigDataType: (ptr32 (fn T_42 (T_41)))
T_39: (in signature of atexit : void)
  Class: Eq_38
  DataType: (ptr32 Eq_38)
  OrigDataType: 
T_40: (in func : (ptr32 (fn void ())))
  Class: Eq_2
  DataType: (ptr32 Eq_2)
  OrigDataType: 
T_41: (in 0x10CB8<32> : word32)
  Class: Eq_2
  DataType: (ptr32 Eq_2)
  OrigDataType: (ptr32 (fn void ()))
T_42: (in atexit(&g_t10CB8) : void)
  Class: Eq_42
  DataType: void
  OrigDataType: void
T_43: (in _init : ptr32)
  Class: Eq_43
  DataType: (ptr32 Eq_43)
  OrigDataType: (ptr32 (fn T_54 (T_52, T_53, T_3, T_4, T_5, T_6, T_7)))
T_44: (in signature of _init : void)
  Class: Eq_43
  DataType: (ptr32 Eq_43)
  OrigDataType: 
T_45: (in o0 : word32)
  Class: Eq_45
  DataType: word32
  OrigDataType: word32
T_46: (in o1 : word32)
  Class: Eq_46
  DataType: word32
  OrigDataType: word32
T_47: (in o2 : word32)
  Class: Eq_3
  DataType: word32
  OrigDataType: word32
T_48: (in o3 : word32)
  Class: Eq_4
  DataType: word32
  OrigDataType: word32
T_49: (in o4 : word32)
  Class: Eq_5
  DataType: word32
  OrigDataType: word32
T_50: (in o5 : word32)
  Class: Eq_6
  DataType: word32
  OrigDataType: word32
T_51: (in o7 : (ptr32 Eq_7))
  Class: Eq_7
  DataType: (ptr32 Eq_7)
  OrigDataType: word32
T_52: (in 0x10CB8<32> : word32)
  Class: Eq_45
  DataType: word32
  OrigDataType: word32
T_53: (in 0x20C00<32> : word32)
  Class: Eq_46
  DataType: word32
  OrigDataType: word32
T_54: (in _init(0x10CB8<32>, 0x20C00<32>, o2, o3, o4, o5, o7) : void)
  Class: Eq_54
  DataType: void
  OrigDataType: void
T_55: (in atexit : ptr32)
  Class: Eq_38
  DataType: (ptr32 Eq_38)
  OrigDataType: (ptr32 (fn T_56 (T_2)))
T_56: (in atexit(g1) : void)
  Class: Eq_42
  DataType: void
  OrigDataType: void
T_57: (in o0 : int32)
  Class: Eq_57
  DataType: int32
  OrigDataType: int32
T_58: (in o0_20 : word32)
  Class: Eq_58
  DataType: word32
  OrigDataType: word32
T_59: (in 1<32> : word32)
  Class: Eq_58
  DataType: word32
  OrigDataType: word32
T_60: (in 1<32> : word32)
  Class: Eq_57
  DataType: int32
  OrigDataType: int32
T_61: (in o0 <= 1<32> : bool)
  Class: Eq_61
  DataType: bool
  OrigDataType: bool
T_62: (in o0_31 : word32)
  Class: Eq_62
  DataType: word32
  OrigDataType: word32
T_63: (in 0<32> : word32)
  Class: Eq_58
  DataType: word32
  OrigDataType: word32
T_64: (in o0_20 == 0<32> : bool)
  Class: Eq_64
  DataType: bool
  OrigDataType: bool
T_65: (in 0<32> : word32)
  Class: Eq_58
  DataType: word32
  OrigDataType: word32
T_66: (in 0x10A74<32> : word32)
  Class: Eq_62
  DataType: word32
  OrigDataType: word32
T_67: (in 0x10A5C<32> : word32)
  Class: Eq_62
  DataType: word32
  OrigDataType: word32
T_68: (in o3_37 : word32)
  Class: Eq_68
  DataType: word32
  OrigDataType: word32
T_69: (in 0<32> : word32)
  Class: Eq_58
  DataType: word32
  OrigDataType: word32
T_70: (in o0_20 == 0<32> : bool)
  Class: Eq_70
  DataType: bool
  OrigDataType: bool
T_71: (in 0x10AA4<32> : word32)
  Class: Eq_68
  DataType: word32
  OrigDataType: word32
T_72: (in 0x10A8C<32> : word32)
  Class: Eq_68
  DataType: word32
  OrigDataType: word32
T_73: (in o2_43 : word32)
  Class: Eq_73
  DataType: word32
  OrigDataType: word32
T_74: (in 0<32> : word32)
  Class: Eq_58
  DataType: word32
  OrigDataType: word32
T_75: (in o0_20 == 0<32> : bool)
  Class: Eq_75
  DataType: bool
  OrigDataType: bool
T_76: (in 0x10AD4<32> : word32)
  Class: Eq_73
  DataType: word32
  OrigDataType: word32
T_77: (in 0x10ABC<32> : word32)
  Class: Eq_73
  DataType: word32
  OrigDataType: word32
T_78: (in o1_49 : word32)
  Class: Eq_78
  DataType: word32
  OrigDataType: word32
T_79: (in 0<32> : word32)
  Class: Eq_58
  DataType: word32
  OrigDataType: word32
T_80: (in o0_20 == 0<32> : bool)
  Class: Eq_80
  DataType: bool
  OrigDataType: bool
T_81: (in 0x10B04<32> : word32)
  Class: Eq_78
  DataType: word32
  OrigDataType: word32
T_82: (in 0x10AEC<32> : word32)
  Class: Eq_78
  DataType: word32
  OrigDataType: word32
T_83: (in v24_217 : bool)
  Class: Eq_83
  DataType: bool
  OrigDataType: bool
T_84: (in i1_114 : word32)
  Class: Eq_84
  DataType: word32
  OrigDataType: word32
T_85: (in 0<32> : word32)
  Class: Eq_58
  DataType: word32
  OrigDataType: word32
T_86: (in o0_20 == 0<32> : bool)
  Class: Eq_86
  DataType: bool
  OrigDataType: bool
T_87: (in 0x10A74<32> : word32)
  Class: Eq_62
  DataType: word32
  OrigDataType: word32
T_88: (in o0_31 != 0x10A74<32> : bool)
  Class: Eq_88
  DataType: bool
  OrigDataType: bool
T_89: (in 0x10A5C<32> : word32)
  Class: Eq_62
  DataType: word32
  OrigDataType: word32
T_90: (in o0_31 != 0x10A5C<32> : bool)
  Class: Eq_90
  DataType: bool
  OrigDataType: bool
T_91: (in 0x10A8C<32> : word32)
  Class: Eq_68
  DataType: word32
  OrigDataType: word32
T_92: (in o3_37 != 0x10A8C<32> : bool)
  Class: Eq_92
  DataType: bool
  OrigDataType: bool
T_93: (in 0<32> : word32)
  Class: Eq_84
  DataType: word32
  OrigDataType: word32
T_94: (in true : bool)
  Class: Eq_83
  DataType: bool
  OrigDataType: bool
T_95: (in 0x10ABC<32> : word32)
  Class: Eq_73
  DataType: word32
  OrigDataType: word32
T_96: (in o2_43 != 0x10ABC<32> : bool)
  Class: Eq_96
  DataType: bool
  OrigDataType: bool
T_97: (in 0x10AEC<32> : word32)
  Class: Eq_78
  DataType: word32
  OrigDataType: word32
T_98: (in o1_49 != 0x10AEC<32> : bool)
  Class: Eq_98
  DataType: bool
  OrigDataType: bool
T_99: (in 1<32> : word32)
  Class: Eq_84
  DataType: word32
  OrigDataType: word32
T_100: (in 0<32> : word32)
  Class: Eq_84
  DataType: word32
  OrigDataType: word32
T_101: (in i1_114 == 0<32> : bool)
  Class: Eq_83
  DataType: bool
  OrigDataType: bool
T_102: (in 0<32> : word32)
  Class: Eq_84
  DataType: word32
  OrigDataType: word32
T_103: (in 0x10AA4<32> : word32)
  Class: Eq_68
  DataType: word32
  OrigDataType: word32
T_104: (in o3_37 != 0x10AA4<32> : bool)
  Class: Eq_104
  DataType: bool
  OrigDataType: bool
T_105: (in 0x10AD4<32> : word32)
  Class: Eq_73
  DataType: word32
  OrigDataType: word32
T_106: (in o2_43 != 0x10AD4<32> : bool)
  Class: Eq_106
  DataType: bool
  OrigDataType: bool
T_107: (in 0x10B04<32> : word32)
  Class: Eq_78
  DataType: word32
  OrigDataType: word32
T_108: (in o1_49 != 0x10B04<32> : bool)
  Class: Eq_108
  DataType: bool
  OrigDataType: bool
T_109: (in 1<32> : word32)
  Class: Eq_84
  DataType: word32
  OrigDataType: word32
T_110: (in printf : ptr32)
  Class: Eq_110
  DataType: (ptr32 Eq_110)
  OrigDataType: (ptr32 (fn T_114 (T_113)))
T_111: (in signature of printf : void)
  Class: Eq_110
  DataType: (ptr32 Eq_110)
  OrigDataType: 
T_112: (in format : (ptr32 char))
  Class: Eq_112
  DataType: (ptr32 char)
  OrigDataType: 
T_113: (in 0x10D00<32> : word32)
  Class: Eq_112
  DataType: (ptr32 char)
  OrigDataType: (ptr32 char)
T_114: (in printf("Failed!\n") : int32)
  Class: Eq_114
  DataType: int32
  OrigDataType: int32
T_115: (in printf : ptr32)
  Class: Eq_115
  DataType: (ptr32 Eq_115)
  OrigDataType: (ptr32 (fn T_118 (T_117)))
T_116: (in signature of printf : void)
  Class: Eq_115
  DataType: (ptr32 Eq_115)
  OrigDataType: 
T_117: (in 0x10CF8<32> : word32)
  Class: Eq_112
  DataType: (ptr32 char)
  OrigDataType: (ptr32 char)
T_118: (in printf("Pass\n") : int32)
  Class: Eq_118
  DataType: int32
  OrigDataType: int32
T_119: (in 0<32> : word32)
  Class: Eq_84
  DataType: word32
  OrigDataType: word32
T_120: (in i1_114 == 0<32> : bool)
  Class: Eq_120
  DataType: bool
  OrigDataType: bool
T_121: (in fn00010C90 : ptr32)
  Class: Eq_121
  DataType: (ptr32 Eq_121)
  OrigDataType: (ptr32 (fn T_133 (T_51, T_45, T_46, T_47, T_48, T_49, T_50, T_132, T_51)))
T_122: (in signature of fn00010C90 : void)
  Class: Eq_121
  DataType: (ptr32 Eq_121)
  OrigDataType: 
T_123: (in o7 : (ptr32 Eq_7))
  Class: Eq_7
  DataType: (ptr32 Eq_7)
  OrigDataType: (ptr32 (struct (8 T_136 t0008)))
T_124: (in i0 : word32)
  Class: Eq_45
  DataType: word32
  OrigDataType: word32
T_125: (in i1 : word32)
  Class: Eq_46
  DataType: word32
  OrigDataType: word32
T_126: (in i2 : word32)
  Class: Eq_3
  DataType: word32
  OrigDataType: word32
T_127: (in i3 : word32)
  Class: Eq_4
  DataType: word32
  OrigDataType: word32
T_128: (in i4 : word32)
  Class: Eq_5
  DataType: word32
  OrigDataType: word32
T_129: (in i5 : word32)
  Class: Eq_6
  DataType: word32
  OrigDataType: word32
T_130: (in i6 : ptr32)
  Class: Eq_130
  DataType: ptr32
  OrigDataType: word32
T_131: (in i7 : (ptr32 Eq_7))
  Class: Eq_7
  DataType: (ptr32 Eq_7)
  OrigDataType: word32
T_132: (in fp : ptr32)
  Class: Eq_130
  DataType: ptr32
  OrigDataType: ptr32
T_133: (in fn00010C90(o7, o0, o1, o2, o3, o4, o5, fp, o7) : void)
  Class: Eq_133
  DataType: void
  OrigDataType: void
T_134: (in 8<i32> : int32)
  Class: Eq_134
  DataType: int32
  OrigDataType: int32
T_135: (in o7 + 8<i32> : word32)
  Class: Eq_135
  DataType: word32
  OrigDataType: word32
T_136: (in Mem0[o7 + 8<i32>:word32] : word32)
  Class: Eq_136
  DataType: int32
  OrigDataType: int32
T_137: (in o7 + Mem0[o7 + 8<i32>:word32] : word32)
  Class: Eq_137
  DataType: (ptr32 Eq_137)
  OrigDataType: (ptr32 (struct (FFFFFFF8 T_140 tFFFFFFF8)))
T_138: (in -8<i32> : int32)
  Class: Eq_138
  DataType: int32
  OrigDataType: int32
T_139: (in o7 + Mem0[o7 + 8<i32>:word32] + -8<i32> : word32)
  Class: Eq_139
  DataType: word32
  OrigDataType: word32
T_140: (in Mem0[o7 + Mem0[o7 + 8<i32>:word32] + -8<i32>:word32] : word32)
  Class: Eq_140
  DataType: word32
  OrigDataType: word32
T_141: (in 0<32> : word32)
  Class: Eq_140
  DataType: word32
  OrigDataType: word32
T_142: (in *((char *) (o7 + o7->dw0008 / 12<i32>) - 8<i32>) == 0<32> : bool)
  Class: Eq_142
  DataType: bool
  OrigDataType: bool
T_143: (in fn81C7E008 : ptr32)
  Class: Eq_143
  DataType: (ptr32 code)
  OrigDataType: (ptr32 code)
T_144: (in signature of fn81C7E008 : void)
  Class: Eq_144
  DataType: Eq_144
  OrigDataType: 
T_145: (in o0 : word32)
  Class: Eq_145
  DataType: word32
  OrigDataType: word32
T_146: (in o1 : word32)
  Class: Eq_146
  DataType: word32
  OrigDataType: word32
T_147: (in o2 : word32)
  Class: Eq_147
  DataType: word32
  OrigDataType: word32
T_148: (in o3 : word32)
  Class: Eq_148
  DataType: word32
  OrigDataType: word32
T_149: (in o4 : word32)
  Class: Eq_149
  DataType: word32
  OrigDataType: word32
T_150: (in o5 : word32)
  Class: Eq_150
  DataType: word32
  OrigDataType: word32
T_151: (in o7 : (ptr32 Eq_151))
  Class: Eq_151
  DataType: (ptr32 Eq_151)
  OrigDataType: word32
T_152: (in fn00010CC8 : ptr32)
  Class: Eq_152
  DataType: (ptr32 Eq_152)
  OrigDataType: (ptr32 (fn T_164 (T_151, T_145, T_146, T_147, T_148, T_149, T_150, T_163, T_151)))
T_153: (in signature of fn00010CC8 : void)
  Class: Eq_152
  DataType: (ptr32 Eq_152)
  OrigDataType: 
T_154: (in o7 : (ptr32 Eq_151))
  Class: Eq_151
  DataType: (ptr32 Eq_151)
  OrigDataType: (ptr32 (struct (8 T_168 t0008)))
T_155: (in i0 : word32)
  Class: Eq_145
  DataType: word32
  OrigDataType: word32
T_156: (in i1 : word32)
  Class: Eq_146
  DataType: word32
  OrigDataType: word32
T_157: (in i2 : word32)
  Class: Eq_147
  DataType: word32
  OrigDataType: word32
T_158: (in i3 : word32)
  Class: Eq_148
  DataType: word32
  OrigDataType: word32
T_159: (in i4 : word32)
  Class: Eq_149
  DataType: word32
  OrigDataType: word32
T_160: (in i5 : word32)
  Class: Eq_150
  DataType: word32
  OrigDataType: word32
T_161: (in i6 : ptr32)
  Class: Eq_161
  DataType: ptr32
  OrigDataType: word32
T_162: (in i7 : (ptr32 Eq_151))
  Class: Eq_151
  DataType: (ptr32 Eq_151)
  OrigDataType: word32
T_163: (in fp : ptr32)
  Class: Eq_161
  DataType: ptr32
  OrigDataType: ptr32
T_164: (in fn00010CC8(o7, o0, o1, o2, o3, o4, o5, fp, o7) : void)
  Class: Eq_164
  DataType: void
  OrigDataType: void
T_165: (in l0_7 : (ptr32 code))
  Class: Eq_165
  DataType: (ptr32 code)
  OrigDataType: (ptr32 code)
T_166: (in 8<i32> : int32)
  Class: Eq_166
  DataType: int32
  OrigDataType: int32
T_167: (in o7 + 8<i32> : word32)
  Class: Eq_167
  DataType: word32
  OrigDataType: word32
T_168: (in Mem0[o7 + 8<i32>:word32] : word32)
  Class: Eq_168
  DataType: int32
  OrigDataType: int32
T_169: (in o7 + Mem0[o7 + 8<i32>:word32] : word32)
  Class: Eq_169
  DataType: (ptr32 Eq_169)
  OrigDataType: (ptr32 (struct (FFFFFFFC T_172 tFFFFFFFC)))
T_170: (in -4<i32> : int32)
  Class: Eq_170
  DataType: int32
  OrigDataType: int32
T_171: (in o7 + Mem0[o7 + 8<i32>:word32] + -4<i32> : word32)
  Class: Eq_171
  DataType: word32
  OrigDataType: word32
T_172: (in Mem0[o7 + Mem0[o7 + 8<i32>:word32] + -4<i32>:word32] : word32)
  Class: Eq_165
  DataType: (ptr32 code)
  OrigDataType: word32
T_173: (in 0<32> : word32)
  Class: Eq_165
  DataType: (ptr32 code)
  OrigDataType: word32
T_174: (in l0_7 == null : bool)
  Class: Eq_174
  DataType: bool
  OrigDataType: bool
*/
typedef struct Globals {
	Eq_2 t10CB8;	// 10CB8
	char str10CF8[];	// 10CF8
	char str10D00[];	// 10D00
	ptr32 ptr20E3C;	// 20E3C
	ui32 dw20E58;	// 20E58
	word32 dw20E5C;	// 20E5C
	ptr32 ptr20E60;	// 20E60
} Eq_1;

typedef void (Eq_2)();

typedef struct Eq_7 {
	int32 dw0008;	// 8
} Eq_7;

typedef void (Eq_38)( *);

typedef void (Eq_43)(word32, word32, word32, word32, word32, word32, Eq_7 *);

typedef int32 (Eq_110)(char *);

typedef int32 (Eq_115)(char *);

typedef void (Eq_121)(Eq_7 *, word32, word32, word32, word32, word32, word32, ptr32, Eq_7 *);

typedef struct Eq_137 {
	word32 dwFFFFFFF8;	// FFFFFFF8
} Eq_137;

typedef struct Eq_151 {
	int32 dw0008;	// 8
} Eq_151;

typedef void (Eq_152)(Eq_151 *, word32, word32, word32, word32, word32, word32, ptr32, Eq_151 *);

typedef struct Eq_169 {
	<anonymous> * ptrFFFFFFFC;	// FFFFFFFC
} Eq_169;

