/* AUTO-GENERATED from SPEED2.analysis.exe by run_lift.py (pcrecomp lift32). DO NOT EDIT, DO NOT COMMIT. */
#define RECOMP_GENERATED_CODE
#include "recomp_types.h"
#include "recomp_funcs.h"
#include <math.h>
#include <string.h>

void sub_0077FD70(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077FD70u);

L_0077FD70:
    fp_push(*(double*)ADDR(0x7C09A0)); /* 0x0077FD70: fld qword ptr [0x7c09a0] */
    _st[0] *= *(double*)ADDR(0x7864E0); /* 0x0077FD76: fmul qword ptr [0x7864e0] */
    { double _v = fp_pop(); *(double*)ADDR(0x8A7A90) = _v; } /* 0x0077FD7C: fstp qword ptr [0x8a7a90] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077FD82: ret  */

}

void sub_0077FD90(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077FD90u);

L_0077FD90:
    fp_push(*(float*)&MEM32(0x7C0AA8)); /* 0x0077FD90: fld dword ptr [0x7c0aa8] */
    _st[0] += _st[0]; /* 0x0077FD96: fadd st(0), st(0) */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8A7ABC) = _v; } /* 0x0077FD98: fstp dword ptr [0x8a7abc] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077FD9E: ret  */

}

void sub_0077FDA0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077FDA0u);

L_0077FDA0:
    fp_push(*(float*)&MEM32(0x7C0AA8)); /* 0x0077FDA0: fld dword ptr [0x7c0aa8] */
    _st[0] *= (double)*(float*)ADDR(0x784260); /* 0x0077FDA6: fmul dword ptr [0x784260] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8A7AB8) = _v; } /* 0x0077FDAC: fstp dword ptr [0x8a7ab8] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077FDB2: ret  */

}

void sub_0077FDC0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077FDC0u);

L_0077FDC0:
    fp_push(*(double*)ADDR(0x7C0AB0)); /* 0x0077FDC0: fld qword ptr [0x7c0ab0] */
    _st[0] += _st[0]; /* 0x0077FDC6: fadd st(0), st(0) */
    { double _v = fp_pop(); *(double*)ADDR(0x8A7AB0) = _v; } /* 0x0077FDC8: fstp qword ptr [0x8a7ab0] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077FDCE: ret  */

}

void sub_0077FDD0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077FDD0u);

L_0077FDD0:
    fp_push(*(double*)ADDR(0x7C0AB0)); /* 0x0077FDD0: fld qword ptr [0x7c0ab0] */
    _st[0] *= *(double*)ADDR(0x7864E0); /* 0x0077FDD6: fmul qword ptr [0x7864e0] */
    { double _v = fp_pop(); *(double*)ADDR(0x8A7AA8) = _v; } /* 0x0077FDDC: fstp qword ptr [0x8a7aa8] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077FDE2: ret  */

}

void sub_0077FDF0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077FDF0u);

L_0077FDF0:
    fp_push(*(float*)&MEM32(0x7C0AB8)); /* 0x0077FDF0: fld dword ptr [0x7c0ab8] */
    _st[0] += _st[0]; /* 0x0077FDF6: fadd st(0), st(0) */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8A7B2C) = _v; } /* 0x0077FDF8: fstp dword ptr [0x8a7b2c] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077FDFE: ret  */

}

void sub_0077FE00(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077FE00u);

L_0077FE00:
    fp_push(*(float*)&MEM32(0x7C0AB8)); /* 0x0077FE00: fld dword ptr [0x7c0ab8] */
    _st[0] *= (double)*(float*)ADDR(0x784260); /* 0x0077FE06: fmul dword ptr [0x784260] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8A7B28) = _v; } /* 0x0077FE0C: fstp dword ptr [0x8a7b28] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077FE12: ret  */

}

void sub_0077FE20(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077FE20u);

L_0077FE20:
    fp_push(*(double*)ADDR(0x7C0AC0)); /* 0x0077FE20: fld qword ptr [0x7c0ac0] */
    _st[0] += _st[0]; /* 0x0077FE26: fadd st(0), st(0) */
    { double _v = fp_pop(); *(double*)ADDR(0x8A7B20) = _v; } /* 0x0077FE28: fstp qword ptr [0x8a7b20] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077FE2E: ret  */

}

void sub_0077FE30(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077FE30u);

L_0077FE30:
    fp_push(*(double*)ADDR(0x7C0AC0)); /* 0x0077FE30: fld qword ptr [0x7c0ac0] */
    _st[0] *= *(double*)ADDR(0x7864E0); /* 0x0077FE36: fmul qword ptr [0x7864e0] */
    { double _v = fp_pop(); *(double*)ADDR(0x8A7B18) = _v; } /* 0x0077FE3C: fstp qword ptr [0x8a7b18] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077FE42: ret  */

}

void sub_0077FE50(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077FE50u);

L_0077FE50:
    fp_push(*(float*)&MEM32(0x7C0BD0)); /* 0x0077FE50: fld dword ptr [0x7c0bd0] */
    _st[0] += _st[0]; /* 0x0077FE56: fadd st(0), st(0) */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8A7B8C) = _v; } /* 0x0077FE58: fstp dword ptr [0x8a7b8c] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077FE5E: ret  */

}

void sub_0077FE60(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077FE60u);

L_0077FE60:
    fp_push(*(float*)&MEM32(0x7C0BD0)); /* 0x0077FE60: fld dword ptr [0x7c0bd0] */
    _st[0] *= (double)*(float*)ADDR(0x784260); /* 0x0077FE66: fmul dword ptr [0x784260] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8A7B88) = _v; } /* 0x0077FE6C: fstp dword ptr [0x8a7b88] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077FE72: ret  */

}

void sub_0077FE80(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077FE80u);

L_0077FE80:
    fp_push(*(double*)ADDR(0x7C0BD8)); /* 0x0077FE80: fld qword ptr [0x7c0bd8] */
    _st[0] += _st[0]; /* 0x0077FE86: fadd st(0), st(0) */
    { double _v = fp_pop(); *(double*)ADDR(0x8A7B80) = _v; } /* 0x0077FE88: fstp qword ptr [0x8a7b80] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077FE8E: ret  */

}

void sub_0077FE90(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077FE90u);

L_0077FE90:
    fp_push(*(double*)ADDR(0x7C0BD8)); /* 0x0077FE90: fld qword ptr [0x7c0bd8] */
    _st[0] *= *(double*)ADDR(0x7864E0); /* 0x0077FE96: fmul qword ptr [0x7864e0] */
    { double _v = fp_pop(); *(double*)ADDR(0x8A7B78) = _v; } /* 0x0077FE9C: fstp qword ptr [0x8a7b78] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077FEA2: ret  */

}

void sub_0077FEB0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077FEB0u);

L_0077FEB0:
    fp_push(*(float*)&MEM32(0x7C0BE8)); /* 0x0077FEB0: fld dword ptr [0x7c0be8] */
    _st[0] += _st[0]; /* 0x0077FEB6: fadd st(0), st(0) */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8A7BAC) = _v; } /* 0x0077FEB8: fstp dword ptr [0x8a7bac] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077FEBE: ret  */

}

void sub_0077FEC0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077FEC0u);

L_0077FEC0:
    fp_push(*(float*)&MEM32(0x7C0BE8)); /* 0x0077FEC0: fld dword ptr [0x7c0be8] */
    _st[0] *= (double)*(float*)ADDR(0x784260); /* 0x0077FEC6: fmul dword ptr [0x784260] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8A7BA8) = _v; } /* 0x0077FECC: fstp dword ptr [0x8a7ba8] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077FED2: ret  */

}

void sub_0077FEE0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077FEE0u);

L_0077FEE0:
    fp_push(*(double*)ADDR(0x7C0BF0)); /* 0x0077FEE0: fld qword ptr [0x7c0bf0] */
    _st[0] += _st[0]; /* 0x0077FEE6: fadd st(0), st(0) */
    { double _v = fp_pop(); *(double*)ADDR(0x8A7BA0) = _v; } /* 0x0077FEE8: fstp qword ptr [0x8a7ba0] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077FEEE: ret  */

}

void sub_0077FEF0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077FEF0u);

L_0077FEF0:
    fp_push(*(double*)ADDR(0x7C0BF0)); /* 0x0077FEF0: fld qword ptr [0x7c0bf0] */
    _st[0] *= *(double*)ADDR(0x7864E0); /* 0x0077FEF6: fmul qword ptr [0x7864e0] */
    { double _v = fp_pop(); *(double*)ADDR(0x8A7B98) = _v; } /* 0x0077FEFC: fstp qword ptr [0x8a7b98] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077FF02: ret  */

}

void sub_0077FF10(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077FF10u);

L_0077FF10:
    fp_push(*(float*)&MEM32(0x7C0D00)); /* 0x0077FF10: fld dword ptr [0x7c0d00] */
    _st[0] += _st[0]; /* 0x0077FF16: fadd st(0), st(0) */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8A7BC4) = _v; } /* 0x0077FF18: fstp dword ptr [0x8a7bc4] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077FF1E: ret  */

}

void sub_0077FF20(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077FF20u);

L_0077FF20:
    fp_push(*(float*)&MEM32(0x7C0D00)); /* 0x0077FF20: fld dword ptr [0x7c0d00] */
    _st[0] *= (double)*(float*)ADDR(0x784260); /* 0x0077FF26: fmul dword ptr [0x784260] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8A7BC0) = _v; } /* 0x0077FF2C: fstp dword ptr [0x8a7bc0] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077FF32: ret  */

}

void sub_0077FF40(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077FF40u);

L_0077FF40:
    fp_push(*(double*)ADDR(0x7C0D08)); /* 0x0077FF40: fld qword ptr [0x7c0d08] */
    _st[0] += _st[0]; /* 0x0077FF46: fadd st(0), st(0) */
    { double _v = fp_pop(); *(double*)ADDR(0x8A7BB8) = _v; } /* 0x0077FF48: fstp qword ptr [0x8a7bb8] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077FF4E: ret  */

}

void sub_0077FF50(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077FF50u);

L_0077FF50:
    fp_push(*(double*)ADDR(0x7C0D08)); /* 0x0077FF50: fld qword ptr [0x7c0d08] */
    _st[0] *= *(double*)ADDR(0x7864E0); /* 0x0077FF56: fmul qword ptr [0x7864e0] */
    { double _v = fp_pop(); *(double*)ADDR(0x8A7BB0) = _v; } /* 0x0077FF5C: fstp qword ptr [0x8a7bb0] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077FF62: ret  */

}

void sub_0077FF70(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077FF70u);

L_0077FF70:
    fp_push(*(float*)&MEM32(0x7C0D10)); /* 0x0077FF70: fld dword ptr [0x7c0d10] */
    _st[0] += _st[0]; /* 0x0077FF76: fadd st(0), st(0) */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8A7BF4) = _v; } /* 0x0077FF78: fstp dword ptr [0x8a7bf4] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077FF7E: ret  */

}

void sub_0077FF80(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077FF80u);

L_0077FF80:
    fp_push(*(float*)&MEM32(0x7C0D10)); /* 0x0077FF80: fld dword ptr [0x7c0d10] */
    _st[0] *= (double)*(float*)ADDR(0x784260); /* 0x0077FF86: fmul dword ptr [0x784260] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8A7BF0) = _v; } /* 0x0077FF8C: fstp dword ptr [0x8a7bf0] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077FF92: ret  */

}

void sub_0077FFA0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077FFA0u);

L_0077FFA0:
    fp_push(*(double*)ADDR(0x7C0D18)); /* 0x0077FFA0: fld qword ptr [0x7c0d18] */
    _st[0] += _st[0]; /* 0x0077FFA6: fadd st(0), st(0) */
    { double _v = fp_pop(); *(double*)ADDR(0x8A7BE8) = _v; } /* 0x0077FFA8: fstp qword ptr [0x8a7be8] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077FFAE: ret  */

}

void sub_0077FFB0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077FFB0u);

L_0077FFB0:
    fp_push(*(double*)ADDR(0x7C0D18)); /* 0x0077FFB0: fld qword ptr [0x7c0d18] */
    _st[0] *= *(double*)ADDR(0x7864E0); /* 0x0077FFB6: fmul qword ptr [0x7864e0] */
    { double _v = fp_pop(); *(double*)ADDR(0x8A7BE0) = _v; } /* 0x0077FFBC: fstp qword ptr [0x8a7be0] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077FFC2: ret  */

}

void sub_0077FFD0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077FFD0u);

L_0077FFD0:
    fp_push(*(float*)&MEM32(0x7C0D20)); /* 0x0077FFD0: fld dword ptr [0x7c0d20] */
    _st[0] += _st[0]; /* 0x0077FFD6: fadd st(0), st(0) */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8A7E34) = _v; } /* 0x0077FFD8: fstp dword ptr [0x8a7e34] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077FFDE: ret  */

}

void sub_0077FFE0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077FFE0u);

L_0077FFE0:
    fp_push(*(float*)&MEM32(0x7C0D20)); /* 0x0077FFE0: fld dword ptr [0x7c0d20] */
    _st[0] *= (double)*(float*)ADDR(0x784260); /* 0x0077FFE6: fmul dword ptr [0x784260] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8A7E30) = _v; } /* 0x0077FFEC: fstp dword ptr [0x8a7e30] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077FFF2: ret  */

}

void sub_00780000(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780000u);

L_00780000:
    fp_push(*(double*)ADDR(0x7C0D28)); /* 0x00780000: fld qword ptr [0x7c0d28] */
    _st[0] += _st[0]; /* 0x00780006: fadd st(0), st(0) */
    { double _v = fp_pop(); *(double*)ADDR(0x8A7E28) = _v; } /* 0x00780008: fstp qword ptr [0x8a7e28] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0078000E: ret  */

}

void sub_00780010(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780010u);

L_00780010:
    fp_push(*(double*)ADDR(0x7C0D28)); /* 0x00780010: fld qword ptr [0x7c0d28] */
    _st[0] *= *(double*)ADDR(0x7864E0); /* 0x00780016: fmul qword ptr [0x7864e0] */
    { double _v = fp_pop(); *(double*)ADDR(0x8A7E20) = _v; } /* 0x0078001C: fstp qword ptr [0x8a7e20] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00780022: ret  */

}

void sub_00780030(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780030u);

L_00780030:
    ecx = 0x008A7BF8u; /* 0x00780030: mov ecx, 0x8a7bf8 */
    RECOMP_CALL(sub_006DD240); /* 0x00780035: call 0x6dd240 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00782900u); /* 0x0078003A: push 0x782900 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0078003F: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00780044: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00780045: ret  */

}

void sub_00780050(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780050u);

L_00780050:
    ecx = 0x008A7E38u; /* 0x00780050: mov ecx, 0x8a7e38 */
    RECOMP_CALL(sub_006DD240); /* 0x00780055: call 0x6dd240 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00782910u); /* 0x0078005A: push 0x782910 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0078005F: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00780064: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00780065: ret  */

}

void sub_00780070(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780070u);

L_00780070:
    fp_push(*(float*)&MEM32(0x7C0E40)); /* 0x00780070: fld dword ptr [0x7c0e40] */
    _st[0] += _st[0]; /* 0x00780076: fadd st(0), st(0) */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8A80EC) = _v; } /* 0x00780078: fstp dword ptr [0x8a80ec] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0078007E: ret  */

}

void sub_00780080(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780080u);

L_00780080:
    fp_push(*(float*)&MEM32(0x7C0E40)); /* 0x00780080: fld dword ptr [0x7c0e40] */
    _st[0] *= (double)*(float*)ADDR(0x784260); /* 0x00780086: fmul dword ptr [0x784260] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8A80E8) = _v; } /* 0x0078008C: fstp dword ptr [0x8a80e8] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00780092: ret  */

}

void sub_007800A0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007800A0u);

L_007800A0:
    fp_push(*(double*)ADDR(0x7C0E48)); /* 0x007800A0: fld qword ptr [0x7c0e48] */
    _st[0] += _st[0]; /* 0x007800A6: fadd st(0), st(0) */
    { double _v = fp_pop(); *(double*)ADDR(0x8A80E0) = _v; } /* 0x007800A8: fstp qword ptr [0x8a80e0] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007800AE: ret  */

}

void sub_007800B0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007800B0u);

L_007800B0:
    fp_push(*(double*)ADDR(0x7C0E48)); /* 0x007800B0: fld qword ptr [0x7c0e48] */
    _st[0] *= *(double*)ADDR(0x7864E0); /* 0x007800B6: fmul qword ptr [0x7864e0] */
    { double _v = fp_pop(); *(double*)ADDR(0x8A80D8) = _v; } /* 0x007800BC: fstp qword ptr [0x8a80d8] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007800C2: ret  */

}

void sub_007800D0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007800D0u);

L_007800D0:
    fp_push(*(float*)&MEM32(0x7C0E50)); /* 0x007800D0: fld dword ptr [0x7c0e50] */
    _st[0] += _st[0]; /* 0x007800D6: fadd st(0), st(0) */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8A812C) = _v; } /* 0x007800D8: fstp dword ptr [0x8a812c] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007800DE: ret  */

}

void sub_007800E0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007800E0u);

L_007800E0:
    fp_push(*(float*)&MEM32(0x7C0E50)); /* 0x007800E0: fld dword ptr [0x7c0e50] */
    _st[0] *= (double)*(float*)ADDR(0x784260); /* 0x007800E6: fmul dword ptr [0x784260] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8A8128) = _v; } /* 0x007800EC: fstp dword ptr [0x8a8128] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007800F2: ret  */

}

void sub_00780100(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780100u);

L_00780100:
    fp_push(*(double*)ADDR(0x7C0E58)); /* 0x00780100: fld qword ptr [0x7c0e58] */
    _st[0] += _st[0]; /* 0x00780106: fadd st(0), st(0) */
    { double _v = fp_pop(); *(double*)ADDR(0x8A8120) = _v; } /* 0x00780108: fstp qword ptr [0x8a8120] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0078010E: ret  */

}

void sub_00780110(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780110u);

L_00780110:
    fp_push(*(double*)ADDR(0x7C0E58)); /* 0x00780110: fld qword ptr [0x7c0e58] */
    _st[0] *= *(double*)ADDR(0x7864E0); /* 0x00780116: fmul qword ptr [0x7864e0] */
    { double _v = fp_pop(); *(double*)ADDR(0x8A8118) = _v; } /* 0x0078011C: fstp qword ptr [0x8a8118] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00780122: ret  */

}

void sub_00780130(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780130u);

L_00780130:
    fp_push(*(float*)&MEM32(0x7C0E70)); /* 0x00780130: fld dword ptr [0x7c0e70] */
    _st[0] += _st[0]; /* 0x00780136: fadd st(0), st(0) */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8A814C) = _v; } /* 0x00780138: fstp dword ptr [0x8a814c] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0078013E: ret  */

}

void sub_00780140(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780140u);

L_00780140:
    fp_push(*(float*)&MEM32(0x7C0E70)); /* 0x00780140: fld dword ptr [0x7c0e70] */
    _st[0] *= (double)*(float*)ADDR(0x784260); /* 0x00780146: fmul dword ptr [0x784260] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8A8148) = _v; } /* 0x0078014C: fstp dword ptr [0x8a8148] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00780152: ret  */

}

void sub_00780160(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780160u);

L_00780160:
    fp_push(*(double*)ADDR(0x7C0E78)); /* 0x00780160: fld qword ptr [0x7c0e78] */
    _st[0] += _st[0]; /* 0x00780166: fadd st(0), st(0) */
    { double _v = fp_pop(); *(double*)ADDR(0x8A8140) = _v; } /* 0x00780168: fstp qword ptr [0x8a8140] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0078016E: ret  */

}

void sub_00780170(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780170u);

L_00780170:
    fp_push(*(double*)ADDR(0x7C0E78)); /* 0x00780170: fld qword ptr [0x7c0e78] */
    _st[0] *= *(double*)ADDR(0x7864E0); /* 0x00780176: fmul qword ptr [0x7864e0] */
    { double _v = fp_pop(); *(double*)ADDR(0x8A8138) = _v; } /* 0x0078017C: fstp qword ptr [0x8a8138] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00780182: ret  */

}

void sub_00780190(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780190u);

L_00780190:
    fp_push(*(float*)&MEM32(0x7C0E88)); /* 0x00780190: fld dword ptr [0x7c0e88] */
    _st[0] += _st[0]; /* 0x00780196: fadd st(0), st(0) */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8A838C) = _v; } /* 0x00780198: fstp dword ptr [0x8a838c] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0078019E: ret  */

}

void sub_007801A0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007801A0u);

