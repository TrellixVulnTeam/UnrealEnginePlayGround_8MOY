// Copyright Epic Games, Inc. All Rights Reserved.
// generated
#ifndef _SYMS_META_DWARF_EXPR_H
#define _SYMS_META_DWARF_EXPR_H
//~ generated from code at syms/metaprogram/syms_metaprogram_serial.c:870
typedef enum SYMS_DwRegX86{
SYMS_DwRegX86_EAX = 0,
SYMS_DwRegX86_ECX = 1,
SYMS_DwRegX86_EDX = 2,
SYMS_DwRegX86_EBX = 3,
SYMS_DwRegX86_ESP = 4,
SYMS_DwRegX86_EBP = 5,
SYMS_DwRegX86_ESI = 6,
SYMS_DwRegX86_EDI = 7,
SYMS_DwRegX86_EIP = 8,
SYMS_DwRegX86_EFLAGS = 9,
SYMS_DwRegX86_TRAPNO = 10,
SYMS_DwRegX86_ST0 = 11,
SYMS_DwRegX86_ST1 = 12,
SYMS_DwRegX86_ST2 = 13,
SYMS_DwRegX86_ST3 = 14,
SYMS_DwRegX86_ST4 = 15,
SYMS_DwRegX86_ST5 = 16,
SYMS_DwRegX86_ST6 = 17,
SYMS_DwRegX86_ST7 = 18,
SYMS_DwRegX86_XMM0 = 21,
SYMS_DwRegX86_XMM1 = 22,
SYMS_DwRegX86_XMM2 = 23,
SYMS_DwRegX86_XMM3 = 24,
SYMS_DwRegX86_XMM4 = 25,
SYMS_DwRegX86_XMM5 = 26,
SYMS_DwRegX86_XMM6 = 27,
SYMS_DwRegX86_XMM7 = 28,
SYMS_DwRegX86_MM0 = 29,
SYMS_DwRegX86_MM1 = 30,
SYMS_DwRegX86_MM2 = 31,
SYMS_DwRegX86_MM3 = 32,
SYMS_DwRegX86_MM4 = 33,
SYMS_DwRegX86_MM5 = 34,
SYMS_DwRegX86_MM6 = 35,
SYMS_DwRegX86_MM7 = 36,
SYMS_DwRegX86_FCW = 37,
SYMS_DwRegX86_FSW = 38,
SYMS_DwRegX86_MXCSR = 39,
SYMS_DwRegX86_ES = 40,
SYMS_DwRegX86_CS = 41,
SYMS_DwRegX86_SS = 42,
SYMS_DwRegX86_DS = 43,
SYMS_DwRegX86_FS = 44,
SYMS_DwRegX86_GS = 45,
SYMS_DwRegX86_TR = 48,
SYMS_DwRegX86_LDTR = 49,
SYMS_DwRegX86_COUNT = 46
} SYMS_DwRegX86;
typedef SYMS_U32 SYMS_DwRegX64;
enum{
SYMS_DwRegX64_RAX = 0,
SYMS_DwRegX64_RDX = 1,
SYMS_DwRegX64_RCX = 2,
SYMS_DwRegX64_RBX = 3,
SYMS_DwRegX64_RSI = 4,
SYMS_DwRegX64_RDI = 5,
SYMS_DwRegX64_RBP = 6,
SYMS_DwRegX64_RSP = 7,
SYMS_DwRegX64_R8 = 8,
SYMS_DwRegX64_R9 = 9,
SYMS_DwRegX64_R10 = 10,
SYMS_DwRegX64_R11 = 11,
SYMS_DwRegX64_R12 = 12,
SYMS_DwRegX64_R13 = 13,
SYMS_DwRegX64_R14 = 14,
SYMS_DwRegX64_R15 = 15,
SYMS_DwRegX64_RIP = 16,
SYMS_DwRegX64_XMM0 = 17,
SYMS_DwRegX64_XMM1 = 18,
SYMS_DwRegX64_XMM2 = 19,
SYMS_DwRegX64_XMM3 = 20,
SYMS_DwRegX64_XMM4 = 21,
SYMS_DwRegX64_XMM5 = 22,
SYMS_DwRegX64_XMM6 = 23,
SYMS_DwRegX64_XMM7 = 24,
SYMS_DwRegX64_XMM8 = 25,
SYMS_DwRegX64_XMM9 = 26,
SYMS_DwRegX64_XMM10 = 27,
SYMS_DwRegX64_XMM11 = 28,
SYMS_DwRegX64_XMM12 = 29,
SYMS_DwRegX64_XMM13 = 30,
SYMS_DwRegX64_XMM14 = 31,
SYMS_DwRegX64_XMM15 = 32,
SYMS_DwRegX64_ST0 = 33,
SYMS_DwRegX64_ST1 = 34,
SYMS_DwRegX64_ST2 = 35,
SYMS_DwRegX64_ST3 = 36,
SYMS_DwRegX64_ST4 = 37,
SYMS_DwRegX64_ST5 = 38,
SYMS_DwRegX64_ST6 = 39,
SYMS_DwRegX64_ST7 = 40,
SYMS_DwRegX64_MM0 = 41,
SYMS_DwRegX64_MM1 = 42,
SYMS_DwRegX64_MM2 = 43,
SYMS_DwRegX64_MM3 = 44,
SYMS_DwRegX64_MM4 = 45,
SYMS_DwRegX64_MM5 = 46,
SYMS_DwRegX64_MM6 = 47,
SYMS_DwRegX64_MM7 = 48,
SYMS_DwRegX64_RFLAGS = 49,
SYMS_DwRegX64_ES = 50,
SYMS_DwRegX64_CS = 51,
SYMS_DwRegX64_SS = 52,
SYMS_DwRegX64_DS = 53,
SYMS_DwRegX64_FS = 54,
SYMS_DwRegX64_GS = 55,
SYMS_DwRegX64_FS_BASE = 58,
SYMS_DwRegX64_GS_BASE = 59,
SYMS_DwRegX64_TR = 62,
SYMS_DwRegX64_LDTR = 63,
SYMS_DwRegX64_COUNT = 60
};
typedef enum SYMS_DwOp{
SYMS_DwOp_NULL,
SYMS_DwOp_ADDR = 0x03,
SYMS_DwOp_DEREF = 0x06,
SYMS_DwOp_CONST1U = 0x08,
SYMS_DwOp_CONST1S = 0x09,
SYMS_DwOp_CONST2U = 0x0a,
SYMS_DwOp_CONST2S = 0x0b,
SYMS_DwOp_CONST4U = 0x0c,
SYMS_DwOp_CONST4S = 0x0d,
SYMS_DwOp_CONST8U = 0x0e,
SYMS_DwOp_CONST8S = 0x0f,
SYMS_DwOp_CONSTU = 0x10,
SYMS_DwOp_CONSTS = 0x11,
SYMS_DwOp_DUP = 0x12,
SYMS_DwOp_DROP = 0x13,
SYMS_DwOp_OVER = 0x14,
SYMS_DwOp_PICK = 0x15,
SYMS_DwOp_SWAP = 0x16,
SYMS_DwOp_ROT = 0x17,
SYMS_DwOp_XDEREF = 0x18,
SYMS_DwOp_ABS = 0x19,
SYMS_DwOp_AND = 0x1a,
SYMS_DwOp_DIV = 0x1b,
SYMS_DwOp_MINUS = 0x1c,
SYMS_DwOp_MOD = 0x1d,
SYMS_DwOp_MUL = 0x1e,
SYMS_DwOp_NEG = 0x1f,
SYMS_DwOp_NOT = 0x20,
SYMS_DwOp_OR = 0x21,
SYMS_DwOp_PLUS = 0x22,
SYMS_DwOp_PLUS_UCONST = 0x23,
SYMS_DwOp_SHL = 0x24,
SYMS_DwOp_SHR = 0x25,
SYMS_DwOp_SHRA = 0x26,
SYMS_DwOp_XOR = 0x27,
SYMS_DwOp_SKIP = 0x2f,
SYMS_DwOp_BRA = 0x28,
SYMS_DwOp_EQ = 0x29,
SYMS_DwOp_GE = 0x2a,
SYMS_DwOp_GT = 0x2b,
SYMS_DwOp_LE = 0x2c,
SYMS_DwOp_LT = 0x2d,
SYMS_DwOp_NE = 0x2e,
SYMS_DwOp_LIT0 = 0x30,
SYMS_DwOp_LIT1 = 0x31,
SYMS_DwOp_LIT2 = 0x32,
SYMS_DwOp_LIT3 = 0x33,
SYMS_DwOp_LIT4 = 0x34,
SYMS_DwOp_LIT5 = 0x35,
SYMS_DwOp_LIT6 = 0x36,
SYMS_DwOp_LIT7 = 0x37,
SYMS_DwOp_LIT8 = 0x38,
SYMS_DwOp_LIT9 = 0x39,
SYMS_DwOp_LIT10 = 0x3a,
SYMS_DwOp_LIT11 = 0x3b,
SYMS_DwOp_LIT12 = 0x3c,
SYMS_DwOp_LIT13 = 0x3d,
SYMS_DwOp_LIT14 = 0x3e,
SYMS_DwOp_LIT15 = 0x3f,
SYMS_DwOp_LIT16 = 0x40,
SYMS_DwOp_LIT17 = 0x41,
SYMS_DwOp_LIT18 = 0x42,
SYMS_DwOp_LIT19 = 0x43,
SYMS_DwOp_LIT20 = 0x44,
SYMS_DwOp_LIT21 = 0x45,
SYMS_DwOp_LIT22 = 0x46,
SYMS_DwOp_LIT23 = 0x47,
SYMS_DwOp_LIT24 = 0x48,
SYMS_DwOp_LIT25 = 0x49,
SYMS_DwOp_LIT26 = 0x4a,
SYMS_DwOp_LIT27 = 0x4b,
SYMS_DwOp_LIT28 = 0x4c,
SYMS_DwOp_LIT29 = 0x4d,
SYMS_DwOp_LIT30 = 0x4e,
SYMS_DwOp_LIT31 = 0x4f,
SYMS_DwOp_REG0 = 0x50,
SYMS_DwOp_REG1 = 0x51,
SYMS_DwOp_REG2 = 0x52,
SYMS_DwOp_REG3 = 0x53,
SYMS_DwOp_REG4 = 0x54,
SYMS_DwOp_REG5 = 0x55,
SYMS_DwOp_REG6 = 0x56,
SYMS_DwOp_REG7 = 0x57,
SYMS_DwOp_REG8 = 0x58,
SYMS_DwOp_REG9 = 0x59,
SYMS_DwOp_REG10 = 0x5a,
SYMS_DwOp_REG11 = 0x5b,
SYMS_DwOp_REG12 = 0x5c,
SYMS_DwOp_REG13 = 0x5d,
SYMS_DwOp_REG14 = 0x5e,
SYMS_DwOp_REG15 = 0x5f,
SYMS_DwOp_REG16 = 0x60,
SYMS_DwOp_REG17 = 0x61,
SYMS_DwOp_REG18 = 0x62,
SYMS_DwOp_REG19 = 0x63,
SYMS_DwOp_REG20 = 0x64,
SYMS_DwOp_REG21 = 0x65,
SYMS_DwOp_REG22 = 0x66,
SYMS_DwOp_REG23 = 0x67,
SYMS_DwOp_REG24 = 0x68,
SYMS_DwOp_REG25 = 0x69,
SYMS_DwOp_REG26 = 0x6a,
SYMS_DwOp_REG27 = 0x6b,
SYMS_DwOp_REG28 = 0x6c,
SYMS_DwOp_REG29 = 0x6d,
SYMS_DwOp_REG30 = 0x6e,
SYMS_DwOp_REG31 = 0x6f,
SYMS_DwOp_BREG0 = 0x70,
SYMS_DwOp_BREG1 = 0x71,
SYMS_DwOp_BREG2 = 0x72,
SYMS_DwOp_BREG3 = 0x73,
SYMS_DwOp_BREG4 = 0x74,
SYMS_DwOp_BREG5 = 0x75,
SYMS_DwOp_BREG6 = 0x76,
SYMS_DwOp_BREG7 = 0x77,
SYMS_DwOp_BREG8 = 0x78,
SYMS_DwOp_BREG9 = 0x79,
SYMS_DwOp_BREG10 = 0x7a,
SYMS_DwOp_BREG11 = 0x7b,
SYMS_DwOp_BREG12 = 0x7c,
SYMS_DwOp_BREG13 = 0x7d,
SYMS_DwOp_BREG14 = 0x7e,
SYMS_DwOp_BREG15 = 0x7f,
SYMS_DwOp_BREG16 = 0x80,
SYMS_DwOp_BREG17 = 0x81,
SYMS_DwOp_BREG18 = 0x82,
SYMS_DwOp_BREG19 = 0x83,
SYMS_DwOp_BREG20 = 0x84,
SYMS_DwOp_BREG21 = 0x85,
SYMS_DwOp_BREG22 = 0x86,
SYMS_DwOp_BREG23 = 0x87,
SYMS_DwOp_BREG24 = 0x88,
SYMS_DwOp_BREG25 = 0x89,
SYMS_DwOp_BREG26 = 0x8a,
SYMS_DwOp_BREG27 = 0x8b,
SYMS_DwOp_BREG28 = 0x8c,
SYMS_DwOp_BREG29 = 0x8d,
SYMS_DwOp_BREG30 = 0x8e,
SYMS_DwOp_BREG31 = 0x8f,
SYMS_DwOp_REGX = 0x90,
SYMS_DwOp_FBREG = 0x91,
SYMS_DwOp_BREGX = 0x92,
SYMS_DwOp_PIECE = 0x93,
SYMS_DwOp_DEREF_SIZE = 0x94,
SYMS_DwOp_XDEREF_SIZE = 0x95,
SYMS_DwOp_NOP = 0x96,
SYMS_DwOp_PUSH_OBJECT_ADDRESS = 0x97,
SYMS_DwOp_CALL2 = 0x98,
SYMS_DwOp_CALL4 = 0x99,
SYMS_DwOp_CALL_REF = 0x9a,
SYMS_DwOp_FORM_TLS_ADDRESS = 0x9b,
SYMS_DwOp_CALL_FRAME_CFA = 0x9c,
SYMS_DwOp_BIT_PIECE = 0x9d,
SYMS_DwOp_IMPLICIT_VALUE = 0x9e,
SYMS_DwOp_STACK_VALUE = 0x9f,
SYMS_DwOp_IMPLICIT_POINTER = 0xa0,
SYMS_DwOp_ADDRX = 0xa1,
SYMS_DwOp_CONSTX = 0xa2,
SYMS_DwOp_ENTRY_VALUE = 0xa3,
SYMS_DwOp_CONST_TYPE = 0xa4,
SYMS_DwOp_REGVAL_TYPE = 0xa5,
SYMS_DwOp_DEREF_TYPE = 0xa6,
SYMS_DwOp_XDEREF_TYPE = 0xa7,
SYMS_DwOp_CONVERT = 0xa8,
SYMS_DwOp_REINTERPRET = 0xa9,
SYMS_DwOp_LO_USER = 0xe0,
SYMS_DwOp_HI_USER = 0xff,
SYMS_DwOp_COUNT = 167
} SYMS_DwOp;

//~ generated from code at syms/metaprogram/syms_metaprogram_serial.c:1118
SYMS_C_LINKAGE_BEGIN
SYMS_API SYMS_RegID syms_reg_from_dw_reg_x86(SYMS_DwRegX86 v);
SYMS_API SYMS_RegID syms_reg_from_dw_reg_x64(SYMS_DwRegX64 v);
SYMS_API SYMS_DwVersion syms_dw_version_from_op_code(SYMS_DwOp v);
SYMS_API SYMS_U64 syms_dw_num_operands_from_op_code(SYMS_DwOp v);
SYMS_C_LINKAGE_END

//~ generated from code at syms/metaprogram/syms_metaprogram_serial.c:1572
SYMS_C_LINKAGE_BEGIN
SYMS_C_LINKAGE_END

#endif