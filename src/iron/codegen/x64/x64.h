#pragma once

#include "iron/codegen/mach.h"

enum {
    FE_X64_REGCLASS_UNKNOWN = 0,
    FE_X64_REGCLASS_GPR,
};

enum {
    FE_X64_GPR_UNKNOWN = 0,

    FE_X64_GPR_RAX, // all variants of a register are treated the same.
    FE_X64_GPR_RBX,
    FE_X64_GPR_RCX,
    FE_X64_GPR_RDX,
    FE_X64_GPR_RSI,
    FE_X64_GPR_RDI,
    FE_X64_GPR_RBP,
    FE_X64_GPR_RSP,
    FE_X64_GPR_R8,
    FE_X64_GPR_R9,
    FE_X64_GPR_R10,
    FE_X64_GPR_R11,
    FE_X64_GPR_R12,
    FE_X64_GPR_R13,
    FE_X64_GPR_R14,
    FE_X64_GPR_R15,

    _FE_X64_GPR_COUNT,
};

enum {
    FE_X64_INST_UNKNOWN = 0,

    FE_X64_INST_MOV_RR_64, // mov def, use
    FE_X64_INST_ADD_RR_64, // add def/use, use
    FE_X64_INST_LEA_RR_64, // lea def, [use + use]
    FE_X64_INST_RET,       // ret

    _FE_X64_INST_COUNT,
};

extern const FeMachInstTemplate fe_x64_inst_templates[_FE_X64_INST_COUNT];

// x64-specific instructions
enum {
    _FE_IR_X64_START = _FE_IR_ARCH_SPECIFIC_START,
};

extern const FeArchInfo fe_arch_x64;        // x64 / x86-64 / amd64 whatever
/*
extern const FeArchInfo fe_arch_aphelion;   // aphelion (orbit systems)
extern const FeArchInfo fe_arch_xr17032;    // xr17032 (hyenasky/xr-station)
extern const FeArchInfo fe_arch_fox32;      // fox32 (ryfox)
*/