L_007801A0:
    fp_push(*(float*)&MEM32(0x7C0E88)); /* 0x007801A0: fld dword ptr [0x7c0e88] */
    _st[0] *= (double)*(float*)ADDR(0x784260); /* 0x007801A6: fmul dword ptr [0x784260] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8A8388) = _v; } /* 0x007801AC: fstp dword ptr [0x8a8388] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007801B2: ret  */

}

void sub_007801C0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007801C0u);

L_007801C0:
    fp_push(*(double*)ADDR(0x7C0E90)); /* 0x007801C0: fld qword ptr [0x7c0e90] */
    _st[0] += _st[0]; /* 0x007801C6: fadd st(0), st(0) */
    { double _v = fp_pop(); *(double*)ADDR(0x8A8380) = _v; } /* 0x007801C8: fstp qword ptr [0x8a8380] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007801CE: ret  */

}

void sub_007801D0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007801D0u);

L_007801D0:
    fp_push(*(double*)ADDR(0x7C0E90)); /* 0x007801D0: fld qword ptr [0x7c0e90] */
    _st[0] *= *(double*)ADDR(0x7864E0); /* 0x007801D6: fmul qword ptr [0x7864e0] */
    { double _v = fp_pop(); *(double*)ADDR(0x8A8378) = _v; } /* 0x007801DC: fstp qword ptr [0x8a8378] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007801E2: ret  */

}

void sub_007801F0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007801F0u);

L_007801F0:
    ecx = 0x008A8390u; /* 0x007801F0: mov ecx, 0x8a8390 */
    RECOMP_CALL(sub_006DD240); /* 0x007801F5: call 0x6dd240 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00782920u); /* 0x007801FA: push 0x782920 */
    RECOMP_CALL(sub_0075C5ED); /* 0x007801FF: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00780204: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00780205: ret  */

}

void sub_00780210(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780210u);

L_00780210:
    fp_push(*(float*)&MEM32(0x7C0E98)); /* 0x00780210: fld dword ptr [0x7c0e98] */
    _st[0] += _st[0]; /* 0x00780216: fadd st(0), st(0) */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8A8730) = _v; } /* 0x00780218: fstp dword ptr [0x8a8730] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0078021E: ret  */

}

void sub_00780220(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780220u);

L_00780220:
    fp_push(*(float*)&MEM32(0x7C0E98)); /* 0x00780220: fld dword ptr [0x7c0e98] */
    _st[0] *= (double)*(float*)ADDR(0x784260); /* 0x00780226: fmul dword ptr [0x784260] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8A872C) = _v; } /* 0x0078022C: fstp dword ptr [0x8a872c] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00780232: ret  */

}

void sub_00780240(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780240u);

L_00780240:
    fp_push(*(double*)ADDR(0x7C0EA0)); /* 0x00780240: fld qword ptr [0x7c0ea0] */
    _st[0] += _st[0]; /* 0x00780246: fadd st(0), st(0) */
    { double _v = fp_pop(); *(double*)ADDR(0x8A85E8) = _v; } /* 0x00780248: fstp qword ptr [0x8a85e8] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0078024E: ret  */

}

void sub_00780250(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780250u);

L_00780250:
    fp_push(*(double*)ADDR(0x7C0EA0)); /* 0x00780250: fld qword ptr [0x7c0ea0] */
    _st[0] *= *(double*)ADDR(0x7864E0); /* 0x00780256: fmul qword ptr [0x7864e0] */
    { double _v = fp_pop(); *(double*)ADDR(0x8A85E0) = _v; } /* 0x0078025C: fstp qword ptr [0x8a85e0] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00780262: ret  */

}

void sub_00780270(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780270u);

L_00780270:
    PUSH32(esp, 0xFF00AAAAu); /* 0x00780270: push 0xff00aaaa */
    PUSH32(esp, 0x007C0FDCu); /* 0x00780275: push 0x7c0fdc */
    ecx = 0x008A85F0u; /* 0x0078027A: mov ecx, 0x8a85f0 */
    RECOMP_CALL(sub_006DE3F0); /* 0x0078027F: call 0x6de3f0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00782930u); /* 0x00780284: push 0x782930 */
    RECOMP_CALL(sub_0075C5ED); /* 0x00780289: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0078028E: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0078028F: ret  */

}

void sub_00780290(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780290u);

L_00780290:
    PUSH32(esp, 0xFFFFFF50u); /* 0x00780290: push 0xffffff50 */
    PUSH32(esp, 0x007C0FE8u); /* 0x00780295: push 0x7c0fe8 */
    ecx = 0x008A8738u; /* 0x0078029A: mov ecx, 0x8a8738 */
    RECOMP_CALL(sub_006DE3F0); /* 0x0078029F: call 0x6de3f0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00782940u); /* 0x007802A4: push 0x782940 */
    RECOMP_CALL(sub_0075C5ED); /* 0x007802A9: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007802AE: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007802AF: ret  */

}

void sub_007802B0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007802B0u);

L_007802B0:
    ecx = 0x008A8718u; /* 0x007802B0: mov ecx, 0x8a8718 */
    MEM32(0x8A8718) = 0x008A8738u; /* 0x007802B5: mov dword ptr [0x8a8718], 0x8a8738 */
    RECOMP_CALL(sub_006DE6B0); /* 0x007802BF: call 0x6de6b0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00782950u); /* 0x007802C4: push 0x782950 */
    RECOMP_CALL(sub_0075C5ED); /* 0x007802C9: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007802CE: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007802CF: ret  */

}

void sub_007802D0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007802D0u);

L_007802D0:
    fp_push(*(float*)&MEM32(0x7C0FF8)); /* 0x007802D0: fld dword ptr [0x7c0ff8] */
    _st[0] += _st[0]; /* 0x007802D6: fadd st(0), st(0) */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8AAAD4) = _v; } /* 0x007802D8: fstp dword ptr [0x8aaad4] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007802DE: ret  */

}

void sub_007802E0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007802E0u);

L_007802E0:
    fp_push(*(float*)&MEM32(0x7C0FF8)); /* 0x007802E0: fld dword ptr [0x7c0ff8] */
    _st[0] *= (double)*(float*)ADDR(0x784260); /* 0x007802E6: fmul dword ptr [0x784260] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8AAAD0) = _v; } /* 0x007802EC: fstp dword ptr [0x8aaad0] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007802F2: ret  */

}

void sub_00780300(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780300u);

L_00780300:
    fp_push(*(double*)ADDR(0x7C1000)); /* 0x00780300: fld qword ptr [0x7c1000] */
    _st[0] += _st[0]; /* 0x00780306: fadd st(0), st(0) */
    { double _v = fp_pop(); *(double*)ADDR(0x8AAAC8) = _v; } /* 0x00780308: fstp qword ptr [0x8aaac8] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0078030E: ret  */

}

void sub_00780310(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780310u);

L_00780310:
    fp_push(*(double*)ADDR(0x7C1000)); /* 0x00780310: fld qword ptr [0x7c1000] */
    _st[0] *= *(double*)ADDR(0x7864E0); /* 0x00780316: fmul qword ptr [0x7864e0] */
    { double _v = fp_pop(); *(double*)ADDR(0x8AAAC0) = _v; } /* 0x0078031C: fstp qword ptr [0x8aaac0] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00780322: ret  */

}

void sub_00780330(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780330u);

L_00780330:
    ecx = 0x008AAAD8u; /* 0x00780330: mov ecx, 0x8aaad8 */
    RECOMP_CALL(sub_006DB740); /* 0x00780335: call 0x6db740 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00782960u); /* 0x0078033A: push 0x782960 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0078033F: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00780344: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00780345: ret  */

}

void sub_00780350(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780350u);

L_00780350:
    fp_push(*(float*)&MEM32(0x7C1110)); /* 0x00780350: fld dword ptr [0x7c1110] */
    _st[0] += _st[0]; /* 0x00780356: fadd st(0), st(0) */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8AACBC) = _v; } /* 0x00780358: fstp dword ptr [0x8aacbc] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0078035E: ret  */

}

void sub_00780360(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780360u);

L_00780360:
    fp_push(*(float*)&MEM32(0x7C1110)); /* 0x00780360: fld dword ptr [0x7c1110] */
    _st[0] *= (double)*(float*)ADDR(0x784260); /* 0x00780366: fmul dword ptr [0x784260] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8AACB8) = _v; } /* 0x0078036C: fstp dword ptr [0x8aacb8] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00780372: ret  */

}

void sub_00780380(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780380u);

L_00780380:
    fp_push(*(double*)ADDR(0x7C1118)); /* 0x00780380: fld qword ptr [0x7c1118] */
    _st[0] += _st[0]; /* 0x00780386: fadd st(0), st(0) */
    { double _v = fp_pop(); *(double*)ADDR(0x8AACB0) = _v; } /* 0x00780388: fstp qword ptr [0x8aacb0] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0078038E: ret  */

}

void sub_00780390(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780390u);

L_00780390:
    fp_push(*(double*)ADDR(0x7C1118)); /* 0x00780390: fld qword ptr [0x7c1118] */
    _st[0] *= *(double*)ADDR(0x7864E0); /* 0x00780396: fmul qword ptr [0x7864e0] */
    { double _v = fp_pop(); *(double*)ADDR(0x8AACA8) = _v; } /* 0x0078039C: fstp qword ptr [0x8aaca8] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007803A2: ret  */

}

void sub_007803B0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007803B0u);

L_007803B0:
    fp_push(*(float*)&MEM32(0x7C1228)); /* 0x007803B0: fld dword ptr [0x7c1228] */
    _st[0] += _st[0]; /* 0x007803B6: fadd st(0), st(0) */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8AADAC) = _v; } /* 0x007803B8: fstp dword ptr [0x8aadac] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007803BE: ret  */

}

void sub_007803C0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007803C0u);

L_007803C0:
    fp_push(*(float*)&MEM32(0x7C1228)); /* 0x007803C0: fld dword ptr [0x7c1228] */
    _st[0] *= (double)*(float*)ADDR(0x784260); /* 0x007803C6: fmul dword ptr [0x784260] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8AADA8) = _v; } /* 0x007803CC: fstp dword ptr [0x8aada8] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007803D2: ret  */

}

void sub_007803E0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007803E0u);

L_007803E0:
    fp_push(*(double*)ADDR(0x7C1230)); /* 0x007803E0: fld qword ptr [0x7c1230] */
    _st[0] += _st[0]; /* 0x007803E6: fadd st(0), st(0) */
    { double _v = fp_pop(); *(double*)ADDR(0x8AADA0) = _v; } /* 0x007803E8: fstp qword ptr [0x8aada0] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007803EE: ret  */

}

void sub_007803F0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007803F0u);

L_007803F0:
    fp_push(*(double*)ADDR(0x7C1230)); /* 0x007803F0: fld qword ptr [0x7c1230] */
    _st[0] *= *(double*)ADDR(0x7864E0); /* 0x007803F6: fmul qword ptr [0x7864e0] */
    { double _v = fp_pop(); *(double*)ADDR(0x8AAD98) = _v; } /* 0x007803FC: fstp qword ptr [0x8aad98] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00780402: ret  */

}

void sub_00780410(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780410u);

L_00780410:
    fp_push(*(float*)&MEM32(0x7C1338)); /* 0x00780410: fld dword ptr [0x7c1338] */
    _st[0] += _st[0]; /* 0x00780416: fadd st(0), st(0) */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8AADC4) = _v; } /* 0x00780418: fstp dword ptr [0x8aadc4] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0078041E: ret  */

}

void sub_00780420(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780420u);

L_00780420:
    fp_push(*(float*)&MEM32(0x7C1338)); /* 0x00780420: fld dword ptr [0x7c1338] */
    _st[0] *= (double)*(float*)ADDR(0x784260); /* 0x00780426: fmul dword ptr [0x784260] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8AADC0) = _v; } /* 0x0078042C: fstp dword ptr [0x8aadc0] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00780432: ret  */

}

void sub_00780440(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780440u);

L_00780440:
    fp_push(*(double*)ADDR(0x7C1340)); /* 0x00780440: fld qword ptr [0x7c1340] */
    _st[0] += _st[0]; /* 0x00780446: fadd st(0), st(0) */
    { double _v = fp_pop(); *(double*)ADDR(0x8AADB8) = _v; } /* 0x00780448: fstp qword ptr [0x8aadb8] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0078044E: ret  */

}

void sub_00780450(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780450u);

L_00780450:
    fp_push(*(double*)ADDR(0x7C1340)); /* 0x00780450: fld qword ptr [0x7c1340] */
    _st[0] *= *(double*)ADDR(0x7864E0); /* 0x00780456: fmul qword ptr [0x7864e0] */
    { double _v = fp_pop(); *(double*)ADDR(0x8AADB0) = _v; } /* 0x0078045C: fstp qword ptr [0x8aadb0] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00780462: ret  */

}

void sub_00780470(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780470u);

L_00780470:
    fp_push(*(float*)&MEM32(0x7C1348)); /* 0x00780470: fld dword ptr [0x7c1348] */
    _st[0] += _st[0]; /* 0x00780476: fadd st(0), st(0) */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8AADDC) = _v; } /* 0x00780478: fstp dword ptr [0x8aaddc] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0078047E: ret  */

}

void sub_00780480(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780480u);

L_00780480:
    fp_push(*(float*)&MEM32(0x7C1348)); /* 0x00780480: fld dword ptr [0x7c1348] */
    _st[0] *= (double)*(float*)ADDR(0x784260); /* 0x00780486: fmul dword ptr [0x784260] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8AADD8) = _v; } /* 0x0078048C: fstp dword ptr [0x8aadd8] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00780492: ret  */

}

void sub_007804A0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007804A0u);

L_007804A0:
    fp_push(*(double*)ADDR(0x7C1350)); /* 0x007804A0: fld qword ptr [0x7c1350] */
    _st[0] += _st[0]; /* 0x007804A6: fadd st(0), st(0) */
    { double _v = fp_pop(); *(double*)ADDR(0x8AADD0) = _v; } /* 0x007804A8: fstp qword ptr [0x8aadd0] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007804AE: ret  */

}

void sub_007804B0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007804B0u);

L_007804B0:
    fp_push(*(double*)ADDR(0x7C1350)); /* 0x007804B0: fld qword ptr [0x7c1350] */
    _st[0] *= *(double*)ADDR(0x7864E0); /* 0x007804B6: fmul qword ptr [0x7864e0] */
    { double _v = fp_pop(); *(double*)ADDR(0x8AADC8) = _v; } /* 0x007804BC: fstp qword ptr [0x8aadc8] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007804C2: ret  */

}

void sub_007804D0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007804D0u);

L_007804D0:
    fp_push(*(float*)&MEM32(0x7C1358)); /* 0x007804D0: fld dword ptr [0x7c1358] */
    _st[0] += _st[0]; /* 0x007804D6: fadd st(0), st(0) */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8AADF4) = _v; } /* 0x007804D8: fstp dword ptr [0x8aadf4] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007804DE: ret  */

}

void sub_007804E0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007804E0u);

L_007804E0:
    fp_push(*(float*)&MEM32(0x7C1358)); /* 0x007804E0: fld dword ptr [0x7c1358] */
    _st[0] *= (double)*(float*)ADDR(0x784260); /* 0x007804E6: fmul dword ptr [0x784260] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8AADF0) = _v; } /* 0x007804EC: fstp dword ptr [0x8aadf0] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007804F2: ret  */

}

void sub_00780500(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780500u);

L_00780500:
    fp_push(*(double*)ADDR(0x7C1360)); /* 0x00780500: fld qword ptr [0x7c1360] */
    _st[0] += _st[0]; /* 0x00780506: fadd st(0), st(0) */
    { double _v = fp_pop(); *(double*)ADDR(0x8AADE8) = _v; } /* 0x00780508: fstp qword ptr [0x8aade8] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0078050E: ret  */

}

void sub_00780510(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780510u);

L_00780510:
    fp_push(*(double*)ADDR(0x7C1360)); /* 0x00780510: fld qword ptr [0x7c1360] */
    _st[0] *= *(double*)ADDR(0x7864E0); /* 0x00780516: fmul qword ptr [0x7864e0] */
    { double _v = fp_pop(); *(double*)ADDR(0x8AADE0) = _v; } /* 0x0078051C: fstp qword ptr [0x8aade0] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00780522: ret  */

}

void sub_00780530(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780530u);

L_00780530:
    fp_push(*(float*)&MEM32(0x7C1468)); /* 0x00780530: fld dword ptr [0x7c1468] */
    _st[0] += _st[0]; /* 0x00780536: fadd st(0), st(0) */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8AAE0C) = _v; } /* 0x00780538: fstp dword ptr [0x8aae0c] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0078053E: ret  */

}

void sub_00780540(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780540u);

L_00780540:
    fp_push(*(float*)&MEM32(0x7C1468)); /* 0x00780540: fld dword ptr [0x7c1468] */
    _st[0] *= (double)*(float*)ADDR(0x784260); /* 0x00780546: fmul dword ptr [0x784260] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8AAE08) = _v; } /* 0x0078054C: fstp dword ptr [0x8aae08] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00780552: ret  */

}

void sub_00780560(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780560u);

L_00780560:
    fp_push(*(double*)ADDR(0x7C1470)); /* 0x00780560: fld qword ptr [0x7c1470] */
    _st[0] += _st[0]; /* 0x00780566: fadd st(0), st(0) */
    { double _v = fp_pop(); *(double*)ADDR(0x8AAE00) = _v; } /* 0x00780568: fstp qword ptr [0x8aae00] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0078056E: ret  */

}

void sub_00780570(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780570u);

L_00780570:
    fp_push(*(double*)ADDR(0x7C1470)); /* 0x00780570: fld qword ptr [0x7c1470] */
    _st[0] *= *(double*)ADDR(0x7864E0); /* 0x00780576: fmul qword ptr [0x7864e0] */
    { double _v = fp_pop(); *(double*)ADDR(0x8AADF8) = _v; } /* 0x0078057C: fstp qword ptr [0x8aadf8] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00780582: ret  */

}

void sub_00780590(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780590u);

L_00780590:
    fp_push(*(float*)&MEM32(0x7C14B8)); /* 0x00780590: fld dword ptr [0x7c14b8] */
    _st[0] += _st[0]; /* 0x00780596: fadd st(0), st(0) */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8AB2BC) = _v; } /* 0x00780598: fstp dword ptr [0x8ab2bc] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0078059E: ret  */

}

void sub_007805A0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007805A0u);

L_007805A0:
    fp_push(*(float*)&MEM32(0x7C14B8)); /* 0x007805A0: fld dword ptr [0x7c14b8] */
    _st[0] *= (double)*(float*)ADDR(0x784260); /* 0x007805A6: fmul dword ptr [0x784260] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8AB2B8) = _v; } /* 0x007805AC: fstp dword ptr [0x8ab2b8] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007805B2: ret  */

}

void sub_007805C0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007805C0u);

L_007805C0:
    fp_push(*(double*)ADDR(0x7C14C0)); /* 0x007805C0: fld qword ptr [0x7c14c0] */
    _st[0] += _st[0]; /* 0x007805C6: fadd st(0), st(0) */
    { double _v = fp_pop(); *(double*)ADDR(0x8AB2B0) = _v; } /* 0x007805C8: fstp qword ptr [0x8ab2b0] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007805CE: ret  */

}

void sub_007805D0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007805D0u);

L_007805D0:
    fp_push(*(double*)ADDR(0x7C14C0)); /* 0x007805D0: fld qword ptr [0x7c14c0] */
    _st[0] *= *(double*)ADDR(0x7864E0); /* 0x007805D6: fmul qword ptr [0x7864e0] */
    { double _v = fp_pop(); *(double*)ADDR(0x8AB2A8) = _v; } /* 0x007805DC: fstp qword ptr [0x8ab2a8] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007805E2: ret  */

}

void sub_007805F0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007805F0u);

L_007805F0:
    fp_push(*(float*)&MEM32(0x7C14E4)); /* 0x007805F0: fld dword ptr [0x7c14e4] */
    _st[0] -= (double)*(float*)ADDR(0x7C14E0); /* 0x007805F6: fsub dword ptr [0x7c14e0] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8AB29C) = _v; } /* 0x007805FC: fstp dword ptr [0x8ab29c] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00780602: ret  */

}

void sub_00780610(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780610u);

L_00780610:
    fp_push(*(float*)&MEM32(0x7C14DC)); /* 0x00780610: fld dword ptr [0x7c14dc] */
    _st[0] += _st[0]; /* 0x00780616: fadd st(0), st(0) */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8AB2A0) = _v; } /* 0x00780618: fstp dword ptr [0x8ab2a0] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0078061E: ret  */

}

void sub_00780620(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780620u);

L_00780620:
    fp_push(*(float*)&MEM32(0x7C14D0)); /* 0x00780620: fld dword ptr [0x7c14d0] */
    _st[0] += _st[0]; /* 0x00780626: fadd st(0), st(0) */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8AB2C0) = _v; } /* 0x00780628: fstp dword ptr [0x8ab2c0] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0078062E: ret  */

}

void sub_00780630(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780630u);

L_00780630:
    fp_push(*(float*)&MEM32(0x7C14D8)); /* 0x00780630: fld dword ptr [0x7c14d8] */
    _st[0] += _st[0]; /* 0x00780636: fadd st(0), st(0) */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8AB298) = _v; } /* 0x00780638: fstp dword ptr [0x8ab298] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0078063E: ret  */

}

void sub_00780640(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780640u);

L_00780640:
    fp_push(*(float*)&MEM32(0x7C1AF0)); /* 0x00780640: fld dword ptr [0x7c1af0] */
    _st[0] += _st[0]; /* 0x00780646: fadd st(0), st(0) */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8AB2DC) = _v; } /* 0x00780648: fstp dword ptr [0x8ab2dc] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0078064E: ret  */

}

void sub_00780650(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780650u);

L_00780650:
    fp_push(*(float*)&MEM32(0x7C1AF0)); /* 0x00780650: fld dword ptr [0x7c1af0] */
    _st[0] *= (double)*(float*)ADDR(0x784260); /* 0x00780656: fmul dword ptr [0x784260] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8AB2D8) = _v; } /* 0x0078065C: fstp dword ptr [0x8ab2d8] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00780662: ret  */

}

void sub_00780670(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780670u);

L_00780670:
    fp_push(*(double*)ADDR(0x7C1AF8)); /* 0x00780670: fld qword ptr [0x7c1af8] */
    _st[0] += _st[0]; /* 0x00780676: fadd st(0), st(0) */
    { double _v = fp_pop(); *(double*)ADDR(0x8AB2D0) = _v; } /* 0x00780678: fstp qword ptr [0x8ab2d0] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0078067E: ret  */

}

void sub_00780680(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780680u);

L_00780680:
    fp_push(*(double*)ADDR(0x7C1AF8)); /* 0x00780680: fld qword ptr [0x7c1af8] */
    _st[0] *= *(double*)ADDR(0x7864E0); /* 0x00780686: fmul qword ptr [0x7864e0] */
    { double _v = fp_pop(); *(double*)ADDR(0x8AB2C8) = _v; } /* 0x0078068C: fstp qword ptr [0x8ab2c8] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00780692: ret  */

}

void sub_007806A0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007806A0u);

L_007806A0:
    fp_push(*(float*)&MEM32(0x7C1B08)); /* 0x007806A0: fld dword ptr [0x7c1b08] */
    _st[0] += _st[0]; /* 0x007806A6: fadd st(0), st(0) */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8AB2F4) = _v; } /* 0x007806A8: fstp dword ptr [0x8ab2f4] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007806AE: ret  */

}

void sub_007806B0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007806B0u);

L_007806B0:
    fp_push(*(float*)&MEM32(0x7C1B08)); /* 0x007806B0: fld dword ptr [0x7c1b08] */
    _st[0] *= (double)*(float*)ADDR(0x784260); /* 0x007806B6: fmul dword ptr [0x784260] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8AB2F0) = _v; } /* 0x007806BC: fstp dword ptr [0x8ab2f0] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007806C2: ret  */

}

void sub_007806D0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007806D0u);

L_007806D0:
    fp_push(*(double*)ADDR(0x7C1B10)); /* 0x007806D0: fld qword ptr [0x7c1b10] */
    _st[0] += _st[0]; /* 0x007806D6: fadd st(0), st(0) */
    { double _v = fp_pop(); *(double*)ADDR(0x8AB2E8) = _v; } /* 0x007806D8: fstp qword ptr [0x8ab2e8] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007806DE: ret  */

}

void sub_007806E0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007806E0u);

L_007806E0:
    fp_push(*(double*)ADDR(0x7C1B10)); /* 0x007806E0: fld qword ptr [0x7c1b10] */
    _st[0] *= *(double*)ADDR(0x7864E0); /* 0x007806E6: fmul qword ptr [0x7864e0] */
    { double _v = fp_pop(); *(double*)ADDR(0x8AB2E0) = _v; } /* 0x007806EC: fstp qword ptr [0x8ab2e0] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007806F2: ret  */

}

void sub_00780700(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780700u);

L_00780700:
    fp_push(*(float*)&MEM32(0x7C1B20)); /* 0x00780700: fld dword ptr [0x7c1b20] */
    _st[0] += _st[0]; /* 0x00780706: fadd st(0), st(0) */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8AB314) = _v; } /* 0x00780708: fstp dword ptr [0x8ab314] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0078070E: ret  */

}

void sub_00780710(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780710u);

L_00780710:
    fp_push(*(float*)&MEM32(0x7C1B20)); /* 0x00780710: fld dword ptr [0x7c1b20] */
    _st[0] *= (double)*(float*)ADDR(0x784260); /* 0x00780716: fmul dword ptr [0x784260] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8AB310) = _v; } /* 0x0078071C: fstp dword ptr [0x8ab310] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00780722: ret  */

}

void sub_00780730(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780730u);

L_00780730:
    fp_push(*(double*)ADDR(0x7C1B28)); /* 0x00780730: fld qword ptr [0x7c1b28] */
    _st[0] += _st[0]; /* 0x00780736: fadd st(0), st(0) */
    { double _v = fp_pop(); *(double*)ADDR(0x8AB308) = _v; } /* 0x00780738: fstp qword ptr [0x8ab308] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0078073E: ret  */

}

void sub_00780740(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780740u);

L_00780740:
    fp_push(*(double*)ADDR(0x7C1B28)); /* 0x00780740: fld qword ptr [0x7c1b28] */
    _st[0] *= *(double*)ADDR(0x7864E0); /* 0x00780746: fmul qword ptr [0x7864e0] */
    { double _v = fp_pop(); *(double*)ADDR(0x8AB300) = _v; } /* 0x0078074C: fstp qword ptr [0x8ab300] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00780752: ret  */

}

void sub_00780760(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780760u);

L_00780760:
    fp_push(*(float*)&MEM32(0x7C1B30)); /* 0x00780760: fld dword ptr [0x7c1b30] */
    _st[0] += _st[0]; /* 0x00780766: fadd st(0), st(0) */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8AB354) = _v; } /* 0x00780768: fstp dword ptr [0x8ab354] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0078076E: ret  */

}

void sub_00780770(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780770u);

L_00780770:
    fp_push(*(float*)&MEM32(0x7C1B30)); /* 0x00780770: fld dword ptr [0x7c1b30] */
    _st[0] *= (double)*(float*)ADDR(0x784260); /* 0x00780776: fmul dword ptr [0x784260] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8AB350) = _v; } /* 0x0078077C: fstp dword ptr [0x8ab350] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00780782: ret  */

}

void sub_00780790(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780790u);

L_00780790:
    fp_push(*(double*)ADDR(0x7C1B38)); /* 0x00780790: fld qword ptr [0x7c1b38] */
    _st[0] += _st[0]; /* 0x00780796: fadd st(0), st(0) */
    { double _v = fp_pop(); *(double*)ADDR(0x8AB348) = _v; } /* 0x00780798: fstp qword ptr [0x8ab348] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0078079E: ret  */

}

void sub_007807A0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007807A0u);

L_007807A0:
    fp_push(*(double*)ADDR(0x7C1B38)); /* 0x007807A0: fld qword ptr [0x7c1b38] */
    _st[0] *= *(double*)ADDR(0x7864E0); /* 0x007807A6: fmul qword ptr [0x7864e0] */
    { double _v = fp_pop(); *(double*)ADDR(0x8AB340) = _v; } /* 0x007807AC: fstp qword ptr [0x8ab340] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007807B2: ret  */

}

void sub_007807C0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007807C0u);

L_007807C0:
    eax = 0x008AB320u; /* 0x007807C0: mov eax, 0x8ab320 */
    ecx = 3; /* 0x007807C5: mov ecx, 3 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x007807CA: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    esp = esp; /* 0x007807CC: lea esp, [esp] */

L_007807D0:
    MEM32(eax + (-0x8)) = edx; /* 0x007807D0: mov dword ptr [eax - 8], edx */
    MEM32(eax + (-0x4)) = edx; /* 0x007807D3: mov dword ptr [eax - 4], edx */
    MEM32(eax) = edx; /* 0x007807D6: mov dword ptr [eax], edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x007807D8: add eax, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x007807DB: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_007807D0; /* 0x007807DC: jne 0x7807d0 */

L_007807DE:
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007807DE: ret  */

}

void sub_007807E0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007807E0u);

L_007807E0:
    fp_push(*(float*)&MEM32(0x7C1B40)); /* 0x007807E0: fld dword ptr [0x7c1b40] */
    _st[0] += _st[0]; /* 0x007807E6: fadd st(0), st(0) */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8AB36C) = _v; } /* 0x007807E8: fstp dword ptr [0x8ab36c] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007807EE: ret  */

}

void sub_007807F0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007807F0u);

L_007807F0:
    fp_push(*(float*)&MEM32(0x7C1B40)); /* 0x007807F0: fld dword ptr [0x7c1b40] */
    _st[0] *= (double)*(float*)ADDR(0x784260); /* 0x007807F6: fmul dword ptr [0x784260] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8AB368) = _v; } /* 0x007807FC: fstp dword ptr [0x8ab368] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00780802: ret  */

}

void sub_00780810(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780810u);

L_00780810:
    fp_push(*(double*)ADDR(0x7C1B48)); /* 0x00780810: fld qword ptr [0x7c1b48] */
    _st[0] += _st[0]; /* 0x00780816: fadd st(0), st(0) */
    { double _v = fp_pop(); *(double*)ADDR(0x8AB360) = _v; } /* 0x00780818: fstp qword ptr [0x8ab360] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0078081E: ret  */

}

void sub_00780820(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780820u);

L_00780820:
    fp_push(*(double*)ADDR(0x7C1B48)); /* 0x00780820: fld qword ptr [0x7c1b48] */
    _st[0] *= *(double*)ADDR(0x7864E0); /* 0x00780826: fmul qword ptr [0x7864e0] */
    { double _v = fp_pop(); *(double*)ADDR(0x8AB358) = _v; } /* 0x0078082C: fstp qword ptr [0x8ab358] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00780832: ret  */

}

void sub_00780840(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780840u);

L_00780840:
    fp_push(*(float*)&MEM32(0x7C1B50)); /* 0x00780840: fld dword ptr [0x7c1b50] */
    _st[0] += _st[0]; /* 0x00780846: fadd st(0), st(0) */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8AB384) = _v; } /* 0x00780848: fstp dword ptr [0x8ab384] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0078084E: ret  */

}

void sub_00780850(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780850u);

L_00780850:
    fp_push(*(float*)&MEM32(0x7C1B50)); /* 0x00780850: fld dword ptr [0x7c1b50] */
    _st[0] *= (double)*(float*)ADDR(0x784260); /* 0x00780856: fmul dword ptr [0x784260] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8AB380) = _v; } /* 0x0078085C: fstp dword ptr [0x8ab380] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00780862: ret  */

}

void sub_00780870(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780870u);

L_00780870:
    fp_push(*(double*)ADDR(0x7C1B58)); /* 0x00780870: fld qword ptr [0x7c1b58] */
    _st[0] += _st[0]; /* 0x00780876: fadd st(0), st(0) */
    { double _v = fp_pop(); *(double*)ADDR(0x8AB378) = _v; } /* 0x00780878: fstp qword ptr [0x8ab378] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0078087E: ret  */

}

void sub_00780880(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780880u);

L_00780880:
    fp_push(*(double*)ADDR(0x7C1B58)); /* 0x00780880: fld qword ptr [0x7c1b58] */
    _st[0] *= *(double*)ADDR(0x7864E0); /* 0x00780886: fmul qword ptr [0x7864e0] */
    { double _v = fp_pop(); *(double*)ADDR(0x8AB370) = _v; } /* 0x0078088C: fstp qword ptr [0x8ab370] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00780892: ret  */

}

void sub_007808A0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007808A0u);

L_007808A0:
    fp_push(*(float*)&MEM32(0x7C1BB8)); /* 0x007808A0: fld dword ptr [0x7c1bb8] */
    _st[0] += _st[0]; /* 0x007808A6: fadd st(0), st(0) */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8AB39C) = _v; } /* 0x007808A8: fstp dword ptr [0x8ab39c] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007808AE: ret  */

}

void sub_007808B0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007808B0u);

L_007808B0:
    fp_push(*(float*)&MEM32(0x7C1BB8)); /* 0x007808B0: fld dword ptr [0x7c1bb8] */
    _st[0] *= (double)*(float*)ADDR(0x784260); /* 0x007808B6: fmul dword ptr [0x784260] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8AB398) = _v; } /* 0x007808BC: fstp dword ptr [0x8ab398] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007808C2: ret  */

}

void sub_007808D0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007808D0u);

L_007808D0:
    fp_push(*(double*)ADDR(0x7C1BC0)); /* 0x007808D0: fld qword ptr [0x7c1bc0] */
    _st[0] += _st[0]; /* 0x007808D6: fadd st(0), st(0) */
    { double _v = fp_pop(); *(double*)ADDR(0x8AB390) = _v; } /* 0x007808D8: fstp qword ptr [0x8ab390] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007808DE: ret  */

}

void sub_007808E0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007808E0u);

L_007808E0:
    fp_push(*(double*)ADDR(0x7C1BC0)); /* 0x007808E0: fld qword ptr [0x7c1bc0] */
    _st[0] *= *(double*)ADDR(0x7864E0); /* 0x007808E6: fmul qword ptr [0x7864e0] */
    { double _v = fp_pop(); *(double*)ADDR(0x8AB388) = _v; } /* 0x007808EC: fstp qword ptr [0x8ab388] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007808F2: ret  */

}

void sub_00780900(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780900u);

L_00780900:
    fp_push(*(float*)&MEM32(0x7C1BD0)); /* 0x00780900: fld dword ptr [0x7c1bd0] */
    _st[0] += _st[0]; /* 0x00780906: fadd st(0), st(0) */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8AB3B4) = _v; } /* 0x00780908: fstp dword ptr [0x8ab3b4] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0078090E: ret  */

}

void sub_00780910(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780910u);

L_00780910:
    fp_push(*(float*)&MEM32(0x7C1BD0)); /* 0x00780910: fld dword ptr [0x7c1bd0] */
    _st[0] *= (double)*(float*)ADDR(0x784260); /* 0x00780916: fmul dword ptr [0x784260] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8AB3B0) = _v; } /* 0x0078091C: fstp dword ptr [0x8ab3b0] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00780922: ret  */

}

void sub_00780930(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780930u);

L_00780930:
    fp_push(*(double*)ADDR(0x7C1BD8)); /* 0x00780930: fld qword ptr [0x7c1bd8] */
    _st[0] += _st[0]; /* 0x00780936: fadd st(0), st(0) */
    { double _v = fp_pop(); *(double*)ADDR(0x8AB3A8) = _v; } /* 0x00780938: fstp qword ptr [0x8ab3a8] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0078093E: ret  */

}

void sub_00780940(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780940u);

L_00780940:
    fp_push(*(double*)ADDR(0x7C1BD8)); /* 0x00780940: fld qword ptr [0x7c1bd8] */
    _st[0] *= *(double*)ADDR(0x7864E0); /* 0x00780946: fmul qword ptr [0x7864e0] */
    { double _v = fp_pop(); *(double*)ADDR(0x8AB3A0) = _v; } /* 0x0078094C: fstp qword ptr [0x8ab3a0] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00780952: ret  */

}

void sub_00780960(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780960u);

L_00780960:
    fp_push(*(float*)&MEM32(0x7C1BE0)); /* 0x00780960: fld dword ptr [0x7c1be0] */
    _st[0] += _st[0]; /* 0x00780966: fadd st(0), st(0) */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8AB3CC) = _v; } /* 0x00780968: fstp dword ptr [0x8ab3cc] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0078096E: ret  */

}

void sub_00780970(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780970u);

L_00780970:
    fp_push(*(float*)&MEM32(0x7C1BE0)); /* 0x00780970: fld dword ptr [0x7c1be0] */
    _st[0] *= (double)*(float*)ADDR(0x784260); /* 0x00780976: fmul dword ptr [0x784260] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8AB3C8) = _v; } /* 0x0078097C: fstp dword ptr [0x8ab3c8] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00780982: ret  */

}

void sub_00780990(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780990u);

L_00780990:
    fp_push(*(double*)ADDR(0x7C1BE8)); /* 0x00780990: fld qword ptr [0x7c1be8] */
    _st[0] += _st[0]; /* 0x00780996: fadd st(0), st(0) */
    { double _v = fp_pop(); *(double*)ADDR(0x8AB3C0) = _v; } /* 0x00780998: fstp qword ptr [0x8ab3c0] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0078099E: ret  */

}

void sub_007809A0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007809A0u);

L_007809A0:
    fp_push(*(double*)ADDR(0x7C1BE8)); /* 0x007809A0: fld qword ptr [0x7c1be8] */
    _st[0] *= *(double*)ADDR(0x7864E0); /* 0x007809A6: fmul qword ptr [0x7864e0] */
    { double _v = fp_pop(); *(double*)ADDR(0x8AB3B8) = _v; } /* 0x007809AC: fstp qword ptr [0x8ab3b8] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007809B2: ret  */

}

void sub_007809C0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007809C0u);

L_007809C0:
    fp_push(*(float*)&MEM32(0x7C1BF8)); /* 0x007809C0: fld dword ptr [0x7c1bf8] */
    _st[0] += _st[0]; /* 0x007809C6: fadd st(0), st(0) */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8AB3E4) = _v; } /* 0x007809C8: fstp dword ptr [0x8ab3e4] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007809CE: ret  */

}

void sub_007809D0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007809D0u);

L_007809D0:
    fp_push(*(float*)&MEM32(0x7C1BF8)); /* 0x007809D0: fld dword ptr [0x7c1bf8] */
    _st[0] *= (double)*(float*)ADDR(0x784260); /* 0x007809D6: fmul dword ptr [0x784260] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8AB3E0) = _v; } /* 0x007809DC: fstp dword ptr [0x8ab3e0] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007809E2: ret  */

}

void sub_007809F0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007809F0u);

L_007809F0:
    fp_push(*(double*)ADDR(0x7C1C00)); /* 0x007809F0: fld qword ptr [0x7c1c00] */
    _st[0] += _st[0]; /* 0x007809F6: fadd st(0), st(0) */
    { double _v = fp_pop(); *(double*)ADDR(0x8AB3D8) = _v; } /* 0x007809F8: fstp qword ptr [0x8ab3d8] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007809FE: ret  */

}

void sub_00780A00(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780A00u);

L_00780A00:
    fp_push(*(double*)ADDR(0x7C1C00)); /* 0x00780A00: fld qword ptr [0x7c1c00] */
    _st[0] *= *(double*)ADDR(0x7864E0); /* 0x00780A06: fmul qword ptr [0x7864e0] */
    { double _v = fp_pop(); *(double*)ADDR(0x8AB3D0) = _v; } /* 0x00780A0C: fstp qword ptr [0x8ab3d0] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00780A12: ret  */

}

void sub_00780A20(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780A20u);

L_00780A20:
    fp_push(*(float*)&MEM32(0x7C1C10)); /* 0x00780A20: fld dword ptr [0x7c1c10] */
    _st[0] += _st[0]; /* 0x00780A26: fadd st(0), st(0) */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8AB3FC) = _v; } /* 0x00780A28: fstp dword ptr [0x8ab3fc] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00780A2E: ret  */

}

void sub_00780A30(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780A30u);

L_00780A30:
    fp_push(*(float*)&MEM32(0x7C1C10)); /* 0x00780A30: fld dword ptr [0x7c1c10] */
    _st[0] *= (double)*(float*)ADDR(0x784260); /* 0x00780A36: fmul dword ptr [0x784260] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8AB3F8) = _v; } /* 0x00780A3C: fstp dword ptr [0x8ab3f8] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00780A42: ret  */

}

void sub_00780A50(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780A50u);

L_00780A50:
    fp_push(*(double*)ADDR(0x7C1C18)); /* 0x00780A50: fld qword ptr [0x7c1c18] */
    _st[0] += _st[0]; /* 0x00780A56: fadd st(0), st(0) */
    { double _v = fp_pop(); *(double*)ADDR(0x8AB3F0) = _v; } /* 0x00780A58: fstp qword ptr [0x8ab3f0] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00780A5E: ret  */

}

void sub_00780A60(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780A60u);

L_00780A60:
    fp_push(*(double*)ADDR(0x7C1C18)); /* 0x00780A60: fld qword ptr [0x7c1c18] */
    _st[0] *= *(double*)ADDR(0x7864E0); /* 0x00780A66: fmul qword ptr [0x7864e0] */
    { double _v = fp_pop(); *(double*)ADDR(0x8AB3E8) = _v; } /* 0x00780A6C: fstp qword ptr [0x8ab3e8] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00780A72: ret  */

}

void sub_00780A80(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780A80u);

L_00780A80:
    fp_push(*(float*)&MEM32(0x7C1C28)); /* 0x00780A80: fld dword ptr [0x7c1c28] */
    _st[0] += _st[0]; /* 0x00780A86: fadd st(0), st(0) */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8AB414) = _v; } /* 0x00780A88: fstp dword ptr [0x8ab414] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00780A8E: ret  */

}

void sub_00780A90(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780A90u);

L_00780A90:
    fp_push(*(float*)&MEM32(0x7C1C28)); /* 0x00780A90: fld dword ptr [0x7c1c28] */
    _st[0] *= (double)*(float*)ADDR(0x784260); /* 0x00780A96: fmul dword ptr [0x784260] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8AB410) = _v; } /* 0x00780A9C: fstp dword ptr [0x8ab410] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00780AA2: ret  */

}

void sub_00780AB0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780AB0u);

L_00780AB0:
    fp_push(*(double*)ADDR(0x7C1C30)); /* 0x00780AB0: fld qword ptr [0x7c1c30] */
    _st[0] += _st[0]; /* 0x00780AB6: fadd st(0), st(0) */
    { double _v = fp_pop(); *(double*)ADDR(0x8AB408) = _v; } /* 0x00780AB8: fstp qword ptr [0x8ab408] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00780ABE: ret  */

}

void sub_00780AC0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780AC0u);

L_00780AC0:
    fp_push(*(double*)ADDR(0x7C1C30)); /* 0x00780AC0: fld qword ptr [0x7c1c30] */
    _st[0] *= *(double*)ADDR(0x7864E0); /* 0x00780AC6: fmul qword ptr [0x7864e0] */
    { double _v = fp_pop(); *(double*)ADDR(0x8AB400) = _v; } /* 0x00780ACC: fstp qword ptr [0x8ab400] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00780AD2: ret  */

}

void sub_00780AE0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780AE0u);

L_00780AE0:
    fp_push(*(float*)&MEM32(0x7C1C38)); /* 0x00780AE0: fld dword ptr [0x7c1c38] */
    _st[0] += _st[0]; /* 0x00780AE6: fadd st(0), st(0) */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8AB42C) = _v; } /* 0x00780AE8: fstp dword ptr [0x8ab42c] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00780AEE: ret  */

}

void sub_00780AF0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780AF0u);

L_00780AF0:
    fp_push(*(float*)&MEM32(0x7C1C38)); /* 0x00780AF0: fld dword ptr [0x7c1c38] */
    _st[0] *= (double)*(float*)ADDR(0x784260); /* 0x00780AF6: fmul dword ptr [0x784260] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8AB428) = _v; } /* 0x00780AFC: fstp dword ptr [0x8ab428] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00780B02: ret  */

}

void sub_00780B10(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780B10u);

L_00780B10:
    fp_push(*(double*)ADDR(0x7C1C40)); /* 0x00780B10: fld qword ptr [0x7c1c40] */
    _st[0] += _st[0]; /* 0x00780B16: fadd st(0), st(0) */
    { double _v = fp_pop(); *(double*)ADDR(0x8AB420) = _v; } /* 0x00780B18: fstp qword ptr [0x8ab420] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00780B1E: ret  */

}

void sub_00780B20(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780B20u);

L_00780B20:
    fp_push(*(double*)ADDR(0x7C1C40)); /* 0x00780B20: fld qword ptr [0x7c1c40] */
    _st[0] *= *(double*)ADDR(0x7864E0); /* 0x00780B26: fmul qword ptr [0x7864e0] */
    { double _v = fp_pop(); *(double*)ADDR(0x8AB418) = _v; } /* 0x00780B2C: fstp qword ptr [0x8ab418] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00780B32: ret  */

}

void sub_00780B40(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780B40u);

L_00780B40:
    fp_push(*(float*)&MEM32(0x7C1C50)); /* 0x00780B40: fld dword ptr [0x7c1c50] */
    _st[0] += _st[0]; /* 0x00780B46: fadd st(0), st(0) */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8AB444) = _v; } /* 0x00780B48: fstp dword ptr [0x8ab444] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00780B4E: ret  */

}

void sub_00780B50(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780B50u);

L_00780B50:
    fp_push(*(float*)&MEM32(0x7C1C50)); /* 0x00780B50: fld dword ptr [0x7c1c50] */
    _st[0] *= (double)*(float*)ADDR(0x784260); /* 0x00780B56: fmul dword ptr [0x784260] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8AB440) = _v; } /* 0x00780B5C: fstp dword ptr [0x8ab440] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00780B62: ret  */

}

void sub_00780B70(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780B70u);

L_00780B70:
    fp_push(*(double*)ADDR(0x7C1C58)); /* 0x00780B70: fld qword ptr [0x7c1c58] */
    _st[0] += _st[0]; /* 0x00780B76: fadd st(0), st(0) */
    { double _v = fp_pop(); *(double*)ADDR(0x8AB438) = _v; } /* 0x00780B78: fstp qword ptr [0x8ab438] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00780B7E: ret  */

}

void sub_00780B80(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780B80u);

L_00780B80:
    fp_push(*(double*)ADDR(0x7C1C58)); /* 0x00780B80: fld qword ptr [0x7c1c58] */
    _st[0] *= *(double*)ADDR(0x7864E0); /* 0x00780B86: fmul qword ptr [0x7864e0] */
    { double _v = fp_pop(); *(double*)ADDR(0x8AB430) = _v; } /* 0x00780B8C: fstp qword ptr [0x8ab430] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00780B92: ret  */

}

void sub_00780BA0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780BA0u);

L_00780BA0:
    fp_push(*(float*)&MEM32(0x7C1C68)); /* 0x00780BA0: fld dword ptr [0x7c1c68] */
    _st[0] += _st[0]; /* 0x00780BA6: fadd st(0), st(0) */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8AB45C) = _v; } /* 0x00780BA8: fstp dword ptr [0x8ab45c] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00780BAE: ret  */

}

void sub_00780BB0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780BB0u);

L_00780BB0:
    fp_push(*(float*)&MEM32(0x7C1C68)); /* 0x00780BB0: fld dword ptr [0x7c1c68] */
    _st[0] *= (double)*(float*)ADDR(0x784260); /* 0x00780BB6: fmul dword ptr [0x784260] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8AB458) = _v; } /* 0x00780BBC: fstp dword ptr [0x8ab458] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00780BC2: ret  */

}

void sub_00780BD0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780BD0u);

L_00780BD0:
    fp_push(*(double*)ADDR(0x7C1C70)); /* 0x00780BD0: fld qword ptr [0x7c1c70] */
    _st[0] += _st[0]; /* 0x00780BD6: fadd st(0), st(0) */
    { double _v = fp_pop(); *(double*)ADDR(0x8AB450) = _v; } /* 0x00780BD8: fstp qword ptr [0x8ab450] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00780BDE: ret  */

}

void sub_00780BE0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780BE0u);

L_00780BE0:
    fp_push(*(double*)ADDR(0x7C1C70)); /* 0x00780BE0: fld qword ptr [0x7c1c70] */
    _st[0] *= *(double*)ADDR(0x7864E0); /* 0x00780BE6: fmul qword ptr [0x7864e0] */
    { double _v = fp_pop(); *(double*)ADDR(0x8AB448) = _v; } /* 0x00780BEC: fstp qword ptr [0x8ab448] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00780BF2: ret  */

}

void sub_00780C00(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780C00u);

L_00780C00:
    fp_push(*(float*)&MEM32(0x7C1C80)); /* 0x00780C00: fld dword ptr [0x7c1c80] */
    _st[0] += _st[0]; /* 0x00780C06: fadd st(0), st(0) */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8AB474) = _v; } /* 0x00780C08: fstp dword ptr [0x8ab474] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00780C0E: ret  */

}

void sub_00780C10(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780C10u);

L_00780C10:
    fp_push(*(float*)&MEM32(0x7C1C80)); /* 0x00780C10: fld dword ptr [0x7c1c80] */
    _st[0] *= (double)*(float*)ADDR(0x784260); /* 0x00780C16: fmul dword ptr [0x784260] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8AB470) = _v; } /* 0x00780C1C: fstp dword ptr [0x8ab470] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00780C22: ret  */

}

void sub_00780C30(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780C30u);

L_00780C30:
    fp_push(*(double*)ADDR(0x7C1C88)); /* 0x00780C30: fld qword ptr [0x7c1c88] */
    _st[0] += _st[0]; /* 0x00780C36: fadd st(0), st(0) */
    { double _v = fp_pop(); *(double*)ADDR(0x8AB468) = _v; } /* 0x00780C38: fstp qword ptr [0x8ab468] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00780C3E: ret  */

}

void sub_00780C40(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780C40u);

L_00780C40:
    fp_push(*(double*)ADDR(0x7C1C88)); /* 0x00780C40: fld qword ptr [0x7c1c88] */
    _st[0] *= *(double*)ADDR(0x7864E0); /* 0x00780C46: fmul qword ptr [0x7864e0] */
    { double _v = fp_pop(); *(double*)ADDR(0x8AB460) = _v; } /* 0x00780C4C: fstp qword ptr [0x8ab460] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00780C52: ret  */

}

void sub_00780C60(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780C60u);

L_00780C60:
    fp_push(*(float*)&MEM32(0x7C1C98)); /* 0x00780C60: fld dword ptr [0x7c1c98] */
    _st[0] += _st[0]; /* 0x00780C66: fadd st(0), st(0) */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8AB48C) = _v; } /* 0x00780C68: fstp dword ptr [0x8ab48c] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00780C6E: ret  */

}

void sub_00780C70(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780C70u);

L_00780C70:
    fp_push(*(float*)&MEM32(0x7C1C98)); /* 0x00780C70: fld dword ptr [0x7c1c98] */
    _st[0] *= (double)*(float*)ADDR(0x784260); /* 0x00780C76: fmul dword ptr [0x784260] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8AB488) = _v; } /* 0x00780C7C: fstp dword ptr [0x8ab488] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00780C82: ret  */

}

void sub_00780C90(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780C90u);

L_00780C90:
    fp_push(*(double*)ADDR(0x7C1CA0)); /* 0x00780C90: fld qword ptr [0x7c1ca0] */
    _st[0] += _st[0]; /* 0x00780C96: fadd st(0), st(0) */
    { double _v = fp_pop(); *(double*)ADDR(0x8AB480) = _v; } /* 0x00780C98: fstp qword ptr [0x8ab480] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00780C9E: ret  */

}

void sub_00780CA0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780CA0u);

L_00780CA0:
    fp_push(*(double*)ADDR(0x7C1CA0)); /* 0x00780CA0: fld qword ptr [0x7c1ca0] */
    _st[0] *= *(double*)ADDR(0x7864E0); /* 0x00780CA6: fmul qword ptr [0x7864e0] */
    { double _v = fp_pop(); *(double*)ADDR(0x8AB478) = _v; } /* 0x00780CAC: fstp qword ptr [0x8ab478] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00780CB2: ret  */

}

void sub_00780CC0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780CC0u);

L_00780CC0:
    fp_push(*(float*)&MEM32(0x7C1CB0)); /* 0x00780CC0: fld dword ptr [0x7c1cb0] */
    _st[0] += _st[0]; /* 0x00780CC6: fadd st(0), st(0) */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8AB4A4) = _v; } /* 0x00780CC8: fstp dword ptr [0x8ab4a4] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00780CCE: ret  */

}

void sub_00780CD0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780CD0u);

L_00780CD0:
    fp_push(*(float*)&MEM32(0x7C1CB0)); /* 0x00780CD0: fld dword ptr [0x7c1cb0] */
    _st[0] *= (double)*(float*)ADDR(0x784260); /* 0x00780CD6: fmul dword ptr [0x784260] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8AB4A0) = _v; } /* 0x00780CDC: fstp dword ptr [0x8ab4a0] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00780CE2: ret  */

}

void sub_00780CF0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780CF0u);

L_00780CF0:
    fp_push(*(double*)ADDR(0x7C1CB8)); /* 0x00780CF0: fld qword ptr [0x7c1cb8] */
    _st[0] += _st[0]; /* 0x00780CF6: fadd st(0), st(0) */
    { double _v = fp_pop(); *(double*)ADDR(0x8AB498) = _v; } /* 0x00780CF8: fstp qword ptr [0x8ab498] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00780CFE: ret  */

}

void sub_00780D00(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780D00u);

L_00780D00:
    fp_push(*(double*)ADDR(0x7C1CB8)); /* 0x00780D00: fld qword ptr [0x7c1cb8] */
    _st[0] *= *(double*)ADDR(0x7864E0); /* 0x00780D06: fmul qword ptr [0x7864e0] */
    { double _v = fp_pop(); *(double*)ADDR(0x8AB490) = _v; } /* 0x00780D0C: fstp qword ptr [0x8ab490] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00780D12: ret  */

}

void sub_00780D20(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780D20u);

L_00780D20:
    fp_push(*(float*)&MEM32(0x7C1CC8)); /* 0x00780D20: fld dword ptr [0x7c1cc8] */
    _st[0] += _st[0]; /* 0x00780D26: fadd st(0), st(0) */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8AB4DC) = _v; } /* 0x00780D28: fstp dword ptr [0x8ab4dc] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00780D2E: ret  */

}

void sub_00780D30(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780D30u);

L_00780D30:
    fp_push(*(float*)&MEM32(0x7C1CC8)); /* 0x00780D30: fld dword ptr [0x7c1cc8] */
    _st[0] *= (double)*(float*)ADDR(0x784260); /* 0x00780D36: fmul dword ptr [0x784260] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8AB4D8) = _v; } /* 0x00780D3C: fstp dword ptr [0x8ab4d8] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00780D42: ret  */

}

void sub_00780D50(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780D50u);

L_00780D50:
    fp_push(*(double*)ADDR(0x7C1CD0)); /* 0x00780D50: fld qword ptr [0x7c1cd0] */
    _st[0] += _st[0]; /* 0x00780D56: fadd st(0), st(0) */
    { double _v = fp_pop(); *(double*)ADDR(0x8AB4D0) = _v; } /* 0x00780D58: fstp qword ptr [0x8ab4d0] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00780D5E: ret  */

}

void sub_00780D60(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780D60u);

L_00780D60:
    fp_push(*(double*)ADDR(0x7C1CD0)); /* 0x00780D60: fld qword ptr [0x7c1cd0] */
    _st[0] *= *(double*)ADDR(0x7864E0); /* 0x00780D66: fmul qword ptr [0x7864e0] */
    { double _v = fp_pop(); *(double*)ADDR(0x8AB4C8) = _v; } /* 0x00780D6C: fstp qword ptr [0x8ab4c8] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00780D72: ret  */

}

void sub_00780D80(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780D80u);

L_00780D80:
    fp_push(*(float*)&MEM32(0x7C1CF8)); /* 0x00780D80: fld dword ptr [0x7c1cf8] */
    _st[0] += _st[0]; /* 0x00780D86: fadd st(0), st(0) */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8AB4FC) = _v; } /* 0x00780D88: fstp dword ptr [0x8ab4fc] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00780D8E: ret  */

}

void sub_00780D90(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780D90u);

L_00780D90:
    fp_push(*(float*)&MEM32(0x7C1CF8)); /* 0x00780D90: fld dword ptr [0x7c1cf8] */
    _st[0] *= (double)*(float*)ADDR(0x784260); /* 0x00780D96: fmul dword ptr [0x784260] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8AB4F8) = _v; } /* 0x00780D9C: fstp dword ptr [0x8ab4f8] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00780DA2: ret  */

}

void sub_00780DB0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780DB0u);

L_00780DB0:
    fp_push(*(double*)ADDR(0x7C1D00)); /* 0x00780DB0: fld qword ptr [0x7c1d00] */
    _st[0] += _st[0]; /* 0x00780DB6: fadd st(0), st(0) */
    { double _v = fp_pop(); *(double*)ADDR(0x8AB4F0) = _v; } /* 0x00780DB8: fstp qword ptr [0x8ab4f0] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00780DBE: ret  */

}

void sub_00780DC0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780DC0u);

L_00780DC0:
    fp_push(*(double*)ADDR(0x7C1D00)); /* 0x00780DC0: fld qword ptr [0x7c1d00] */
    _st[0] *= *(double*)ADDR(0x7864E0); /* 0x00780DC6: fmul qword ptr [0x7864e0] */
    { double _v = fp_pop(); *(double*)ADDR(0x8AB4E8) = _v; } /* 0x00780DCC: fstp qword ptr [0x8ab4e8] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00780DD2: ret  */

}

void sub_00780DE0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780DE0u);

L_00780DE0:
    fp_push(*(float*)&MEM32(0x7C1D24)); /* 0x00780DE0: fld dword ptr [0x7c1d24] */
    _st[0] -= (double)*(float*)ADDR(0x7C1D20); /* 0x00780DE6: fsub dword ptr [0x7c1d20] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8AB4E0) = _v; } /* 0x00780DEC: fstp dword ptr [0x8ab4e0] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00780DF2: ret  */

}

void sub_00780E00(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780E00u);

L_00780E00:
    fp_push(*(float*)&MEM32(0x7C1D80)); /* 0x00780E00: fld dword ptr [0x7c1d80] */
    _st[0] += _st[0]; /* 0x00780E06: fadd st(0), st(0) */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8AB524) = _v; } /* 0x00780E08: fstp dword ptr [0x8ab524] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00780E0E: ret  */

}

void sub_00780E10(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780E10u);

L_00780E10:
    fp_push(*(float*)&MEM32(0x7C1D80)); /* 0x00780E10: fld dword ptr [0x7c1d80] */
    _st[0] *= (double)*(float*)ADDR(0x784260); /* 0x00780E16: fmul dword ptr [0x784260] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8AB520) = _v; } /* 0x00780E1C: fstp dword ptr [0x8ab520] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00780E22: ret  */

}

void sub_00780E30(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780E30u);

L_00780E30:
    fp_push(*(double*)ADDR(0x7C1D88)); /* 0x00780E30: fld qword ptr [0x7c1d88] */
    _st[0] += _st[0]; /* 0x00780E36: fadd st(0), st(0) */
    { double _v = fp_pop(); *(double*)ADDR(0x8AB518) = _v; } /* 0x00780E38: fstp qword ptr [0x8ab518] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00780E3E: ret  */

}

void sub_00780E40(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780E40u);

L_00780E40:
    fp_push(*(double*)ADDR(0x7C1D88)); /* 0x00780E40: fld qword ptr [0x7c1d88] */
    _st[0] *= *(double*)ADDR(0x7864E0); /* 0x00780E46: fmul qword ptr [0x7864e0] */
    { double _v = fp_pop(); *(double*)ADDR(0x8AB510) = _v; } /* 0x00780E4C: fstp qword ptr [0x8ab510] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00780E52: ret  */

}

void sub_00780E60(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780E60u);

L_00780E60:
    fp_push(*(float*)&MEM32(0x7C1DAC)); /* 0x00780E60: fld dword ptr [0x7c1dac] */
    _st[0] -= (double)*(float*)ADDR(0x7C1DA8); /* 0x00780E66: fsub dword ptr [0x7c1da8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8AB504) = _v; } /* 0x00780E6C: fstp dword ptr [0x8ab504] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00780E72: ret  */

}

void sub_00780E80(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780E80u);

L_00780E80:
    fp_push(*(float*)&MEM32(0x7C1DA4)); /* 0x00780E80: fld dword ptr [0x7c1da4] */
    _st[0] += _st[0]; /* 0x00780E86: fadd st(0), st(0) */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8AB508) = _v; } /* 0x00780E88: fstp dword ptr [0x8ab508] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00780E8E: ret  */

}

void sub_00780E90(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780E90u);

L_00780E90:
    fp_push(*(float*)&MEM32(0x7C1D98)); /* 0x00780E90: fld dword ptr [0x7c1d98] */
    _st[0] += _st[0]; /* 0x00780E96: fadd st(0), st(0) */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8AB528) = _v; } /* 0x00780E98: fstp dword ptr [0x8ab528] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00780E9E: ret  */

}

void sub_00780EA0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780EA0u);

L_00780EA0:
    fp_push(*(float*)&MEM32(0x7C1DA0)); /* 0x00780EA0: fld dword ptr [0x7c1da0] */
    _st[0] += _st[0]; /* 0x00780EA6: fadd st(0), st(0) */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8AB500) = _v; } /* 0x00780EA8: fstp dword ptr [0x8ab500] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00780EAE: ret  */

}

void sub_00780EB0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780EB0u);

L_00780EB0:
    fp_push(*(float*)&MEM32(0x7C1E08)); /* 0x00780EB0: fld dword ptr [0x7c1e08] */
    _st[0] += _st[0]; /* 0x00780EB6: fadd st(0), st(0) */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8AB54C) = _v; } /* 0x00780EB8: fstp dword ptr [0x8ab54c] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00780EBE: ret  */

}

void sub_00780EC0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780EC0u);

L_00780EC0:
    fp_push(*(float*)&MEM32(0x7C1E08)); /* 0x00780EC0: fld dword ptr [0x7c1e08] */
    _st[0] *= (double)*(float*)ADDR(0x784260); /* 0x00780EC6: fmul dword ptr [0x784260] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8AB548) = _v; } /* 0x00780ECC: fstp dword ptr [0x8ab548] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00780ED2: ret  */

}

void sub_00780EE0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780EE0u);

L_00780EE0:
    fp_push(*(double*)ADDR(0x7C1E10)); /* 0x00780EE0: fld qword ptr [0x7c1e10] */
    _st[0] += _st[0]; /* 0x00780EE6: fadd st(0), st(0) */
    { double _v = fp_pop(); *(double*)ADDR(0x8AB540) = _v; } /* 0x00780EE8: fstp qword ptr [0x8ab540] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00780EEE: ret  */

}

void sub_00780EF0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780EF0u);

L_00780EF0:
    fp_push(*(double*)ADDR(0x7C1E10)); /* 0x00780EF0: fld qword ptr [0x7c1e10] */
    _st[0] *= *(double*)ADDR(0x7864E0); /* 0x00780EF6: fmul qword ptr [0x7864e0] */
    { double _v = fp_pop(); *(double*)ADDR(0x8AB538) = _v; } /* 0x00780EFC: fstp qword ptr [0x8ab538] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00780F02: ret  */

}

void sub_00780F10(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780F10u);

L_00780F10:
    fp_push(*(float*)&MEM32(0x7C1E34)); /* 0x00780F10: fld dword ptr [0x7c1e34] */
    _st[0] -= (double)*(float*)ADDR(0x7C1E30); /* 0x00780F16: fsub dword ptr [0x7c1e30] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8AB530) = _v; } /* 0x00780F1C: fstp dword ptr [0x8ab530] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00780F22: ret  */

}

void sub_00780F30(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780F30u);

L_00780F30:
    fp_push(*(float*)&MEM32(0x7C1E90)); /* 0x00780F30: fld dword ptr [0x7c1e90] */
    _st[0] += _st[0]; /* 0x00780F36: fadd st(0), st(0) */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8AB56C) = _v; } /* 0x00780F38: fstp dword ptr [0x8ab56c] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00780F3E: ret  */

}

void sub_00780F40(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780F40u);

L_00780F40:
    fp_push(*(float*)&MEM32(0x7C1E90)); /* 0x00780F40: fld dword ptr [0x7c1e90] */
    _st[0] *= (double)*(float*)ADDR(0x784260); /* 0x00780F46: fmul dword ptr [0x784260] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8AB568) = _v; } /* 0x00780F4C: fstp dword ptr [0x8ab568] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00780F52: ret  */

}

void sub_00780F60(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780F60u);

L_00780F60:
    fp_push(*(double*)ADDR(0x7C1E98)); /* 0x00780F60: fld qword ptr [0x7c1e98] */
    _st[0] += _st[0]; /* 0x00780F66: fadd st(0), st(0) */
    { double _v = fp_pop(); *(double*)ADDR(0x8AB560) = _v; } /* 0x00780F68: fstp qword ptr [0x8ab560] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00780F6E: ret  */

}

void sub_00780F70(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780F70u);

L_00780F70:
    fp_push(*(double*)ADDR(0x7C1E98)); /* 0x00780F70: fld qword ptr [0x7c1e98] */
    _st[0] *= *(double*)ADDR(0x7864E0); /* 0x00780F76: fmul qword ptr [0x7864e0] */
    { double _v = fp_pop(); *(double*)ADDR(0x8AB558) = _v; } /* 0x00780F7C: fstp qword ptr [0x8ab558] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00780F82: ret  */

}

void sub_00780F90(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780F90u);

L_00780F90:
    fp_push(*(float*)&MEM32(0x7C1EBC)); /* 0x00780F90: fld dword ptr [0x7c1ebc] */
    _st[0] -= (double)*(float*)ADDR(0x7C1EB8); /* 0x00780F96: fsub dword ptr [0x7c1eb8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8AB550) = _v; } /* 0x00780F9C: fstp dword ptr [0x8ab550] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00780FA2: ret  */

}

void sub_00780FB0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780FB0u);

L_00780FB0:
    fp_push(*(float*)&MEM32(0x7C1F28)); /* 0x00780FB0: fld dword ptr [0x7c1f28] */
    _st[0] += _st[0]; /* 0x00780FB6: fadd st(0), st(0) */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8AB584) = _v; } /* 0x00780FB8: fstp dword ptr [0x8ab584] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00780FBE: ret  */

}

void sub_00780FC0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780FC0u);

L_00780FC0:
    fp_push(*(float*)&MEM32(0x7C1F28)); /* 0x00780FC0: fld dword ptr [0x7c1f28] */
    _st[0] *= (double)*(float*)ADDR(0x784260); /* 0x00780FC6: fmul dword ptr [0x784260] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8AB580) = _v; } /* 0x00780FCC: fstp dword ptr [0x8ab580] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00780FD2: ret  */

}

void sub_00780FE0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780FE0u);

L_00780FE0:
    fp_push(*(double*)ADDR(0x7C1F30)); /* 0x00780FE0: fld qword ptr [0x7c1f30] */
    _st[0] += _st[0]; /* 0x00780FE6: fadd st(0), st(0) */
    { double _v = fp_pop(); *(double*)ADDR(0x8AB578) = _v; } /* 0x00780FE8: fstp qword ptr [0x8ab578] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00780FEE: ret  */

}

void sub_00780FF0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780FF0u);

L_00780FF0:
    fp_push(*(double*)ADDR(0x7C1F30)); /* 0x00780FF0: fld qword ptr [0x7c1f30] */
    _st[0] *= *(double*)ADDR(0x7864E0); /* 0x00780FF6: fmul qword ptr [0x7864e0] */
    { double _v = fp_pop(); *(double*)ADDR(0x8AB570) = _v; } /* 0x00780FFC: fstp qword ptr [0x8ab570] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00781002: ret  */

}

void sub_00781010(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781010u);

L_00781010:
    fp_push(*(float*)&MEM32(0x7C1FA8)); /* 0x00781010: fld dword ptr [0x7c1fa8] */
    _st[0] += _st[0]; /* 0x00781016: fadd st(0), st(0) */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8AB5A4) = _v; } /* 0x00781018: fstp dword ptr [0x8ab5a4] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0078101E: ret  */

}

void sub_00781020(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781020u);

L_00781020:
    fp_push(*(float*)&MEM32(0x7C1FA8)); /* 0x00781020: fld dword ptr [0x7c1fa8] */
    _st[0] *= (double)*(float*)ADDR(0x784260); /* 0x00781026: fmul dword ptr [0x784260] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8AB5A0) = _v; } /* 0x0078102C: fstp dword ptr [0x8ab5a0] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00781032: ret  */

}

void sub_00781040(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781040u);

L_00781040:
    fp_push(*(double*)ADDR(0x7C1FB0)); /* 0x00781040: fld qword ptr [0x7c1fb0] */
    _st[0] += _st[0]; /* 0x00781046: fadd st(0), st(0) */
    { double _v = fp_pop(); *(double*)ADDR(0x8AB598) = _v; } /* 0x00781048: fstp qword ptr [0x8ab598] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0078104E: ret  */

}

void sub_00781050(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781050u);

L_00781050:
    fp_push(*(double*)ADDR(0x7C1FB0)); /* 0x00781050: fld qword ptr [0x7c1fb0] */
    _st[0] *= *(double*)ADDR(0x7864E0); /* 0x00781056: fmul qword ptr [0x7864e0] */
    { double _v = fp_pop(); *(double*)ADDR(0x8AB590) = _v; } /* 0x0078105C: fstp qword ptr [0x8ab590] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00781062: ret  */

}

void sub_00781070(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781070u);

L_00781070:
    fp_push(*(float*)&MEM32(0x7C20B8)); /* 0x00781070: fld dword ptr [0x7c20b8] */
    _st[0] += _st[0]; /* 0x00781076: fadd st(0), st(0) */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8AB5BC) = _v; } /* 0x00781078: fstp dword ptr [0x8ab5bc] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0078107E: ret  */

}

void sub_00781080(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781080u);

L_00781080:
    fp_push(*(float*)&MEM32(0x7C20B8)); /* 0x00781080: fld dword ptr [0x7c20b8] */
    _st[0] *= (double)*(float*)ADDR(0x784260); /* 0x00781086: fmul dword ptr [0x784260] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8AB5B8) = _v; } /* 0x0078108C: fstp dword ptr [0x8ab5b8] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00781092: ret  */

}

void sub_007810A0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007810A0u);

L_007810A0:
    fp_push(*(double*)ADDR(0x7C20C0)); /* 0x007810A0: fld qword ptr [0x7c20c0] */
    _st[0] += _st[0]; /* 0x007810A6: fadd st(0), st(0) */
    { double _v = fp_pop(); *(double*)ADDR(0x8AB5B0) = _v; } /* 0x007810A8: fstp qword ptr [0x8ab5b0] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007810AE: ret  */

}

void sub_007810B0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007810B0u);

L_007810B0:
    fp_push(*(double*)ADDR(0x7C20C0)); /* 0x007810B0: fld qword ptr [0x7c20c0] */
    _st[0] *= *(double*)ADDR(0x7864E0); /* 0x007810B6: fmul qword ptr [0x7864e0] */
    { double _v = fp_pop(); *(double*)ADDR(0x8AB5A8) = _v; } /* 0x007810BC: fstp qword ptr [0x8ab5a8] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007810C2: ret  */

}

void sub_007810D0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007810D0u);

L_007810D0:
    fp_push(*(float*)&MEM32(0x7C2118)); /* 0x007810D0: fld dword ptr [0x7c2118] */
    _st[0] += _st[0]; /* 0x007810D6: fadd st(0), st(0) */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8AB5D4) = _v; } /* 0x007810D8: fstp dword ptr [0x8ab5d4] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007810DE: ret  */

}

void sub_007810E0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007810E0u);

L_007810E0:
    fp_push(*(float*)&MEM32(0x7C2118)); /* 0x007810E0: fld dword ptr [0x7c2118] */
    _st[0] *= (double)*(float*)ADDR(0x784260); /* 0x007810E6: fmul dword ptr [0x784260] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8AB5D0) = _v; } /* 0x007810EC: fstp dword ptr [0x8ab5d0] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007810F2: ret  */

}

void sub_00781100(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781100u);

L_00781100:
    fp_push(*(double*)ADDR(0x7C2120)); /* 0x00781100: fld qword ptr [0x7c2120] */
    _st[0] += _st[0]; /* 0x00781106: fadd st(0), st(0) */
    { double _v = fp_pop(); *(double*)ADDR(0x8AB5C8) = _v; } /* 0x00781108: fstp qword ptr [0x8ab5c8] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0078110E: ret  */

}

void sub_00781110(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781110u);

L_00781110:
    fp_push(*(double*)ADDR(0x7C2120)); /* 0x00781110: fld qword ptr [0x7c2120] */
    _st[0] *= *(double*)ADDR(0x7864E0); /* 0x00781116: fmul qword ptr [0x7864e0] */
    { double _v = fp_pop(); *(double*)ADDR(0x8AB5C0) = _v; } /* 0x0078111C: fstp qword ptr [0x8ab5c0] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00781122: ret  */

}

void sub_00781130(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781130u);

L_00781130:
    fp_push(*(float*)&MEM32(0x7C2128)); /* 0x00781130: fld dword ptr [0x7c2128] */
    _st[0] += _st[0]; /* 0x00781136: fadd st(0), st(0) */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8AB5EC) = _v; } /* 0x00781138: fstp dword ptr [0x8ab5ec] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0078113E: ret  */

}

void sub_00781140(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781140u);

L_00781140:
    fp_push(*(float*)&MEM32(0x7C2128)); /* 0x00781140: fld dword ptr [0x7c2128] */
    _st[0] *= (double)*(float*)ADDR(0x784260); /* 0x00781146: fmul dword ptr [0x784260] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8AB5E8) = _v; } /* 0x0078114C: fstp dword ptr [0x8ab5e8] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00781152: ret  */

}

void sub_00781160(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781160u);

L_00781160:
    fp_push(*(double*)ADDR(0x7C2130)); /* 0x00781160: fld qword ptr [0x7c2130] */
    _st[0] += _st[0]; /* 0x00781166: fadd st(0), st(0) */
    { double _v = fp_pop(); *(double*)ADDR(0x8AB5E0) = _v; } /* 0x00781168: fstp qword ptr [0x8ab5e0] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0078116E: ret  */

}

void sub_00781170(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781170u);

L_00781170:
    fp_push(*(double*)ADDR(0x7C2130)); /* 0x00781170: fld qword ptr [0x7c2130] */
    _st[0] *= *(double*)ADDR(0x7864E0); /* 0x00781176: fmul qword ptr [0x7864e0] */
    { double _v = fp_pop(); *(double*)ADDR(0x8AB5D8) = _v; } /* 0x0078117C: fstp qword ptr [0x8ab5d8] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00781182: ret  */

}

void sub_00781190(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781190u);

L_00781190:
    fp_push(*(float*)&MEM32(0x7C2138)); /* 0x00781190: fld dword ptr [0x7c2138] */
    _st[0] += _st[0]; /* 0x00781196: fadd st(0), st(0) */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8AB604) = _v; } /* 0x00781198: fstp dword ptr [0x8ab604] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0078119E: ret  */

}

void sub_007811A0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007811A0u);

L_007811A0:
    fp_push(*(float*)&MEM32(0x7C2138)); /* 0x007811A0: fld dword ptr [0x7c2138] */
    _st[0] *= (double)*(float*)ADDR(0x784260); /* 0x007811A6: fmul dword ptr [0x784260] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8AB600) = _v; } /* 0x007811AC: fstp dword ptr [0x8ab600] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007811B2: ret  */

}

void sub_007811C0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007811C0u);

L_007811C0:
    fp_push(*(double*)ADDR(0x7C2140)); /* 0x007811C0: fld qword ptr [0x7c2140] */
    _st[0] += _st[0]; /* 0x007811C6: fadd st(0), st(0) */
    { double _v = fp_pop(); *(double*)ADDR(0x8AB5F8) = _v; } /* 0x007811C8: fstp qword ptr [0x8ab5f8] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007811CE: ret  */

}

void sub_007811D0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007811D0u);

L_007811D0:
    fp_push(*(double*)ADDR(0x7C2140)); /* 0x007811D0: fld qword ptr [0x7c2140] */
    _st[0] *= *(double*)ADDR(0x7864E0); /* 0x007811D6: fmul qword ptr [0x7864e0] */
    { double _v = fp_pop(); *(double*)ADDR(0x8AB5F0) = _v; } /* 0x007811DC: fstp qword ptr [0x8ab5f0] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007811E2: ret  */

}

void sub_007811F0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007811F0u);

L_007811F0:
    fp_push(*(float*)&MEM32(0x7C2148)); /* 0x007811F0: fld dword ptr [0x7c2148] */
    _st[0] += _st[0]; /* 0x007811F6: fadd st(0), st(0) */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8AB61C) = _v; } /* 0x007811F8: fstp dword ptr [0x8ab61c] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007811FE: ret  */

}

void sub_00781200(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781200u);

L_00781200:
    fp_push(*(float*)&MEM32(0x7C2148)); /* 0x00781200: fld dword ptr [0x7c2148] */
    _st[0] *= (double)*(float*)ADDR(0x784260); /* 0x00781206: fmul dword ptr [0x784260] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8AB618) = _v; } /* 0x0078120C: fstp dword ptr [0x8ab618] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00781212: ret  */

}

void sub_00781220(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781220u);

L_00781220:
    fp_push(*(double*)ADDR(0x7C2150)); /* 0x00781220: fld qword ptr [0x7c2150] */
    _st[0] += _st[0]; /* 0x00781226: fadd st(0), st(0) */
    { double _v = fp_pop(); *(double*)ADDR(0x8AB610) = _v; } /* 0x00781228: fstp qword ptr [0x8ab610] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0078122E: ret  */

}

void sub_00781230(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781230u);

L_00781230:
    fp_push(*(double*)ADDR(0x7C2150)); /* 0x00781230: fld qword ptr [0x7c2150] */
    _st[0] *= *(double*)ADDR(0x7864E0); /* 0x00781236: fmul qword ptr [0x7864e0] */
    { double _v = fp_pop(); *(double*)ADDR(0x8AB608) = _v; } /* 0x0078123C: fstp qword ptr [0x8ab608] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00781242: ret  */

}

void sub_00781250(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781250u);

L_00781250:
    fp_push(*(float*)&MEM32(0x7C2158)); /* 0x00781250: fld dword ptr [0x7c2158] */
    _st[0] += _st[0]; /* 0x00781256: fadd st(0), st(0) */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8AB634) = _v; } /* 0x00781258: fstp dword ptr [0x8ab634] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0078125E: ret  */

}

void sub_00781260(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781260u);

L_00781260:
    fp_push(*(float*)&MEM32(0x7C2158)); /* 0x00781260: fld dword ptr [0x7c2158] */
    _st[0] *= (double)*(float*)ADDR(0x784260); /* 0x00781266: fmul dword ptr [0x784260] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8AB630) = _v; } /* 0x0078126C: fstp dword ptr [0x8ab630] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00781272: ret  */

}

void sub_00781280(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781280u);

L_00781280:
    fp_push(*(double*)ADDR(0x7C2160)); /* 0x00781280: fld qword ptr [0x7c2160] */
    _st[0] += _st[0]; /* 0x00781286: fadd st(0), st(0) */
    { double _v = fp_pop(); *(double*)ADDR(0x8AB628) = _v; } /* 0x00781288: fstp qword ptr [0x8ab628] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0078128E: ret  */

}

void sub_00781290(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781290u);

L_00781290:
    fp_push(*(double*)ADDR(0x7C2160)); /* 0x00781290: fld qword ptr [0x7c2160] */
    _st[0] *= *(double*)ADDR(0x7864E0); /* 0x00781296: fmul qword ptr [0x7864e0] */
    { double _v = fp_pop(); *(double*)ADDR(0x8AB620) = _v; } /* 0x0078129C: fstp qword ptr [0x8ab620] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007812A2: ret  */

}

void sub_007812B0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007812B0u);

L_007812B0:
    fp_push(*(float*)&MEM32(0x7C21C8)); /* 0x007812B0: fld dword ptr [0x7c21c8] */
    _st[0] += _st[0]; /* 0x007812B6: fadd st(0), st(0) */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8AB64C) = _v; } /* 0x007812B8: fstp dword ptr [0x8ab64c] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007812BE: ret  */

}

void sub_007812C0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007812C0u);

L_007812C0:
    fp_push(*(float*)&MEM32(0x7C21C8)); /* 0x007812C0: fld dword ptr [0x7c21c8] */
    _st[0] *= (double)*(float*)ADDR(0x784260); /* 0x007812C6: fmul dword ptr [0x784260] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8AB648) = _v; } /* 0x007812CC: fstp dword ptr [0x8ab648] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007812D2: ret  */

}

void sub_007812E0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007812E0u);

L_007812E0:
    fp_push(*(double*)ADDR(0x7C21D0)); /* 0x007812E0: fld qword ptr [0x7c21d0] */
    _st[0] += _st[0]; /* 0x007812E6: fadd st(0), st(0) */
    { double _v = fp_pop(); *(double*)ADDR(0x8AB640) = _v; } /* 0x007812E8: fstp qword ptr [0x8ab640] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007812EE: ret  */

}

void sub_007812F0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007812F0u);

L_007812F0:
    fp_push(*(double*)ADDR(0x7C21D0)); /* 0x007812F0: fld qword ptr [0x7c21d0] */
    _st[0] *= *(double*)ADDR(0x7864E0); /* 0x007812F6: fmul qword ptr [0x7864e0] */
    { double _v = fp_pop(); *(double*)ADDR(0x8AB638) = _v; } /* 0x007812FC: fstp qword ptr [0x8ab638] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00781302: ret  */

}

void sub_00781310(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781310u);

L_00781310:
    fp_push(*(float*)&MEM32(0x7C2238)); /* 0x00781310: fld dword ptr [0x7c2238] */
    _st[0] += _st[0]; /* 0x00781316: fadd st(0), st(0) */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8AB664) = _v; } /* 0x00781318: fstp dword ptr [0x8ab664] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0078131E: ret  */

}

void sub_00781320(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781320u);

L_00781320:
    fp_push(*(float*)&MEM32(0x7C2238)); /* 0x00781320: fld dword ptr [0x7c2238] */
    _st[0] *= (double)*(float*)ADDR(0x784260); /* 0x00781326: fmul dword ptr [0x784260] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8AB660) = _v; } /* 0x0078132C: fstp dword ptr [0x8ab660] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00781332: ret  */

}

void sub_00781340(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781340u);

L_00781340:
    fp_push(*(double*)ADDR(0x7C2240)); /* 0x00781340: fld qword ptr [0x7c2240] */
    _st[0] += _st[0]; /* 0x00781346: fadd st(0), st(0) */
    { double _v = fp_pop(); *(double*)ADDR(0x8AB658) = _v; } /* 0x00781348: fstp qword ptr [0x8ab658] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0078134E: ret  */

}

void sub_00781350(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781350u);

L_00781350:
    fp_push(*(double*)ADDR(0x7C2240)); /* 0x00781350: fld qword ptr [0x7c2240] */
    _st[0] *= *(double*)ADDR(0x7864E0); /* 0x00781356: fmul qword ptr [0x7864e0] */
    { double _v = fp_pop(); *(double*)ADDR(0x8AB650) = _v; } /* 0x0078135C: fstp qword ptr [0x8ab650] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00781362: ret  */

}

void sub_00781370(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781370u);

L_00781370:
    fp_push(*(float*)&MEM32(0x7C22A8)); /* 0x00781370: fld dword ptr [0x7c22a8] */
    _st[0] += _st[0]; /* 0x00781376: fadd st(0), st(0) */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8AB6B4) = _v; } /* 0x00781378: fstp dword ptr [0x8ab6b4] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0078137E: ret  */

}

void sub_00781380(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781380u);

L_00781380:
    fp_push(*(float*)&MEM32(0x7C22A8)); /* 0x00781380: fld dword ptr [0x7c22a8] */
    _st[0] *= (double)*(float*)ADDR(0x784260); /* 0x00781386: fmul dword ptr [0x784260] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8AB6B0) = _v; } /* 0x0078138C: fstp dword ptr [0x8ab6b0] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00781392: ret  */

}

void sub_007813A0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007813A0u);

L_007813A0:
    fp_push(*(double*)ADDR(0x7C22B0)); /* 0x007813A0: fld qword ptr [0x7c22b0] */
    _st[0] += _st[0]; /* 0x007813A6: fadd st(0), st(0) */
    { double _v = fp_pop(); *(double*)ADDR(0x8AB6A8) = _v; } /* 0x007813A8: fstp qword ptr [0x8ab6a8] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007813AE: ret  */

}

void sub_007813B0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007813B0u);

L_007813B0:
    fp_push(*(double*)ADDR(0x7C22B0)); /* 0x007813B0: fld qword ptr [0x7c22b0] */
    _st[0] *= *(double*)ADDR(0x7864E0); /* 0x007813B6: fmul qword ptr [0x7864e0] */
    { double _v = fp_pop(); *(double*)ADDR(0x8AB6A0) = _v; } /* 0x007813BC: fstp qword ptr [0x8ab6a0] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007813C2: ret  */

}

void sub_007813D0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007813D0u);

L_007813D0:
    PUSH32(esp, 0x007C23B8u); /* 0x007813D0: push 0x7c23b8 */
    PUSH32(esp, 1); /* 0x007813D5: push 1 */
    PUSH32(esp, 0x00812504u); /* 0x007813D7: push 0x812504 */
    PUSH32(esp, 0); /* 0x007813DC: push 0 */
    PUSH32(esp, 0x00811E38u); /* 0x007813DE: push 0x811e38 */
    PUSH32(esp, 0x008123A0u); /* 0x007813E3: push 0x8123a0 */
    ecx = 0x008AB668u; /* 0x007813E8: mov ecx, 0x8ab668 */
    RECOMP_CALL(sub_006DAB80); /* 0x007813ED: call 0x6dab80 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00782970u); /* 0x007813F2: push 0x782970 */
    RECOMP_CALL(sub_0075C5ED); /* 0x007813F7: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007813FC: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007813FD: ret  */

}

void sub_00781400(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781400u);

L_00781400:
    fp_push(*(float*)&MEM32(0x7C23C0)); /* 0x00781400: fld dword ptr [0x7c23c0] */
    _st[0] += _st[0]; /* 0x00781406: fadd st(0), st(0) */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8AB704) = _v; } /* 0x00781408: fstp dword ptr [0x8ab704] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0078140E: ret  */

}

void sub_00781410(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781410u);

L_00781410:
    fp_push(*(float*)&MEM32(0x7C23C0)); /* 0x00781410: fld dword ptr [0x7c23c0] */
    _st[0] *= (double)*(float*)ADDR(0x784260); /* 0x00781416: fmul dword ptr [0x784260] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8AB700) = _v; } /* 0x0078141C: fstp dword ptr [0x8ab700] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00781422: ret  */

}

void sub_00781430(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781430u);

L_00781430:
    fp_push(*(double*)ADDR(0x7C23C8)); /* 0x00781430: fld qword ptr [0x7c23c8] */
    _st[0] += _st[0]; /* 0x00781436: fadd st(0), st(0) */
    { double _v = fp_pop(); *(double*)ADDR(0x8AB6F8) = _v; } /* 0x00781438: fstp qword ptr [0x8ab6f8] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0078143E: ret  */

}

void sub_00781440(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781440u);

L_00781440:
    fp_push(*(double*)ADDR(0x7C23C8)); /* 0x00781440: fld qword ptr [0x7c23c8] */
    _st[0] *= *(double*)ADDR(0x7864E0); /* 0x00781446: fmul qword ptr [0x7864e0] */
    { double _v = fp_pop(); *(double*)ADDR(0x8AB6F0) = _v; } /* 0x0078144C: fstp qword ptr [0x8ab6f0] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00781452: ret  */

}

void sub_00781460(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781460u);

L_00781460:
    PUSH32(esp, 0x007C0900u); /* 0x00781460: push 0x7c0900 */
    PUSH32(esp, 1); /* 0x00781465: push 1 */
    PUSH32(esp, 0x008139DCu); /* 0x00781467: push 0x8139dc */
    PUSH32(esp, 0); /* 0x0078146C: push 0 */
    PUSH32(esp, 0x00812528u); /* 0x0078146E: push 0x812528 */
    PUSH32(esp, 0x00813520u); /* 0x00781473: push 0x813520 */
    ecx = 0x008AB6B8u; /* 0x00781478: mov ecx, 0x8ab6b8 */
    RECOMP_CALL(sub_006DAB80); /* 0x0078147D: call 0x6dab80 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00782980u); /* 0x00781482: push 0x782980 */
    RECOMP_CALL(sub_0075C5ED); /* 0x00781487: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0078148C: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0078148D: ret  */

}

void sub_00781490(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781490u);

L_00781490:
    fp_push(*(float*)&MEM32(0x7C24D0)); /* 0x00781490: fld dword ptr [0x7c24d0] */
    _st[0] += _st[0]; /* 0x00781496: fadd st(0), st(0) */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8AD2AC) = _v; } /* 0x00781498: fstp dword ptr [0x8ad2ac] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0078149E: ret  */

}

void sub_007814A0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007814A0u);

L_007814A0:
    fp_push(*(float*)&MEM32(0x7C24D0)); /* 0x007814A0: fld dword ptr [0x7c24d0] */
    _st[0] *= (double)*(float*)ADDR(0x784260); /* 0x007814A6: fmul dword ptr [0x784260] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8AD2A8) = _v; } /* 0x007814AC: fstp dword ptr [0x8ad2a8] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007814B2: ret  */

}

void sub_007814C0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007814C0u);

L_007814C0:
    fp_push(*(double*)ADDR(0x7C24D8)); /* 0x007814C0: fld qword ptr [0x7c24d8] */
    _st[0] += _st[0]; /* 0x007814C6: fadd st(0), st(0) */
    { double _v = fp_pop(); *(double*)ADDR(0x8AD2A0) = _v; } /* 0x007814C8: fstp qword ptr [0x8ad2a0] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007814CE: ret  */

}

void sub_007814D0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007814D0u);

L_007814D0:
    fp_push(*(double*)ADDR(0x7C24D8)); /* 0x007814D0: fld qword ptr [0x7c24d8] */
    _st[0] *= *(double*)ADDR(0x7864E0); /* 0x007814D6: fmul qword ptr [0x7864e0] */
    { double _v = fp_pop(); *(double*)ADDR(0x8AD298) = _v; } /* 0x007814DC: fstp qword ptr [0x8ad298] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007814E2: ret  */

}

void sub_007814F0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007814F0u);

    goto L_007814F0;

L_006F55B6:
    PUSH32(esp, esi); /* 0x006F55B6: push esi */
    esi = ecx; /* 0x006F55B7: mov esi, ecx */
    PUSH32(esp, 0x1Cu); /* 0x006F55B9: push 0x1c */
    PUSH32(esp, esi); /* 0x006F55BB: push esi */
    RECOMP_CALL(sub_006FAFED); /* 0x006F55BC: call 0x6fafed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x006F55C1: pop ecx */
    ecx = POP32_VAL(esp); /* 0x006F55C2: pop ecx */
    eax = esi; /* 0x006F55C3: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x006F55C5: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x006F55C6: ret  */

L_007814F0:
    ecx = 0x008AD4F0u; /* 0x007814F0: mov ecx, 0x8ad4f0 */
    RECOMP_BACKEDGE();
    goto L_006F55B6; /* 0x007814F5: jmp 0x6f55b6 */

}

void sub_007814FA(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007814FAu);

L_007814FA:
    PUSH32(esp, 0x007C2FD8u); /* 0x007814FA: push 0x7c2fd8 */
    ecx = 0x008AD618u; /* 0x007814FF: mov ecx, 0x8ad618 */
    RECOMP_CALL(sub_006F6C23); /* 0x00781504: call 0x6f6c23 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00782990u); /* 0x00781509: push 0x782990 */
    MEM32(0x8AD618) = 0x007C2ED0u; /* 0x0078150E: mov dword ptr [0x8ad618], 0x7c2ed0 */
    RECOMP_CALL(sub_0075C5ED); /* 0x00781518: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0078151D: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0078151E: ret  */

}

void sub_0078151F(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078151Fu);

    goto L_0078151F;

L_006F55B6:
    PUSH32(esp, esi); /* 0x006F55B6: push esi */
    esi = ecx; /* 0x006F55B7: mov esi, ecx */
    PUSH32(esp, 0x1Cu); /* 0x006F55B9: push 0x1c */
    PUSH32(esp, esi); /* 0x006F55BB: push esi */
    RECOMP_CALL(sub_006FAFED); /* 0x006F55BC: call 0x6fafed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x006F55C1: pop ecx */
    ecx = POP32_VAL(esp); /* 0x006F55C2: pop ecx */
    eax = esi; /* 0x006F55C3: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x006F55C5: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x006F55C6: ret  */

L_0078151F:
    ecx = 0x008AD644u; /* 0x0078151F: mov ecx, 0x8ad644 */
    RECOMP_BACKEDGE();
    goto L_006F55B6; /* 0x00781524: jmp 0x6f55b6 */

}

void sub_00781529(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781529u);

    goto L_00781529;

L_006F55B6:
    PUSH32(esp, esi); /* 0x006F55B6: push esi */
    esi = ecx; /* 0x006F55B7: mov esi, ecx */
    PUSH32(esp, 0x1Cu); /* 0x006F55B9: push 0x1c */
    PUSH32(esp, esi); /* 0x006F55BB: push esi */
    RECOMP_CALL(sub_006FAFED); /* 0x006F55BC: call 0x6fafed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x006F55C1: pop ecx */
    ecx = POP32_VAL(esp); /* 0x006F55C2: pop ecx */
    eax = esi; /* 0x006F55C3: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x006F55C5: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x006F55C6: ret  */

L_00781529:
    ecx = 0x008AD680u; /* 0x00781529: mov ecx, 0x8ad680 */
    RECOMP_BACKEDGE();
    goto L_006F55B6; /* 0x0078152E: jmp 0x6f55b6 */

}

void sub_00781533(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781533u);

L_00781533:
    PUSH32(esp, 0x0078299Bu); /* 0x00781533: push 0x78299b */
    RECOMP_CALL(sub_0075C5ED); /* 0x00781538: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0078153D: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0078153E: ret  */

}

void sub_0078153F(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078153Fu);

L_0078153F:
    PUSH32(esp, 0x007C3130u); /* 0x0078153F: push 0x7c3130 */
    ecx = 0x008AD74Cu; /* 0x00781544: mov ecx, 0x8ad74c */
    RECOMP_CALL(sub_006F6C23); /* 0x00781549: call 0x6f6c23 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007829A5u); /* 0x0078154E: push 0x7829a5 */
    MEM32(0x8AD74C) = 0x007C30F8u; /* 0x00781553: mov dword ptr [0x8ad74c], 0x7c30f8 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0078155D: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00781562: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00781563: ret  */

}

void sub_00781564(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781564u);

L_00781564:
    PUSH32(esp, 0x007C3134u); /* 0x00781564: push 0x7c3134 */
    ecx = 0x008AD7B0u; /* 0x00781569: mov ecx, 0x8ad7b0 */
    RECOMP_CALL(sub_006F6C23); /* 0x0078156E: call 0x6f6c23 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007829B0u); /* 0x00781573: push 0x7829b0 */
    MEM32(0x8AD7B0) = 0x007C30F8u; /* 0x00781578: mov dword ptr [0x8ad7b0], 0x7c30f8 */
    RECOMP_CALL(sub_0075C5ED); /* 0x00781582: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00781587: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00781588: ret  */

}

void sub_00781589(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781589u);

L_00781589:
    PUSH32(esp, 0x007C3138u); /* 0x00781589: push 0x7c3138 */
    ecx = 0x008AD7D8u; /* 0x0078158E: mov ecx, 0x8ad7d8 */
    RECOMP_CALL(sub_006F6C23); /* 0x00781593: call 0x6f6c23 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007829BBu); /* 0x00781598: push 0x7829bb */
    MEM32(0x8AD7D8) = 0x007C30F8u; /* 0x0078159D: mov dword ptr [0x8ad7d8], 0x7c30f8 */
    RECOMP_CALL(sub_0075C5ED); /* 0x007815A7: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007815AC: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007815AD: ret  */

}

void sub_007815AE(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007815AEu);

L_007815AE:
    PUSH32(esp, 0x007C313Cu); /* 0x007815AE: push 0x7c313c */
    ecx = 0x008AD710u; /* 0x007815B3: mov ecx, 0x8ad710 */
    RECOMP_CALL(sub_006F6C23); /* 0x007815B8: call 0x6f6c23 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007829C6u); /* 0x007815BD: push 0x7829c6 */
    MEM32(0x8AD710) = 0x007C30F8u; /* 0x007815C2: mov dword ptr [0x8ad710], 0x7c30f8 */
    RECOMP_CALL(sub_0075C5ED); /* 0x007815CC: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007815D1: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007815D2: ret  */

}

void sub_007815D3(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007815D3u);

L_007815D3:
    PUSH32(esp, 0x007C3140u); /* 0x007815D3: push 0x7c3140 */
    ecx = 0x008AD800u; /* 0x007815D8: mov ecx, 0x8ad800 */
    RECOMP_CALL(sub_006F6C23); /* 0x007815DD: call 0x6f6c23 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007829D1u); /* 0x007815E2: push 0x7829d1 */
    MEM32(0x8AD800) = 0x007C30F8u; /* 0x007815E7: mov dword ptr [0x8ad800], 0x7c30f8 */
    RECOMP_CALL(sub_0075C5ED); /* 0x007815F1: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007815F6: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007815F7: ret  */

}

void sub_007815F8(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007815F8u);

L_007815F8:
    PUSH32(esp, 0x007C3144u); /* 0x007815F8: push 0x7c3144 */
    ecx = 0x008AD760u; /* 0x007815FD: mov ecx, 0x8ad760 */
    RECOMP_CALL(sub_006F6C23); /* 0x00781602: call 0x6f6c23 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007829DCu); /* 0x00781607: push 0x7829dc */
    MEM32(0x8AD760) = 0x007C30F8u; /* 0x0078160C: mov dword ptr [0x8ad760], 0x7c30f8 */
    RECOMP_CALL(sub_0075C5ED); /* 0x00781616: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0078161B: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0078161C: ret  */

}

void sub_0078161D(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078161Du);

L_0078161D:
    PUSH32(esp, 0x007C3148u); /* 0x0078161D: push 0x7c3148 */
    ecx = 0x008AD850u; /* 0x00781622: mov ecx, 0x8ad850 */
    RECOMP_CALL(sub_006F6C23); /* 0x00781627: call 0x6f6c23 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007829E7u); /* 0x0078162C: push 0x7829e7 */
    MEM32(0x8AD850) = 0x007C30F8u; /* 0x00781631: mov dword ptr [0x8ad850], 0x7c30f8 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0078163B: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00781640: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00781641: ret  */

}

void sub_00781642(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781642u);

L_00781642:
    PUSH32(esp, 0x007C314Cu); /* 0x00781642: push 0x7c314c */
    ecx = 0x008AD724u; /* 0x00781647: mov ecx, 0x8ad724 */
    RECOMP_CALL(sub_006F6C23); /* 0x0078164C: call 0x6f6c23 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007829F2u); /* 0x00781651: push 0x7829f2 */
    MEM32(0x8AD724) = 0x007C30F8u; /* 0x00781656: mov dword ptr [0x8ad724], 0x7c30f8 */
    RECOMP_CALL(sub_0075C5ED); /* 0x00781660: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00781665: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00781666: ret  */

}

void sub_00781667(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781667u);

L_00781667:
    PUSH32(esp, 0x007C3150u); /* 0x00781667: push 0x7c3150 */
    ecx = 0x008AD83Cu; /* 0x0078166C: mov ecx, 0x8ad83c */
    RECOMP_CALL(sub_006F6C23); /* 0x00781671: call 0x6f6c23 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007829FDu); /* 0x00781676: push 0x7829fd */
    MEM32(0x8AD83C) = 0x007C30F8u; /* 0x0078167B: mov dword ptr [0x8ad83c], 0x7c30f8 */
    RECOMP_CALL(sub_0075C5ED); /* 0x00781685: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0078168A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0078168B: ret  */

}

void sub_0078168C(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078168Cu);

L_0078168C:
    PUSH32(esp, 0x007C3154u); /* 0x0078168C: push 0x7c3154 */
    ecx = 0x008AD788u; /* 0x00781691: mov ecx, 0x8ad788 */
    RECOMP_CALL(sub_006F6C23); /* 0x00781696: call 0x6f6c23 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00782A08u); /* 0x0078169B: push 0x782a08 */
    MEM32(0x8AD788) = 0x007C30F8u; /* 0x007816A0: mov dword ptr [0x8ad788], 0x7c30f8 */
    RECOMP_CALL(sub_0075C5ED); /* 0x007816AA: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007816AF: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007816B0: ret  */

}

void sub_007816B1(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007816B1u);

L_007816B1:
    PUSH32(esp, 0x007C3158u); /* 0x007816B1: push 0x7c3158 */
    ecx = 0x008AD814u; /* 0x007816B6: mov ecx, 0x8ad814 */
    RECOMP_CALL(sub_006F6C23); /* 0x007816BB: call 0x6f6c23 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00782A13u); /* 0x007816C0: push 0x782a13 */
    MEM32(0x8AD814) = 0x007C30F8u; /* 0x007816C5: mov dword ptr [0x8ad814], 0x7c30f8 */
    RECOMP_CALL(sub_0075C5ED); /* 0x007816CF: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007816D4: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007816D5: ret  */

}

void sub_007816D6(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007816D6u);

L_007816D6:
    PUSH32(esp, 0x007C315Cu); /* 0x007816D6: push 0x7c315c */
    ecx = 0x008AD8B4u; /* 0x007816DB: mov ecx, 0x8ad8b4 */
    RECOMP_CALL(sub_006F6C23); /* 0x007816E0: call 0x6f6c23 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00782A1Eu); /* 0x007816E5: push 0x782a1e */
    MEM32(0x8AD8B4) = 0x007C30F8u; /* 0x007816EA: mov dword ptr [0x8ad8b4], 0x7c30f8 */
    RECOMP_CALL(sub_0075C5ED); /* 0x007816F4: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007816F9: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007816FA: ret  */

}

void sub_007816FB(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007816FBu);

L_007816FB:
    PUSH32(esp, 0x007C3160u); /* 0x007816FB: push 0x7c3160 */
    ecx = 0x008AD904u; /* 0x00781700: mov ecx, 0x8ad904 */
    RECOMP_CALL(sub_006F6C23); /* 0x00781705: call 0x6f6c23 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00782A29u); /* 0x0078170A: push 0x782a29 */
    MEM32(0x8AD904) = 0x007C30F8u; /* 0x0078170F: mov dword ptr [0x8ad904], 0x7c30f8 */
    RECOMP_CALL(sub_0075C5ED); /* 0x00781719: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0078171E: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0078171F: ret  */

}

void sub_00781720(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781720u);

L_00781720:
    PUSH32(esp, 0x007C3164u); /* 0x00781720: push 0x7c3164 */
    ecx = 0x008AD878u; /* 0x00781725: mov ecx, 0x8ad878 */
    RECOMP_CALL(sub_006F6C23); /* 0x0078172A: call 0x6f6c23 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00782A34u); /* 0x0078172F: push 0x782a34 */
    MEM32(0x8AD878) = 0x007C30F8u; /* 0x00781734: mov dword ptr [0x8ad878], 0x7c30f8 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0078173E: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00781743: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00781744: ret  */

}

void sub_00781745(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781745u);

L_00781745:
    PUSH32(esp, 0x007C3168u); /* 0x00781745: push 0x7c3168 */
    ecx = 0x008AD864u; /* 0x0078174A: mov ecx, 0x8ad864 */
    RECOMP_CALL(sub_006F6C23); /* 0x0078174F: call 0x6f6c23 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00782A3Fu); /* 0x00781754: push 0x782a3f */
    MEM32(0x8AD864) = 0x007C30F8u; /* 0x00781759: mov dword ptr [0x8ad864], 0x7c30f8 */
    RECOMP_CALL(sub_0075C5ED); /* 0x00781763: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00781768: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00781769: ret  */

}

void sub_0078176A(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078176Au);

L_0078176A:
    PUSH32(esp, 0x007C316Cu); /* 0x0078176A: push 0x7c316c */
    ecx = 0x008AD8C8u; /* 0x0078176F: mov ecx, 0x8ad8c8 */
    RECOMP_CALL(sub_006F6C23); /* 0x00781774: call 0x6f6c23 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00782A4Au); /* 0x00781779: push 0x782a4a */
    MEM32(0x8AD8C8) = 0x007C30F8u; /* 0x0078177E: mov dword ptr [0x8ad8c8], 0x7c30f8 */
    RECOMP_CALL(sub_0075C5ED); /* 0x00781788: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0078178D: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0078178E: ret  */

}

void sub_0078178F(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078178Fu);

L_0078178F:
    PUSH32(esp, 0x007C3170u); /* 0x0078178F: push 0x7c3170 */
    ecx = 0x008AD738u; /* 0x00781794: mov ecx, 0x8ad738 */
    RECOMP_CALL(sub_006F6C23); /* 0x00781799: call 0x6f6c23 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00782A55u); /* 0x0078179E: push 0x782a55 */
    MEM32(0x8AD738) = 0x007C30F8u; /* 0x007817A3: mov dword ptr [0x8ad738], 0x7c30f8 */
    RECOMP_CALL(sub_0075C5ED); /* 0x007817AD: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007817B2: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007817B3: ret  */

}

void sub_007817B4(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007817B4u);

L_007817B4:
    PUSH32(esp, 0x007C3174u); /* 0x007817B4: push 0x7c3174 */
    ecx = 0x008AD828u; /* 0x007817B9: mov ecx, 0x8ad828 */
    RECOMP_CALL(sub_006F6C23); /* 0x007817BE: call 0x6f6c23 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00782A60u); /* 0x007817C3: push 0x782a60 */
    MEM32(0x8AD828) = 0x007C30F8u; /* 0x007817C8: mov dword ptr [0x8ad828], 0x7c30f8 */
    RECOMP_CALL(sub_0075C5ED); /* 0x007817D2: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007817D7: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007817D8: ret  */

}

void sub_007817D9(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007817D9u);

L_007817D9:
    PUSH32(esp, 0x007C3178u); /* 0x007817D9: push 0x7c3178 */
    ecx = 0x008AD774u; /* 0x007817DE: mov ecx, 0x8ad774 */
    RECOMP_CALL(sub_006F6C23); /* 0x007817E3: call 0x6f6c23 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00782A6Bu); /* 0x007817E8: push 0x782a6b */
    MEM32(0x8AD774) = 0x007C30F8u; /* 0x007817ED: mov dword ptr [0x8ad774], 0x7c30f8 */
    RECOMP_CALL(sub_0075C5ED); /* 0x007817F7: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007817FC: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007817FD: ret  */

}

void sub_007817FE(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007817FEu);

L_007817FE:
    PUSH32(esp, 0x007C317Cu); /* 0x007817FE: push 0x7c317c */
    ecx = 0x008AD8A0u; /* 0x00781803: mov ecx, 0x8ad8a0 */
    RECOMP_CALL(sub_006F6C23); /* 0x00781808: call 0x6f6c23 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00782A76u); /* 0x0078180D: push 0x782a76 */
    MEM32(0x8AD8A0) = 0x007C30F8u; /* 0x00781812: mov dword ptr [0x8ad8a0], 0x7c30f8 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0078181C: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00781821: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00781822: ret  */

}

void sub_00781823(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781823u);

L_00781823:
    PUSH32(esp, 0x007C3180u); /* 0x00781823: push 0x7c3180 */
    ecx = 0x008AD8DCu; /* 0x00781828: mov ecx, 0x8ad8dc */
    RECOMP_CALL(sub_006F6C23); /* 0x0078182D: call 0x6f6c23 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00782A81u); /* 0x00781832: push 0x782a81 */
    MEM32(0x8AD8DC) = 0x007C30F8u; /* 0x00781837: mov dword ptr [0x8ad8dc], 0x7c30f8 */
    RECOMP_CALL(sub_0075C5ED); /* 0x00781841: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00781846: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00781847: ret  */

}

void sub_00781848(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781848u);

L_00781848:
    PUSH32(esp, 0x007C3184u); /* 0x00781848: push 0x7c3184 */
    ecx = 0x008AD8F0u; /* 0x0078184D: mov ecx, 0x8ad8f0 */
    RECOMP_CALL(sub_006F6C23); /* 0x00781852: call 0x6f6c23 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00782A8Cu); /* 0x00781857: push 0x782a8c */
    MEM32(0x8AD8F0) = 0x007C30F8u; /* 0x0078185C: mov dword ptr [0x8ad8f0], 0x7c30f8 */
    RECOMP_CALL(sub_0075C5ED); /* 0x00781866: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0078186B: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0078186C: ret  */

}

void sub_0078186D(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078186Du);

L_0078186D:
    PUSH32(esp, 0x007C3188u); /* 0x0078186D: push 0x7c3188 */
    ecx = 0x008AD7C4u; /* 0x00781872: mov ecx, 0x8ad7c4 */
    RECOMP_CALL(sub_006F6C23); /* 0x00781877: call 0x6f6c23 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00782A97u); /* 0x0078187C: push 0x782a97 */
    MEM32(0x8AD7C4) = 0x007C30F8u; /* 0x00781881: mov dword ptr [0x8ad7c4], 0x7c30f8 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0078188B: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00781890: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00781891: ret  */

}

void sub_00781892(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781892u);

L_00781892:
    PUSH32(esp, 0x007C318Cu); /* 0x00781892: push 0x7c318c */
    ecx = 0x008AD88Cu; /* 0x00781897: mov ecx, 0x8ad88c */
    RECOMP_CALL(sub_006F6C23); /* 0x0078189C: call 0x6f6c23 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00782AA2u); /* 0x007818A1: push 0x782aa2 */
    MEM32(0x8AD88C) = 0x007C30F8u; /* 0x007818A6: mov dword ptr [0x8ad88c], 0x7c30f8 */
    RECOMP_CALL(sub_0075C5ED); /* 0x007818B0: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007818B5: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007818B6: ret  */

}

void sub_007818B7(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007818B7u);

L_007818B7:
    PUSH32(esp, 0x007C3190u); /* 0x007818B7: push 0x7c3190 */
    ecx = 0x008AD79Cu; /* 0x007818BC: mov ecx, 0x8ad79c */
    RECOMP_CALL(sub_006F6C23); /* 0x007818C1: call 0x6f6c23 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00782AADu); /* 0x007818C6: push 0x782aad */
    MEM32(0x8AD79C) = 0x007C30F8u; /* 0x007818CB: mov dword ptr [0x8ad79c], 0x7c30f8 */
    RECOMP_CALL(sub_0075C5ED); /* 0x007818D5: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007818DA: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007818DB: ret  */

}

void sub_007818DC(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007818DCu);

L_007818DC:
    PUSH32(esp, 0x007C3194u); /* 0x007818DC: push 0x7c3194 */
    ecx = 0x008AD7ECu; /* 0x007818E1: mov ecx, 0x8ad7ec */
    RECOMP_CALL(sub_006F6C23); /* 0x007818E6: call 0x6f6c23 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00782AB8u); /* 0x007818EB: push 0x782ab8 */
    MEM32(0x8AD7EC) = 0x007C30F8u; /* 0x007818F0: mov dword ptr [0x8ad7ec], 0x7c30f8 */
    RECOMP_CALL(sub_0075C5ED); /* 0x007818FA: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007818FF: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00781900: ret  */

}

void sub_00781901(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781901u);

L_00781901:
    PUSH32(esp, 0x00782AC3u); /* 0x00781901: push 0x782ac3 */
    RECOMP_CALL(sub_0075C5ED); /* 0x00781906: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0078190B: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0078190C: ret  */

}

void sub_0078190D(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078190Du);

L_0078190D:
    PUSH32(esp, 0x00782ACEu); /* 0x0078190D: push 0x782ace */
    RECOMP_CALL(sub_0075C5ED); /* 0x00781912: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00781917: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00781918: ret  */

}

void sub_00781919(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781919u);

L_00781919:
    RECOMP_CALL(sub_0072CCDE); /* 0x00781919: call 0x72ccde */
    RECOMP_FLAGS_IN();
    MEM32(0x8B4A20) = eax; /* 0x0078191E: mov dword ptr [0x8b4a20], eax */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00781923: ret  */

}

void sub_00781924(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781924u);

L_00781924:
    RECOMP_CALL(sub_0072D951); /* 0x00781924: call 0x72d951 */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)LO8(eax); /* 0x00781929: movzx eax, al */
    MEM32(0x8B4A2C) = eax; /* 0x0078192C: mov dword ptr [0x8b4a2c], eax */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00781931: ret  */

}

void sub_00781940(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781940u);

L_00781940:
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00781940: ret  */

}

void sub_00781950(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781950u);

L_00781950:
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00781950: ret  */

}

void sub_00781960(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781960u);

L_00781960:
    ecx = 0x0081E7ECu; /* 0x00781960: mov ecx, 0x81e7ec */
    RECOMP_ITAIL(0x004DEF30u); RECOMP_RETURN(); /* 0x00781965: jmp 0x4def30 */

}

void sub_00781970(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781970u);

L_00781970:
    ecx = 0x0081CBC0u; /* 0x00781970: mov ecx, 0x81cbc0 */
    RECOMP_ITAIL(0x00413530u); RECOMP_RETURN(); /* 0x00781975: jmp 0x413530 */

}

void sub_00781980(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781980u);

L_00781980:
    ecx = 0x0081E5B8u; /* 0x00781980: mov ecx, 0x81e5b8 */
    RECOMP_ITAIL(0x00415120u); RECOMP_RETURN(); /* 0x00781985: jmp 0x415120 */

}

void sub_00781990(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781990u);

L_00781990:
    ecx = 0x0081E388u; /* 0x00781990: mov ecx, 0x81e388 */
    RECOMP_ITAIL(0x00415120u); RECOMP_RETURN(); /* 0x00781995: jmp 0x415120 */

}

void sub_007819A0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007819A0u);

L_007819A0:
    ecx = 0x0081E810u; /* 0x007819A0: mov ecx, 0x81e810 */
    RECOMP_ITAIL(0x0041E7C0u); RECOMP_RETURN(); /* 0x007819A5: jmp 0x41e7c0 */

}

void sub_007819B0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007819B0u);

L_007819B0:
    PUSH32(esp, 0x004022C0u); /* 0x007819B0: push 0x4022c0 */
    PUSH32(esp, 8); /* 0x007819B5: push 8 */
    PUSH32(esp, 0xCu); /* 0x007819B7: push 0xc */
    PUSH32(esp, 0x00827D38u); /* 0x007819B9: push 0x827d38 */
    RECOMP_CALL(sub_0075C401); /* 0x007819BE: call 0x75c401 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007819C3: ret  */

}

void sub_007819D0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007819D0u);

L_007819D0:
    PUSH32(esp, 0x004022C0u); /* 0x007819D0: push 0x4022c0 */
    PUSH32(esp, 8); /* 0x007819D5: push 8 */
    PUSH32(esp, 0xCu); /* 0x007819D7: push 0xc */
    PUSH32(esp, 0x00827DB8u); /* 0x007819D9: push 0x827db8 */
    RECOMP_CALL(sub_0075C401); /* 0x007819DE: call 0x75c401 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007819E3: ret  */

}

void sub_007819F0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007819F0u);

L_007819F0:
    PUSH32(esp, 0x004022C0u); /* 0x007819F0: push 0x4022c0 */
    PUSH32(esp, 8); /* 0x007819F5: push 8 */
    PUSH32(esp, 0xCu); /* 0x007819F7: push 0xc */
    PUSH32(esp, 0x00827E28u); /* 0x007819F9: push 0x827e28 */
    RECOMP_CALL(sub_0075C401); /* 0x007819FE: call 0x75c401 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00781A03: ret  */

}

void sub_00781A10(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781A10u);

L_00781A10:
    PUSH32(esp, 0x004022C0u); /* 0x00781A10: push 0x4022c0 */
    PUSH32(esp, 8); /* 0x00781A15: push 8 */
    PUSH32(esp, 0xCu); /* 0x00781A17: push 0xc */
    PUSH32(esp, 0x00827CD0u); /* 0x00781A19: push 0x827cd0 */
    RECOMP_CALL(sub_0075C401); /* 0x00781A1E: call 0x75c401 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00781A23: ret  */

}

void sub_00781A30(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781A30u);

L_00781A30:
    MEM32(0x7EA23C) = 0x00785D9Cu; /* 0x00781A30: mov dword ptr [0x7ea23c], 0x785d9c */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00781A3A: ret  */

}

void sub_00781A40(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781A40u);

L_00781A40:
    MEM32(0x827E88) = 0x00785DA0u; /* 0x00781A40: mov dword ptr [0x827e88], 0x785da0 */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00781A4A: ret  */

}

void sub_00781A50(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781A50u);

L_00781A50:
    PUSH32(esp, 0x004022C0u); /* 0x00781A50: push 0x4022c0 */
    PUSH32(esp, 4); /* 0x00781A55: push 4 */
    PUSH32(esp, 0x1Cu); /* 0x00781A57: push 0x1c */
    PUSH32(esp, 0x007EA240u); /* 0x00781A59: push 0x7ea240 */
    RECOMP_CALL(sub_0075C401); /* 0x00781A5E: call 0x75c401 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00781A63: ret  */

}

void sub_00781A70(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781A70u);

L_00781A70:
    PUSH32(esp, 0x004022C0u); /* 0x00781A70: push 0x4022c0 */
    PUSH32(esp, 0xAu); /* 0x00781A75: push 0xa */
    PUSH32(esp, 0x1Cu); /* 0x00781A77: push 0x1c */
    PUSH32(esp, 0x007EA2B0u); /* 0x00781A79: push 0x7ea2b0 */
    RECOMP_CALL(sub_0075C401); /* 0x00781A7E: call 0x75c401 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00781A83: ret  */

}

void sub_00781A90(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781A90u);

L_00781A90:
    PUSH32(esp, 0x004022C0u); /* 0x00781A90: push 0x4022c0 */
    PUSH32(esp, 6); /* 0x00781A95: push 6 */
    PUSH32(esp, 0x1Cu); /* 0x00781A97: push 0x1c */
    PUSH32(esp, 0x007EA3C8u); /* 0x00781A99: push 0x7ea3c8 */
    RECOMP_CALL(sub_0075C401); /* 0x00781A9E: call 0x75c401 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00781AA3: ret  */

}

void sub_00781AB0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781AB0u);

L_00781AB0:
    PUSH32(esp, 0x004022C0u); /* 0x00781AB0: push 0x4022c0 */
    PUSH32(esp, 4); /* 0x00781AB5: push 4 */
    PUSH32(esp, 0x1Cu); /* 0x00781AB7: push 0x1c */
    PUSH32(esp, 0x007EA470u); /* 0x00781AB9: push 0x7ea470 */
    RECOMP_CALL(sub_0075C401); /* 0x00781ABE: call 0x75c401 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00781AC3: ret  */

}

void sub_00781AD0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781AD0u);

L_00781AD0:
    ecx = 0x00827B80u; /* 0x00781AD0: mov ecx, 0x827b80 */
    RECOMP_ITAIL(0x004358E0u); RECOMP_RETURN(); /* 0x00781AD5: jmp 0x4358e0 */

}

void sub_00781AE0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781AE0u);

L_00781AE0:
    ecx = 0x00827C9Cu; /* 0x00781AE0: mov ecx, 0x827c9c */
    RECOMP_ITAIL(0x004358E0u); RECOMP_RETURN(); /* 0x00781AE5: jmp 0x4358e0 */

}

void sub_00781AF0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781AF0u);

L_00781AF0:
    ecx = 0x00827DA4u; /* 0x00781AF0: mov ecx, 0x827da4 */
    RECOMP_ITAIL(0x004358E0u); RECOMP_RETURN(); /* 0x00781AF5: jmp 0x4358e0 */

}

void sub_00781B00(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781B00u);

L_00781B00:
    ecx = 0x00827C74u; /* 0x00781B00: mov ecx, 0x827c74 */
    RECOMP_ITAIL(0x00435910u); RECOMP_RETURN(); /* 0x00781B05: jmp 0x435910 */

}

void sub_00781B10(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781B10u);

L_00781B10:
    ecx = 0x00827C3Cu; /* 0x00781B10: mov ecx, 0x827c3c */
    RECOMP_ITAIL(0x004835C0u); RECOMP_RETURN(); /* 0x00781B15: jmp 0x4835c0 */

}

void sub_00781B20(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781B20u);

L_00781B20:
    ecx = 0x00827C60u; /* 0x00781B20: mov ecx, 0x827c60 */
    RECOMP_ITAIL(0x004DEF30u); RECOMP_RETURN(); /* 0x00781B25: jmp 0x4def30 */

}

void sub_00781B30(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781B30u);

L_00781B30:
    ecx = 0x00827D98u; /* 0x00781B30: mov ecx, 0x827d98 */
    RECOMP_ITAIL(0x004DEF30u); RECOMP_RETURN(); /* 0x00781B35: jmp 0x4def30 */

}

void sub_00781B40(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781B40u);

L_00781B40:
    ecx = 0x00827CA4u; /* 0x00781B40: mov ecx, 0x827ca4 */
    RECOMP_ITAIL(0x004835C0u); RECOMP_RETURN(); /* 0x00781B45: jmp 0x4835c0 */

}

void sub_00781B50(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781B50u);

L_00781B50:
    ecx = 0x00827EF0u; /* 0x00781B50: mov ecx, 0x827ef0 */
    RECOMP_ITAIL(0x0043A110u); RECOMP_RETURN(); /* 0x00781B55: jmp 0x43a110 */

}

void sub_00781B60(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781B60u);

L_00781B60:
    ecx = 0x00827B88u; /* 0x00781B60: mov ecx, 0x827b88 */
    RECOMP_ITAIL(0x0043A9A0u); RECOMP_RETURN(); /* 0x00781B65: jmp 0x43a9a0 */

}

void sub_00781B70(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781B70u);

L_00781B70:
    ecx = 0x00828528u; /* 0x00781B70: mov ecx, 0x828528 */
    RECOMP_ITAIL(0x0043CAD0u); RECOMP_RETURN(); /* 0x00781B75: jmp 0x43cad0 */

}

void sub_00781B80(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781B80u);

L_00781B80:
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00781B80: ret  */

}

void sub_00781B90(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781B90u);

L_00781B90:
    ecx = 0x00828530u; /* 0x00781B90: mov ecx, 0x828530 */
    RECOMP_ITAIL(0x004407D0u); RECOMP_RETURN(); /* 0x00781B95: jmp 0x4407d0 */

}

void sub_00781BA0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781BA0u);

L_00781BA0:
    ecx = 0x008286FCu; /* 0x00781BA0: mov ecx, 0x8286fc */
    RECOMP_ITAIL(0x004466C0u); RECOMP_RETURN(); /* 0x00781BA5: jmp 0x4466c0 */

}

void sub_00781BB0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781BB0u);

L_00781BB0:
    ecx = 0x00828770u; /* 0x00781BB0: mov ecx, 0x828770 */
    RECOMP_ITAIL(0x004579A0u); RECOMP_RETURN(); /* 0x00781BB5: jmp 0x4579a0 */

}

void sub_00781BC0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781BC0u);

L_00781BC0:
    ecx = 0x0082C6E8u; /* 0x00781BC0: mov ecx, 0x82c6e8 */
    RECOMP_ITAIL(0x005768E0u); RECOMP_RETURN(); /* 0x00781BC5: jmp 0x5768e0 */

}

void sub_00781BD0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781BD0u);

L_00781BD0:
    ecx = 0x0082C694u; /* 0x00781BD0: mov ecx, 0x82c694 */
    RECOMP_ITAIL(0x0043CAD0u); RECOMP_RETURN(); /* 0x00781BD5: jmp 0x43cad0 */

}

void sub_00781BE0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781BE0u);

L_00781BE0:
    ecx = 0x0082C710u; /* 0x00781BE0: mov ecx, 0x82c710 */
    RECOMP_ITAIL(0x00605390u); RECOMP_RETURN(); /* 0x00781BE5: jmp 0x605390 */

}

void sub_00781BF0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781BF0u);

L_00781BF0:
    ecx = 0x0082BEA0u; /* 0x00781BF0: mov ecx, 0x82bea0 */
    RECOMP_ITAIL(0x00605390u); RECOMP_RETURN(); /* 0x00781BF5: jmp 0x605390 */

}

void sub_00781C00(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781C00u);

L_00781C00:
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00781C00: ret  */

}

void sub_00781C10(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781C10u);

L_00781C10:
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00781C10: ret  */

}

void sub_00781C20(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781C20u);

L_00781C20:
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00781C20: ret  */

}

void sub_00781C30(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781C30u);

L_00781C30:
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00781C30: ret  */

}

void sub_00781C40(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781C40u);

L_00781C40:
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00781C40: ret  */

}

void sub_00781C50(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781C50u);

L_00781C50:
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00781C50: ret  */

}

void sub_00781C60(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781C60u);

L_00781C60:
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00781C60: ret  */

}

void sub_00781C70(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781C70u);

L_00781C70:
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00781C70: ret  */

}

void sub_00781C80(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781C80u);

L_00781C80:
    ecx = 0x0082C5E8u; /* 0x00781C80: mov ecx, 0x82c5e8 */
    RECOMP_ITAIL(0x00605390u); RECOMP_RETURN(); /* 0x00781C85: jmp 0x605390 */

}

void sub_00781C90(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781C90u);

L_00781C90:
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00781C90: ret  */

}

void sub_00781CA0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781CA0u);

L_00781CA0:
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00781CA0: ret  */

}

void sub_00781CB0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781CB0u);

L_00781CB0:
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00781CB0: ret  */

}

void sub_00781CC0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781CC0u);

L_00781CC0:
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00781CC0: ret  */

}

void sub_00781CD0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781CD0u);

L_00781CD0:
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00781CD0: ret  */

}

void sub_00781CE0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781CE0u);

L_00781CE0:
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00781CE0: ret  */

}

void sub_00781CF0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781CF0u);

L_00781CF0:
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00781CF0: ret  */

}

void sub_00781D00(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781D00u);

L_00781D00:
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00781D00: ret  */

}

void sub_00781D10(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781D10u);

L_00781D10:
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00781D10: ret  */

}

void sub_00781D20(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781D20u);

L_00781D20:
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00781D20: ret  */

}

void sub_00781D30(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781D30u);

L_00781D30:
    ecx = 0x0082BEBCu; /* 0x00781D30: mov ecx, 0x82bebc */
    RECOMP_ITAIL(0x004835C0u); RECOMP_RETURN(); /* 0x00781D35: jmp 0x4835c0 */

}

void sub_00781D40(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781D40u);

L_00781D40:
    ecx = 0x0082C6A4u; /* 0x00781D40: mov ecx, 0x82c6a4 */
    RECOMP_ITAIL(0x004835C0u); RECOMP_RETURN(); /* 0x00781D45: jmp 0x4835c0 */

}

void sub_00781D50(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781D50u);

L_00781D50:
    ecx = 0x0082BEC4u; /* 0x00781D50: mov ecx, 0x82bec4 */
    RECOMP_ITAIL(0x004835C0u); RECOMP_RETURN(); /* 0x00781D55: jmp 0x4835c0 */

}

void sub_00781D60(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781D60u);

L_00781D60:
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00781D60: ret  */

}

void sub_00781D70(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781D70u);

L_00781D70:
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00781D70: ret  */

}

void sub_00781D80(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781D80u);

L_00781D80:
    PUSH32(esp, 0x004022C0u); /* 0x00781D80: push 0x4022c0 */
    PUSH32(esp, 0xFAu); /* 0x00781D85: push 0xfa */
    PUSH32(esp, 0x30u); /* 0x00781D8A: push 0x30 */
    PUSH32(esp, 0x0082DC08u); /* 0x00781D8C: push 0x82dc08 */
    RECOMP_CALL(sub_0075C401); /* 0x00781D91: call 0x75c401 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00781D96: ret  */

}

void sub_00781DA0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781DA0u);

L_00781DA0:
    ecx = 0x00830D08u; /* 0x00781DA0: mov ecx, 0x830d08 */
    RECOMP_ITAIL(0x004DEF30u); RECOMP_RETURN(); /* 0x00781DA5: jmp 0x4def30 */

}

void sub_00781DB0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781DB0u);

L_00781DB0:
    ecx = 0x0082DBC8u; /* 0x00781DB0: mov ecx, 0x82dbc8 */
    RECOMP_ITAIL(0x004933E0u); RECOMP_RETURN(); /* 0x00781DB5: jmp 0x4933e0 */

}

void sub_00781DC0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781DC0u);

L_00781DC0:
    ecx = 0x008358C0u; /* 0x00781DC0: mov ecx, 0x8358c0 */
    RECOMP_ITAIL(0x00491B40u); RECOMP_RETURN(); /* 0x00781DC5: jmp 0x491b40 */

}

void sub_00781DD0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781DD0u);

L_00781DD0:
    PUSH32(esp, 0x004919D0u); /* 0x00781DD0: push 0x4919d0 */
    PUSH32(esp, 0x16u); /* 0x00781DD5: push 0x16 */
    PUSH32(esp, 0x70u); /* 0x00781DD7: push 0x70 */
    PUSH32(esp, 0x00832DE0u); /* 0x00781DD9: push 0x832de0 */
    RECOMP_CALL(sub_0075C401); /* 0x00781DDE: call 0x75c401 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00781DE3: ret  */

}

void sub_00781DF0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781DF0u);

L_00781DF0:
    ecx = 0x00830AF0u; /* 0x00781DF0: mov ecx, 0x830af0 */
    RECOMP_ITAIL(0x00491B80u); RECOMP_RETURN(); /* 0x00781DF5: jmp 0x491b80 */

}

void sub_00781E00(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781E00u);

L_00781E00:
    ecx = 0x0082DC00u; /* 0x00781E00: mov ecx, 0x82dc00 */
    RECOMP_ITAIL(0x00491BC0u); RECOMP_RETURN(); /* 0x00781E05: jmp 0x491bc0 */

}

void sub_00781E10(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781E10u);

L_00781E10:
    ecx = 0x0083579Cu; /* 0x00781E10: mov ecx, 0x83579c */
    RECOMP_ITAIL(0x004933E0u); RECOMP_RETURN(); /* 0x00781E15: jmp 0x4933e0 */

}

void sub_00781E20(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781E20u);

L_00781E20:
    ecx = 0x008357E0u; /* 0x00781E20: mov ecx, 0x8357e0 */
    RECOMP_ITAIL(0x004945C0u); RECOMP_RETURN(); /* 0x00781E25: jmp 0x4945c0 */

}

void sub_00781E30(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781E30u);

L_00781E30:
    ecx = 0x0082DBC0u; /* 0x00781E30: mov ecx, 0x82dbc0 */
    RECOMP_ITAIL(0x00494570u); RECOMP_RETURN(); /* 0x00781E35: jmp 0x494570 */

}

void sub_00781E40(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781E40u);

L_00781E40:
    ecx = 0x00832DA4u; /* 0x00781E40: mov ecx, 0x832da4 */
    RECOMP_ITAIL(0x00494570u); RECOMP_RETURN(); /* 0x00781E45: jmp 0x494570 */

}

void sub_00781E50(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781E50u);

L_00781E50:
    ecx = 0x00830D30u; /* 0x00781E50: mov ecx, 0x830d30 */
    RECOMP_ITAIL(0x00494240u); RECOMP_RETURN(); /* 0x00781E55: jmp 0x494240 */

}

void sub_00781E60(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781E60u);

L_00781E60:
    ecx = 0x00830D14u; /* 0x00781E60: mov ecx, 0x830d14 */
    RECOMP_ITAIL(0x004DEF30u); RECOMP_RETURN(); /* 0x00781E65: jmp 0x4def30 */

}

void sub_00781E70(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781E70u);

L_00781E70:
    ecx = 0x008358C8u; /* 0x00781E70: mov ecx, 0x8358c8 */
    RECOMP_ITAIL(0x004DEF30u); RECOMP_RETURN(); /* 0x00781E75: jmp 0x4def30 */

}

void sub_00781E80(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781E80u);

L_00781E80:
    ecx = 0x00835860u; /* 0x00781E80: mov ecx, 0x835860 */
    RECOMP_ITAIL(0x004945C0u); RECOMP_RETURN(); /* 0x00781E85: jmp 0x4945c0 */

}

void sub_00781E90(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781E90u);

L_00781E90:
    ecx = 0x00830C78u; /* 0x00781E90: mov ecx, 0x830c78 */
    RECOMP_ITAIL(0x00494980u); RECOMP_RETURN(); /* 0x00781E95: jmp 0x494980 */

}

void sub_00781EA0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781EA0u);

L_00781EA0:
    ecx = 0x00830AE8u; /* 0x00781EA0: mov ecx, 0x830ae8 */
    RECOMP_ITAIL(0x00494D90u); RECOMP_RETURN(); /* 0x00781EA5: jmp 0x494d90 */

}

void sub_00781EB0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781EB0u);

L_00781EB0:
    ecx = 0x00830D1Cu; /* 0x00781EB0: mov ecx, 0x830d1c */
    RECOMP_ITAIL(0x004950F0u); RECOMP_RETURN(); /* 0x00781EB5: jmp 0x4950f0 */

}

void sub_00781EC0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781EC0u);

L_00781EC0:
    ecx = 0x00835858u; /* 0x00781EC0: mov ecx, 0x835858 */
    RECOMP_ITAIL(0x00495130u); RECOMP_RETURN(); /* 0x00781EC5: jmp 0x495130 */

}

void sub_00781ED0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781ED0u);

L_00781ED0:
    ecx = 0x00835794u; /* 0x00781ED0: mov ecx, 0x835794 */
    RECOMP_ITAIL(0x00495130u); RECOMP_RETURN(); /* 0x00781ED5: jmp 0x495130 */

}

void sub_00781EE0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781EE0u);

L_00781EE0:
    ecx = 0x00835850u; /* 0x00781EE0: mov ecx, 0x835850 */
    RECOMP_ITAIL(0x00495170u); RECOMP_RETURN(); /* 0x00781EE5: jmp 0x495170 */

}

void sub_00781EF0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781EF0u);

L_00781EF0:
    PUSH32(esp, 0x004957A0u); /* 0x00781EF0: push 0x4957a0 */
    PUSH32(esp, 7); /* 0x00781EF5: push 7 */
    PUSH32(esp, 0x44u); /* 0x00781EF7: push 0x44 */
    PUSH32(esp, 0x00836568u); /* 0x00781EF9: push 0x836568 */
    RECOMP_CALL(sub_0075C401); /* 0x00781EFE: call 0x75c401 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00781F03: ret  */

}

void sub_00781F10(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781F10u);

L_00781F10:
    ecx = 0x008364F4u; /* 0x00781F10: mov ecx, 0x8364f4 */
    RECOMP_ITAIL(0x004022C0u); RECOMP_RETURN(); /* 0x00781F15: jmp 0x4022c0 */

}

void sub_00781F20(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781F20u);

L_00781F20:
    ecx = 0x008371B0u; /* 0x00781F20: mov ecx, 0x8371b0 */
    RECOMP_ITAIL(0x00401800u); RECOMP_RETURN(); /* 0x00781F25: jmp 0x401800 */

}

void sub_00781F30(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781F30u);

L_00781F30:
    ecx = 0x00836750u; /* 0x00781F30: mov ecx, 0x836750 */
    RECOMP_ITAIL(0x00401800u); RECOMP_RETURN(); /* 0x00781F35: jmp 0x401800 */

}

void sub_00781F40(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781F40u);

L_00781F40:
    ecx = 0x00836560u; /* 0x00781F40: mov ecx, 0x836560 */
    RECOMP_ITAIL(0x004835C0u); RECOMP_RETURN(); /* 0x00781F45: jmp 0x4835c0 */

}

void sub_00781F50(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781F50u);

L_00781F50:
    ecx = 0x00863760u; /* 0x00781F50: mov ecx, 0x863760 */
    RECOMP_ITAIL(0x0043CAD0u); RECOMP_RETURN(); /* 0x00781F55: jmp 0x43cad0 */

}

void sub_00781F60(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781F60u);

L_00781F60:
    ecx = 0x00839C40u; /* 0x00781F60: mov ecx, 0x839c40 */
    RECOMP_ITAIL(0x0050F7D0u); RECOMP_RETURN(); /* 0x00781F65: jmp 0x50f7d0 */

}

void sub_00781F70(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781F70u);

L_00781F70:
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00781F70: ret  */

}

void sub_00781F80(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781F80u);

L_00781F80:
    ecx = 0x008637D0u; /* 0x00781F80: mov ecx, 0x8637d0 */
    RECOMP_ITAIL(0x005104B0u); RECOMP_RETURN(); /* 0x00781F85: jmp 0x5104b0 */

}

void sub_00781F90(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781F90u);

L_00781F90:
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00781F90: ret  */

}

void sub_00781FA0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781FA0u);

L_00781FA0:
    ecx = 0x0085AD40u; /* 0x00781FA0: mov ecx, 0x85ad40 */
    RECOMP_ITAIL(0x00512E40u); RECOMP_RETURN(); /* 0x00781FA5: jmp 0x512e40 */

}

void sub_00781FB0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781FB0u);

L_00781FB0:
    PUSH32(esp, 0x00525C50u); /* 0x00781FB0: push 0x525c50 */
    PUSH32(esp, 0x100u); /* 0x00781FB5: push 0x100 */
    PUSH32(esp, 8); /* 0x00781FBA: push 8 */
    PUSH32(esp, 0x008639A0u); /* 0x00781FBC: push 0x8639a0 */
    RECOMP_CALL(sub_0075C401); /* 0x00781FC1: call 0x75c401 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00781FC6: ret  */

}

void sub_00781FD0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781FD0u);

L_00781FD0:
    ecx = 0x008637B0u; /* 0x00781FD0: mov ecx, 0x8637b0 */
    RECOMP_ITAIL(0x0052CC40u); RECOMP_RETURN(); /* 0x00781FD5: jmp 0x52cc40 */

}

void sub_00781FE0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781FE0u);

L_00781FE0:
    ecx = 0x0083A9D0u; /* 0x00781FE0: mov ecx, 0x83a9d0 */
    RECOMP_ITAIL(0x00531CC0u); RECOMP_RETURN(); /* 0x00781FE5: jmp 0x531cc0 */

}

void sub_00781FF0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781FF0u);

L_00781FF0:
    ecx = 0x008637A0u; /* 0x00781FF0: mov ecx, 0x8637a0 */
    RECOMP_ITAIL(0x0052C420u); RECOMP_RETURN(); /* 0x00781FF5: jmp 0x52c420 */

}

void sub_00782000(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782000u);

L_00782000:
    ecx = 0x00863770u; /* 0x00782000: mov ecx, 0x863770 */
    RECOMP_ITAIL(0x0052C420u); RECOMP_RETURN(); /* 0x00782005: jmp 0x52c420 */

}

void sub_00782010(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782010u);

L_00782010:
    ecx = 0x00839C30u; /* 0x00782010: mov ecx, 0x839c30 */
    RECOMP_ITAIL(0x0052C420u); RECOMP_RETURN(); /* 0x00782015: jmp 0x52c420 */

}

void sub_00782020(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782020u);

L_00782020:
    ecx = 0x00839BD0u; /* 0x00782020: mov ecx, 0x839bd0 */
    RECOMP_ITAIL(0x0052C420u); RECOMP_RETURN(); /* 0x00782025: jmp 0x52c420 */

}

void sub_00782030(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782030u);

L_00782030:
    ecx = 0x00863768u; /* 0x00782030: mov ecx, 0x863768 */
    RECOMP_ITAIL(0x00531940u); RECOMP_RETURN(); /* 0x00782035: jmp 0x531940 */

}

void sub_00782040(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782040u);

L_00782040:
    ecx = 0x00838980u; /* 0x00782040: mov ecx, 0x838980 */
    RECOMP_ITAIL(0x005398E0u); RECOMP_RETURN(); /* 0x00782045: jmp 0x5398e0 */

}

void sub_00782050(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782050u);

L_00782050:
    ecx = 0x008637BCu; /* 0x00782050: mov ecx, 0x8637bc */
    RECOMP_ITAIL(0x004835C0u); RECOMP_RETURN(); /* 0x00782055: jmp 0x4835c0 */

}

void sub_00782060(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782060u);

L_00782060:
    PUSH32(esp, 0x004022C0u); /* 0x00782060: push 0x4022c0 */
    PUSH32(esp, 6); /* 0x00782065: push 6 */
    PUSH32(esp, 0x20u); /* 0x00782067: push 0x20 */
    PUSH32(esp, 0x00864640u); /* 0x00782069: push 0x864640 */
    RECOMP_CALL(sub_0075C401); /* 0x0078206E: call 0x75c401 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00782073: ret  */

}

void sub_00782080(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782080u);

L_00782080:
    ecx = 0x00864630u; /* 0x00782080: mov ecx, 0x864630 */
    RECOMP_ITAIL(0x004DEF30u); RECOMP_RETURN(); /* 0x00782085: jmp 0x4def30 */

}

void sub_00782090(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782090u);

L_00782090:
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00782090: ret  */

}

void sub_007820A0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007820A0u);

L_007820A0:
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007820A0: ret  */

}

void sub_007820B0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007820B0u);

L_007820B0:
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007820B0: ret  */

}

void sub_007820C0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007820C0u);

L_007820C0:
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007820C0: ret  */

}

void sub_007820D0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007820D0u);

L_007820D0:
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007820D0: ret  */

}

void sub_007820E0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007820E0u);

L_007820E0:
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007820E0: ret  */

}

void sub_007820F0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007820F0u);

L_007820F0:
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x007820F0: ret  */

}

void sub_00782100(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782100u);

L_00782100:
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00782100: ret  */

}

void sub_00782110(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782110u);

L_00782110:
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00782110: ret  */

}

void sub_00782120(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782120u);

L_00782120:
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00782120: ret  */

}

void sub_00782130(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782130u);

L_00782130:
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00782130: ret  */

}

void sub_00782140(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782140u);

L_00782140:
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00782140: ret  */

}

void sub_00782150(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782150u);

L_00782150:
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00782150: ret  */

}

void sub_00782160(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782160u);

L_00782160:
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00782160: ret  */

}

void sub_00782170(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782170u);

L_00782170:
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00782170: ret  */

}