/* AUTO-GENERATED from SPEED2.analysis.exe by run_lift.py (pcrecomp lift32). DO NOT EDIT, DO NOT COMMIT. */
#define RECOMP_GENERATED_CODE
#include "recomp_types.h"
#include "recomp_funcs.h"
#include <math.h>
#include <string.h>

void sub_0077BE00(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077BE00u);

L_0077BE00:
    PUSH32(esp, 2); /* 0x0077BE00: push 2 */
    PUSH32(esp, 0x007EC420u); /* 0x0077BE02: push 0x7ec420 */
    ecx = 0x0082A4E0u; /* 0x0077BE07: mov ecx, 0x82a4e0 */
    RECOMP_CALL(sub_00576770); /* 0x0077BE0C: call 0x576770 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077BE11: ret  */

}

void sub_0077BE20(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077BE20u);

L_0077BE20:
    fp_push(*(float*)&MEM32(0x786F60)); /* 0x0077BE20: fld dword ptr [0x786f60] */
    PUSH32(esp, 0x3DCCCCCDu); /* 0x0077BE26: push 0x3dcccccd */
    _st[0] *= (double)*(float*)ADDR(0x787B5C); /* 0x0077BE2B: fmul dword ptr [0x787b5c] */
    PUSH32(esp, 0x3CF5C28Fu); /* 0x0077BE31: push 0x3cf5c28f */
    PUSH32(esp, 0); /* 0x0077BE36: push 0 */
    PUSH32(esp, ecx); /* 0x0077BE38: push ecx */
    ecx = 0x008286FCu; /* 0x0077BE39: mov ecx, 0x8286fc */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x0077BE3E: fstp dword ptr [esp] */
    RECOMP_CALL(sub_00446690); /* 0x0077BE41: call 0x446690 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00781BA0u); /* 0x0077BE46: push 0x781ba0 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077BE4B: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077BE50: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077BE51: ret  */

}

void sub_0077BE60(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077BE60u);

L_0077BE60:
    MEM16(0x8286E8) = (uint16_t)(0x38Eu); /* 0x0077BE60: mov word ptr [0x8286e8], 0x38e */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077BE69: ret  */

}

void sub_0077BE70(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077BE70u);

L_0077BE70:
    MEM16(0x82A4D0) = (uint16_t)(0xBBBu); /* 0x0077BE70: mov word ptr [0x82a4d0], 0xbbb */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077BE79: ret  */

}

void sub_0077BE80(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077BE80u);

L_0077BE80:
    MEM16(0x82A4DC) = (uint16_t)(0x38Eu); /* 0x0077BE80: mov word ptr [0x82a4dc], 0x38e */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077BE89: ret  */

}

void sub_0077BE90(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077BE90u);

L_0077BE90:
    PUSH32(esp, 0x00781C90u); /* 0x0077BE90: push 0x781c90 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077BE95: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077BE9A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077BE9B: ret  */

}

void sub_0077BEA0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077BEA0u);

L_0077BEA0:
    eax = MEM32(0x7ED908); /* 0x0077BEA0: mov eax, dword ptr [0x7ed908] */
    ecx = MEM32(0x7ED91C); /* 0x0077BEA5: mov ecx, dword ptr [0x7ed91c] */
    edx = ecx + eax * 2; /* 0x0077BEAB: lea edx, [ecx + eax*2] */
    ecx = MEM32(0x7ED918); /* 0x0077BEAE: mov ecx, dword ptr [0x7ed918] */
    eax = MEM32(0x7ED8F8); /* 0x0077BEB4: mov eax, dword ptr [0x7ed8f8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x0077BEB9: add edx, ecx */
    _flag_k = FK_ADD;
    ecx = MEM32(0x7ED914); /* 0x0077BEBB: mov ecx, dword ptr [0x7ed914] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x0077BEC1: add edx, eax */
    _flag_k = FK_ADD;
    eax = MEM32(0x7ED8FC); /* 0x0077BEC3: mov eax, dword ptr [0x7ed8fc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x0077BEC8: add edx, ecx */
    _flag_k = FK_ADD;
    ecx = MEM32(0x7ED900); /* 0x0077BECA: mov ecx, dword ptr [0x7ed900] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x0077BED0: add edx, eax */
    _flag_k = FK_ADD;
    eax = MEM32(0x7ED904); /* 0x0077BED2: mov eax, dword ptr [0x7ed904] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x0077BED7: add edx, ecx */
    _flag_k = FK_ADD;
    ecx = MEM32(0x7ED90C); /* 0x0077BED9: mov ecx, dword ptr [0x7ed90c] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x0077BEDF: add edx, eax */
    _flag_k = FK_ADD;
    eax = MEM32(0x7ED910); /* 0x0077BEE1: mov eax, dword ptr [0x7ed910] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x0077BEE6: add edx, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x0077BEE8: add edx, eax */
    _flag_k = FK_ADD;
    MEM32(0x82BF30) = edx; /* 0x0077BEEA: mov dword ptr [0x82bf30], edx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077BEF0: ret  */

}

void sub_0077BF00(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077BF00u);

L_0077BF00:
    fp_push(*(float*)&MEM32(0x784250)); /* 0x0077BF00: fld dword ptr [0x784250] */
    _st[0] /= (double)*(float*)ADDR(0x788480); /* 0x0077BF06: fdiv dword ptr [0x788480] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x82BF44) = _v; } /* 0x0077BF0C: fstp dword ptr [0x82bf44] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077BF12: ret  */

}

void sub_0077BF20(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077BF20u);

L_0077BF20:
    PUSH32(esp, 5); /* 0x0077BF20: push 5 */
    ecx = 0x0082C6E8u; /* 0x0077BF22: mov ecx, 0x82c6e8 */
    RECOMP_CALL(sub_00579F20); /* 0x0077BF27: call 0x579f20 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00781BC0u); /* 0x0077BF2C: push 0x781bc0 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077BF31: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077BF36: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077BF37: ret  */

}

void sub_0077BF40(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077BF40u);

L_0077BF40:
    fp_push(*(double*)ADDR(0x786E68)); /* 0x0077BF40: fld qword ptr [0x786e68] */
    _st[0] = fabs(_st[0]); /* 0x0077BF46: fabs  */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(0x787594)); /* 0x0077BF48: fcomp dword ptr [0x787594] */
    fp_pop();
    _flag_a = (uint32_t)_fpu_cmp; _flag_b = 0;
    _flag_k = FK_FCOM;
    eax = (eax & 0xFFFF0000u) | (((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u) | ((((uint32_t)-_fp_top) & 7u) << 11)); /* 0x0077BF4E: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x0077BF50: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_0077BF5F; /* 0x0077BF53: jp 0x77bf5f */

L_0077BF55:
    MEM32(0x7F0008) = 0x3F800008u; /* 0x0077BF55: mov dword ptr [0x7f0008], 0x3f800008 */

L_0077BF5F:
    PUSH32(esp, 0x00781CA0u); /* 0x0077BF5F: push 0x781ca0 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077BF64: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077BF69: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077BF6A: ret  */

}

void sub_0077BF70(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077BF70u);

L_0077BF70:
    fp_push(*(double*)ADDR(0x78C240)); /* 0x0077BF70: fld qword ptr [0x78c240] */
    _st[0] = fabs(_st[0]); /* 0x0077BF76: fabs  */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(0x787594)); /* 0x0077BF78: fcomp dword ptr [0x787594] */
    fp_pop();
    _flag_a = (uint32_t)_fpu_cmp; _flag_b = 0;
    _flag_k = FK_FCOM;
    eax = (eax & 0xFFFF0000u) | (((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u) | ((((uint32_t)-_fp_top) & 7u) << 11)); /* 0x0077BF7E: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x0077BF80: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_0077BF8F; /* 0x0077BF83: jp 0x77bf8f */

L_0077BF85:
    MEM32(0x7F0024) = 0x42C80000u; /* 0x0077BF85: mov dword ptr [0x7f0024], 0x42c80000 */

L_0077BF8F:
    PUSH32(esp, 0x00781CB0u); /* 0x0077BF8F: push 0x781cb0 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077BF94: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077BF99: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077BF9A: ret  */

}

void sub_0077BFA0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077BFA0u);

L_0077BFA0:
    fp_push(*(float*)&MEM32(0x78848C)); /* 0x0077BFA0: fld dword ptr [0x78848c] */
    eax = MEM32(0x78848C); /* 0x0077BFA6: mov eax, dword ptr [0x78848c] */
    _st[0] /= (double)*(float*)ADDR(0x788490); /* 0x0077BFAB: fdiv dword ptr [0x788490] */
    MEM32(0x7F0038) = eax; /* 0x0077BFB1: mov dword ptr [0x7f0038], eax */
    { float _v = (float)_st[0]; *(float*)ADDR(0x7F0034) = _v; } /* 0x0077BFB6: fst dword ptr [0x7f0034] */
    fp_push(*(double*)ADDR(0x78C248)); /* 0x0077BFBC: fld qword ptr [0x78c248] */
    _st[0] = fabs(_st[0]); /* 0x0077BFC2: fabs  */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(0x787594)); /* 0x0077BFC4: fcomp dword ptr [0x787594] */
    fp_pop();
    _flag_a = (uint32_t)_fpu_cmp; _flag_b = 0;
    _flag_k = FK_FCOM;
    eax = (eax & 0xFFFF0000u) | (((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u) | ((((uint32_t)-_fp_top) & 7u) << 11)); /* 0x0077BFCA: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x0077BFCC: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_0077BFDB; /* 0x0077BFCF: jp 0x77bfdb */

L_0077BFD1:
    MEM32(0x7F0040) = 0x42FE0000u; /* 0x0077BFD1: mov dword ptr [0x7f0040], 0x42fe0000 */

L_0077BFDB:
    PUSH32(esp, 0x00781CC0u); /* 0x0077BFDB: push 0x781cc0 */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x7F0048) = _v; } /* 0x0077BFE0: fstp dword ptr [0x7f0048] */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077BFE6: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077BFEB: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077BFEC: ret  */

}

void sub_0077BFF0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077BFF0u);

L_0077BFF0:
    eax = MEM32(0x788494); /* 0x0077BFF0: mov eax, dword ptr [0x788494] */
    edx = MEM32(0x78849C); /* 0x0077BFF5: mov edx, dword ptr [0x78849c] */
    ecx = MEM32(0x788498); /* 0x0077BFFB: mov ecx, dword ptr [0x788498] */
    MEM32(0x82BCD0) = eax; /* 0x0077C001: mov dword ptr [0x82bcd0], eax */
    eax = MEM32(0x7884A0); /* 0x0077C006: mov eax, dword ptr [0x7884a0] */
    MEM32(0x82BCDC) = eax; /* 0x0077C00B: mov dword ptr [0x82bcdc], eax */
    fp_push(*(float*)&MEM32(0x82BCDC)); /* 0x0077C010: fld dword ptr [0x82bcdc] */
    MEM32(0x82BCD8) = edx; /* 0x0077C016: mov dword ptr [0x82bcd8], edx */
    _st[0] -= (double)*(float*)ADDR(0x82BCD8); /* 0x0077C01C: fsub dword ptr [0x82bcd8] */
    MEM32(0x82BCD4) = ecx; /* 0x0077C022: mov dword ptr [0x82bcd4], ecx */
    _st[0] = fabs(_st[0]); /* 0x0077C028: fabs  */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(0x787594)); /* 0x0077C02A: fcomp dword ptr [0x787594] */
    fp_pop();
    _flag_a = (uint32_t)_fpu_cmp; _flag_b = 0;
    _flag_k = FK_FCOM;
    eax = (eax & 0xFFFF0000u) | (((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u) | ((((uint32_t)-_fp_top) & 7u) << 11)); /* 0x0077C030: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x0077C032: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_0077C049; /* 0x0077C035: jp 0x77c049 */

L_0077C037:
    fp_push(*(float*)&MEM32(0x82BCDC)); /* 0x0077C037: fld dword ptr [0x82bcdc] */
    _st[0] += (double)*(float*)ADDR(0x787594); /* 0x0077C03D: fadd dword ptr [0x787594] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x82BCDC) = _v; } /* 0x0077C043: fstp dword ptr [0x82bcdc] */

L_0077C049:
    ecx = MEM32(0x788494); /* 0x0077C049: mov ecx, dword ptr [0x788494] */
    PUSH32(esp, 0x00781CD0u); /* 0x0077C04F: push 0x781cd0 */
    MEM32(0x82BCE4) = ecx; /* 0x0077C054: mov dword ptr [0x82bce4], ecx */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077C05A: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077C05F: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077C060: ret  */

}

void sub_0077C070(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077C070u);

L_0077C070:
    PUSH32(esp, 0x00781CE0u); /* 0x0077C070: push 0x781ce0 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077C075: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077C07A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077C07B: ret  */

}

void sub_0077C080(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077C080u);

L_0077C080:
    PUSH32(esp, 0x00781CF0u); /* 0x0077C080: push 0x781cf0 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077C085: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077C08A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077C08B: ret  */

}

void sub_0077C090(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077C090u);

L_0077C090:
    PUSH32(esp, 0x00781D00u); /* 0x0077C090: push 0x781d00 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077C095: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077C09A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077C09B: ret  */

}

void sub_0077C0A0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077C0A0u);

L_0077C0A0:
    PUSH32(esp, 0x00781D10u); /* 0x0077C0A0: push 0x781d10 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077C0A5: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077C0AA: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077C0AB: ret  */

}

void sub_0077C0B0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077C0B0u);

L_0077C0B0:
    PUSH32(esp, 0x00781D20u); /* 0x0077C0B0: push 0x781d20 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077C0B5: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077C0BA: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077C0BB: ret  */

}

void sub_0077C0C0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077C0C0u);

L_0077C0C0:
    ecx = 0x0082C694u; /* 0x0077C0C0: mov ecx, 0x82c694 */
    RECOMP_CALL(sub_00468ED0); /* 0x0077C0C5: call 0x468ed0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00781BD0u); /* 0x0077C0CA: push 0x781bd0 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077C0CF: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077C0D4: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077C0D5: ret  */

}

void sub_0077C0E0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077C0E0u);

L_0077C0E0:
    PUSH32(esp, esi); /* 0x0077C0E0: push esi */
    PUSH32(esp, edi); /* 0x0077C0E1: push edi */
    esi = 0x0082BF48u; /* 0x0077C0E2: mov esi, 0x82bf48 */
    edi = 0xDu; /* 0x0077C0E7: mov edi, 0xd */
    esp = esp; /* 0x0077C0EC: lea esp, [esp] */

L_0077C0F0:
    ecx = esi; /* 0x0077C0F0: mov ecx, esi */
    RECOMP_CALL(sub_00458F80); /* 0x0077C0F2: call 0x458f80 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x70u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x70u; /* 0x0077C0F7: add esi, 0x70 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x0077C0FA: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_0077C0F0; /* 0x0077C0FB: jne 0x77c0f0 */

L_0077C0FD:
    edi = POP32_VAL(esp); /* 0x0077C0FD: pop edi */
    esi = POP32_VAL(esp); /* 0x0077C0FE: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077C0FF: ret  */

}

void sub_0077C100(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077C100u);

L_0077C100:
    PUSH32(esp, 0x0078C250u); /* 0x0077C100: push 0x78c250 */
    ecx = 0x0082C710u; /* 0x0077C105: mov ecx, 0x82c710 */
    RECOMP_CALL(sub_0060B780); /* 0x0077C10A: call 0x60b780 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00781BE0u); /* 0x0077C10F: push 0x781be0 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077C114: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077C119: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077C11A: ret  */

}

void sub_0077C120(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077C120u);

L_0077C120:
    PUSH32(esp, 0x0078C25Cu); /* 0x0077C120: push 0x78c25c */
    ecx = 0x0082BEA0u; /* 0x0077C125: mov ecx, 0x82bea0 */
    RECOMP_CALL(sub_0060B780); /* 0x0077C12A: call 0x60b780 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00781BF0u); /* 0x0077C12F: push 0x781bf0 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077C134: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077C139: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077C13A: ret  */

}

void sub_0077C140(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077C140u);

    goto L_0077C140;

L_00734DA0:
    eax = ecx; /* 0x00734DA0: mov eax, ecx */
    MEM32(eax + 0x4) = 0xFFFFFFFDu; /* 0x00734DA2: mov dword ptr [eax + 4], 0xfffffffd */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00734DA9: ret  */

L_0077C140:
    ecx = 0x0082C570u; /* 0x0077C140: mov ecx, 0x82c570 */
    RECOMP_BACKEDGE();
    goto L_00734DA0; /* 0x0077C145: jmp 0x734da0 */

}

void sub_0077C150(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077C150u);

    goto L_0077C150;

L_00734DA0:
    eax = ecx; /* 0x00734DA0: mov eax, ecx */
    MEM32(eax + 0x4) = 0xFFFFFFFDu; /* 0x00734DA2: mov dword ptr [eax + 4], 0xfffffffd */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00734DA9: ret  */

L_0077C150:
    ecx = 0x0082C578u; /* 0x0077C150: mov ecx, 0x82c578 */
    RECOMP_BACKEDGE();
    goto L_00734DA0; /* 0x0077C155: jmp 0x734da0 */

}

void sub_0077C160(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077C160u);

    goto L_0077C160;

L_00734DA0:
    eax = ecx; /* 0x00734DA0: mov eax, ecx */
    MEM32(eax + 0x4) = 0xFFFFFFFDu; /* 0x00734DA2: mov dword ptr [eax + 4], 0xfffffffd */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00734DA9: ret  */

L_0077C160:
    ecx = 0x0082C528u; /* 0x0077C160: mov ecx, 0x82c528 */
    RECOMP_BACKEDGE();
    goto L_00734DA0; /* 0x0077C165: jmp 0x734da0 */

}

void sub_0077C170(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077C170u);

    goto L_0077C170;

L_00734DA0:
    eax = ecx; /* 0x00734DA0: mov eax, ecx */
    MEM32(eax + 0x4) = 0xFFFFFFFDu; /* 0x00734DA2: mov dword ptr [eax + 4], 0xfffffffd */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00734DA9: ret  */

L_0077C170:
    ecx = 0x0082C518u; /* 0x0077C170: mov ecx, 0x82c518 */
    RECOMP_BACKEDGE();
    goto L_00734DA0; /* 0x0077C175: jmp 0x734da0 */

}

void sub_0077C180(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077C180u);

    goto L_0077C180;

L_00734DA0:
    eax = ecx; /* 0x00734DA0: mov eax, ecx */
    MEM32(eax + 0x4) = 0xFFFFFFFDu; /* 0x00734DA2: mov dword ptr [eax + 4], 0xfffffffd */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00734DA9: ret  */

L_0077C180:
    ecx = 0x0082C6ACu; /* 0x0077C180: mov ecx, 0x82c6ac */
    RECOMP_BACKEDGE();
    goto L_00734DA0; /* 0x0077C185: jmp 0x734da0 */

}

void sub_0077C190(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077C190u);

    goto L_0077C190;

L_00734DA0:
    eax = ecx; /* 0x00734DA0: mov eax, ecx */
    MEM32(eax + 0x4) = 0xFFFFFFFDu; /* 0x00734DA2: mov dword ptr [eax + 4], 0xfffffffd */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00734DA9: ret  */

L_0077C190:
    ecx = 0x0082C560u; /* 0x0077C190: mov ecx, 0x82c560 */
    RECOMP_BACKEDGE();
    goto L_00734DA0; /* 0x0077C195: jmp 0x734da0 */

}

void sub_0077C1A0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077C1A0u);

    goto L_0077C1A0;

L_00734DA0:
    eax = ecx; /* 0x00734DA0: mov eax, ecx */
    MEM32(eax + 0x4) = 0xFFFFFFFDu; /* 0x00734DA2: mov dword ptr [eax + 4], 0xfffffffd */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00734DA9: ret  */

L_0077C1A0:
    ecx = 0x0082C588u; /* 0x0077C1A0: mov ecx, 0x82c588 */
    RECOMP_BACKEDGE();
    goto L_00734DA0; /* 0x0077C1A5: jmp 0x734da0 */

}

void sub_0077C1B0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077C1B0u);

    goto L_0077C1B0;

L_00734DA0:
    eax = ecx; /* 0x00734DA0: mov eax, ecx */
    MEM32(eax + 0x4) = 0xFFFFFFFDu; /* 0x00734DA2: mov dword ptr [eax + 4], 0xfffffffd */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00734DA9: ret  */

L_0077C1B0:
    ecx = 0x0082C650u; /* 0x0077C1B0: mov ecx, 0x82c650 */
    RECOMP_BACKEDGE();
    goto L_00734DA0; /* 0x0077C1B5: jmp 0x734da0 */

}

void sub_0077C1C0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077C1C0u);

    goto L_0077C1C0;

L_00734DA0:
    eax = ecx; /* 0x00734DA0: mov eax, ecx */
    MEM32(eax + 0x4) = 0xFFFFFFFDu; /* 0x00734DA2: mov dword ptr [eax + 4], 0xfffffffd */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00734DA9: ret  */

L_0077C1C0:
    ecx = 0x0082C5B8u; /* 0x0077C1C0: mov ecx, 0x82c5b8 */
    RECOMP_BACKEDGE();
    goto L_00734DA0; /* 0x0077C1C5: jmp 0x734da0 */

}

void sub_0077C1D0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077C1D0u);

    goto L_0077C1D0;

L_00734DA0:
    eax = ecx; /* 0x00734DA0: mov eax, ecx */
    MEM32(eax + 0x4) = 0xFFFFFFFDu; /* 0x00734DA2: mov dword ptr [eax + 4], 0xfffffffd */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00734DA9: ret  */

L_0077C1D0:
    ecx = 0x0082C658u; /* 0x0077C1D0: mov ecx, 0x82c658 */
    RECOMP_BACKEDGE();
    goto L_00734DA0; /* 0x0077C1D5: jmp 0x734da0 */

}

void sub_0077C1E0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077C1E0u);

    goto L_0077C1E0;

L_00734DA0:
    eax = ecx; /* 0x00734DA0: mov eax, ecx */
    MEM32(eax + 0x4) = 0xFFFFFFFDu; /* 0x00734DA2: mov dword ptr [eax + 4], 0xfffffffd */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00734DA9: ret  */

L_0077C1E0:
    ecx = 0x0082C604u; /* 0x0077C1E0: mov ecx, 0x82c604 */
    RECOMP_BACKEDGE();
    goto L_00734DA0; /* 0x0077C1E5: jmp 0x734da0 */

}

void sub_0077C1F0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077C1F0u);

    goto L_0077C1F0;

L_00734DA0:
    eax = ecx; /* 0x00734DA0: mov eax, ecx */
    MEM32(eax + 0x4) = 0xFFFFFFFDu; /* 0x00734DA2: mov dword ptr [eax + 4], 0xfffffffd */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00734DA9: ret  */

L_0077C1F0:
    ecx = 0x0082C580u; /* 0x0077C1F0: mov ecx, 0x82c580 */
    RECOMP_BACKEDGE();
    goto L_00734DA0; /* 0x0077C1F5: jmp 0x734da0 */

}

void sub_0077C200(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077C200u);

    goto L_0077C200;

L_00734DA0:
    eax = ecx; /* 0x00734DA0: mov eax, ecx */
    MEM32(eax + 0x4) = 0xFFFFFFFDu; /* 0x00734DA2: mov dword ptr [eax + 4], 0xfffffffd */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00734DA9: ret  */

L_0077C200:
    ecx = 0x0082C5C0u; /* 0x0077C200: mov ecx, 0x82c5c0 */
    RECOMP_BACKEDGE();
    goto L_00734DA0; /* 0x0077C205: jmp 0x734da0 */

}

void sub_0077C210(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077C210u);

    goto L_0077C210;

L_00734DA0:
    eax = ecx; /* 0x00734DA0: mov eax, ecx */
    MEM32(eax + 0x4) = 0xFFFFFFFDu; /* 0x00734DA2: mov dword ptr [eax + 4], 0xfffffffd */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00734DA9: ret  */

L_0077C210:
    ecx = 0x0082C640u; /* 0x0077C210: mov ecx, 0x82c640 */
    RECOMP_BACKEDGE();
    goto L_00734DA0; /* 0x0077C215: jmp 0x734da0 */

}

void sub_0077C220(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077C220u);

L_0077C220:
    eax = MEM32(0x78859C); /* 0x0077C220: mov eax, dword ptr [0x78859c] */
    edx = MEM32(0x788594); /* 0x0077C225: mov edx, dword ptr [0x788594] */
    ecx = eax; /* 0x0077C22B: mov ecx, eax */
    MEM32(0x7F38A8) = eax; /* 0x0077C22D: mov dword ptr [0x7f38a8], eax */
    MEM32(0x7F38AC) = ecx; /* 0x0077C232: mov dword ptr [0x7f38ac], ecx */
    ecx = MEM32(0x788598); /* 0x0077C238: mov ecx, dword ptr [0x788598] */
    eax = edx; /* 0x0077C23E: mov eax, edx */
    MEM32(0x7F38E0) = edx; /* 0x0077C240: mov dword ptr [0x7f38e0], edx */
    edx = ecx; /* 0x0077C246: mov edx, ecx */
    MEM32(0x7F38E4) = eax; /* 0x0077C248: mov dword ptr [0x7f38e4], eax */
    MEM32(0x7F38E8) = ecx; /* 0x0077C24D: mov dword ptr [0x7f38e8], ecx */
    SET_LO8(ecx, 0x80u); /* 0x0077C253: mov cl, 0x80 */
    SET_LO8(eax, 0x25u); /* 0x0077C255: mov al, 0x25 */
    MEM8(0x7F3908) = (uint8_t)(LO8(eax)); /* 0x0077C257: mov byte ptr [0x7f3908], al */
    MEM8(0x7F3909) = (uint8_t)(LO8(eax)); /* 0x0077C25C: mov byte ptr [0x7f3909], al */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0077C261: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(0x7F390E) = (uint8_t)(LO8(ecx)); /* 0x0077C263: mov byte ptr [0x7f390e], cl */
    MEM8(0x7F390F) = (uint8_t)(LO8(ecx)); /* 0x0077C269: mov byte ptr [0x7f390f], cl */
    MEM8(0x7F3910) = (uint8_t)(LO8(ecx)); /* 0x0077C26F: mov byte ptr [0x7f3910], cl */
    MEM8(0x7F3911) = (uint8_t)(LO8(ecx)); /* 0x0077C275: mov byte ptr [0x7f3911], cl */
    MEM8(0x7F3912) = (uint8_t)(LO8(ecx)); /* 0x0077C27B: mov byte ptr [0x7f3912], cl */
    MEM8(0x7F3913) = (uint8_t)(LO8(ecx)); /* 0x0077C281: mov byte ptr [0x7f3913], cl */
    SET_LO8(ecx, 0x32u); /* 0x0077C287: mov cl, 0x32 */
    MEM32(0x7F38B0) = 0; /* 0x0077C289: mov dword ptr [0x7f38b0], 0 */
    MEM32(0x7F38B4) = 0x41200000u; /* 0x0077C293: mov dword ptr [0x7f38b4], 0x41200000 */
    MEM32(0x7F38B8) = 0x40000000u; /* 0x0077C29D: mov dword ptr [0x7f38b8], 0x40000000 */
    MEM32(0x7F38BC) = 0; /* 0x0077C2A7: mov dword ptr [0x7f38bc], 0 */
    MEM32(0x7F38C0) = 0x41200000u; /* 0x0077C2B1: mov dword ptr [0x7f38c0], 0x41200000 */
    MEM32(0x7F38C4) = 0x40000000u; /* 0x0077C2BB: mov dword ptr [0x7f38c4], 0x40000000 */
    MEM32(0x7F38C8) = 0; /* 0x0077C2C5: mov dword ptr [0x7f38c8], 0 */
    MEM32(0x7F38CC) = 0; /* 0x0077C2CF: mov dword ptr [0x7f38cc], 0 */
    MEM32(0x7F38D0) = 0; /* 0x0077C2D9: mov dword ptr [0x7f38d0], 0 */
    MEM32(0x7F38D4) = 0; /* 0x0077C2E3: mov dword ptr [0x7f38d4], 0 */
    MEM32(0x7F38D8) = 0; /* 0x0077C2ED: mov dword ptr [0x7f38d8], 0 */
    MEM32(0x7F38DC) = 0; /* 0x0077C2F7: mov dword ptr [0x7f38dc], 0 */
    MEM32(0x7F38EC) = edx; /* 0x0077C301: mov dword ptr [0x7f38ec], edx */
    MEM32(0x7F38F0) = 0; /* 0x0077C307: mov dword ptr [0x7f38f0], 0 */
    MEM32(0x7F38F4) = 0; /* 0x0077C311: mov dword ptr [0x7f38f4], 0 */
    MEM32(0x7F38F8) = 0; /* 0x0077C31B: mov dword ptr [0x7f38f8], 0 */
    MEM32(0x7F38FC) = 0; /* 0x0077C325: mov dword ptr [0x7f38fc], 0 */
    MEM32(0x7F3900) = 0; /* 0x0077C32F: mov dword ptr [0x7f3900], 0 */
    MEM32(0x7F3904) = 0; /* 0x0077C339: mov dword ptr [0x7f3904], 0 */
    MEM8(0x7F390A) = (uint8_t)(LO8(eax)); /* 0x0077C343: mov byte ptr [0x7f390a], al */
    MEM8(0x7F390B) = (uint8_t)(LO8(eax)); /* 0x0077C348: mov byte ptr [0x7f390b], al */
    MEM8(0x7F390C) = (uint8_t)(LO8(eax)); /* 0x0077C34D: mov byte ptr [0x7f390c], al */
    MEM8(0x7F390D) = (uint8_t)(LO8(eax)); /* 0x0077C352: mov byte ptr [0x7f390d], al */
    MEM8(0x7F3914) = (uint8_t)(LO8(eax)); /* 0x0077C357: mov byte ptr [0x7f3914], al */
    MEM8(0x7F3915) = (uint8_t)(LO8(ecx)); /* 0x0077C35C: mov byte ptr [0x7f3915], cl */
    MEM8(0x7F3916) = (uint8_t)(LO8(eax)); /* 0x0077C362: mov byte ptr [0x7f3916], al */
    MEM8(0x7F3917) = (uint8_t)(LO8(ecx)); /* 0x0077C367: mov byte ptr [0x7f3917], cl */
    MEM8(0x7F3918) = (uint8_t)(LO8(eax)); /* 0x0077C36D: mov byte ptr [0x7f3918], al */
    MEM8(0x7F3919) = (uint8_t)(LO8(eax)); /* 0x0077C372: mov byte ptr [0x7f3919], al */
    MEM32(0x7F391C) = eax; /* 0x0077C377: mov dword ptr [0x7f391c], eax */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077C37C: ret  */

}

void sub_0077C380(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077C380u);

L_0077C380:
    eax = MEM32(0x788604); /* 0x0077C380: mov eax, dword ptr [0x788604] */
    MEM32(0x7F005C) = eax; /* 0x0077C385: mov dword ptr [0x7f005c], eax */
    fp_push(*(float*)&MEM32(0x7F005C)); /* 0x0077C38A: fld dword ptr [0x7f005c] */
    _st[0] -= (double)*(float*)ADDR(0x784250); /* 0x0077C390: fsub dword ptr [0x784250] */
    _st[0] = fabs(_st[0]); /* 0x0077C396: fabs  */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(0x787594)); /* 0x0077C398: fcomp dword ptr [0x787594] */
    fp_pop();
    _flag_a = (uint32_t)_fpu_cmp; _flag_b = 0;
    _flag_k = FK_FCOM;
    eax = (eax & 0xFFFF0000u) | (((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u) | ((((uint32_t)-_fp_top) & 7u) << 11)); /* 0x0077C39E: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x0077C3A0: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_0077C3B7; /* 0x0077C3A3: jp 0x77c3b7 */

L_0077C3A5:
    fp_push(*(float*)&MEM32(0x7F005C)); /* 0x0077C3A5: fld dword ptr [0x7f005c] */
    _st[0] += (double)*(float*)ADDR(0x787594); /* 0x0077C3AB: fadd dword ptr [0x787594] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x7F005C) = _v; } /* 0x0077C3B1: fstp dword ptr [0x7f005c] */

L_0077C3B7:
    PUSH32(esp, 0x00781C00u); /* 0x0077C3B7: push 0x781c00 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077C3BC: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077C3C1: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077C3C2: ret  */

}

void sub_0077C3D0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077C3D0u);

L_0077C3D0:
    fp_push(*(double*)ADDR(0x78C268)); /* 0x0077C3D0: fld qword ptr [0x78c268] */
    _st[0] = fabs(_st[0]); /* 0x0077C3D6: fabs  */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(0x787594)); /* 0x0077C3D8: fcomp dword ptr [0x787594] */
    fp_pop();
    _flag_a = (uint32_t)_fpu_cmp; _flag_b = 0;
    _flag_k = FK_FCOM;
    eax = (eax & 0xFFFF0000u) | (((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u) | ((((uint32_t)-_fp_top) & 7u) << 11)); /* 0x0077C3DE: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x0077C3E0: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_0077C3EF; /* 0x0077C3E3: jp 0x77c3ef */

L_0077C3E5:
    MEM32(0x7F0968) = 0x45DAC000u; /* 0x0077C3E5: mov dword ptr [0x7f0968], 0x45dac000 */

L_0077C3EF:
    PUSH32(esp, 0x00781C10u); /* 0x0077C3EF: push 0x781c10 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077C3F4: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077C3F9: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077C3FA: ret  */

}

void sub_0077C400(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077C400u);

L_0077C400:
    fp_push(*(double*)ADDR(0x78C270)); /* 0x0077C400: fld qword ptr [0x78c270] */
    _st[0] = fabs(_st[0]); /* 0x0077C406: fabs  */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(0x787594)); /* 0x0077C408: fcomp dword ptr [0x787594] */
    fp_pop();
    _flag_a = (uint32_t)_fpu_cmp; _flag_b = 0;
    _flag_k = FK_FCOM;
    eax = (eax & 0xFFFF0000u) | (((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u) | ((((uint32_t)-_fp_top) & 7u) << 11)); /* 0x0077C40E: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x0077C410: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_0077C41F; /* 0x0077C413: jp 0x77c41f */

L_0077C415:
    MEM32(0x7F0984) = 0x42700000u; /* 0x0077C415: mov dword ptr [0x7f0984], 0x42700000 */

L_0077C41F:
    PUSH32(esp, 0x00781C20u); /* 0x0077C41F: push 0x781c20 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077C424: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077C429: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077C42A: ret  */

}

void sub_0077C430(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077C430u);

L_0077C430:
    fp_push(*(double*)ADDR(0x78C270)); /* 0x0077C430: fld qword ptr [0x78c270] */
    _st[0] = fabs(_st[0]); /* 0x0077C436: fabs  */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(0x787594)); /* 0x0077C438: fcomp dword ptr [0x787594] */
    fp_pop();
    _flag_a = (uint32_t)_fpu_cmp; _flag_b = 0;
    _flag_k = FK_FCOM;
    eax = (eax & 0xFFFF0000u) | (((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u) | ((((uint32_t)-_fp_top) & 7u) << 11)); /* 0x0077C43E: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x0077C440: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_0077C44F; /* 0x0077C443: jp 0x77c44f */

L_0077C445:
    MEM32(0x7F09A0) = 0x42700000u; /* 0x0077C445: mov dword ptr [0x7f09a0], 0x42700000 */

L_0077C44F:
    PUSH32(esp, 0x00781C30u); /* 0x0077C44F: push 0x781c30 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077C454: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077C459: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077C45A: ret  */

}

void sub_0077C460(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077C460u);

L_0077C460:
    PUSH32(esp, 5); /* 0x0077C460: push 5 */
    PUSH32(esp, 0x007F09B0u); /* 0x0077C462: push 0x7f09b0 */
    ecx = 0x0082C69Cu; /* 0x0077C467: mov ecx, 0x82c69c */
    RECOMP_CALL(sub_00576770); /* 0x0077C46C: call 0x576770 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077C471: ret  */

}

void sub_0077C480(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077C480u);

L_0077C480:
    fp_push(*(double*)ADDR(0x78C278)); /* 0x0077C480: fld qword ptr [0x78c278] */
    eax = MEM32(0x788818); /* 0x0077C486: mov eax, dword ptr [0x788818] */
    ecx = MEM32(0x78881C); /* 0x0077C48B: mov ecx, dword ptr [0x78881c] */
    _st[0] = fabs(_st[0]); /* 0x0077C491: fabs  */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(0x787594)); /* 0x0077C493: fcomp dword ptr [0x787594] */
    fp_pop();
    _flag_a = (uint32_t)_fpu_cmp; _flag_b = 0;
    _flag_k = FK_FCOM;
    MEM32(0x7F09D8) = eax; /* 0x0077C499: mov dword ptr [0x7f09d8], eax */
    MEM32(0x7F09DC) = ecx; /* 0x0077C49E: mov dword ptr [0x7f09dc], ecx */
    eax = (eax & 0xFFFF0000u) | (((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u) | ((((uint32_t)-_fp_top) & 7u) << 11)); /* 0x0077C4A4: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x0077C4A6: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_0077C4B5; /* 0x0077C4A9: jp 0x77c4b5 */

L_0077C4AB:
    MEM32(0x7F09E4) = 0x42C80000u; /* 0x0077C4AB: mov dword ptr [0x7f09e4], 0x42c80000 */

L_0077C4B5:
    edx = MEM32(0x788818); /* 0x0077C4B5: mov edx, dword ptr [0x788818] */
    PUSH32(esp, 0x00781C40u); /* 0x0077C4BB: push 0x781c40 */
    MEM32(0x7F09EC) = edx; /* 0x0077C4C0: mov dword ptr [0x7f09ec], edx */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077C4C6: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077C4CB: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077C4CC: ret  */

}

void sub_0077C4D0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077C4D0u);

L_0077C4D0:
    eax = MEM32(0x78885C); /* 0x0077C4D0: mov eax, dword ptr [0x78885c] */
    MEM32(0x7F0A00) = eax; /* 0x0077C4D5: mov dword ptr [0x7f0a00], eax */
    fp_push(*(float*)&MEM32(0x7F0A00)); /* 0x0077C4DA: fld dword ptr [0x7f0a00] */
    _st[0] = fabs(_st[0]); /* 0x0077C4E0: fabs  */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(0x787594)); /* 0x0077C4E2: fcomp dword ptr [0x787594] */
    fp_pop();
    _flag_a = (uint32_t)_fpu_cmp; _flag_b = 0;
    _flag_k = FK_FCOM;
    eax = (eax & 0xFFFF0000u) | (((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u) | ((((uint32_t)-_fp_top) & 7u) << 11)); /* 0x0077C4E8: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x0077C4EA: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_0077C501; /* 0x0077C4ED: jp 0x77c501 */

L_0077C4EF:
    fp_push(*(float*)&MEM32(0x7F0A00)); /* 0x0077C4EF: fld dword ptr [0x7f0a00] */
    _st[0] += (double)*(float*)ADDR(0x787594); /* 0x0077C4F5: fadd dword ptr [0x787594] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x7F0A00) = _v; } /* 0x0077C4FB: fstp dword ptr [0x7f0a00] */

L_0077C501:
    PUSH32(esp, 0x00781C50u); /* 0x0077C501: push 0x781c50 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077C506: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077C50B: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077C50C: ret  */

}

void sub_0077C510(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077C510u);

L_0077C510:
    PUSH32(esp, 0x0078C298u); /* 0x0077C510: push 0x78c298 */
    PUSH32(esp, 0x007F0A1Cu); /* 0x0077C515: push 0x7f0a1c */
    RECOMP_CALL(sub_0043DBD0); /* 0x0077C51A: call 0x43dbd0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x0078C28Cu); /* 0x0077C51F: push 0x78c28c */
    PUSH32(esp, 0x007F0A68u); /* 0x0077C524: push 0x7f0a68 */
    MEM32(0x7F0A5C) = 0x42280000u; /* 0x0077C529: mov dword ptr [0x7f0a5c], 0x42280000 */
    MEM32(0x7F0A60) = 0x20u; /* 0x0077C533: mov dword ptr [0x7f0a60], 0x20 */
    MEM32(0x7F0A64) = 0x41B80000u; /* 0x0077C53D: mov dword ptr [0x7f0a64], 0x41b80000 */
    RECOMP_CALL(sub_0043DBD0); /* 0x0077C547: call 0x43dbd0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x0078C280u); /* 0x0077C54C: push 0x78c280 */
    PUSH32(esp, 0x007F0AB4u); /* 0x0077C551: push 0x7f0ab4 */
    MEM32(0x7F0AA8) = 0x42280000u; /* 0x0077C556: mov dword ptr [0x7f0aa8], 0x42280000 */
    MEM32(0x7F0AAC) = 0x20u; /* 0x0077C560: mov dword ptr [0x7f0aac], 0x20 */
    MEM32(0x7F0AB0) = 0x41B80000u; /* 0x0077C56A: mov dword ptr [0x7f0ab0], 0x41b80000 */
    RECOMP_CALL(sub_0043DBD0); /* 0x0077C574: call 0x43dbd0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x0078C280u); /* 0x0077C579: push 0x78c280 */
    PUSH32(esp, 0x007F0B00u); /* 0x0077C57E: push 0x7f0b00 */
    MEM32(0x7F0AF4) = 0x42280000u; /* 0x0077C583: mov dword ptr [0x7f0af4], 0x42280000 */
    MEM32(0x7F0AF8) = 0x20u; /* 0x0077C58D: mov dword ptr [0x7f0af8], 0x20 */
    MEM32(0x7F0AFC) = 0x41B80000u; /* 0x0077C597: mov dword ptr [0x7f0afc], 0x41b80000 */
    RECOMP_CALL(sub_0043DBD0); /* 0x0077C5A1: call 0x43dbd0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0077C5A6: add esp, 0x20 */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077C5A9: ret  */

}

void sub_0077C5B0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077C5B0u);

L_0077C5B0:
    ecx = MEM32(0x788864); /* 0x0077C5B0: mov ecx, dword ptr [0x788864] */
    eax = MEM32(0x788868); /* 0x0077C5B6: mov eax, dword ptr [0x788868] */
    MEM32(0x7F0B4C) = ecx; /* 0x0077C5BB: mov dword ptr [0x7f0b4c], ecx */
    fp_push(*(float*)&MEM32(0x7F0B4C)); /* 0x0077C5C1: fld dword ptr [0x7f0b4c] */
    MEM32(0x7F0B48) = eax; /* 0x0077C5C7: mov dword ptr [0x7f0b48], eax */
    _st[0] -= (double)*(float*)ADDR(0x7F0B48); /* 0x0077C5CC: fsub dword ptr [0x7f0b48] */
    _st[0] = fabs(_st[0]); /* 0x0077C5D2: fabs  */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(0x787594)); /* 0x0077C5D4: fcomp dword ptr [0x787594] */
    fp_pop();
    _flag_a = (uint32_t)_fpu_cmp; _flag_b = 0;
    _flag_k = FK_FCOM;
    eax = (eax & 0xFFFF0000u) | (((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u) | ((((uint32_t)-_fp_top) & 7u) << 11)); /* 0x0077C5DA: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x0077C5DC: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_0077C5F3; /* 0x0077C5DF: jp 0x77c5f3 */

L_0077C5E1:
    fp_push(*(float*)&MEM32(0x7F0B4C)); /* 0x0077C5E1: fld dword ptr [0x7f0b4c] */
    _st[0] += (double)*(float*)ADDR(0x787594); /* 0x0077C5E7: fadd dword ptr [0x787594] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x7F0B4C) = _v; } /* 0x0077C5ED: fstp dword ptr [0x7f0b4c] */

L_0077C5F3:
    PUSH32(esp, 0x00781C60u); /* 0x0077C5F3: push 0x781c60 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077C5F8: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077C5FD: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077C5FE: ret  */

}

void sub_0077C600(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077C600u);

L_0077C600:
    fp_push(*(double*)ADDR(0x78C2A8)); /* 0x0077C600: fld qword ptr [0x78c2a8] */
    _st[0] = fabs(_st[0]); /* 0x0077C606: fabs  */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(0x787594)); /* 0x0077C608: fcomp dword ptr [0x787594] */
    fp_pop();
    _flag_a = (uint32_t)_fpu_cmp; _flag_b = 0;
    _flag_k = FK_FCOM;
    eax = (eax & 0xFFFF0000u) | (((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u) | ((((uint32_t)-_fp_top) & 7u) << 11)); /* 0x0077C60E: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x0077C610: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_0077C61F; /* 0x0077C613: jp 0x77c61f */

L_0077C615:
    MEM32(0x7F0B68) = 0x3F800008u; /* 0x0077C615: mov dword ptr [0x7f0b68], 0x3f800008 */

L_0077C61F:
    PUSH32(esp, 0x00781C70u); /* 0x0077C61F: push 0x781c70 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077C624: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077C629: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077C62A: ret  */

}

void sub_0077C630(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077C630u);

L_0077C630:
    PUSH32(esp, 0x0078C2B0u); /* 0x0077C630: push 0x78c2b0 */
    ecx = 0x0082C5E8u; /* 0x0077C635: mov ecx, 0x82c5e8 */
    RECOMP_CALL(sub_0060B780); /* 0x0077C63A: call 0x60b780 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00781C80u); /* 0x0077C63F: push 0x781c80 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077C644: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077C649: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077C64A: ret  */

}

void sub_0077C650(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077C650u);

L_0077C650:
    ecx = 0x0082C6A4u; /* 0x0077C650: mov ecx, 0x82c6a4 */
    RECOMP_CALL(sub_0057BCD0); /* 0x0077C655: call 0x57bcd0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00781D40u); /* 0x0077C65A: push 0x781d40 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077C65F: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077C664: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077C665: ret  */

}

void sub_0077C670(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077C670u);

L_0077C670:
    ecx = 0x0082BEBCu; /* 0x0077C670: mov ecx, 0x82bebc */
    RECOMP_CALL(sub_0057BCD0); /* 0x0077C675: call 0x57bcd0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00781D30u); /* 0x0077C67A: push 0x781d30 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077C67F: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077C684: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077C685: ret  */

}

void sub_0077C690(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077C690u);

L_0077C690:
    ecx = 0x0082BEC4u; /* 0x0077C690: mov ecx, 0x82bec4 */
    RECOMP_CALL(sub_0057BCD0); /* 0x0077C695: call 0x57bcd0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00781D50u); /* 0x0077C69A: push 0x781d50 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077C69F: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077C6A4: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077C6A5: ret  */

}

void sub_0077C6B0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077C6B0u);

    goto L_0077C6B0;

L_00734DA0:
    eax = ecx; /* 0x00734DA0: mov eax, ecx */
    MEM32(eax + 0x4) = 0xFFFFFFFDu; /* 0x00734DA2: mov dword ptr [eax + 4], 0xfffffffd */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00734DA9: ret  */

L_0077C6B0:
    ecx = 0x0082C540u; /* 0x0077C6B0: mov ecx, 0x82c540 */
    RECOMP_BACKEDGE();
    goto L_00734DA0; /* 0x0077C6B5: jmp 0x734da0 */

}

void sub_0077C6C0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077C6C0u);

    goto L_0077C6C0;

L_00734DA0:
    eax = ecx; /* 0x00734DA0: mov eax, ecx */
    MEM32(eax + 0x4) = 0xFFFFFFFDu; /* 0x00734DA2: mov dword ptr [eax + 4], 0xfffffffd */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00734DA9: ret  */

L_0077C6C0:
    ecx = 0x0082C6B4u; /* 0x0077C6C0: mov ecx, 0x82c6b4 */
    RECOMP_BACKEDGE();
    goto L_00734DA0; /* 0x0077C6C5: jmp 0x734da0 */

}

void sub_0077C6D0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077C6D0u);

    goto L_0077C6D0;

L_00734DA0:
    eax = ecx; /* 0x00734DA0: mov eax, ecx */
    MEM32(eax + 0x4) = 0xFFFFFFFDu; /* 0x00734DA2: mov dword ptr [eax + 4], 0xfffffffd */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00734DA9: ret  */

L_0077C6D0:
    ecx = 0x0082C510u; /* 0x0077C6D0: mov ecx, 0x82c510 */
    RECOMP_BACKEDGE();
    goto L_00734DA0; /* 0x0077C6D5: jmp 0x734da0 */

}

void sub_0077C6E0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077C6E0u);

    goto L_0077C6E0;

L_00734DA0:
    eax = ecx; /* 0x00734DA0: mov eax, ecx */
    MEM32(eax + 0x4) = 0xFFFFFFFDu; /* 0x00734DA2: mov dword ptr [eax + 4], 0xfffffffd */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00734DA9: ret  */

L_0077C6E0:
    ecx = 0x0082C548u; /* 0x0077C6E0: mov ecx, 0x82c548 */
    RECOMP_BACKEDGE();
    goto L_00734DA0; /* 0x0077C6E5: jmp 0x734da0 */

}

void sub_0077C6F0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077C6F0u);

    goto L_0077C6F0;

L_00734DA0:
    eax = ecx; /* 0x00734DA0: mov eax, ecx */
    MEM32(eax + 0x4) = 0xFFFFFFFDu; /* 0x00734DA2: mov dword ptr [eax + 4], 0xfffffffd */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00734DA9: ret  */

L_0077C6F0:
    ecx = 0x0082C530u; /* 0x0077C6F0: mov ecx, 0x82c530 */
    RECOMP_BACKEDGE();
    goto L_00734DA0; /* 0x0077C6F5: jmp 0x734da0 */

}

void sub_0077C700(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077C700u);

    goto L_0077C700;

L_00734DA0:
    eax = ecx; /* 0x00734DA0: mov eax, ecx */
    MEM32(eax + 0x4) = 0xFFFFFFFDu; /* 0x00734DA2: mov dword ptr [eax + 4], 0xfffffffd */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00734DA9: ret  */

L_0077C700:
    ecx = 0x0082C4F8u; /* 0x0077C700: mov ecx, 0x82c4f8 */
    RECOMP_BACKEDGE();
    goto L_00734DA0; /* 0x0077C705: jmp 0x734da0 */

}

void sub_0077C710(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077C710u);

    goto L_0077C710;

L_00734DA0:
    eax = ecx; /* 0x00734DA0: mov eax, ecx */
    MEM32(eax + 0x4) = 0xFFFFFFFDu; /* 0x00734DA2: mov dword ptr [eax + 4], 0xfffffffd */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00734DA9: ret  */

L_0077C710:
    ecx = 0x0082C668u; /* 0x0077C710: mov ecx, 0x82c668 */
    RECOMP_BACKEDGE();
    goto L_00734DA0; /* 0x0077C715: jmp 0x734da0 */

}

void sub_0077C720(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077C720u);

    goto L_0077C720;

L_00734DA0:
    eax = ecx; /* 0x00734DA0: mov eax, ecx */
    MEM32(eax + 0x4) = 0xFFFFFFFDu; /* 0x00734DA2: mov dword ptr [eax + 4], 0xfffffffd */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00734DA9: ret  */

L_0077C720:
    ecx = 0x0082C5A8u; /* 0x0077C720: mov ecx, 0x82c5a8 */
    RECOMP_BACKEDGE();
    goto L_00734DA0; /* 0x0077C725: jmp 0x734da0 */

}

void sub_0077C730(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077C730u);

    goto L_0077C730;

L_00734DA0:
    eax = ecx; /* 0x00734DA0: mov eax, ecx */
    MEM32(eax + 0x4) = 0xFFFFFFFDu; /* 0x00734DA2: mov dword ptr [eax + 4], 0xfffffffd */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00734DA9: ret  */

L_0077C730:
    ecx = 0x0082C660u; /* 0x0077C730: mov ecx, 0x82c660 */
    RECOMP_BACKEDGE();
    goto L_00734DA0; /* 0x0077C735: jmp 0x734da0 */

}

void sub_0077C740(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077C740u);

    goto L_0077C740;

L_00734DA0:
    eax = ecx; /* 0x00734DA0: mov eax, ecx */
    MEM32(eax + 0x4) = 0xFFFFFFFDu; /* 0x00734DA2: mov dword ptr [eax + 4], 0xfffffffd */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00734DA9: ret  */

L_0077C740:
    ecx = 0x0082C590u; /* 0x0077C740: mov ecx, 0x82c590 */
    RECOMP_BACKEDGE();
    goto L_00734DA0; /* 0x0077C745: jmp 0x734da0 */

}

void sub_0077C750(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077C750u);

    goto L_0077C750;

L_00734DA0:
    eax = ecx; /* 0x00734DA0: mov eax, ecx */
    MEM32(eax + 0x4) = 0xFFFFFFFDu; /* 0x00734DA2: mov dword ptr [eax + 4], 0xfffffffd */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00734DA9: ret  */

L_0077C750:
    ecx = 0x0082C520u; /* 0x0077C750: mov ecx, 0x82c520 */
    RECOMP_BACKEDGE();
    goto L_00734DA0; /* 0x0077C755: jmp 0x734da0 */

}

void sub_0077C760(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077C760u);

    goto L_0077C760;

L_00734DA0:
    eax = ecx; /* 0x00734DA0: mov eax, ecx */
    MEM32(eax + 0x4) = 0xFFFFFFFDu; /* 0x00734DA2: mov dword ptr [eax + 4], 0xfffffffd */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00734DA9: ret  */

L_0077C760:
    ecx = 0x0082C6BCu; /* 0x0077C760: mov ecx, 0x82c6bc */
    RECOMP_BACKEDGE();
    goto L_00734DA0; /* 0x0077C765: jmp 0x734da0 */

}

void sub_0077C770(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077C770u);

    goto L_0077C770;

L_00734DA0:
    eax = ecx; /* 0x00734DA0: mov eax, ecx */
    MEM32(eax + 0x4) = 0xFFFFFFFDu; /* 0x00734DA2: mov dword ptr [eax + 4], 0xfffffffd */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00734DA9: ret  */

L_0077C770:
    ecx = 0x0082C5B0u; /* 0x0077C770: mov ecx, 0x82c5b0 */
    RECOMP_BACKEDGE();
    goto L_00734DA0; /* 0x0077C775: jmp 0x734da0 */

}

void sub_0077C780(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077C780u);

    goto L_0077C780;

L_00734DA0:
    eax = ecx; /* 0x00734DA0: mov eax, ecx */
    MEM32(eax + 0x4) = 0xFFFFFFFDu; /* 0x00734DA2: mov dword ptr [eax + 4], 0xfffffffd */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00734DA9: ret  */

L_0077C780:
    ecx = 0x0082C5A0u; /* 0x0077C780: mov ecx, 0x82c5a0 */
    RECOMP_BACKEDGE();
    goto L_00734DA0; /* 0x0077C785: jmp 0x734da0 */

}

void sub_0077C790(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077C790u);

    goto L_0077C790;

L_00734DA0:
    eax = ecx; /* 0x00734DA0: mov eax, ecx */
    MEM32(eax + 0x4) = 0xFFFFFFFDu; /* 0x00734DA2: mov dword ptr [eax + 4], 0xfffffffd */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00734DA9: ret  */

L_0077C790:
    ecx = 0x0082C5C8u; /* 0x0077C790: mov ecx, 0x82c5c8 */
    RECOMP_BACKEDGE();
    goto L_00734DA0; /* 0x0077C795: jmp 0x734da0 */

}

void sub_0077C7A0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077C7A0u);

    goto L_0077C7A0;

L_00734DA0:
    eax = ecx; /* 0x00734DA0: mov eax, ecx */
    MEM32(eax + 0x4) = 0xFFFFFFFDu; /* 0x00734DA2: mov dword ptr [eax + 4], 0xfffffffd */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00734DA9: ret  */

L_0077C7A0:
    ecx = 0x0082C500u; /* 0x0077C7A0: mov ecx, 0x82c500 */
    RECOMP_BACKEDGE();
    goto L_00734DA0; /* 0x0077C7A5: jmp 0x734da0 */

}

void sub_0077C7B0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077C7B0u);

    goto L_0077C7B0;

L_00734DA0:
    eax = ecx; /* 0x00734DA0: mov eax, ecx */
    MEM32(eax + 0x4) = 0xFFFFFFFDu; /* 0x00734DA2: mov dword ptr [eax + 4], 0xfffffffd */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00734DA9: ret  */

L_0077C7B0:
    ecx = 0x0082C558u; /* 0x0077C7B0: mov ecx, 0x82c558 */
    RECOMP_BACKEDGE();
    goto L_00734DA0; /* 0x0077C7B5: jmp 0x734da0 */

}

void sub_0077C7C0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077C7C0u);

    goto L_0077C7C0;

L_00734DA0:
    eax = ecx; /* 0x00734DA0: mov eax, ecx */
    MEM32(eax + 0x4) = 0xFFFFFFFDu; /* 0x00734DA2: mov dword ptr [eax + 4], 0xfffffffd */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00734DA9: ret  */

L_0077C7C0:
    ecx = 0x0082C550u; /* 0x0077C7C0: mov ecx, 0x82c550 */
    RECOMP_BACKEDGE();
    goto L_00734DA0; /* 0x0077C7C5: jmp 0x734da0 */

}

void sub_0077C7D0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077C7D0u);

    goto L_0077C7D0;

L_00734DA0:
    eax = ecx; /* 0x00734DA0: mov eax, ecx */
    MEM32(eax + 0x4) = 0xFFFFFFFDu; /* 0x00734DA2: mov dword ptr [eax + 4], 0xfffffffd */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00734DA9: ret  */

L_0077C7D0:
    ecx = 0x0082C508u; /* 0x0077C7D0: mov ecx, 0x82c508 */
    RECOMP_BACKEDGE();
    goto L_00734DA0; /* 0x0077C7D5: jmp 0x734da0 */

}

void sub_0077C7E0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077C7E0u);

    goto L_0077C7E0;

L_00734DA0:
    eax = ecx; /* 0x00734DA0: mov eax, ecx */
    MEM32(eax + 0x4) = 0xFFFFFFFDu; /* 0x00734DA2: mov dword ptr [eax + 4], 0xfffffffd */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00734DA9: ret  */

L_0077C7E0:
    ecx = 0x0082C72Cu; /* 0x0077C7E0: mov ecx, 0x82c72c */
    RECOMP_BACKEDGE();
    goto L_00734DA0; /* 0x0077C7E5: jmp 0x734da0 */

}

void sub_0077C7F0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077C7F0u);

    goto L_0077C7F0;

L_00734DA0:
    eax = ecx; /* 0x00734DA0: mov eax, ecx */
    MEM32(eax + 0x4) = 0xFFFFFFFDu; /* 0x00734DA2: mov dword ptr [eax + 4], 0xfffffffd */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00734DA9: ret  */

L_0077C7F0:
    ecx = 0x0082C5D8u; /* 0x0077C7F0: mov ecx, 0x82c5d8 */
    RECOMP_BACKEDGE();
    goto L_00734DA0; /* 0x0077C7F5: jmp 0x734da0 */

}

void sub_0077C800(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077C800u);

    goto L_0077C800;

L_00734DA0:
    eax = ecx; /* 0x00734DA0: mov eax, ecx */
    MEM32(eax + 0x4) = 0xFFFFFFFDu; /* 0x00734DA2: mov dword ptr [eax + 4], 0xfffffffd */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00734DA9: ret  */

L_0077C800:
    ecx = 0x0082C5E0u; /* 0x0077C800: mov ecx, 0x82c5e0 */
    RECOMP_BACKEDGE();
    goto L_00734DA0; /* 0x0077C805: jmp 0x734da0 */

}

void sub_0077C810(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077C810u);

    goto L_0077C810;

L_00734DA0:
    eax = ecx; /* 0x00734DA0: mov eax, ecx */
    MEM32(eax + 0x4) = 0xFFFFFFFDu; /* 0x00734DA2: mov dword ptr [eax + 4], 0xfffffffd */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00734DA9: ret  */

L_0077C810:
    ecx = 0x0082C5D0u; /* 0x0077C810: mov ecx, 0x82c5d0 */
    RECOMP_BACKEDGE();
    goto L_00734DA0; /* 0x0077C815: jmp 0x734da0 */

}

void sub_0077C820(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077C820u);

    goto L_0077C820;

L_00734DA0:
    eax = ecx; /* 0x00734DA0: mov eax, ecx */
    MEM32(eax + 0x4) = 0xFFFFFFFDu; /* 0x00734DA2: mov dword ptr [eax + 4], 0xfffffffd */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00734DA9: ret  */

L_0077C820:
    ecx = 0x0082C6E0u; /* 0x0077C820: mov ecx, 0x82c6e0 */
    RECOMP_BACKEDGE();
    goto L_00734DA0; /* 0x0077C825: jmp 0x734da0 */

}

void sub_0077C830(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077C830u);

    goto L_0077C830;

L_00734DA0:
    eax = ecx; /* 0x00734DA0: mov eax, ecx */
    MEM32(eax + 0x4) = 0xFFFFFFFDu; /* 0x00734DA2: mov dword ptr [eax + 4], 0xfffffffd */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00734DA9: ret  */

L_0077C830:
    ecx = 0x0082C598u; /* 0x0077C830: mov ecx, 0x82c598 */
    RECOMP_BACKEDGE();
    goto L_00734DA0; /* 0x0077C835: jmp 0x734da0 */

}

void sub_0077C840(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077C840u);

    goto L_0077C840;

L_00734DA0:
    eax = ecx; /* 0x00734DA0: mov eax, ecx */
    MEM32(eax + 0x4) = 0xFFFFFFFDu; /* 0x00734DA2: mov dword ptr [eax + 4], 0xfffffffd */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00734DA9: ret  */

L_0077C840:
    ecx = 0x0082C538u; /* 0x0077C840: mov ecx, 0x82c538 */
    RECOMP_BACKEDGE();
    goto L_00734DA0; /* 0x0077C845: jmp 0x734da0 */

}

void sub_0077C850(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077C850u);

    goto L_0077C850;

L_00734DA0:
    eax = ecx; /* 0x00734DA0: mov eax, ecx */
    MEM32(eax + 0x4) = 0xFFFFFFFDu; /* 0x00734DA2: mov dword ptr [eax + 4], 0xfffffffd */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00734DA9: ret  */

L_0077C850:
    ecx = 0x0082C680u; /* 0x0077C850: mov ecx, 0x82c680 */
    RECOMP_BACKEDGE();
    goto L_00734DA0; /* 0x0077C855: jmp 0x734da0 */

}

void sub_0077C860(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077C860u);

    goto L_0077C860;

L_00734DA0:
    eax = ecx; /* 0x00734DA0: mov eax, ecx */
    MEM32(eax + 0x4) = 0xFFFFFFFDu; /* 0x00734DA2: mov dword ptr [eax + 4], 0xfffffffd */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00734DA9: ret  */

L_0077C860:
    ecx = 0x0082C568u; /* 0x0077C860: mov ecx, 0x82c568 */
    RECOMP_BACKEDGE();
    goto L_00734DA0; /* 0x0077C865: jmp 0x734da0 */

}

void sub_0077C870(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077C870u);

    goto L_0077C870;

L_00734DA0:
    eax = ecx; /* 0x00734DA0: mov eax, ecx */
    MEM32(eax + 0x4) = 0xFFFFFFFDu; /* 0x00734DA2: mov dword ptr [eax + 4], 0xfffffffd */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x00734DA9: ret  */

L_0077C870:
    ecx = 0x0082C648u; /* 0x0077C870: mov ecx, 0x82c648 */
    RECOMP_BACKEDGE();
    goto L_00734DA0; /* 0x0077C875: jmp 0x734da0 */

}

void sub_0077C880(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077C880u);

L_0077C880:
    fp_push(*(float*)&MEM32(0x784250)); /* 0x0077C880: fld dword ptr [0x784250] */
    _st[0] /= (double)*(float*)ADDR(0x78D764); /* 0x0077C886: fdiv dword ptr [0x78d764] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x830D10) = _v; } /* 0x0077C88C: fstp dword ptr [0x830d10] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077C892: ret  */

}

void sub_0077C8A0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077C8A0u);

L_0077C8A0:
    ecx = 0x00830D08u; /* 0x0077C8A0: mov ecx, 0x830d08 */
    RECOMP_CALL(sub_00598750); /* 0x0077C8A5: call 0x598750 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00781DA0u); /* 0x0077C8AA: push 0x781da0 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077C8AF: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077C8B4: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077C8B5: ret  */

}

void sub_0077C8C0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077C8C0u);

L_0077C8C0:
    ecx = 0x00835860u; /* 0x0077C8C0: mov ecx, 0x835860 */
    RECOMP_CALL(sub_00494650); /* 0x0077C8C5: call 0x494650 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00781E80u); /* 0x0077C8CA: push 0x781e80 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077C8CF: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077C8D4: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077C8D5: ret  */

}

void sub_0077C8E0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077C8E0u);

L_0077C8E0:
    ecx = 0x008357E0u; /* 0x0077C8E0: mov ecx, 0x8357e0 */
    RECOMP_CALL(sub_00494650); /* 0x0077C8E5: call 0x494650 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00781E20u); /* 0x0077C8EA: push 0x781e20 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077C8EF: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077C8F4: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077C8F5: ret  */

}

void sub_0077C900(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077C900u);

L_0077C900:
    eax = MEM32(0x78D778); /* 0x0077C900: mov eax, dword ptr [0x78d778] */
    edx = MEM32(0x78D770); /* 0x0077C905: mov edx, dword ptr [0x78d770] */
    ecx = eax; /* 0x0077C90B: mov ecx, eax */
    MEM32(0x7F4240) = eax; /* 0x0077C90D: mov dword ptr [0x7f4240], eax */
    MEM32(0x7F4244) = ecx; /* 0x0077C912: mov dword ptr [0x7f4244], ecx */
    ecx = MEM32(0x78D774); /* 0x0077C918: mov ecx, dword ptr [0x78d774] */
    eax = edx; /* 0x0077C91E: mov eax, edx */
    MEM32(0x7F4278) = edx; /* 0x0077C920: mov dword ptr [0x7f4278], edx */
    edx = ecx; /* 0x0077C926: mov edx, ecx */
    MEM32(0x7F427C) = eax; /* 0x0077C928: mov dword ptr [0x7f427c], eax */
    MEM32(0x7F4280) = ecx; /* 0x0077C92D: mov dword ptr [0x7f4280], ecx */
    SET_LO8(ecx, 0x80u); /* 0x0077C933: mov cl, 0x80 */
    SET_LO8(eax, 0x25u); /* 0x0077C935: mov al, 0x25 */
    MEM8(0x7F42A0) = (uint8_t)(LO8(eax)); /* 0x0077C937: mov byte ptr [0x7f42a0], al */
    MEM8(0x7F42A1) = (uint8_t)(LO8(eax)); /* 0x0077C93C: mov byte ptr [0x7f42a1], al */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0077C941: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(0x7F42A6) = (uint8_t)(LO8(ecx)); /* 0x0077C943: mov byte ptr [0x7f42a6], cl */
    MEM8(0x7F42A7) = (uint8_t)(LO8(ecx)); /* 0x0077C949: mov byte ptr [0x7f42a7], cl */
    MEM8(0x7F42A8) = (uint8_t)(LO8(ecx)); /* 0x0077C94F: mov byte ptr [0x7f42a8], cl */
    MEM8(0x7F42A9) = (uint8_t)(LO8(ecx)); /* 0x0077C955: mov byte ptr [0x7f42a9], cl */
    MEM8(0x7F42AA) = (uint8_t)(LO8(ecx)); /* 0x0077C95B: mov byte ptr [0x7f42aa], cl */
    MEM8(0x7F42AB) = (uint8_t)(LO8(ecx)); /* 0x0077C961: mov byte ptr [0x7f42ab], cl */
    SET_LO8(ecx, 0x32u); /* 0x0077C967: mov cl, 0x32 */
    MEM32(0x7F4248) = 0; /* 0x0077C969: mov dword ptr [0x7f4248], 0 */
    MEM32(0x7F424C) = 0x41200000u; /* 0x0077C973: mov dword ptr [0x7f424c], 0x41200000 */
    MEM32(0x7F4250) = 0x40000000u; /* 0x0077C97D: mov dword ptr [0x7f4250], 0x40000000 */
    MEM32(0x7F4254) = 0; /* 0x0077C987: mov dword ptr [0x7f4254], 0 */
    MEM32(0x7F4258) = 0x41200000u; /* 0x0077C991: mov dword ptr [0x7f4258], 0x41200000 */
    MEM32(0x7F425C) = 0x40000000u; /* 0x0077C99B: mov dword ptr [0x7f425c], 0x40000000 */
    MEM32(0x7F4260) = 0; /* 0x0077C9A5: mov dword ptr [0x7f4260], 0 */
    MEM32(0x7F4264) = 0; /* 0x0077C9AF: mov dword ptr [0x7f4264], 0 */
    MEM32(0x7F4268) = 0; /* 0x0077C9B9: mov dword ptr [0x7f4268], 0 */
    MEM32(0x7F426C) = 0; /* 0x0077C9C3: mov dword ptr [0x7f426c], 0 */
    MEM32(0x7F4270) = 0; /* 0x0077C9CD: mov dword ptr [0x7f4270], 0 */
    MEM32(0x7F4274) = 0; /* 0x0077C9D7: mov dword ptr [0x7f4274], 0 */
    MEM32(0x7F4284) = edx; /* 0x0077C9E1: mov dword ptr [0x7f4284], edx */
    MEM32(0x7F4288) = 0; /* 0x0077C9E7: mov dword ptr [0x7f4288], 0 */
    MEM32(0x7F428C) = 0; /* 0x0077C9F1: mov dword ptr [0x7f428c], 0 */
    MEM32(0x7F4290) = 0; /* 0x0077C9FB: mov dword ptr [0x7f4290], 0 */
    MEM32(0x7F4294) = 0; /* 0x0077CA05: mov dword ptr [0x7f4294], 0 */
    MEM32(0x7F4298) = 0; /* 0x0077CA0F: mov dword ptr [0x7f4298], 0 */
    MEM32(0x7F429C) = 0; /* 0x0077CA19: mov dword ptr [0x7f429c], 0 */
    MEM8(0x7F42A2) = (uint8_t)(LO8(eax)); /* 0x0077CA23: mov byte ptr [0x7f42a2], al */
    MEM8(0x7F42A3) = (uint8_t)(LO8(eax)); /* 0x0077CA28: mov byte ptr [0x7f42a3], al */
    MEM8(0x7F42A4) = (uint8_t)(LO8(eax)); /* 0x0077CA2D: mov byte ptr [0x7f42a4], al */
    MEM8(0x7F42A5) = (uint8_t)(LO8(eax)); /* 0x0077CA32: mov byte ptr [0x7f42a5], al */
    MEM8(0x7F42AC) = (uint8_t)(LO8(eax)); /* 0x0077CA37: mov byte ptr [0x7f42ac], al */
    MEM8(0x7F42AD) = (uint8_t)(LO8(ecx)); /* 0x0077CA3C: mov byte ptr [0x7f42ad], cl */
    MEM8(0x7F42AE) = (uint8_t)(LO8(eax)); /* 0x0077CA42: mov byte ptr [0x7f42ae], al */
    MEM8(0x7F42AF) = (uint8_t)(LO8(ecx)); /* 0x0077CA47: mov byte ptr [0x7f42af], cl */
    MEM8(0x7F42B0) = (uint8_t)(LO8(eax)); /* 0x0077CA4D: mov byte ptr [0x7f42b0], al */
    MEM8(0x7F42B1) = (uint8_t)(LO8(eax)); /* 0x0077CA52: mov byte ptr [0x7f42b1], al */
    MEM32(0x7F42B4) = eax; /* 0x0077CA57: mov dword ptr [0x7f42b4], eax */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077CA5C: ret  */

}

void sub_0077CA60(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077CA60u);

L_0077CA60:
    ecx = 0x0082DBC0u; /* 0x0077CA60: mov ecx, 0x82dbc0 */
    RECOMP_CALL(sub_00598750); /* 0x0077CA65: call 0x598750 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00781E30u); /* 0x0077CA6A: push 0x781e30 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077CA6F: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077CA74: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077CA75: ret  */

}

void sub_0077CA80(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077CA80u);

L_0077CA80:
    ecx = 0x00832DA4u; /* 0x0077CA80: mov ecx, 0x832da4 */
    RECOMP_CALL(sub_00598750); /* 0x0077CA85: call 0x598750 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00781E40u); /* 0x0077CA8A: push 0x781e40 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077CA8F: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077CA94: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077CA95: ret  */

}

void sub_0077CAA0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077CAA0u);

L_0077CAA0:
    ecx = 0x00830D1Cu; /* 0x0077CAA0: mov ecx, 0x830d1c */
    RECOMP_CALL(sub_00598750); /* 0x0077CAA5: call 0x598750 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00781EB0u); /* 0x0077CAAA: push 0x781eb0 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077CAAF: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077CAB4: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077CAB5: ret  */

}

void sub_0077CAC0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077CAC0u);

L_0077CAC0:
    ecx = 0x00835858u; /* 0x0077CAC0: mov ecx, 0x835858 */
    RECOMP_CALL(sub_00598750); /* 0x0077CAC5: call 0x598750 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00781EC0u); /* 0x0077CACA: push 0x781ec0 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077CACF: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077CAD4: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077CAD5: ret  */

}

void sub_0077CAE0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077CAE0u);

L_0077CAE0:
    ecx = 0x00835794u; /* 0x0077CAE0: mov ecx, 0x835794 */
    RECOMP_CALL(sub_00598750); /* 0x0077CAE5: call 0x598750 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00781ED0u); /* 0x0077CAEA: push 0x781ed0 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077CAEF: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077CAF4: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077CAF5: ret  */

}

void sub_0077CB00(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077CB00u);

L_0077CB00:
    PUSH32(esp, 0x004940E0u); /* 0x0077CB00: push 0x4940e0 */
    PUSH32(esp, 0x00494060u); /* 0x0077CB05: push 0x494060 */
    PUSH32(esp, 0x80134000u); /* 0x0077CB0A: push 0x80134000 */
    ecx = 0x00835840u; /* 0x0077CB0F: mov ecx, 0x835840 */
    RECOMP_CALL(sub_0043C0B0); /* 0x0077CB14: call 0x43c0b0 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077CB19: ret  */

}

void sub_0077CB20(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077CB20u);

L_0077CB20:
    PUSH32(esp, 0x00494210u); /* 0x0077CB20: push 0x494210 */
    PUSH32(esp, 0x0048DA00u); /* 0x0077CB25: push 0x48da00 */
    PUSH32(esp, 0x0048B410u); /* 0x0077CB2A: push 0x48b410 */
    PUSH32(esp, 0x00494190u); /* 0x0077CB2F: push 0x494190 */
    PUSH32(esp, 0x00494140u); /* 0x0077CB34: push 0x494140 */
    PUSH32(esp, 0x80u); /* 0x0077CB39: push 0x80 */
    ecx = 0x0082DBC8u; /* 0x0077CB3E: mov ecx, 0x82dbc8 */
    RECOMP_CALL(sub_00493390); /* 0x0077CB43: call 0x493390 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00781DB0u); /* 0x0077CB48: push 0x781db0 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077CB4D: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077CB52: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077CB53: ret  */

}

void sub_0077CB60(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077CB60u);

L_0077CB60:
    ecx = 0x00830C78u; /* 0x0077CB60: mov ecx, 0x830c78 */
    RECOMP_CALL(sub_00494960); /* 0x0077CB65: call 0x494960 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00781E90u); /* 0x0077CB6A: push 0x781e90 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077CB6F: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077CB74: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077CB75: ret  */

}

void sub_0077CB80(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077CB80u);

L_0077CB80:
    PUSH32(esp, 0x00781D60u); /* 0x0077CB80: push 0x781d60 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077CB85: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077CB8A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077CB8B: ret  */

}

void sub_0077CB90(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077CB90u);

L_0077CB90:
    ecx = 0x00830D30u; /* 0x0077CB90: mov ecx, 0x830d30 */
    RECOMP_CALL(sub_00494230); /* 0x0077CB95: call 0x494230 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00781E50u); /* 0x0077CB9A: push 0x781e50 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077CB9F: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077CBA4: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077CBA5: ret  */

}

void sub_0077CBB0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077CBB0u);

L_0077CBB0:
    ecx = 0x00830AE8u; /* 0x0077CBB0: mov ecx, 0x830ae8 */
    RECOMP_CALL(sub_00598750); /* 0x0077CBB5: call 0x598750 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00781EA0u); /* 0x0077CBBA: push 0x781ea0 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077CBBF: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077CBC4: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077CBC5: ret  */

}

void sub_0077CBD0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077CBD0u);

L_0077CBD0:
    ecx = 0x00830D14u; /* 0x0077CBD0: mov ecx, 0x830d14 */
    RECOMP_CALL(sub_00598750); /* 0x0077CBD5: call 0x598750 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00781E60u); /* 0x0077CBDA: push 0x781e60 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077CBDF: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077CBE4: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077CBE5: ret  */

}

void sub_0077CBF0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077CBF0u);

L_0077CBF0:
    ecx = 0x008358C0u; /* 0x0077CBF0: mov ecx, 0x8358c0 */
    RECOMP_CALL(sub_00598750); /* 0x0077CBF5: call 0x598750 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00781DC0u); /* 0x0077CBFA: push 0x781dc0 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077CBFF: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077CC04: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077CC05: ret  */

}

void sub_0077CC10(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077CC10u);

L_0077CC10:
    PUSH32(esp, 0x00781D70u); /* 0x0077CC10: push 0x781d70 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077CC15: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077CC1A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077CC1B: ret  */

}

void sub_0077CC20(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077CC20u);

L_0077CC20:
    PUSH32(esp, 0x0048E270u); /* 0x0077CC20: push 0x48e270 */
    PUSH32(esp, 0x0048E070u); /* 0x0077CC25: push 0x48e070 */
    PUSH32(esp, 0x00135200u); /* 0x0077CC2A: push 0x135200 */
    ecx = 0x00835784u; /* 0x0077CC2F: mov ecx, 0x835784 */
    RECOMP_CALL(sub_0043C0B0); /* 0x0077CC34: call 0x43c0b0 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077CC39: ret  */

}

void sub_0077CC40(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077CC40u);

L_0077CC40:
    PUSH32(esp, 0x0048E270u); /* 0x0077CC40: push 0x48e270 */
    PUSH32(esp, 0x0048E070u); /* 0x0077CC45: push 0x48e070 */
    PUSH32(esp, 0x80135100u); /* 0x0077CC4A: push 0x80135100 */
    ecx = 0x00830AF8u; /* 0x0077CC4F: mov ecx, 0x830af8 */
    RECOMP_CALL(sub_0043C0B0); /* 0x0077CC54: call 0x43c0b0 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077CC59: ret  */

}

void sub_0077CC60(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077CC60u);

L_0077CC60:
    PUSH32(esp, 0x0048E270u); /* 0x0077CC60: push 0x48e270 */
    PUSH32(esp, 0x0048E070u); /* 0x0077CC65: push 0x48e070 */
    PUSH32(esp, 0x80135000u); /* 0x0077CC6A: push 0x80135000 */
    ecx = 0x0082DBB0u; /* 0x0077CC6F: mov ecx, 0x82dbb0 */
    RECOMP_CALL(sub_0043C0B0); /* 0x0077CC74: call 0x43c0b0 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077CC79: ret  */

}

void sub_0077CC80(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077CC80u);

L_0077CC80:
    ecx = 0x00835850u; /* 0x0077CC80: mov ecx, 0x835850 */
    RECOMP_CALL(sub_00598750); /* 0x0077CC85: call 0x598750 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00781EE0u); /* 0x0077CC8A: push 0x781ee0 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077CC8F: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077CC94: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077CC95: ret  */

}

void sub_0077CCA0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077CCA0u);

L_0077CCA0:
    PUSH32(esp, 0x004022C0u); /* 0x0077CCA0: push 0x4022c0 */
    PUSH32(esp, 0x00502FD0u); /* 0x0077CCA5: push 0x502fd0 */
    PUSH32(esp, 0xFAu); /* 0x0077CCAA: push 0xfa */
    PUSH32(esp, 0x30u); /* 0x0077CCAF: push 0x30 */
    PUSH32(esp, 0x0082DC08u); /* 0x0077CCB1: push 0x82dc08 */
    RECOMP_CALL(sub_0075C461); /* 0x0077CCB6: call 0x75c461 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00781D80u); /* 0x0077CCBB: push 0x781d80 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077CCC0: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077CCC5: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077CCC6: ret  */

}

void sub_0077CCD0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077CCD0u);

L_0077CCD0:
    PUSH32(esp, 0x004919D0u); /* 0x0077CCD0: push 0x4919d0 */
    PUSH32(esp, 0x00491940u); /* 0x0077CCD5: push 0x491940 */
    PUSH32(esp, 0x16u); /* 0x0077CCDA: push 0x16 */
    PUSH32(esp, 0x70u); /* 0x0077CCDC: push 0x70 */
    PUSH32(esp, 0x00832DE0u); /* 0x0077CCDE: push 0x832de0 */
    RECOMP_CALL(sub_0075C461); /* 0x0077CCE3: call 0x75c461 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00781DD0u); /* 0x0077CCE8: push 0x781dd0 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077CCED: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077CCF2: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077CCF3: ret  */

}

void sub_0077CD00(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077CD00u);

L_0077CD00:
    ecx = 0x00830AF0u; /* 0x0077CD00: mov ecx, 0x830af0 */
    RECOMP_CALL(sub_00598750); /* 0x0077CD05: call 0x598750 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00781DF0u); /* 0x0077CD0A: push 0x781df0 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077CD0F: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077CD14: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077CD15: ret  */

}

void sub_0077CD20(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077CD20u);

L_0077CD20:
    ecx = 0x0082DC00u; /* 0x0077CD20: mov ecx, 0x82dc00 */
    RECOMP_CALL(sub_00598750); /* 0x0077CD25: call 0x598750 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00781E00u); /* 0x0077CD2A: push 0x781e00 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077CD2F: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077CD34: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077CD35: ret  */

}

void sub_0077CD40(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077CD40u);

L_0077CD40:
    ecx = 0x008358C8u; /* 0x0077CD40: mov ecx, 0x8358c8 */
    RECOMP_CALL(sub_00598750); /* 0x0077CD45: call 0x598750 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00781E70u); /* 0x0077CD4A: push 0x781e70 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077CD4F: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077CD54: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077CD55: ret  */

}

void sub_0077CD60(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077CD60u);

L_0077CD60:
    PUSH32(esp, 0x00495040u); /* 0x0077CD60: push 0x495040 */
    PUSH32(esp, 0x00494EA0u); /* 0x0077CD65: push 0x494ea0 */
    PUSH32(esp, 0xB3300000u); /* 0x0077CD6A: push 0xb3300000 */
    ecx = 0x0082DBA0u; /* 0x0077CD6F: mov ecx, 0x82dba0 */
    RECOMP_CALL(sub_0043C0B0); /* 0x0077CD74: call 0x43c0b0 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077CD79: ret  */

}

void sub_0077CD80(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077CD80u);

L_0077CD80:
    PUSH32(esp, 0x00495040u); /* 0x0077CD80: push 0x495040 */
    PUSH32(esp, 0x00494EA0u); /* 0x0077CD85: push 0x494ea0 */
    PUSH32(esp, 0xB3320000u); /* 0x0077CD8A: push 0xb3320000 */
    ecx = 0x008358D0u; /* 0x0077CD8F: mov ecx, 0x8358d0 */
    RECOMP_CALL(sub_0043C0B0); /* 0x0077CD94: call 0x43c0b0 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077CD99: ret  */

}

void sub_0077CDA0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077CDA0u);

L_0077CDA0:
    PUSH32(esp, 0x00495040u); /* 0x0077CDA0: push 0x495040 */
    PUSH32(esp, 0x00494EA0u); /* 0x0077CDA5: push 0x494ea0 */
    PUSH32(esp, 0xB0300100u); /* 0x0077CDAA: push 0xb0300100 */
    ecx = 0x00830B08u; /* 0x0077CDAF: mov ecx, 0x830b08 */
    RECOMP_CALL(sub_0043C0B0); /* 0x0077CDB4: call 0x43c0b0 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077CDB9: ret  */

}

void sub_0077CDC0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077CDC0u);

L_0077CDC0:
    PUSH32(esp, 0x004950D0u); /* 0x0077CDC0: push 0x4950d0 */
    PUSH32(esp, 0x00494500u); /* 0x0077CDC5: push 0x494500 */
    PUSH32(esp, 0x0048B410u); /* 0x0077CDCA: push 0x48b410 */
    PUSH32(esp, 0x00494C80u); /* 0x0077CDCF: push 0x494c80 */
    PUSH32(esp, 0x00494C10u); /* 0x0077CDD4: push 0x494c10 */
    PUSH32(esp, 0x80u); /* 0x0077CDD9: push 0x80 */
    ecx = 0x0083579Cu; /* 0x0077CDDE: mov ecx, 0x83579c */
    RECOMP_CALL(sub_00493390); /* 0x0077CDE3: call 0x493390 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00781E10u); /* 0x0077CDE8: push 0x781e10 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077CDED: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077CDF2: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077CDF3: ret  */

}

void sub_0077CE00(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077CE00u);

L_0077CE00:
    fp_push(*(float*)&MEM32(0x784250)); /* 0x0077CE00: fld dword ptr [0x784250] */
    _st[0] /= (double)*(float*)ADDR(0x78DBB4); /* 0x0077CE06: fdiv dword ptr [0x78dbb4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x83654C) = _v; } /* 0x0077CE0C: fstp dword ptr [0x83654c] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077CE12: ret  */

}

void sub_0077CE20(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077CE20u);

L_0077CE20:
    PUSH32(esp, 0x004957A0u); /* 0x0077CE20: push 0x4957a0 */
    PUSH32(esp, 0x004FF430u); /* 0x0077CE25: push 0x4ff430 */
    PUSH32(esp, 7); /* 0x0077CE2A: push 7 */
    PUSH32(esp, 0x44u); /* 0x0077CE2C: push 0x44 */
    PUSH32(esp, 0x00836568u); /* 0x0077CE2E: push 0x836568 */
    RECOMP_CALL(sub_0075C461); /* 0x0077CE33: call 0x75c461 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00781EF0u); /* 0x0077CE38: push 0x781ef0 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077CE3D: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077CE42: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077CE43: ret  */

}

void sub_0077CE50(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077CE50u);

L_0077CE50:
    PUSH32(esp, 0xC8CFE9F2u); /* 0x0077CE50: push 0xc8cfe9f2 */
    ecx = 0x00837188u; /* 0x0077CE55: mov ecx, 0x837188 */
    RECOMP_CALL(sub_005054A0); /* 0x0077CE5A: call 0x5054a0 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077CE5F: ret  */

}

void sub_0077CE60(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077CE60u);

L_0077CE60:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0077CE60: push -1 */
    ecx = 0x00837198u; /* 0x0077CE62: mov ecx, 0x837198 */
    RECOMP_CALL(sub_005054A0); /* 0x0077CE67: call 0x5054a0 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077CE6C: ret  */

}

void sub_0077CE70(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077CE70u);

L_0077CE70:
    PUSH32(esp, 0x50549AC0u); /* 0x0077CE70: push 0x50549ac0 */
    ecx = 0x00836550u; /* 0x0077CE75: mov ecx, 0x836550 */
    RECOMP_CALL(sub_005054A0); /* 0x0077CE7A: call 0x5054a0 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077CE7F: ret  */

}

void sub_0077CE80(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077CE80u);

L_0077CE80:
    PUSH32(esp, 0xFF323232u); /* 0x0077CE80: push 0xff323232 */
    ecx = 0x00837178u; /* 0x0077CE85: mov ecx, 0x837178 */
    RECOMP_CALL(sub_005054A0); /* 0x0077CE8A: call 0x5054a0 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077CE8F: ret  */

}

void sub_0077CE90(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077CE90u);

L_0077CE90:
    ecx = 0x008364F4u; /* 0x0077CE90: mov ecx, 0x8364f4 */
    RECOMP_CALL(sub_00510920); /* 0x0077CE95: call 0x510920 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00781F10u); /* 0x0077CE9A: push 0x781f10 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077CE9F: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077CEA4: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077CEA5: ret  */

}

void sub_0077CEB0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077CEB0u);

L_0077CEB0:
    eax = MEM32(0x78DFFC); /* 0x0077CEB0: mov eax, dword ptr [0x78dffc] */
    edx = MEM32(0x78DFF4); /* 0x0077CEB5: mov edx, dword ptr [0x78dff4] */
    ecx = eax; /* 0x0077CEBB: mov ecx, eax */
    MEM32(0x7F6900) = eax; /* 0x0077CEBD: mov dword ptr [0x7f6900], eax */
    MEM32(0x7F6904) = ecx; /* 0x0077CEC2: mov dword ptr [0x7f6904], ecx */
    ecx = MEM32(0x78DFF8); /* 0x0077CEC8: mov ecx, dword ptr [0x78dff8] */
    eax = edx; /* 0x0077CECE: mov eax, edx */
    MEM32(0x7F6938) = edx; /* 0x0077CED0: mov dword ptr [0x7f6938], edx */
    edx = ecx; /* 0x0077CED6: mov edx, ecx */
    MEM32(0x7F693C) = eax; /* 0x0077CED8: mov dword ptr [0x7f693c], eax */
    MEM32(0x7F6940) = ecx; /* 0x0077CEDD: mov dword ptr [0x7f6940], ecx */
    SET_LO8(ecx, 0x80u); /* 0x0077CEE3: mov cl, 0x80 */
    SET_LO8(eax, 0x25u); /* 0x0077CEE5: mov al, 0x25 */
    MEM8(0x7F6960) = (uint8_t)(LO8(eax)); /* 0x0077CEE7: mov byte ptr [0x7f6960], al */
    MEM8(0x7F6961) = (uint8_t)(LO8(eax)); /* 0x0077CEEC: mov byte ptr [0x7f6961], al */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0077CEF1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(0x7F6966) = (uint8_t)(LO8(ecx)); /* 0x0077CEF3: mov byte ptr [0x7f6966], cl */
    MEM8(0x7F6967) = (uint8_t)(LO8(ecx)); /* 0x0077CEF9: mov byte ptr [0x7f6967], cl */
    MEM8(0x7F6968) = (uint8_t)(LO8(ecx)); /* 0x0077CEFF: mov byte ptr [0x7f6968], cl */
    MEM8(0x7F6969) = (uint8_t)(LO8(ecx)); /* 0x0077CF05: mov byte ptr [0x7f6969], cl */
    MEM8(0x7F696A) = (uint8_t)(LO8(ecx)); /* 0x0077CF0B: mov byte ptr [0x7f696a], cl */
    MEM8(0x7F696B) = (uint8_t)(LO8(ecx)); /* 0x0077CF11: mov byte ptr [0x7f696b], cl */
    SET_LO8(ecx, 0x32u); /* 0x0077CF17: mov cl, 0x32 */
    MEM32(0x7F6908) = 0; /* 0x0077CF19: mov dword ptr [0x7f6908], 0 */
    MEM32(0x7F690C) = 0x41200000u; /* 0x0077CF23: mov dword ptr [0x7f690c], 0x41200000 */
    MEM32(0x7F6910) = 0x40000000u; /* 0x0077CF2D: mov dword ptr [0x7f6910], 0x40000000 */
    MEM32(0x7F6914) = 0; /* 0x0077CF37: mov dword ptr [0x7f6914], 0 */
    MEM32(0x7F6918) = 0x41200000u; /* 0x0077CF41: mov dword ptr [0x7f6918], 0x41200000 */
    MEM32(0x7F691C) = 0x40000000u; /* 0x0077CF4B: mov dword ptr [0x7f691c], 0x40000000 */
    MEM32(0x7F6920) = 0; /* 0x0077CF55: mov dword ptr [0x7f6920], 0 */
    MEM32(0x7F6924) = 0; /* 0x0077CF5F: mov dword ptr [0x7f6924], 0 */
    MEM32(0x7F6928) = 0; /* 0x0077CF69: mov dword ptr [0x7f6928], 0 */
    MEM32(0x7F692C) = 0; /* 0x0077CF73: mov dword ptr [0x7f692c], 0 */
    MEM32(0x7F6930) = 0; /* 0x0077CF7D: mov dword ptr [0x7f6930], 0 */
    MEM32(0x7F6934) = 0; /* 0x0077CF87: mov dword ptr [0x7f6934], 0 */
    MEM32(0x7F6944) = edx; /* 0x0077CF91: mov dword ptr [0x7f6944], edx */
    MEM32(0x7F6948) = 0; /* 0x0077CF97: mov dword ptr [0x7f6948], 0 */
    MEM32(0x7F694C) = 0; /* 0x0077CFA1: mov dword ptr [0x7f694c], 0 */
    MEM32(0x7F6950) = 0; /* 0x0077CFAB: mov dword ptr [0x7f6950], 0 */
    MEM32(0x7F6954) = 0; /* 0x0077CFB5: mov dword ptr [0x7f6954], 0 */
    MEM32(0x7F6958) = 0; /* 0x0077CFBF: mov dword ptr [0x7f6958], 0 */
    MEM32(0x7F695C) = 0; /* 0x0077CFC9: mov dword ptr [0x7f695c], 0 */
    MEM8(0x7F6962) = (uint8_t)(LO8(eax)); /* 0x0077CFD3: mov byte ptr [0x7f6962], al */
    MEM8(0x7F6963) = (uint8_t)(LO8(eax)); /* 0x0077CFD8: mov byte ptr [0x7f6963], al */
    MEM8(0x7F6964) = (uint8_t)(LO8(eax)); /* 0x0077CFDD: mov byte ptr [0x7f6964], al */
    MEM8(0x7F6965) = (uint8_t)(LO8(eax)); /* 0x0077CFE2: mov byte ptr [0x7f6965], al */
    MEM8(0x7F696C) = (uint8_t)(LO8(eax)); /* 0x0077CFE7: mov byte ptr [0x7f696c], al */
    MEM8(0x7F696D) = (uint8_t)(LO8(ecx)); /* 0x0077CFEC: mov byte ptr [0x7f696d], cl */
    MEM8(0x7F696E) = (uint8_t)(LO8(eax)); /* 0x0077CFF2: mov byte ptr [0x7f696e], al */
    MEM8(0x7F696F) = (uint8_t)(LO8(ecx)); /* 0x0077CFF7: mov byte ptr [0x7f696f], cl */
    MEM8(0x7F6970) = (uint8_t)(LO8(eax)); /* 0x0077CFFD: mov byte ptr [0x7f6970], al */
    MEM8(0x7F6971) = (uint8_t)(LO8(eax)); /* 0x0077D002: mov byte ptr [0x7f6971], al */
    MEM32(0x7F6974) = eax; /* 0x0077D007: mov dword ptr [0x7f6974], eax */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077D00C: ret  */

}

void sub_0077D010(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077D010u);

L_0077D010:
    eax = MEM32(0x78E024); /* 0x0077D010: mov eax, dword ptr [0x78e024] */
    ecx = 1; /* 0x0077D015: mov ecx, 1 */
    MEM32(0x7F6BB0) = eax; /* 0x0077D01A: mov dword ptr [0x7f6bb0], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0077D01F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x7F6BB4) = 0x3E800000u; /* 0x0077D021: mov dword ptr [0x7f6bb4], 0x3e800000 */
    MEM32(0x7F6BB8) = 0xBDCCCCCDu; /* 0x0077D02B: mov dword ptr [0x7f6bb8], 0xbdcccccd */
    MEM32(0x7F6BBC) = 0x41200000u; /* 0x0077D035: mov dword ptr [0x7f6bbc], 0x41200000 */
    MEM32(0x7F6BC0) = ecx; /* 0x0077D03F: mov dword ptr [0x7f6bc0], ecx */
    MEM32(0x7F6BC4) = ecx; /* 0x0077D045: mov dword ptr [0x7f6bc4], ecx */
    MEM32(0x7F6BC8) = 0x3F000000u; /* 0x0077D04B: mov dword ptr [0x7f6bc8], 0x3f000000 */
    MEM32(0x7F6BCC) = 0x40100000u; /* 0x0077D055: mov dword ptr [0x7f6bcc], 0x40100000 */
    MEM32(0x7F6BD0) = 0; /* 0x0077D05F: mov dword ptr [0x7f6bd0], 0 */
    MEM32(0x7F6BD4) = 0x3ECCCCCDu; /* 0x0077D069: mov dword ptr [0x7f6bd4], 0x3ecccccd */
    MEM32(0x7F6BD8) = eax; /* 0x0077D073: mov dword ptr [0x7f6bd8], eax */
    MEM32(0x7F6BDC) = 0x3F800000u; /* 0x0077D078: mov dword ptr [0x7f6bdc], 0x3f800000 */
    MEM32(0x7F6BE0) = 0x40533333u; /* 0x0077D082: mov dword ptr [0x7f6be0], 0x40533333 */
    MEM32(0x7F6BE4) = 0x42200000u; /* 0x0077D08C: mov dword ptr [0x7f6be4], 0x42200000 */
    MEM32(0x7F6BE8) = eax; /* 0x0077D096: mov dword ptr [0x7f6be8], eax */
    MEM32(0x7F6BEC) = eax; /* 0x0077D09B: mov dword ptr [0x7f6bec], eax */
    MEM32(0x7F6BF0) = 0x3F800000u; /* 0x0077D0A0: mov dword ptr [0x7f6bf0], 0x3f800000 */
    MEM32(0x7F6BF4) = 0x3ECCCCCDu; /* 0x0077D0AA: mov dword ptr [0x7f6bf4], 0x3ecccccd */
    MEM32(0x7F6BF8) = eax; /* 0x0077D0B4: mov dword ptr [0x7f6bf8], eax */
    MEM32(0x7F6BFC) = 0xBF800000u; /* 0x0077D0B9: mov dword ptr [0x7f6bfc], 0xbf800000 */
    MEM32(0x7F6C00) = ecx; /* 0x0077D0C3: mov dword ptr [0x7f6c00], ecx */
    MEM32(0x7F6C04) = 0x3F000000u; /* 0x0077D0C9: mov dword ptr [0x7f6c04], 0x3f000000 */
    MEM32(0x7F6C08) = 0x40100000u; /* 0x0077D0D3: mov dword ptr [0x7f6c08], 0x40100000 */
    MEM32(0x7F6C0C) = 0x41880000u; /* 0x0077D0DD: mov dword ptr [0x7f6c0c], 0x41880000 */
    MEM32(0x7F6C10) = 0x3ECCCCCDu; /* 0x0077D0E7: mov dword ptr [0x7f6c10], 0x3ecccccd */
    MEM32(0x7F6C14) = eax; /* 0x0077D0F1: mov dword ptr [0x7f6c14], eax */
    MEM32(0x7F6C18) = 0x3F800000u; /* 0x0077D0F6: mov dword ptr [0x7f6c18], 0x3f800000 */
    MEM32(0x7F6C1C) = 0x40000000u; /* 0x0077D100: mov dword ptr [0x7f6c1c], 0x40000000 */
    MEM32(0x7F6C20) = eax; /* 0x0077D10A: mov dword ptr [0x7f6c20], eax */
    MEM32(0x7F6C24) = eax; /* 0x0077D10F: mov dword ptr [0x7f6c24], eax */
    MEM32(0x7F6C28) = eax; /* 0x0077D114: mov dword ptr [0x7f6c28], eax */
    MEM32(0x7F6C2C) = 0x3F800000u; /* 0x0077D119: mov dword ptr [0x7f6c2c], 0x3f800000 */
    MEM32(0x7F6C30) = 0x3ECCCCCDu; /* 0x0077D123: mov dword ptr [0x7f6c30], 0x3ecccccd */
    MEM32(0x7F6C34) = eax; /* 0x0077D12D: mov dword ptr [0x7f6c34], eax */
    MEM32(0x7F6C38) = 0xBF800000u; /* 0x0077D132: mov dword ptr [0x7f6c38], 0xbf800000 */
    MEM32(0x7F6C3C) = eax; /* 0x0077D13C: mov dword ptr [0x7f6c3c], eax */
    MEM32(0x7F6C40) = 0x3F000000u; /* 0x0077D141: mov dword ptr [0x7f6c40], 0x3f000000 */
    MEM32(0x7F6C44) = 0x40100000u; /* 0x0077D14B: mov dword ptr [0x7f6c44], 0x40100000 */
    MEM32(0x7F6C48) = eax; /* 0x0077D155: mov dword ptr [0x7f6c48], eax */
    MEM32(0x7F6C4C) = 0x3ECCCCCDu; /* 0x0077D15A: mov dword ptr [0x7f6c4c], 0x3ecccccd */
    MEM32(0x7F6C50) = eax; /* 0x0077D164: mov dword ptr [0x7f6c50], eax */
    MEM32(0x7F6C54) = 0x3F800000u; /* 0x0077D169: mov dword ptr [0x7f6c54], 0x3f800000 */
    MEM32(0x7F6C58) = 0x4007DF3Bu; /* 0x0077D173: mov dword ptr [0x7f6c58], 0x4007df3b */
    MEM32(0x7F6C5C) = 0x42200000u; /* 0x0077D17D: mov dword ptr [0x7f6c5c], 0x42200000 */
    MEM32(0x7F6C60) = eax; /* 0x0077D187: mov dword ptr [0x7f6c60], eax */
    MEM32(0x7F6C64) = eax; /* 0x0077D18C: mov dword ptr [0x7f6c64], eax */
    MEM32(0x7F6C68) = 0xBF800000u; /* 0x0077D191: mov dword ptr [0x7f6c68], 0xbf800000 */
    MEM32(0x7F6C6C) = 0x3ECCCCCDu; /* 0x0077D19B: mov dword ptr [0x7f6c6c], 0x3ecccccd */
    MEM32(0x7F6C70) = eax; /* 0x0077D1A5: mov dword ptr [0x7f6c70], eax */
    MEM32(0x7F6C74) = 0xBF800000u; /* 0x0077D1AA: mov dword ptr [0x7f6c74], 0xbf800000 */
    MEM32(0x7F6C78) = eax; /* 0x0077D1B4: mov dword ptr [0x7f6c78], eax */
    MEM32(0x7F6C7C) = 0x3F000000u; /* 0x0077D1B9: mov dword ptr [0x7f6c7c], 0x3f000000 */
    MEM32(0x7F6C80) = 0x40100000u; /* 0x0077D1C3: mov dword ptr [0x7f6c80], 0x40100000 */
    MEM32(0x7F6C84) = 0x41880000u; /* 0x0077D1CD: mov dword ptr [0x7f6c84], 0x41880000 */
    MEM32(0x7F6C88) = 0x3ECCCCCDu; /* 0x0077D1D7: mov dword ptr [0x7f6c88], 0x3ecccccd */
    MEM32(0x7F6C8C) = eax; /* 0x0077D1E1: mov dword ptr [0x7f6c8c], eax */
    MEM32(0x7F6C90) = 0x3F800000u; /* 0x0077D1E6: mov dword ptr [0x7f6c90], 0x3f800000 */
    MEM32(0x7F6C94) = 0x40000000u; /* 0x0077D1F0: mov dword ptr [0x7f6c94], 0x40000000 */
    MEM32(0x7F6C98) = eax; /* 0x0077D1FA: mov dword ptr [0x7f6c98], eax */
    MEM32(0x7F6C9C) = eax; /* 0x0077D1FF: mov dword ptr [0x7f6c9c], eax */
    MEM32(0x7F6CA0) = eax; /* 0x0077D204: mov dword ptr [0x7f6ca0], eax */
    MEM32(0x7F6CA4) = 0xBF800000u; /* 0x0077D209: mov dword ptr [0x7f6ca4], 0xbf800000 */
    MEM32(0x7F6CA8) = 0x3ECCCCCDu; /* 0x0077D213: mov dword ptr [0x7f6ca8], 0x3ecccccd */
    MEM32(0x7F6CAC) = eax; /* 0x0077D21D: mov dword ptr [0x7f6cac], eax */
    MEM32(0x7F6CB0) = 0xBF800000u; /* 0x0077D222: mov dword ptr [0x7f6cb0], 0xbf800000 */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077D22C: ret  */

}

void sub_0077D230(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077D230u);

L_0077D230:
    ecx = 0x008371B0u; /* 0x0077D230: mov ecx, 0x8371b0 */
    RECOMP_CALL(sub_0040C910); /* 0x0077D235: call 0x40c910 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00781F20u); /* 0x0077D23A: push 0x781f20 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077D23F: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077D244: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077D245: ret  */

}

void sub_0077D250(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077D250u);

L_0077D250:
    ecx = 0x00836750u; /* 0x0077D250: mov ecx, 0x836750 */
    RECOMP_CALL(sub_0040C910); /* 0x0077D255: call 0x40c910 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00781F30u); /* 0x0077D25A: push 0x781f30 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077D25F: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077D264: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077D265: ret  */

}

void sub_0077D270(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077D270u);

L_0077D270:
    PUSH32(esp, ebx); /* 0x0077D270: push ebx */
    PUSH32(esp, esi); /* 0x0077D271: push esi */
    PUSH32(esp, edi); /* 0x0077D272: push edi */
    esi = 0x00837048u; /* 0x0077D273: mov esi, 0x837048 */
    ebx = 6; /* 0x0077D278: mov ebx, 6 */
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x0077D27D: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;

L_0077D280:
    PUSH32(esp, 0x00783FE5u); /* 0x0077D280: push 0x783fe5 */
    MEM32(esi) = 0; /* 0x0077D285: mov dword ptr [esi], 0 */
    eax = esi + 0x4; /* 0x0077D28B: lea eax, [esi + 4] */
    PUSH32(esp, 0x20u); /* 0x0077D28E: push 0x20 */
    PUSH32(esp, eax); /* 0x0077D290: push eax */
    MEM32(esi + (-0x8)) = edi; /* 0x0077D291: mov dword ptr [esi - 8], edi */
    MEM32(esi + (-0x4)) = edi; /* 0x0077D294: mov dword ptr [esi - 4], edi */
    MEM32(esi) = 0; /* 0x0077D297: mov dword ptr [esi], 0 */
    RECOMP_CALL(sub_0050C960); /* 0x0077D29D: call 0x50c960 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x28) = 0; /* 0x0077D2A2: mov dword ptr [esi + 0x28], 0 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0077D2A9: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x34u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x34u; /* 0x0077D2AC: add esi, 0x34 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x0077D2AF: dec ebx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_0077D280; /* 0x0077D2B0: jne 0x77d280 */

L_0077D2B2:
    edi = POP32_VAL(esp); /* 0x0077D2B2: pop edi */
    esi = POP32_VAL(esp); /* 0x0077D2B3: pop esi */
    ebx = POP32_VAL(esp); /* 0x0077D2B4: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077D2B5: ret  */

}

void sub_0077D2C0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077D2C0u);

L_0077D2C0:
    ecx = 0x00836560u; /* 0x0077D2C0: mov ecx, 0x836560 */
    RECOMP_CALL(sub_0057BCD0); /* 0x0077D2C5: call 0x57bcd0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00781F40u); /* 0x0077D2CA: push 0x781f40 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077D2CF: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077D2D4: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077D2D5: ret  */

}

void sub_0077D2E0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077D2E0u);

L_0077D2E0:
    ecx = 0x00863760u; /* 0x0077D2E0: mov ecx, 0x863760 */
    RECOMP_CALL(sub_004FE350); /* 0x0077D2E5: call 0x4fe350 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00781F50u); /* 0x0077D2EA: push 0x781f50 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077D2EF: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077D2F4: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077D2F5: ret  */

}

void sub_0077D300(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077D300u);

L_0077D300:
    PUSH32(esp, 0x00781F90u); /* 0x0077D300: push 0x781f90 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077D305: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077D30A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077D30B: ret  */

}

void sub_0077D310(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077D310u);

L_0077D310:
    fp_push(*(float*)&MEM32(0x784250)); /* 0x0077D310: fld dword ptr [0x784250] */
    _st[0] /= (double)*(float*)ADDR(0x7992E0); /* 0x0077D316: fdiv dword ptr [0x7992e0] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x86375C) = _v; } /* 0x0077D31C: fstp dword ptr [0x86375c] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077D322: ret  */

}

void sub_0077D330(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077D330u);

L_0077D330:
    ecx = 0x00838640u; /* 0x0077D330: mov ecx, 0x838640 */
    RECOMP_ITAIL(0x004FF250u); RECOMP_RETURN(); /* 0x0077D335: jmp 0x4ff250 */

}

void sub_0077D340(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077D340u);

L_0077D340:
    eax = MEM32(0x7FA2B0); /* 0x0077D340: mov eax, dword ptr [0x7fa2b0] */
    ecx = MEM32(0x7FA2B4); /* 0x0077D345: mov ecx, dword ptr [0x7fa2b4] */
    edx = MEM32(0x7FA2B8); /* 0x0077D34B: mov edx, dword ptr [0x7fa2b8] */
    MEM32(0x839BE0) = eax; /* 0x0077D351: mov dword ptr [0x839be0], eax */
    eax = MEM32(0x7FA2BC); /* 0x0077D356: mov eax, dword ptr [0x7fa2bc] */
    MEM32(0x839BE4) = ecx; /* 0x0077D35B: mov dword ptr [0x839be4], ecx */
    MEM32(0x839BE8) = edx; /* 0x0077D361: mov dword ptr [0x839be8], edx */
    MEM32(0x839BEC) = eax; /* 0x0077D367: mov dword ptr [0x839bec], eax */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077D36C: ret  */

}

void sub_0077D370(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077D370u);

L_0077D370:
    ecx = 0x0085AD40u; /* 0x0077D370: mov ecx, 0x85ad40 */
    RECOMP_CALL(sub_00532740); /* 0x0077D375: call 0x532740 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00781FA0u); /* 0x0077D37A: push 0x781fa0 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077D37F: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077D384: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077D385: ret  */

}

void sub_0077D390(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077D390u);

L_0077D390:
    ecx = 0x0083A9D0u; /* 0x0077D390: mov ecx, 0x83a9d0 */
    RECOMP_CALL(sub_0053ED20); /* 0x0077D395: call 0x53ed20 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00781FE0u); /* 0x0077D39A: push 0x781fe0 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077D39F: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077D3A4: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077D3A5: ret  */

}

void sub_0077D3B0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077D3B0u);

L_0077D3B0:
    PUSH32(esp, 0x0079DA1Cu); /* 0x0077D3B0: push 0x79da1c */
    RECOMP_CALL(sub_0043DB50); /* 0x0077D3B5: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x0079DA04u); /* 0x0077D3BA: push 0x79da04 */
    MEM32(0x8641AC) = eax; /* 0x0077D3BF: mov dword ptr [0x8641ac], eax */
    MEM32(0x8641B0) = 4; /* 0x0077D3C4: mov dword ptr [0x8641b0], 4 */
    MEM32(0x8641B4) = 1; /* 0x0077D3CE: mov dword ptr [0x8641b4], 1 */
    RECOMP_CALL(sub_0043DB50); /* 0x0077D3D8: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x0079D9F0u); /* 0x0077D3DD: push 0x79d9f0 */
    MEM32(0x8641B8) = eax; /* 0x0077D3E2: mov dword ptr [0x8641b8], eax */
    MEM32(0x8641BC) = 1; /* 0x0077D3E7: mov dword ptr [0x8641bc], 1 */
    MEM32(0x8641C0) = 2; /* 0x0077D3F1: mov dword ptr [0x8641c0], 2 */
    RECOMP_CALL(sub_0043DB50); /* 0x0077D3FB: call 0x43db50 */
    RECOMP_FLAGS_IN();
    MEM32(0x8641C4) = eax; /* 0x0077D400: mov dword ptr [0x8641c4], eax */
    eax = 3; /* 0x0077D405: mov eax, 3 */
    PUSH32(esp, 0x0079D9DCu); /* 0x0077D40A: push 0x79d9dc */
    MEM32(0x8641C8) = eax; /* 0x0077D40F: mov dword ptr [0x8641c8], eax */
    MEM32(0x8641CC) = eax; /* 0x0077D414: mov dword ptr [0x8641cc], eax */
    RECOMP_CALL(sub_0043DB50); /* 0x0077D419: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x0079D9C8u); /* 0x0077D41E: push 0x79d9c8 */
    MEM32(0x8641D0) = eax; /* 0x0077D423: mov dword ptr [0x8641d0], eax */
    MEM32(0x8641D4) = 2; /* 0x0077D428: mov dword ptr [0x8641d4], 2 */
    MEM32(0x8641D8) = 4; /* 0x0077D432: mov dword ptr [0x8641d8], 4 */
    RECOMP_CALL(sub_0043DB50); /* 0x0077D43C: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x0079D9ACu); /* 0x0077D441: push 0x79d9ac */
    MEM32(0x8641DC) = eax; /* 0x0077D446: mov dword ptr [0x8641dc], eax */
    MEM32(0x8641E0) = 0; /* 0x0077D44B: mov dword ptr [0x8641e0], 0 */
    MEM32(0x8641E4) = 0xAu; /* 0x0077D455: mov dword ptr [0x8641e4], 0xa */
    RECOMP_CALL(sub_0043DB50); /* 0x0077D45F: call 0x43db50 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x0077D464: add esp, 0x18 */
    _flag_k = FK_ADD;
    MEM32(0x8641E8) = eax; /* 0x0077D467: mov dword ptr [0x8641e8], eax */
    MEM32(0x8641EC) = 1; /* 0x0077D46C: mov dword ptr [0x8641ec], 1 */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077D476: ret  */

}

void sub_0077D480(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077D480u);

L_0077D480:
    ecx = 0x008637A0u; /* 0x0077D480: mov ecx, 0x8637a0 */
    RECOMP_CALL(sub_0052C270); /* 0x0077D485: call 0x52c270 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00781FF0u); /* 0x0077D48A: push 0x781ff0 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077D48F: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077D494: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077D495: ret  */

}

void sub_0077D4A0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077D4A0u);

L_0077D4A0:
    ecx = 0x00863770u; /* 0x0077D4A0: mov ecx, 0x863770 */
    RECOMP_CALL(sub_0052C270); /* 0x0077D4A5: call 0x52c270 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00782000u); /* 0x0077D4AA: push 0x782000 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077D4AF: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077D4B4: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077D4B5: ret  */

}

void sub_0077D4C0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077D4C0u);

L_0077D4C0:
    ecx = 0x00839C30u; /* 0x0077D4C0: mov ecx, 0x839c30 */
    RECOMP_CALL(sub_0052C270); /* 0x0077D4C5: call 0x52c270 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00782010u); /* 0x0077D4CA: push 0x782010 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077D4CF: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077D4D4: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077D4D5: ret  */

}

void sub_0077D4E0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077D4E0u);

L_0077D4E0:
    ecx = 0x00839BD0u; /* 0x0077D4E0: mov ecx, 0x839bd0 */
    RECOMP_CALL(sub_0052C270); /* 0x0077D4E5: call 0x52c270 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00782020u); /* 0x0077D4EA: push 0x782020 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077D4EF: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077D4F4: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077D4F5: ret  */

}

void sub_0077D500(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077D500u);

L_0077D500:
    PUSH32(esp, 0x00525C50u); /* 0x0077D500: push 0x525c50 */
    PUSH32(esp, 0x0057BCD0u); /* 0x0077D505: push 0x57bcd0 */
    PUSH32(esp, 0x100u); /* 0x0077D50A: push 0x100 */
    PUSH32(esp, 8); /* 0x0077D50F: push 8 */
    PUSH32(esp, 0x008639A0u); /* 0x0077D511: push 0x8639a0 */
    RECOMP_CALL(sub_0075C461); /* 0x0077D516: call 0x75c461 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00781FB0u); /* 0x0077D51B: push 0x781fb0 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077D520: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077D525: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077D526: ret  */

}

void sub_0077D530(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077D530u);

L_0077D530:
    ecx = 0x008637B0u; /* 0x0077D530: mov ecx, 0x8637b0 */
    RECOMP_CALL(sub_0052CC50); /* 0x0077D535: call 0x52cc50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00781FD0u); /* 0x0077D53A: push 0x781fd0 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077D53F: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077D544: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077D545: ret  */

}

void sub_0077D550(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077D550u);

L_0077D550:
    ecx = 0x00863768u; /* 0x0077D550: mov ecx, 0x863768 */
    RECOMP_CALL(sub_00598750); /* 0x0077D555: call 0x598750 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00782030u); /* 0x0077D55A: push 0x782030 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077D55F: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077D564: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077D565: ret  */

}

void sub_0077D570(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077D570u);

L_0077D570:
    ecx = 0x008637BCu; /* 0x0077D570: mov ecx, 0x8637bc */
    RECOMP_CALL(sub_0057BCD0); /* 0x0077D575: call 0x57bcd0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00782050u); /* 0x0077D57A: push 0x782050 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077D57F: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077D584: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077D585: ret  */

}

void sub_0077D590(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077D590u);

L_0077D590:
    ecx = 0x00838980u; /* 0x0077D590: mov ecx, 0x838980 */
    RECOMP_CALL(sub_0053ADF0); /* 0x0077D595: call 0x53adf0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00782040u); /* 0x0077D59A: push 0x782040 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077D59F: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077D5A4: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077D5A5: ret  */

}

void sub_0077D5B0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077D5B0u);

L_0077D5B0:
    ecx = 0x00839C40u; /* 0x0077D5B0: mov ecx, 0x839c40 */
    RECOMP_CALL(sub_00522400); /* 0x0077D5B5: call 0x522400 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00781F60u); /* 0x0077D5BA: push 0x781f60 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077D5BF: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077D5C4: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077D5C5: ret  */

}

void sub_0077D5D0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077D5D0u);

L_0077D5D0:
    fp_push(*(float*)&MEM32(0x799388)); /* 0x0077D5D0: fld dword ptr [0x799388] */
    _st[0] *= (double)*(float*)ADDR(0x79DA34); /* 0x0077D5D6: fmul dword ptr [0x79da34] */
    _st[0] -= (double)*(float*)ADDR(0x799390); /* 0x0077D5DC: fsub dword ptr [0x799390] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8637C4) = _v; } /* 0x0077D5E2: fstp dword ptr [0x8637c4] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077D5E8: ret  */

}

void sub_0077D5F0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077D5F0u);

L_0077D5F0:
    ecx = 0x008637D0u; /* 0x0077D5F0: mov ecx, 0x8637d0 */
    RECOMP_CALL(sub_005315B0); /* 0x0077D5F5: call 0x5315b0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00781F80u); /* 0x0077D5FA: push 0x781f80 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077D5FF: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077D604: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077D605: ret  */

}

void sub_0077D610(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077D610u);

L_0077D610:
    PUSH32(esp, 0x00781F70u); /* 0x0077D610: push 0x781f70 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077D615: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077D61A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077D61B: ret  */

}

void sub_0077D620(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077D620u);

L_0077D620:
    fp_push(*(float*)&MEM32(0x784250)); /* 0x0077D620: fld dword ptr [0x784250] */
    _st[0] /= (double)*(float*)ADDR(0x79DA40); /* 0x0077D626: fdiv dword ptr [0x79da40] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x864638) = _v; } /* 0x0077D62C: fstp dword ptr [0x864638] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077D632: ret  */

}

void sub_0077D640(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077D640u);

L_0077D640:
    PUSH32(esp, 0x004022C0u); /* 0x0077D640: push 0x4022c0 */
    PUSH32(esp, 0x0056D770u); /* 0x0077D645: push 0x56d770 */
    PUSH32(esp, 6); /* 0x0077D64A: push 6 */
    PUSH32(esp, 0x20u); /* 0x0077D64C: push 0x20 */
    PUSH32(esp, 0x00864640u); /* 0x0077D64E: push 0x864640 */
    RECOMP_CALL(sub_0075C461); /* 0x0077D653: call 0x75c461 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00782060u); /* 0x0077D658: push 0x782060 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077D65D: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077D662: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077D663: ret  */

}

void sub_0077D670(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077D670u);

L_0077D670:
    ecx = 0x00864630u; /* 0x0077D670: mov ecx, 0x864630 */
    RECOMP_CALL(sub_00598750); /* 0x0077D675: call 0x598750 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00782080u); /* 0x0077D67A: push 0x782080 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077D67F: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077D684: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077D685: ret  */

}

void sub_0077D690(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077D690u);

L_0077D690:
    ecx = 0x00865210u; /* 0x0077D690: mov ecx, 0x865210 */
    RECOMP_CALL(sub_0057BCD0); /* 0x0077D695: call 0x57bcd0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00782280u); /* 0x0077D69A: push 0x782280 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077D69F: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077D6A4: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077D6A5: ret  */

}

void sub_0077D6B0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077D6B0u);

L_0077D6B0:
    fp_push(*(float*)&MEM32(0x784250)); /* 0x0077D6B0: fld dword ptr [0x784250] */
    _st[0] /= (double)*(float*)ADDR(0x79DC44); /* 0x0077D6B6: fdiv dword ptr [0x79dc44] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x86554C) = _v; } /* 0x0077D6BC: fstp dword ptr [0x86554c] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077D6C2: ret  */

}

void sub_0077D6D0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077D6D0u);

L_0077D6D0:
    eax = MEM32(0x79DC50); /* 0x0077D6D0: mov eax, dword ptr [0x79dc50] */
    edx = MEM32(0x79DC48); /* 0x0077D6D5: mov edx, dword ptr [0x79dc48] */
    ecx = eax; /* 0x0077D6DB: mov ecx, eax */
    MEM32(0x7FB8E8) = eax; /* 0x0077D6DD: mov dword ptr [0x7fb8e8], eax */
    MEM32(0x7FB8EC) = ecx; /* 0x0077D6E2: mov dword ptr [0x7fb8ec], ecx */
    ecx = MEM32(0x79DC4C); /* 0x0077D6E8: mov ecx, dword ptr [0x79dc4c] */
    eax = edx; /* 0x0077D6EE: mov eax, edx */
    MEM32(0x7FB920) = edx; /* 0x0077D6F0: mov dword ptr [0x7fb920], edx */
    edx = ecx; /* 0x0077D6F6: mov edx, ecx */
    MEM32(0x7FB924) = eax; /* 0x0077D6F8: mov dword ptr [0x7fb924], eax */
    MEM32(0x7FB928) = ecx; /* 0x0077D6FD: mov dword ptr [0x7fb928], ecx */
    SET_LO8(ecx, 0x80u); /* 0x0077D703: mov cl, 0x80 */
    SET_LO8(eax, 0x25u); /* 0x0077D705: mov al, 0x25 */
    MEM8(0x7FB948) = (uint8_t)(LO8(eax)); /* 0x0077D707: mov byte ptr [0x7fb948], al */
    MEM8(0x7FB949) = (uint8_t)(LO8(eax)); /* 0x0077D70C: mov byte ptr [0x7fb949], al */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0077D711: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(0x7FB94E) = (uint8_t)(LO8(ecx)); /* 0x0077D713: mov byte ptr [0x7fb94e], cl */
    MEM8(0x7FB94F) = (uint8_t)(LO8(ecx)); /* 0x0077D719: mov byte ptr [0x7fb94f], cl */
    MEM8(0x7FB950) = (uint8_t)(LO8(ecx)); /* 0x0077D71F: mov byte ptr [0x7fb950], cl */
    MEM8(0x7FB951) = (uint8_t)(LO8(ecx)); /* 0x0077D725: mov byte ptr [0x7fb951], cl */
    MEM8(0x7FB952) = (uint8_t)(LO8(ecx)); /* 0x0077D72B: mov byte ptr [0x7fb952], cl */
    MEM8(0x7FB953) = (uint8_t)(LO8(ecx)); /* 0x0077D731: mov byte ptr [0x7fb953], cl */
    SET_LO8(ecx, 0x32u); /* 0x0077D737: mov cl, 0x32 */
    MEM32(0x7FB8F0) = 0; /* 0x0077D739: mov dword ptr [0x7fb8f0], 0 */
    MEM32(0x7FB8F4) = 0x41200000u; /* 0x0077D743: mov dword ptr [0x7fb8f4], 0x41200000 */
    MEM32(0x7FB8F8) = 0x40000000u; /* 0x0077D74D: mov dword ptr [0x7fb8f8], 0x40000000 */
    MEM32(0x7FB8FC) = 0; /* 0x0077D757: mov dword ptr [0x7fb8fc], 0 */
    MEM32(0x7FB900) = 0x41200000u; /* 0x0077D761: mov dword ptr [0x7fb900], 0x41200000 */
    MEM32(0x7FB904) = 0x40000000u; /* 0x0077D76B: mov dword ptr [0x7fb904], 0x40000000 */
    MEM32(0x7FB908) = 0; /* 0x0077D775: mov dword ptr [0x7fb908], 0 */
    MEM32(0x7FB90C) = 0; /* 0x0077D77F: mov dword ptr [0x7fb90c], 0 */
    MEM32(0x7FB910) = 0; /* 0x0077D789: mov dword ptr [0x7fb910], 0 */
    MEM32(0x7FB914) = 0; /* 0x0077D793: mov dword ptr [0x7fb914], 0 */
    MEM32(0x7FB918) = 0; /* 0x0077D79D: mov dword ptr [0x7fb918], 0 */
    MEM32(0x7FB91C) = 0; /* 0x0077D7A7: mov dword ptr [0x7fb91c], 0 */
    MEM32(0x7FB92C) = edx; /* 0x0077D7B1: mov dword ptr [0x7fb92c], edx */
    MEM32(0x7FB930) = 0; /* 0x0077D7B7: mov dword ptr [0x7fb930], 0 */
    MEM32(0x7FB934) = 0; /* 0x0077D7C1: mov dword ptr [0x7fb934], 0 */
    MEM32(0x7FB938) = 0; /* 0x0077D7CB: mov dword ptr [0x7fb938], 0 */
    MEM32(0x7FB93C) = 0; /* 0x0077D7D5: mov dword ptr [0x7fb93c], 0 */
    MEM32(0x7FB940) = 0; /* 0x0077D7DF: mov dword ptr [0x7fb940], 0 */
    MEM32(0x7FB944) = 0; /* 0x0077D7E9: mov dword ptr [0x7fb944], 0 */
    MEM8(0x7FB94A) = (uint8_t)(LO8(eax)); /* 0x0077D7F3: mov byte ptr [0x7fb94a], al */
    MEM8(0x7FB94B) = (uint8_t)(LO8(eax)); /* 0x0077D7F8: mov byte ptr [0x7fb94b], al */
    MEM8(0x7FB94C) = (uint8_t)(LO8(eax)); /* 0x0077D7FD: mov byte ptr [0x7fb94c], al */
    MEM8(0x7FB94D) = (uint8_t)(LO8(eax)); /* 0x0077D802: mov byte ptr [0x7fb94d], al */
    MEM8(0x7FB954) = (uint8_t)(LO8(eax)); /* 0x0077D807: mov byte ptr [0x7fb954], al */
    MEM8(0x7FB955) = (uint8_t)(LO8(ecx)); /* 0x0077D80C: mov byte ptr [0x7fb955], cl */
    MEM8(0x7FB956) = (uint8_t)(LO8(eax)); /* 0x0077D812: mov byte ptr [0x7fb956], al */
    MEM8(0x7FB957) = (uint8_t)(LO8(ecx)); /* 0x0077D817: mov byte ptr [0x7fb957], cl */
    MEM8(0x7FB958) = (uint8_t)(LO8(eax)); /* 0x0077D81D: mov byte ptr [0x7fb958], al */
    MEM8(0x7FB959) = (uint8_t)(LO8(eax)); /* 0x0077D822: mov byte ptr [0x7fb959], al */
    MEM32(0x7FB95C) = eax; /* 0x0077D827: mov dword ptr [0x7fb95c], eax */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077D82C: ret  */

}

void sub_0077D830(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077D830u);

L_0077D830:
    ecx = 0x008651A4u; /* 0x0077D830: mov ecx, 0x8651a4 */
    RECOMP_CALL(sub_00598750); /* 0x0077D835: call 0x598750 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007821F0u); /* 0x0077D83A: push 0x7821f0 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077D83F: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077D844: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077D845: ret  */

}

void sub_0077D850(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077D850u);

L_0077D850:
    eax = MEM32(0x7FA99C); /* 0x0077D850: mov eax, dword ptr [0x7fa99c] */
    ecx = MEM32(0x7FA9A0); /* 0x0077D855: mov ecx, dword ptr [0x7fa9a0] */
    edx = MEM32(0x7FA97C); /* 0x0077D85B: mov edx, dword ptr [0x7fa97c] */
    MEM32(0x86658C) = eax; /* 0x0077D861: mov dword ptr [0x86658c], eax */
    eax = MEM32(0x7FA980); /* 0x0077D866: mov eax, dword ptr [0x7fa980] */
    MEM32(0x866590) = ecx; /* 0x0077D86B: mov dword ptr [0x866590], ecx */
    ecx = MEM32(0x7FA984); /* 0x0077D871: mov ecx, dword ptr [0x7fa984] */
    MEM32(0x866594) = edx; /* 0x0077D877: mov dword ptr [0x866594], edx */
    edx = MEM32(0x7FA988); /* 0x0077D87D: mov edx, dword ptr [0x7fa988] */
    MEM32(0x866598) = eax; /* 0x0077D883: mov dword ptr [0x866598], eax */
    eax = MEM32(0x7FA98C); /* 0x0077D888: mov eax, dword ptr [0x7fa98c] */
    MEM32(0x86659C) = ecx; /* 0x0077D88D: mov dword ptr [0x86659c], ecx */
    ecx = MEM32(0x7FA990); /* 0x0077D893: mov ecx, dword ptr [0x7fa990] */
    MEM32(0x8665A0) = edx; /* 0x0077D899: mov dword ptr [0x8665a0], edx */
    edx = MEM32(0x7FA994); /* 0x0077D89F: mov edx, dword ptr [0x7fa994] */
    MEM32(0x8665A4) = eax; /* 0x0077D8A5: mov dword ptr [0x8665a4], eax */
    eax = MEM32(0x7FA998); /* 0x0077D8AA: mov eax, dword ptr [0x7fa998] */
    MEM32(0x8665A8) = ecx; /* 0x0077D8AF: mov dword ptr [0x8665a8], ecx */
    ecx = MEM32(0x7FA978); /* 0x0077D8B5: mov ecx, dword ptr [0x7fa978] */
    MEM32(0x8665AC) = edx; /* 0x0077D8BB: mov dword ptr [0x8665ac], edx */
    MEM32(0x8665B0) = eax; /* 0x0077D8C1: mov dword ptr [0x8665b0], eax */
    MEM32(0x8665B4) = ecx; /* 0x0077D8C6: mov dword ptr [0x8665b4], ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077D8CC: ret  */

}

void sub_0077D8D0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077D8D0u);

L_0077D8D0:
    PUSH32(esp, 0x00782090u); /* 0x0077D8D0: push 0x782090 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077D8D5: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077D8DA: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077D8DB: ret  */

}

void sub_0077D8E0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077D8E0u);

L_0077D8E0:
    PUSH32(esp, 0x0078C13Cu); /* 0x0077D8E0: push 0x78c13c */
    RECOMP_CALL(sub_0043DB50); /* 0x0077D8E5: call 0x43db50 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0077D8EA: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(0x865598) = eax; /* 0x0077D8ED: mov dword ptr [0x865598], eax */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077D8F2: ret  */

}

void sub_0077D900(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077D900u);

L_0077D900:
    ecx = 0x0086519Cu; /* 0x0077D900: mov ecx, 0x86519c */
    RECOMP_CALL(sub_00598750); /* 0x0077D905: call 0x598750 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00782200u); /* 0x0077D90A: push 0x782200 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077D90F: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077D914: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077D915: ret  */

}

void sub_0077D920(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077D920u);

L_0077D920:
    ecx = 0x0086555Cu; /* 0x0077D920: mov ecx, 0x86555c */
    RECOMP_CALL(sub_00598750); /* 0x0077D925: call 0x598750 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00782220u); /* 0x0077D92A: push 0x782220 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077D92F: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077D934: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077D935: ret  */

}

void sub_0077D940(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077D940u);

L_0077D940:
    ecx = 0x00865564u; /* 0x0077D940: mov ecx, 0x865564 */
    RECOMP_CALL(sub_0057AFA0); /* 0x0077D945: call 0x57afa0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00782230u); /* 0x0077D94A: push 0x782230 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077D94F: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077D954: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077D955: ret  */

}

void sub_0077D960(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077D960u);

L_0077D960:
    PUSH32(esp, 0x00579350u); /* 0x0077D960: push 0x579350 */
    PUSH32(esp, 0x00579340u); /* 0x0077D965: push 0x579340 */
    PUSH32(esp, 0x00039100u); /* 0x0077D96A: push 0x39100 */
    ecx = 0x0086596Cu; /* 0x0077D96F: mov ecx, 0x86596c */
    RECOMP_CALL(sub_0043C0B0); /* 0x0077D974: call 0x43c0b0 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077D979: ret  */

}

void sub_0077D980(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077D980u);

L_0077D980:
    PUSH32(esp, 0x00579350u); /* 0x0077D980: push 0x579350 */
    PUSH32(esp, 0x00579340u); /* 0x0077D985: push 0x579340 */
    PUSH32(esp, 0x00039101u); /* 0x0077D98A: push 0x39101 */
    ecx = 0x008653A0u; /* 0x0077D98F: mov ecx, 0x8653a0 */
    RECOMP_CALL(sub_0043C0B0); /* 0x0077D994: call 0x43c0b0 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077D999: ret  */

}

void sub_0077D9A0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077D9A0u);

L_0077D9A0:
    PUSH32(esp, 0x00579350u); /* 0x0077D9A0: push 0x579350 */
    PUSH32(esp, 0x00579340u); /* 0x0077D9A5: push 0x579340 */
    PUSH32(esp, 0x00039102u); /* 0x0077D9AA: push 0x39102 */
    ecx = 0x00865470u; /* 0x0077D9AF: mov ecx, 0x865470 */
    RECOMP_CALL(sub_0043C0B0); /* 0x0077D9B4: call 0x43c0b0 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077D9B9: ret  */

}

void sub_0077D9C0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077D9C0u);

L_0077D9C0:
    PUSH32(esp, 0x0057C320u); /* 0x0077D9C0: push 0x57c320 */
    PUSH32(esp, 0x0057C240u); /* 0x0077D9C5: push 0x57c240 */
    PUSH32(esp, 2); /* 0x0077D9CA: push 2 */
    PUSH32(esp, 0x1C8u); /* 0x0077D9CC: push 0x1c8 */
    PUSH32(esp, 0x008655A0u); /* 0x0077D9D1: push 0x8655a0 */
    RECOMP_CALL(sub_0075C461); /* 0x0077D9D6: call 0x75c461 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00782290u); /* 0x0077D9DB: push 0x782290 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077D9E0: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077D9E5: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077D9E6: ret  */

}

void sub_0077D9F0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077D9F0u);

L_0077D9F0:
    PUSH32(esp, 0x007820A0u); /* 0x0077D9F0: push 0x7820a0 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077D9F5: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077D9FA: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077D9FB: ret  */

}

void sub_0077DA00(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077DA00u);

L_0077DA00:
    PUSH32(esp, 0x007820B0u); /* 0x0077DA00: push 0x7820b0 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077DA05: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077DA0A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077DA0B: ret  */

}

void sub_0077DA10(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077DA10u);

L_0077DA10:
    PUSH32(esp, 0x007820C0u); /* 0x0077DA10: push 0x7820c0 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077DA15: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077DA1A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077DA1B: ret  */

}

void sub_0077DA20(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077DA20u);

L_0077DA20:
    PUSH32(esp, 0x007820D0u); /* 0x0077DA20: push 0x7820d0 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077DA25: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077DA2A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077DA2B: ret  */

}

void sub_0077DA30(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077DA30u);

L_0077DA30:
    PUSH32(esp, 0x007820E0u); /* 0x0077DA30: push 0x7820e0 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077DA35: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077DA3A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077DA3B: ret  */

}

void sub_0077DA40(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077DA40u);

L_0077DA40:
    PUSH32(esp, 0x007820F0u); /* 0x0077DA40: push 0x7820f0 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077DA45: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077DA4A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077DA4B: ret  */

}

void sub_0077DA50(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077DA50u);

L_0077DA50:
    PUSH32(esp, 0x00782100u); /* 0x0077DA50: push 0x782100 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077DA55: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077DA5A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077DA5B: ret  */

}

void sub_0077DA60(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077DA60u);

L_0077DA60:
    PUSH32(esp, 0x00782110u); /* 0x0077DA60: push 0x782110 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077DA65: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077DA6A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077DA6B: ret  */

}

void sub_0077DA70(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077DA70u);

L_0077DA70:
    PUSH32(esp, 0x00782120u); /* 0x0077DA70: push 0x782120 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077DA75: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077DA7A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077DA7B: ret  */

}

void sub_0077DA80(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077DA80u);

L_0077DA80:
    PUSH32(esp, 0x00782130u); /* 0x0077DA80: push 0x782130 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077DA85: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077DA8A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077DA8B: ret  */

}

void sub_0077DA90(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077DA90u);

L_0077DA90:
    PUSH32(esp, 0x00782140u); /* 0x0077DA90: push 0x782140 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077DA95: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077DA9A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077DA9B: ret  */

}

void sub_0077DAA0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077DAA0u);

L_0077DAA0:
    PUSH32(esp, 0x00782150u); /* 0x0077DAA0: push 0x782150 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077DAA5: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077DAAA: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077DAAB: ret  */

}

void sub_0077DAB0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077DAB0u);

L_0077DAB0:
    PUSH32(esp, 0x00782160u); /* 0x0077DAB0: push 0x782160 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077DAB5: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077DABA: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077DABB: ret  */

}

void sub_0077DAC0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077DAC0u);

L_0077DAC0:
    PUSH32(esp, 0x00782170u); /* 0x0077DAC0: push 0x782170 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077DAC5: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077DACA: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077DACB: ret  */

}

void sub_0077DAD0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077DAD0u);

L_0077DAD0:
    PUSH32(esp, 0x00782180u); /* 0x0077DAD0: push 0x782180 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077DAD5: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077DADA: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077DADB: ret  */

}

void sub_0077DAE0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077DAE0u);

L_0077DAE0:
    PUSH32(esp, edi); /* 0x0077DAE0: push edi */
    ecx = 0x18u; /* 0x0077DAE1: mov ecx, 0x18 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0077DAE6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = 0x008651B0u; /* 0x0077DAE8: mov edi, 0x8651b0 */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x0077DAED: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    edi = POP32_VAL(esp); /* 0x0077DAEF: pop edi */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077DAF0: ret  */

}

void sub_0077DB00(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077DB00u);

L_0077DB00:
    PUSH32(esp, 0x004022C0u); /* 0x0077DB00: push 0x4022c0 */
    PUSH32(esp, 0x00572340u); /* 0x0077DB05: push 0x572340 */
    PUSH32(esp, 4); /* 0x0077DB0A: push 4 */
    PUSH32(esp, 0x30u); /* 0x0077DB0C: push 0x30 */
    PUSH32(esp, 0x008653B0u); /* 0x0077DB0E: push 0x8653b0 */
    RECOMP_CALL(sub_0075C461); /* 0x0077DB13: call 0x75c461 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00782190u); /* 0x0077DB18: push 0x782190 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077DB1D: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077DB22: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077DB23: ret  */

}

void sub_0077DB30(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077DB30u);

L_0077DB30:
    PUSH32(esp, 0x004022C0u); /* 0x0077DB30: push 0x4022c0 */
    PUSH32(esp, 0x005796D0u); /* 0x0077DB35: push 0x5796d0 */
    PUSH32(esp, 2); /* 0x0077DB3A: push 2 */
    PUSH32(esp, 0x20u); /* 0x0077DB3C: push 0x20 */
    PUSH32(esp, 0x00865360u); /* 0x0077DB3E: push 0x865360 */
    RECOMP_CALL(sub_0075C461); /* 0x0077DB43: call 0x75c461 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007821B0u); /* 0x0077DB48: push 0x7821b0 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077DB4D: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077DB52: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077DB53: ret  */

}

void sub_0077DB60(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077DB60u);

L_0077DB60:
    ecx = 0x00865220u; /* 0x0077DB60: mov ecx, 0x865220 */
    RECOMP_CALL(sub_00598750); /* 0x0077DB65: call 0x598750 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00782240u); /* 0x0077DB6A: push 0x782240 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077DB6F: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077DB74: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077DB75: ret  */

}

void sub_0077DB80(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077DB80u);

L_0077DB80:
    ecx = 0x00865550u; /* 0x0077DB80: mov ecx, 0x865550 */
    RECOMP_CALL(sub_00598750); /* 0x0077DB85: call 0x598750 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00782250u); /* 0x0077DB8A: push 0x782250 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077DB8F: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077DB94: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077DB95: ret  */

}

void sub_0077DBA0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077DBA0u);

L_0077DBA0:
    ecx = 0x00865218u; /* 0x0077DBA0: mov ecx, 0x865218 */
    RECOMP_CALL(sub_00598750); /* 0x0077DBA5: call 0x598750 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007822B0u); /* 0x0077DBAA: push 0x7822b0 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077DBAF: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077DBB4: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077DBB5: ret  */

}

void sub_0077DBC0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077DBC0u);

L_0077DBC0:
    ecx = 0x00866584u; /* 0x0077DBC0: mov ecx, 0x866584 */
    RECOMP_CALL(sub_00598750); /* 0x0077DBC5: call 0x598750 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00782210u); /* 0x0077DBCA: push 0x782210 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077DBCF: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077DBD4: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077DBD5: ret  */

}

void sub_0077DBE0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077DBE0u);

L_0077DBE0:
    ecx = 0x008652F0u; /* 0x0077DBE0: mov ecx, 0x8652f0 */
    RECOMP_CALL(sub_00598750); /* 0x0077DBE5: call 0x598750 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00782260u); /* 0x0077DBEA: push 0x782260 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077DBEF: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077DBF4: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077DBF5: ret  */

}

void sub_0077DC00(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077DC00u);

L_0077DC00:
    ecx = 0x00865190u; /* 0x0077DC00: mov ecx, 0x865190 */
    RECOMP_CALL(sub_00598750); /* 0x0077DC05: call 0x598750 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00782270u); /* 0x0077DC0A: push 0x782270 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077DC0F: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077DC14: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077DC15: ret  */

}

void sub_0077DC20(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077DC20u);

L_0077DC20:
    eax = MEM32(0x79DD48); /* 0x0077DC20: mov eax, dword ptr [0x79dd48] */
    ecx = MEM32(0x79DD4C); /* 0x0077DC25: mov ecx, dword ptr [0x79dd4c] */
    edx = MEM32(0x79DD50); /* 0x0077DC2B: mov edx, dword ptr [0x79dd50] */
    MEM32(0x7FB8A0) = eax; /* 0x0077DC31: mov dword ptr [0x7fb8a0], eax */
    eax = 3; /* 0x0077DC36: mov eax, 3 */
    MEM32(0x7FB8A4) = eax; /* 0x0077DC3B: mov dword ptr [0x7fb8a4], eax */
    MEM32(0x7FB8B0) = eax; /* 0x0077DC40: mov dword ptr [0x7fb8b0], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0077DC45: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x7FB8A8) = 0x008A3B24u; /* 0x0077DC47: mov dword ptr [0x7fb8a8], 0x8a3b24 */
    MEM32(0x7FB8AC) = ecx; /* 0x0077DC51: mov dword ptr [0x7fb8ac], ecx */
    MEM32(0x7FB8B4) = 0x008A3B38u; /* 0x0077DC57: mov dword ptr [0x7fb8b4], 0x8a3b38 */
    MEM32(0x7FB8B8) = edx; /* 0x0077DC61: mov dword ptr [0x7fb8b8], edx */
    MEM32(0x7FB8BC) = 6; /* 0x0077DC67: mov dword ptr [0x7fb8bc], 6 */
    MEM32(0x7FB8C0) = 0x007FB624u; /* 0x0077DC71: mov dword ptr [0x7fb8c0], 0x7fb624 */
    MEM32(0x7FB8C4) = eax; /* 0x0077DC7B: mov dword ptr [0x7fb8c4], eax */
    MEM32(0x7FB8C8) = 7; /* 0x0077DC80: mov dword ptr [0x7fb8c8], 7 */
    MEM32(0x7FB8CC) = eax; /* 0x0077DC8A: mov dword ptr [0x7fb8cc], eax */
    MEM32(0x7FB8D0) = eax; /* 0x0077DC8F: mov dword ptr [0x7fb8d0], eax */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077DC94: ret  */

}

void sub_0077DCA0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077DCA0u);

L_0077DCA0:
    ecx = 0x00865930u; /* 0x0077DCA0: mov ecx, 0x865930 */
    RECOMP_CALL(sub_00575770); /* 0x0077DCA5: call 0x575770 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007821D0u); /* 0x0077DCAA: push 0x7821d0 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077DCAF: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077DCB4: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077DCB5: ret  */

}

void sub_0077DCC0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077DCC0u);

L_0077DCC0:
    fp_push((double)(int32_t)MEM32(0x7FB70C)); /* 0x0077DCC0: fild dword ptr [0x7fb70c] */
    _st[0] *= (double)*(float*)ADDR(0x786460); /* 0x0077DCC6: fmul dword ptr [0x786460] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x865198) = _v; } /* 0x0077DCCC: fstp dword ptr [0x865198] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077DCD2: ret  */

}

void sub_0077DCE0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077DCE0u);

L_0077DCE0:
    eax = MEM32(0x7FB710); /* 0x0077DCE0: mov eax, dword ptr [0x7fb710] */
    MEM32(0x865558) = eax; /* 0x0077DCE5: mov dword ptr [0x865558], eax */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077DCEA: ret  */

}

void sub_0077DCF0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077DCF0u);

L_0077DCF0:
    ecx = 0x008652F8u; /* 0x0077DCF0: mov ecx, 0x8652f8 */
    RECOMP_CALL(sub_00577430); /* 0x0077DCF5: call 0x577430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007821E0u); /* 0x0077DCFA: push 0x7821e0 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077DCFF: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077DD04: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077DD05: ret  */

}

void sub_0077DD10(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077DD10u);

L_0077DD10:
    eax = 0x008698DCu; /* 0x0077DD10: mov eax, 0x8698dc */

L_0077DD15:
    MEM8(eax) = (uint8_t)(0); /* 0x0077DD15: mov byte ptr [eax], 0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x10u; /* 0x0077DD18: add eax, 0x10 */
    _flag_k = FK_ADD;
    /* cmp eax, 0x0086993Cu */ /* 0x0077DD1B: cmp eax, 0x86993c */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x0086993Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_0077DD15; /* 0x0077DD20: jl 0x77dd15 */

L_0077DD22:
    PUSH32(esp, 0x007822C0u); /* 0x0077DD22: push 0x7822c0 */
    MEM8(0x86993C) = (uint8_t)(0); /* 0x0077DD27: mov byte ptr [0x86993c], 0 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077DD2E: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077DD33: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077DD34: ret  */

}

void sub_0077DD40(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077DD40u);

L_0077DD40:
    eax = MEM32(0x7FBDFC); /* 0x0077DD40: mov eax, dword ptr [0x7fbdfc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x0077DD45: inc eax */
    _flag_k = FK_INC;
    MEM16(0x869674) = (uint16_t)(LO16(eax)); /* 0x0077DD46: mov word ptr [0x869674], ax */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077DD4C: ret  */

}

void sub_0077DD50(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077DD50u);

L_0077DD50:
    PUSH32(esp, 0x007822E0u); /* 0x0077DD50: push 0x7822e0 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077DD55: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077DD5A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077DD5B: ret  */

}

void sub_0077DD60(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077DD60u);

L_0077DD60:
    PUSH32(esp, 0x007822F0u); /* 0x0077DD60: push 0x7822f0 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077DD65: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077DD6A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077DD6B: ret  */

}

void sub_0077DD70(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077DD70u);

L_0077DD70:
    eax = 0x008691E0u; /* 0x0077DD70: mov eax, 0x8691e0 */
    ecx = 5; /* 0x0077DD75: mov ecx, 5 */
    ebx = ebx; /* 0x0077DD7A: lea ebx, [ebx] */

L_0077DD80:
    MEM32(eax) = 0; /* 0x0077DD80: mov dword ptr [eax], 0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x14u; /* 0x0077DD86: add eax, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x0077DD89: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_0077DD80; /* 0x0077DD8A: jne 0x77dd80 */

L_0077DD8C:
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077DD8C: ret  */

}

void sub_0077DD90(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077DD90u);

L_0077DD90:
    PUSH32(esp, 0x00782300u); /* 0x0077DD90: push 0x782300 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077DD95: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077DD9A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077DD9B: ret  */

}

void sub_0077DDA0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077DDA0u);

L_0077DDA0:
    PUSH32(esp, 0x00782310u); /* 0x0077DDA0: push 0x782310 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077DDA5: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077DDAA: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077DDAB: ret  */

}

void sub_0077DDB0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077DDB0u);

L_0077DDB0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0077DDB0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x869074) = eax; /* 0x0077DDB2: mov dword ptr [0x869074], eax */
    MEM32(0x869078) = eax; /* 0x0077DDB7: mov dword ptr [0x869078], eax */
    MEM32(0x86907C) = eax; /* 0x0077DDBC: mov dword ptr [0x86907c], eax */
    MEM32(0x869080) = eax; /* 0x0077DDC1: mov dword ptr [0x869080], eax */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077DDC6: ret  */

}

void sub_0077DDD0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077DDD0u);

L_0077DDD0:
    PUSH32(esp, 0x00783FE5u); /* 0x0077DDD0: push 0x783fe5 */
    PUSH32(esp, 0x00869088u); /* 0x0077DDD5: push 0x869088 */
    RECOMP_CALL(sub_0043DBD0); /* 0x0077DDDA: call 0x43dbd0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00782320u); /* 0x0077DDDF: push 0x782320 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077DDE4: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0077DDE9: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077DDEC: ret  */

}

void sub_0077DDF0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077DDF0u);

L_0077DDF0:
    PUSH32(esp, 0x00782330u); /* 0x0077DDF0: push 0x782330 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077DDF5: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077DDFA: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077DDFB: ret  */

}

void sub_0077DE00(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077DE00u);

L_0077DE00:
    eax = 0x00866C20u; /* 0x0077DE00: mov eax, 0x866c20 */
    edx = 0x12u; /* 0x0077DE05: mov edx, 0x12 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x0077DE0A: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    esp = esp; /* 0x0077DE0C: lea esp, [esp] */

L_0077DE10:
    MEM8(eax + (-0x1F8)) = (uint8_t)(LO8(ecx)); /* 0x0077DE10: mov byte ptr [eax - 0x1f8], cl */
    MEM32(eax + (-0x4)) = ecx; /* 0x0077DE16: mov dword ptr [eax - 4], ecx */
    MEM32(eax) = ecx; /* 0x0077DE19: mov dword ptr [eax], ecx */
    MEM32(eax + 0x4) = ecx; /* 0x0077DE1B: mov dword ptr [eax + 4], ecx */
    MEM32(eax + 0x8) = ecx; /* 0x0077DE1E: mov dword ptr [eax + 8], ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x204u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x204u; /* 0x0077DE21: add eax, 0x204 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x0077DE26: dec edx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_0077DE10; /* 0x0077DE27: jne 0x77de10 */

L_0077DE29:
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077DE29: ret  */

}

void sub_0077DE30(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077DE30u);

L_0077DE30:
    PUSH32(esp, 0x004022C0u); /* 0x0077DE30: push 0x4022c0 */
    PUSH32(esp, 0x00588130u); /* 0x0077DE35: push 0x588130 */
    PUSH32(esp, 5); /* 0x0077DE3A: push 5 */
    PUSH32(esp, 0x20u); /* 0x0077DE3C: push 0x20 */
    PUSH32(esp, 0x008693C8u); /* 0x0077DE3E: push 0x8693c8 */
    RECOMP_CALL(sub_0075C461); /* 0x0077DE43: call 0x75c461 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00782340u); /* 0x0077DE48: push 0x782340 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077DE4D: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077DE52: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077DE53: ret  */

}

void sub_0077DE60(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077DE60u);

L_0077DE60:
    fp_push(*(float*)&MEM32(0x784250)); /* 0x0077DE60: fld dword ptr [0x784250] */
    _st[0] /= (double)*(float*)ADDR(0x7A17BC); /* 0x0077DE66: fdiv dword ptr [0x7a17bc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x86B4BC) = _v; } /* 0x0077DE6C: fstp dword ptr [0x86b4bc] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077DE72: ret  */

}

void sub_0077DE80(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077DE80u);

L_0077DE80:
    PUSH32(esp, 4); /* 0x0077DE80: push 4 */
    PUSH32(esp, 0x007FC880u); /* 0x0077DE82: push 0x7fc880 */
    ecx = 0x0086B3C0u; /* 0x0077DE87: mov ecx, 0x86b3c0 */
    RECOMP_CALL(sub_00576770); /* 0x0077DE8C: call 0x576770 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077DE91: ret  */

}

void sub_0077DEA0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077DEA0u);

L_0077DEA0:
    PUSH32(esp, 4); /* 0x0077DEA0: push 4 */
    PUSH32(esp, 0x007FC8A0u); /* 0x0077DEA2: push 0x7fc8a0 */
    ecx = 0x0086B590u; /* 0x0077DEA7: mov ecx, 0x86b590 */
    RECOMP_CALL(sub_00576770); /* 0x0077DEAC: call 0x576770 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077DEB1: ret  */

}

void sub_0077DEC0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077DEC0u);

L_0077DEC0:
    ecx = 0x0086B4C8u; /* 0x0077DEC0: mov ecx, 0x86b4c8 */
    RECOMP_CALL(sub_00598750); /* 0x0077DEC5: call 0x598750 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007823E0u); /* 0x0077DECA: push 0x7823e0 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077DECF: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077DED4: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077DED5: ret  */

}

void sub_0077DEE0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077DEE0u);

L_0077DEE0:
    ecx = 0x0086B490u; /* 0x0077DEE0: mov ecx, 0x86b490 */
    RECOMP_CALL(sub_00598750); /* 0x0077DEE5: call 0x598750 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007823F0u); /* 0x0077DEEA: push 0x7823f0 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077DEEF: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077DEF4: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077DEF5: ret  */

}

void sub_0077DF00(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077DF00u);

L_0077DF00:
    ecx = 0x0086B5A0u; /* 0x0077DF00: mov ecx, 0x86b5a0 */
    RECOMP_CALL(sub_0057BCD0); /* 0x0077DF05: call 0x57bcd0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00782410u); /* 0x0077DF0A: push 0x782410 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077DF0F: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077DF14: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077DF15: ret  */

}

void sub_0077DF20(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077DF20u);

L_0077DF20:
    ecx = 0x0086B598u; /* 0x0077DF20: mov ecx, 0x86b598 */
    RECOMP_CALL(sub_00598750); /* 0x0077DF25: call 0x598750 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00782400u); /* 0x0077DF2A: push 0x782400 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077DF2F: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077DF34: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077DF35: ret  */

}

void sub_0077DF40(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077DF40u);

L_0077DF40:
    PUSH32(esp, 3); /* 0x0077DF40: push 3 */
    PUSH32(esp, 0x007FC8C8u); /* 0x0077DF42: push 0x7fc8c8 */
    ecx = 0x0086B578u; /* 0x0077DF47: mov ecx, 0x86b578 */
    RECOMP_CALL(sub_00576770); /* 0x0077DF4C: call 0x576770 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077DF51: ret  */

}

void sub_0077DF60(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077DF60u);

L_0077DF60:
    PUSH32(esp, 3); /* 0x0077DF60: push 3 */
    PUSH32(esp, 0x007FC8E0u); /* 0x0077DF62: push 0x7fc8e0 */
    ecx = 0x0086B498u; /* 0x0077DF67: mov ecx, 0x86b498 */
    RECOMP_CALL(sub_00576770); /* 0x0077DF6C: call 0x576770 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077DF71: ret  */

}

void sub_0077DF80(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077DF80u);

L_0077DF80:
    MEM32(0x86B4A8) = 0x3DB2B8C2u; /* 0x0077DF80: mov dword ptr [0x86b4a8], 0x3db2b8c2 */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077DF8A: ret  */

}

void sub_0077DF90(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077DF90u);

L_0077DF90:
    PUSH32(esp, 3); /* 0x0077DF90: push 3 */
    PUSH32(esp, 0x007FC8F8u); /* 0x0077DF92: push 0x7fc8f8 */
    ecx = 0x0086B4A0u; /* 0x0077DF97: mov ecx, 0x86b4a0 */
    RECOMP_CALL(sub_00576770); /* 0x0077DF9C: call 0x576770 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077DFA1: ret  */

}

void sub_0077DFB0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077DFB0u);

L_0077DFB0:
    MEM32(0x86B5E8) = 0; /* 0x0077DFB0: mov dword ptr [0x86b5e8], 0 */
    MEM32(0x86B5EC) = 0; /* 0x0077DFBA: mov dword ptr [0x86b5ec], 0 */
    MEM32(0x86B5F0) = 0x3E860A92u; /* 0x0077DFC4: mov dword ptr [0x86b5f0], 0x3e860a92 */
    MEM32(0x86B5F4) = 0x3DCCCCCDu; /* 0x0077DFCE: mov dword ptr [0x86b5f4], 0x3dcccccd */
    MEM32(0x86B5F8) = 0x3F060A92u; /* 0x0077DFD8: mov dword ptr [0x86b5f8], 0x3f060a92 */
    MEM32(0x86B5FC) = 0x3EE66666u; /* 0x0077DFE2: mov dword ptr [0x86b5fc], 0x3ee66666 */
    MEM32(0x86B600) = 0x3F490FDBu; /* 0x0077DFEC: mov dword ptr [0x86b600], 0x3f490fdb */
    MEM32(0x86B604) = 0x3F59999Au; /* 0x0077DFF6: mov dword ptr [0x86b604], 0x3f59999a */
    MEM32(0x86B608) = 0x3F860A92u; /* 0x0077E000: mov dword ptr [0x86b608], 0x3f860a92 */
    MEM32(0x86B60C) = 0x3F733333u; /* 0x0077E00A: mov dword ptr [0x86b60c], 0x3f733333 */
    MEM32(0x86B610) = 0x3FC6D3F2u; /* 0x0077E014: mov dword ptr [0x86b610], 0x3fc6d3f2 */
    MEM32(0x86B614) = 0x3F933333u; /* 0x0077E01E: mov dword ptr [0x86b614], 0x3f933333 */
    MEM32(0x86B618) = 0x3FC90FDBu; /* 0x0077E028: mov dword ptr [0x86b618], 0x3fc90fdb */
    MEM32(0x86B61C) = 0x3F800000u; /* 0x0077E032: mov dword ptr [0x86b61c], 0x3f800000 */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077E03C: ret  */

}

void sub_0077E040(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077E040u);

L_0077E040:
    MEM32(0x86B5B0) = 0; /* 0x0077E040: mov dword ptr [0x86b5b0], 0 */
    MEM32(0x86B5B4) = 0; /* 0x0077E04A: mov dword ptr [0x86b5b4], 0 */
    MEM32(0x86B5B8) = 0x3E860A92u; /* 0x0077E054: mov dword ptr [0x86b5b8], 0x3e860a92 */
    MEM32(0x86B5BC) = 0x3DCCCCCDu; /* 0x0077E05E: mov dword ptr [0x86b5bc], 0x3dcccccd */
    MEM32(0x86B5C0) = 0x3F060A92u; /* 0x0077E068: mov dword ptr [0x86b5c0], 0x3f060a92 */
    MEM32(0x86B5C4) = 0x3EE66666u; /* 0x0077E072: mov dword ptr [0x86b5c4], 0x3ee66666 */
    MEM32(0x86B5C8) = 0x3F490FDBu; /* 0x0077E07C: mov dword ptr [0x86b5c8], 0x3f490fdb */
    MEM32(0x86B5CC) = 0x3F59999Au; /* 0x0077E086: mov dword ptr [0x86b5cc], 0x3f59999a */
    MEM32(0x86B5D0) = 0x3F860A92u; /* 0x0077E090: mov dword ptr [0x86b5d0], 0x3f860a92 */
    MEM32(0x86B5D4) = 0x3F733333u; /* 0x0077E09A: mov dword ptr [0x86b5d4], 0x3f733333 */
    MEM32(0x86B5D8) = 0x3FC6D3F2u; /* 0x0077E0A4: mov dword ptr [0x86b5d8], 0x3fc6d3f2 */
    MEM32(0x86B5DC) = 0x3F933333u; /* 0x0077E0AE: mov dword ptr [0x86b5dc], 0x3f933333 */
    MEM32(0x86B5E0) = 0x3FC90FDBu; /* 0x0077E0B8: mov dword ptr [0x86b5e0], 0x3fc90fdb */
    MEM32(0x86B5E4) = 0; /* 0x0077E0C2: mov dword ptr [0x86b5e4], 0 */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077E0CC: ret  */

}

void sub_0077E0D0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077E0D0u);

L_0077E0D0:
    MEM32(0x86B570) = 0x0086B5E8u; /* 0x0077E0D0: mov dword ptr [0x86b570], 0x86b5e8 */
    MEM32(0x86B574) = 7; /* 0x0077E0DA: mov dword ptr [0x86b574], 7 */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077E0E4: ret  */

}

void sub_0077E0F0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077E0F0u);

L_0077E0F0:
    MEM32(0x86B3C8) = 0x0086B5B0u; /* 0x0077E0F0: mov dword ptr [0x86b3c8], 0x86b5b0 */
    MEM32(0x86B3CC) = 7; /* 0x0077E0FA: mov dword ptr [0x86b3cc], 7 */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077E104: ret  */

}

void sub_0077E110(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077E110u);

L_0077E110:
    ecx = 0x0086B3D0u; /* 0x0077E110: mov ecx, 0x86b3d0 */
    RECOMP_ITAIL(0x005911C0u); RECOMP_RETURN(); /* 0x0077E115: jmp 0x5911c0 */

}

void sub_0077E120(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077E120u);

L_0077E120:
    MEM32(0x86B510) = 0x3E64C388u; /* 0x0077E120: mov dword ptr [0x86b510], 0x3e64c388 */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077E12A: ret  */

}

void sub_0077E130(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077E130u);

L_0077E130:
    eax = MEM32(0x86B510); /* 0x0077E130: mov eax, dword ptr [0x86b510] */
    MEM32(0x7FC95C) = eax; /* 0x0077E135: mov dword ptr [0x7fc95c], eax */
    fp_push(*(float*)&MEM32(0x7FC95C)); /* 0x0077E13A: fld dword ptr [0x7fc95c] */
    _st[0] = (double)*(float*)ADDR(0x7859D0) / _st[0]; /* 0x0077E140: fdivr dword ptr [0x7859d0] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x7FC960) = _v; } /* 0x0077E146: fstp dword ptr [0x7fc960] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077E14C: ret  */

}

void sub_0077E150(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077E150u);

L_0077E150:
    ecx = 0x0086B5A8u; /* 0x0077E150: mov ecx, 0x86b5a8 */
    RECOMP_CALL(sub_00598750); /* 0x0077E155: call 0x598750 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00782430u); /* 0x0077E15A: push 0x782430 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077E15F: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077E164: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077E165: ret  */

}

void sub_0077E170(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077E170u);

L_0077E170:
    ecx = 0x0086B4C0u; /* 0x0077E170: mov ecx, 0x86b4c0 */
    RECOMP_CALL(sub_00598750); /* 0x0077E175: call 0x598750 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00782420u); /* 0x0077E17A: push 0x782420 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077E17F: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077E184: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077E185: ret  */

}

void sub_0077E190(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077E190u);

L_0077E190:
    PUSH32(esp, 0x005A8BD0u); /* 0x0077E190: push 0x5a8bd0 */
    PUSH32(esp, 0x005B0E30u); /* 0x0077E195: push 0x5b0e30 */
    PUSH32(esp, 0x00034026u); /* 0x0077E19A: push 0x34026 */
    ecx = 0x0086B580u; /* 0x0077E19F: mov ecx, 0x86b580 */
    RECOMP_CALL(sub_0043C0B0); /* 0x0077E1A4: call 0x43c0b0 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077E1A9: ret  */

}

void sub_0077E1B0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077E1B0u);

L_0077E1B0:
    PUSH32(esp, 0x005A8BD0u); /* 0x0077E1B0: push 0x5a8bd0 */
    PUSH32(esp, 0x005B0E30u); /* 0x0077E1B5: push 0x5b0e30 */
    PUSH32(esp, 0x00034027u); /* 0x0077E1BA: push 0x34027 */
    ecx = 0x0086B4ACu; /* 0x0077E1BF: mov ecx, 0x86b4ac */
    RECOMP_CALL(sub_0043C0B0); /* 0x0077E1C4: call 0x43c0b0 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077E1C9: ret  */

}

void sub_0077E1D0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077E1D0u);

L_0077E1D0:
    fp_push(*(float*)&MEM32(0x784250)); /* 0x0077E1D0: fld dword ptr [0x784250] */
    _st[0] /= (double)*(float*)ADDR(0x7A2794); /* 0x0077E1D6: fdiv dword ptr [0x7a2794] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x872B40) = _v; } /* 0x0077E1DC: fstp dword ptr [0x872b40] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077E1E2: ret  */

}

void sub_0077E1F0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077E1F0u);

L_0077E1F0:
    PUSH32(esp, 0x005B8000u); /* 0x0077E1F0: push 0x5b8000 */
    PUSH32(esp, 0x005C1020u); /* 0x0077E1F5: push 0x5c1020 */
    PUSH32(esp, 6); /* 0x0077E1FA: push 6 */
    PUSH32(esp, 0x370u); /* 0x0077E1FC: push 0x370 */
    PUSH32(esp, 0x00874C40u); /* 0x0077E201: push 0x874c40 */
    RECOMP_CALL(sub_0075C461); /* 0x0077E206: call 0x75c461 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00782470u); /* 0x0077E20B: push 0x782470 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077E210: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077E215: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077E216: ret  */

}

void sub_0077E220(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077E220u);

L_0077E220:
    ecx = 0x00872B4Cu; /* 0x0077E220: mov ecx, 0x872b4c */
    RECOMP_CALL(sub_00598750); /* 0x0077E225: call 0x598750 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007824A0u); /* 0x0077E22A: push 0x7824a0 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077E22F: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077E234: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077E235: ret  */

}

void sub_0077E240(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077E240u);

L_0077E240:
    ecx = 0x008763B0u; /* 0x0077E240: mov ecx, 0x8763b0 */
    RECOMP_CALL(sub_0057BCD0); /* 0x0077E245: call 0x57bcd0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007824B0u); /* 0x0077E24A: push 0x7824b0 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077E24F: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077E254: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077E255: ret  */

}

void sub_0077E260(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077E260u);

L_0077E260:
    ecx = 0x00872C00u; /* 0x0077E260: mov ecx, 0x872c00 */
    RECOMP_ITAIL(0x0044F5A0u); RECOMP_RETURN(); /* 0x0077E265: jmp 0x44f5a0 */

}

void sub_0077E270(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077E270u);

L_0077E270:
    ecx = 0x008760E0u; /* 0x0077E270: mov ecx, 0x8760e0 */
    RECOMP_ITAIL(0x0044F5A0u); RECOMP_RETURN(); /* 0x0077E275: jmp 0x44f5a0 */

}

void sub_0077E280(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077E280u);

L_0077E280:
    ecx = 0x00872F20u; /* 0x0077E280: mov ecx, 0x872f20 */
    RECOMP_ITAIL(0x0044F5A0u); RECOMP_RETURN(); /* 0x0077E285: jmp 0x44f5a0 */

}

void sub_0077E290(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077E290u);

L_0077E290:
    ecx = 0x008718C0u; /* 0x0077E290: mov ecx, 0x8718c0 */
    RECOMP_ITAIL(0x0044F5A0u); RECOMP_RETURN(); /* 0x0077E295: jmp 0x44f5a0 */

}

void sub_0077E2A0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077E2A0u);

L_0077E2A0:
    ecx = 0x00870A20u; /* 0x0077E2A0: mov ecx, 0x870a20 */
    RECOMP_ITAIL(0x0044F5A0u); RECOMP_RETURN(); /* 0x0077E2A5: jmp 0x44f5a0 */

}

void sub_0077E2B0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077E2B0u);

L_0077E2B0:
    PUSH32(esp, esi); /* 0x0077E2B0: push esi */
    PUSH32(esp, edi); /* 0x0077E2B1: push edi */
    esi = 0x00871BE0u; /* 0x0077E2B2: mov esi, 0x871be0 */
    edi = 6; /* 0x0077E2B7: mov edi, 6 */
    esp = esp; /* 0x0077E2BC: lea esp, [esp] */

L_0077E2C0:
    ecx = esi; /* 0x0077E2C0: mov ecx, esi */
    RECOMP_CALL(sub_0044F5A0); /* 0x0077E2C2: call 0x44f5a0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x290u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x290u; /* 0x0077E2C7: add esi, 0x290 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x0077E2CD: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_0077E2C0; /* 0x0077E2CE: jne 0x77e2c0 */

L_0077E2D0:
    edi = POP32_VAL(esp); /* 0x0077E2D0: pop edi */
    esi = POP32_VAL(esp); /* 0x0077E2D1: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077E2D2: ret  */

}

void sub_0077E2E0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077E2E0u);

L_0077E2E0:
    MEM16(0x871B90) = (uint16_t)(0x4000u); /* 0x0077E2E0: mov word ptr [0x871b90], 0x4000 */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077E2E9: ret  */

}

void sub_0077E2F0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077E2F0u);

L_0077E2F0:
    fp_push(*(float*)&MEM32(0x784250)); /* 0x0077E2F0: fld dword ptr [0x784250] */
    _st[0] /= (double)*(float*)ADDR(0x7A27C8); /* 0x0077E2F6: fdiv dword ptr [0x7a27c8] */
    fp_push(*(float*)&MEM32(0x784560)); /* 0x0077E2FC: fld dword ptr [0x784560] */
    _st[0] *= _st[1]; /* 0x0077E302: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x876540) = _v; } /* 0x0077E304: fstp dword ptr [0x876540] */
    fp_push(*(float*)&MEM32(0x7A2380)); /* 0x0077E30A: fld dword ptr [0x7a2380] */
    _st[0] *= _st[1]; /* 0x0077E310: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x876544) = _v; } /* 0x0077E312: fstp dword ptr [0x876544] */
    fp_push(*(float*)&MEM32(0x78821C)); /* 0x0077E318: fld dword ptr [0x78821c] */
    _st[0] *= _st[1]; /* 0x0077E31E: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x876548) = _v; } /* 0x0077E320: fstp dword ptr [0x876548] */
    fp_push(*(float*)&MEM32(0x7881FC)); /* 0x0077E326: fld dword ptr [0x7881fc] */
    _st[0] *= _st[1]; /* 0x0077E32C: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x87654C) = _v; } /* 0x0077E32E: fstp dword ptr [0x87654c] */
    fp_push(*(float*)&MEM32(0x7A45F0)); /* 0x0077E334: fld dword ptr [0x7a45f0] */
    _st[0] *= _st[1]; /* 0x0077E33A: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x876550) = _v; } /* 0x0077E33C: fstp dword ptr [0x876550] */
    fp_push(*(float*)&MEM32(0x787AF4)); /* 0x0077E342: fld dword ptr [0x787af4] */
    _st[0] *= _st[1]; /* 0x0077E348: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x876554) = _v; } /* 0x0077E34A: fstp dword ptr [0x876554] */
    fp_push(*(float*)&MEM32(0x79C684)); /* 0x0077E350: fld dword ptr [0x79c684] */
    _st[0] *= _st[1]; /* 0x0077E356: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x876558) = _v; } /* 0x0077E358: fstp dword ptr [0x876558] */
    fp_push(*(float*)&MEM32(0x7A45EC)); /* 0x0077E35E: fld dword ptr [0x7a45ec] */
    _st[0] *= _st[1]; /* 0x0077E364: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x87655C) = _v; } /* 0x0077E366: fstp dword ptr [0x87655c] */
    fp_push(*(float*)&MEM32(0x78F9DC)); /* 0x0077E36C: fld dword ptr [0x78f9dc] */
    _st[0] *= _st[1]; /* 0x0077E372: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x876560) = _v; } /* 0x0077E374: fstp dword ptr [0x876560] */
    fp_push(*(float*)&MEM32(0x7A45E8)); /* 0x0077E37A: fld dword ptr [0x7a45e8] */
    _st[0] *= _st[1]; /* 0x0077E380: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x876564) = _v; } /* 0x0077E382: fstp dword ptr [0x876564] */
    fp_push(*(float*)&MEM32(0x7850D8)); /* 0x0077E388: fld dword ptr [0x7850d8] */
    _st[0] *= _st[1]; /* 0x0077E38E: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x876568) = _v; } /* 0x0077E390: fstp dword ptr [0x876568] */
    fp_push(*(float*)&MEM32(0x7A45E4)); /* 0x0077E396: fld dword ptr [0x7a45e4] */
    _st[0] *= _st[1]; /* 0x0077E39C: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x87656C) = _v; } /* 0x0077E39E: fstp dword ptr [0x87656c] */
    fp_push(*(float*)&MEM32(0x7881F8)); /* 0x0077E3A4: fld dword ptr [0x7881f8] */
    _st[0] *= _st[1]; /* 0x0077E3AA: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x876570) = _v; } /* 0x0077E3AC: fstp dword ptr [0x876570] */
    fp_push(*(float*)&MEM32(0x7844E0)); /* 0x0077E3B2: fld dword ptr [0x7844e0] */
    _st[0] *= _st[1]; /* 0x0077E3B8: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x876574) = _v; } /* 0x0077E3BA: fstp dword ptr [0x876574] */
    fp_push(*(float*)&MEM32(0x7881F0)); /* 0x0077E3C0: fld dword ptr [0x7881f0] */
    _st[0] *= _st[1]; /* 0x0077E3C6: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x876578) = _v; } /* 0x0077E3C8: fstp dword ptr [0x876578] */
    fp_push(*(float*)&MEM32(0x78B018)); /* 0x0077E3CE: fld dword ptr [0x78b018] */
    _st[0] *= _st[1]; /* 0x0077E3D4: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x87657C) = _v; } /* 0x0077E3D6: fstp dword ptr [0x87657c] */
    fp_push(*(float*)&MEM32(0x7843E8)); /* 0x0077E3DC: fld dword ptr [0x7843e8] */
    _st[0] *= _st[1]; /* 0x0077E3E2: fmul st(1) */
    { float _v = (float)_st[0]; *(float*)ADDR(0x876580) = _v; } /* 0x0077E3E4: fst dword ptr [0x876580] */
    fp_push(_st[1]); /* 0x0077E3EA: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(0x7859D0); /* 0x0077E3EC: fmul dword ptr [0x7859d0] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x876584) = _v; } /* 0x0077E3F2: fstp dword ptr [0x876584] */
    fp_push(_st[1]); /* 0x0077E3F8: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(0x788220); /* 0x0077E3FA: fmul dword ptr [0x788220] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x876588) = _v; } /* 0x0077E400: fstp dword ptr [0x876588] */
    fp_push(_st[1]); /* 0x0077E406: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(0x7881F4); /* 0x0077E408: fmul dword ptr [0x7881f4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x87658C) = _v; } /* 0x0077E40E: fstp dword ptr [0x87658c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x876590) = _v; } /* 0x0077E414: fstp dword ptr [0x876590] */
    fp_push(*(float*)&MEM32(0x7844F8)); /* 0x0077E41A: fld dword ptr [0x7844f8] */
    _st[0] *= _st[1]; /* 0x0077E420: fmul st(1) */
    { float _v = (float)_st[0]; *(float*)ADDR(0x876594) = _v; } /* 0x0077E422: fst dword ptr [0x876594] */
    fp_push(_st[1]); /* 0x0077E428: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(0x787ADC); /* 0x0077E42A: fmul dword ptr [0x787adc] */
    { float _v = (float)_st[0]; *(float*)ADDR(0x876598) = _v; } /* 0x0077E430: fst dword ptr [0x876598] */
    fp_push(_st[2]); /* 0x0077E436: fld st(2) */
    _st[0] += _st[0]; /* 0x0077E438: fadd st(0), st(0) */
    { float _v = (float)_st[0]; *(float*)ADDR(0x87659C) = _v; } /* 0x0077E43A: fst dword ptr [0x87659c] */
    fp_push(_st[3]); /* 0x0077E440: fld st(3) */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8765A0) = _v; } /* 0x0077E442: fstp dword ptr [0x8765a0] */
    fp_xch(3); /* 0x0077E448: fxch st(3) */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8765A4) = _v; } /* 0x0077E44A: fstp dword ptr [0x8765a4] */
    fp_xch(2); /* 0x0077E450: fxch st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8765A8) = _v; } /* 0x0077E452: fstp dword ptr [0x8765a8] */
    fp_xch(1); /* 0x0077E458: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8765AC) = _v; } /* 0x0077E45A: fstp dword ptr [0x8765ac] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8765B0) = _v; } /* 0x0077E460: fstp dword ptr [0x8765b0] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077E466: ret  */

}

void sub_0077E470(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077E470u);

L_0077E470:
    PUSH32(esp, 0x00782440u); /* 0x0077E470: push 0x782440 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077E475: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077E47A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077E47B: ret  */

}

void sub_0077E480(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077E480u);

L_0077E480:
    ecx = 0x00872ED0u; /* 0x0077E480: mov ecx, 0x872ed0 */
    RECOMP_CALL(sub_00598750); /* 0x0077E485: call 0x598750 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007824C0u); /* 0x0077E48A: push 0x7824c0 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077E48F: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077E494: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077E495: ret  */

}

void sub_0077E4A0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077E4A0u);

L_0077E4A0:
    ecx = 0x00872B44u; /* 0x0077E4A0: mov ecx, 0x872b44 */
    RECOMP_CALL(sub_0057BCD0); /* 0x0077E4A5: call 0x57bcd0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007824D0u); /* 0x0077E4AA: push 0x7824d0 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077E4AF: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077E4B4: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077E4B5: ret  */

}

void sub_0077E4C0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077E4C0u);

L_0077E4C0:
    ecx = 0x00870D28u; /* 0x0077E4C0: mov ecx, 0x870d28 */
    RECOMP_CALL(sub_0057BCD0); /* 0x0077E4C5: call 0x57bcd0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007824E0u); /* 0x0077E4CA: push 0x7824e0 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077E4CF: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077E4D4: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077E4D5: ret  */

}

void sub_0077E4E0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077E4E0u);

L_0077E4E0:
    PUSH32(esp, 0x007A45F4u); /* 0x0077E4E0: push 0x7a45f4 */
    RECOMP_CALL(sub_0043DB50); /* 0x0077E4E5: call 0x43db50 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0077E4EA: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(0x870A18) = eax; /* 0x0077E4ED: mov dword ptr [0x870a18], eax */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077E4F2: ret  */

}

void sub_0077E500(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077E500u);

L_0077E500:
    PUSH32(esp, 0x007A4604u); /* 0x0077E500: push 0x7a4604 */
    RECOMP_CALL(sub_0043DB50); /* 0x0077E505: call 0x43db50 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0077E50A: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(0x8764C0) = eax; /* 0x0077E50D: mov dword ptr [0x8764c0], eax */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077E512: ret  */

}

void sub_0077E520(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077E520u);

L_0077E520:
    PUSH32(esp, 0x005CF410u); /* 0x0077E520: push 0x5cf410 */
    PUSH32(esp, 0x005CF3F0u); /* 0x0077E525: push 0x5cf3f0 */
    PUSH32(esp, 0x10u); /* 0x0077E52A: push 0x10 */
    PUSH32(esp, 0xB8u); /* 0x0077E52C: push 0xb8 */
    PUSH32(esp, 0x00870D30u); /* 0x0077E531: push 0x870d30 */
    RECOMP_CALL(sub_0075C461); /* 0x0077E536: call 0x75c461 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007824F0u); /* 0x0077E53B: push 0x7824f0 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077E540: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077E545: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077E546: ret  */

}

void sub_0077E550(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077E550u);

L_0077E550:
    ecx = 0x00870CB0u; /* 0x0077E550: mov ecx, 0x870cb0 */
    RECOMP_ITAIL(0x005B7600u); RECOMP_RETURN(); /* 0x0077E555: jmp 0x5b7600 */

}

void sub_0077E560(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077E560u);

L_0077E560:
    ecx = 0x008764C8u; /* 0x0077E560: mov ecx, 0x8764c8 */
    RECOMP_ITAIL(0x005B7600u); RECOMP_RETURN(); /* 0x0077E565: jmp 0x5b7600 */

}

void sub_0077E570(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077E570u);

L_0077E570:
    PUSH32(esp, 0x00782450u); /* 0x0077E570: push 0x782450 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077E575: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077E57A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077E57B: ret  */

}

void sub_0077E580(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077E580u);

L_0077E580:
    ecx = 0x008763D0u; /* 0x0077E580: mov ecx, 0x8763d0 */
    RECOMP_CALL(sub_005C8600); /* 0x0077E585: call 0x5c8600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00782460u); /* 0x0077E58A: push 0x782460 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077E58F: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077E594: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077E595: ret  */

}

void sub_0077E5A0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077E5A0u);

L_0077E5A0:
    ecx = 0x00871B94u; /* 0x0077E5A0: mov ecx, 0x871b94 */
    RECOMP_CALL(sub_0048B790); /* 0x0077E5A5: call 0x48b790 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00782490u); /* 0x0077E5AA: push 0x782490 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077E5AF: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077E5B4: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077E5B5: ret  */

}

void sub_0077E5C0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077E5C0u);

L_0077E5C0:
    fp_push(*(float*)&MEM32(0x784250)); /* 0x0077E5C0: fld dword ptr [0x784250] */
    _st[0] /= (double)*(float*)ADDR(0x7A4620); /* 0x0077E5C6: fdiv dword ptr [0x7a4620] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x88EA70) = _v; } /* 0x0077E5CC: fstp dword ptr [0x88ea70] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077E5D2: ret  */

}

void sub_0077E5E0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077E5E0u);

L_0077E5E0:
    ecx = 0x0088EA68u; /* 0x0077E5E0: mov ecx, 0x88ea68 */
    RECOMP_CALL(sub_00598750); /* 0x0077E5E5: call 0x598750 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00782580u); /* 0x0077E5EA: push 0x782580 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077E5EF: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077E5F4: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077E5F5: ret  */

}

void sub_0077E600(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077E600u);

L_0077E600:
    ecx = 0x0088FF98u; /* 0x0077E600: mov ecx, 0x88ff98 */
    RECOMP_CALL(sub_0057BCD0); /* 0x0077E605: call 0x57bcd0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00782600u); /* 0x0077E60A: push 0x782600 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077E60F: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077E614: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077E615: ret  */

}

void sub_0077E620(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077E620u);

L_0077E620:
    ecx = 0x0088F270u; /* 0x0077E620: mov ecx, 0x88f270 */
    RECOMP_CALL(sub_00598750); /* 0x0077E625: call 0x598750 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00782610u); /* 0x0077E62A: push 0x782610 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077E62F: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077E634: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077E635: ret  */

}

void sub_0077E640(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077E640u);

L_0077E640:
    ecx = 0x0088F1BCu; /* 0x0077E640: mov ecx, 0x88f1bc */
    RECOMP_CALL(sub_00598750); /* 0x0077E645: call 0x598750 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00782690u); /* 0x0077E64A: push 0x782690 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077E64F: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077E654: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077E655: ret  */

}

void sub_0077E660(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077E660u);

L_0077E660:
    ecx = 0x0088F748u; /* 0x0077E660: mov ecx, 0x88f748 */
    RECOMP_CALL(sub_0057BCD0); /* 0x0077E665: call 0x57bcd0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00782510u); /* 0x0077E66A: push 0x782510 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077E66F: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077E674: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077E675: ret  */

}

void sub_0077E680(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077E680u);

L_0077E680:
    ecx = 0x0088EA8Cu; /* 0x0077E680: mov ecx, 0x88ea8c */
    RECOMP_CALL(sub_00598750); /* 0x0077E685: call 0x598750 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00782590u); /* 0x0077E68A: push 0x782590 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077E68F: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077E694: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077E695: ret  */

}

void sub_0077E6A0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077E6A0u);

L_0077E6A0:
    ecx = 0x0088F768u; /* 0x0077E6A0: mov ecx, 0x88f768 */
    RECOMP_CALL(sub_005E81D0); /* 0x0077E6A5: call 0x5e81d0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007826C0u); /* 0x0077E6AA: push 0x7826c0 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077E6AF: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077E6B4: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077E6B5: ret  */

}

void sub_0077E6C0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077E6C0u);

L_0077E6C0:
    PUSH32(esp, 0x005E8660u); /* 0x0077E6C0: push 0x5e8660 */
    PUSH32(esp, 0x005E81C0u); /* 0x0077E6C5: push 0x5e81c0 */
    PUSH32(esp, 0x80034130u); /* 0x0077E6CA: push 0x80034130 */
    ecx = 0x0088A2ACu; /* 0x0077E6CF: mov ecx, 0x88a2ac */
    RECOMP_CALL(sub_0043C0B0); /* 0x0077E6D4: call 0x43c0b0 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077E6D9: ret  */

}

void sub_0077E6E0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077E6E0u);

L_0077E6E0:
    PUSH32(esp, 0x005E8660u); /* 0x0077E6E0: push 0x5e8660 */
    PUSH32(esp, 0x005E81C0u); /* 0x0077E6E5: push 0x5e81c0 */
    PUSH32(esp, 0x0003412Fu); /* 0x0077E6EA: push 0x3412f */
    ecx = 0x0088E9ECu; /* 0x0077E6EF: mov ecx, 0x88e9ec */
    RECOMP_CALL(sub_0043C0B0); /* 0x0077E6F4: call 0x43c0b0 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077E6F9: ret  */

}

void sub_0077E700(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077E700u);

L_0077E700:
    ecx = 0x0088F740u; /* 0x0077E700: mov ecx, 0x88f740 */
    RECOMP_CALL(sub_00598750); /* 0x0077E705: call 0x598750 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00782620u); /* 0x0077E70A: push 0x782620 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077E70F: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077E714: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077E715: ret  */

}

void sub_0077E720(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077E720u);

L_0077E720:
    PUSH32(esp, 0x005D84D0u); /* 0x0077E720: push 0x5d84d0 */
    PUSH32(esp, 0x005D8470u); /* 0x0077E725: push 0x5d8470 */
    PUSH32(esp, 0x00034146u); /* 0x0077E72A: push 0x34146 */
    ecx = 0x0088EAC4u; /* 0x0077E72F: mov ecx, 0x88eac4 */
    RECOMP_CALL(sub_0043C0B0); /* 0x0077E734: call 0x43c0b0 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077E739: ret  */

}

void sub_0077E740(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077E740u);

L_0077E740:
    PUSH32(esp, 0x005D3EF0u); /* 0x0077E740: push 0x5d3ef0 */
    PUSH32(esp, 0x005D3EB0u); /* 0x0077E745: push 0x5d3eb0 */
    PUSH32(esp, 0x00034201u); /* 0x0077E74A: push 0x34201 */
    ecx = 0x0088F750u; /* 0x0077E74F: mov ecx, 0x88f750 */
    RECOMP_CALL(sub_0043C0B0); /* 0x0077E754: call 0x43c0b0 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077E759: ret  */

}

void sub_0077E760(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077E760u);

L_0077E760:
    ecx = 0x0088A320u; /* 0x0077E760: mov ecx, 0x88a320 */
    RECOMP_CALL(sub_005E3F90); /* 0x0077E765: call 0x5e3f90 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007826A0u); /* 0x0077E76A: push 0x7826a0 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077E76F: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077E774: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077E775: ret  */

}

void sub_0077E780(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077E780u);

L_0077E780:
    ecx = 0x0088F298u; /* 0x0077E780: mov ecx, 0x88f298 */
    RECOMP_CALL(sub_005E08B0); /* 0x0077E785: call 0x5e08b0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00782630u); /* 0x0077E78A: push 0x782630 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077E78F: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077E794: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077E795: ret  */

}

void sub_0077E7A0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077E7A0u);

L_0077E7A0:
    PUSH32(esp, 0x005DEE00u); /* 0x0077E7A0: push 0x5dee00 */
    PUSH32(esp, 0x005DA490u); /* 0x0077E7A5: push 0x5da490 */
    PUSH32(esp, 0x80034147u); /* 0x0077E7AA: push 0x80034147 */
    ecx = 0x0088E9CCu; /* 0x0077E7AF: mov ecx, 0x88e9cc */
    RECOMP_CALL(sub_0043C0B0); /* 0x0077E7B4: call 0x43c0b0 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077E7B9: ret  */

}

void sub_0077E7C0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077E7C0u);

L_0077E7C0:
    ecx = 0x0088EB00u; /* 0x0077E7C0: mov ecx, 0x88eb00 */
    RECOMP_ITAIL(0x005DEF40u); RECOMP_RETURN(); /* 0x0077E7C5: jmp 0x5def40 */

}

void sub_0077E7D0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077E7D0u);

L_0077E7D0:
    PUSH32(esp, 0x005E4E60u); /* 0x0077E7D0: push 0x5e4e60 */
    PUSH32(esp, 0x005DEF30u); /* 0x0077E7D5: push 0x5def30 */
    PUSH32(esp, 0x00034110u); /* 0x0077E7DA: push 0x34110 */
    ecx = 0x0088EAB4u; /* 0x0077E7DF: mov ecx, 0x88eab4 */
    RECOMP_CALL(sub_0043C0B0); /* 0x0077E7E4: call 0x43c0b0 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077E7E9: ret  */

}

void sub_0077E7F0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077E7F0u);

L_0077E7F0:
    PUSH32(esp, 0x005E4E60u); /* 0x0077E7F0: push 0x5e4e60 */
    PUSH32(esp, 0x005DEF30u); /* 0x0077E7F5: push 0x5def30 */
    PUSH32(esp, 0x00034113u); /* 0x0077E7FA: push 0x34113 */
    ecx = 0x0088E9DCu; /* 0x0077E7FF: mov ecx, 0x88e9dc */
    RECOMP_CALL(sub_0043C0B0); /* 0x0077E804: call 0x43c0b0 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077E809: ret  */

}

void sub_0077E810(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077E810u);

L_0077E810:
    PUSH32(esp, 0x005E4E60u); /* 0x0077E810: push 0x5e4e60 */
    PUSH32(esp, 0x005DEF30u); /* 0x0077E815: push 0x5def30 */
    PUSH32(esp, 0x00034111u); /* 0x0077E81A: push 0x34111 */
    ecx = 0x0088F27Cu; /* 0x0077E81F: mov ecx, 0x88f27c */
    RECOMP_CALL(sub_0043C0B0); /* 0x0077E824: call 0x43c0b0 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077E829: ret  */

}

void sub_0077E830(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077E830u);

L_0077E830:
    PUSH32(esp, 0x005E4E60u); /* 0x0077E830: push 0x5e4e60 */
    PUSH32(esp, 0x005DEF30u); /* 0x0077E835: push 0x5def30 */
    PUSH32(esp, 0x00034112u); /* 0x0077E83A: push 0x34112 */
    ecx = 0x0088EA74u; /* 0x0077E83F: mov ecx, 0x88ea74 */
    RECOMP_CALL(sub_0043C0B0); /* 0x0077E844: call 0x43c0b0 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077E849: ret  */

}

void sub_0077E850(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077E850u);

L_0077E850:
    ecx = 0x0088EAD4u; /* 0x0077E850: mov ecx, 0x88ead4 */
    RECOMP_CALL(sub_00598750); /* 0x0077E855: call 0x598750 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00782640u); /* 0x0077E85A: push 0x782640 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077E85F: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077E864: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077E865: ret  */

}

void sub_0077E870(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077E870u);

L_0077E870:
    ecx = 0x0088F760u; /* 0x0077E870: mov ecx, 0x88f760 */
    RECOMP_CALL(sub_00598750); /* 0x0077E875: call 0x598750 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007825D0u); /* 0x0077E87A: push 0x7825d0 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077E87F: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077E884: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077E885: ret  */

}

void sub_0077E890(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077E890u);

L_0077E890:
    PUSH32(esp, 0x005D6440u); /* 0x0077E890: push 0x5d6440 */
    PUSH32(esp, 0x005DB2E0u); /* 0x0077E895: push 0x5db2e0 */
    PUSH32(esp, 0x00034108u); /* 0x0077E89A: push 0x34108 */
    ecx = 0x0088EAA4u; /* 0x0077E89F: mov ecx, 0x88eaa4 */
    RECOMP_CALL(sub_0043C0B0); /* 0x0077E8A4: call 0x43c0b0 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077E8A9: ret  */

}

void sub_0077E8B0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077E8B0u);

L_0077E8B0:
    PUSH32(esp, 0x005DFBA0u); /* 0x0077E8B0: push 0x5dfba0 */
    PUSH32(esp, 0x005DF8A0u); /* 0x0077E8B5: push 0x5df8a0 */
    PUSH32(esp, 0x80034100u); /* 0x0077E8BA: push 0x80034100 */
    ecx = 0x0088E9B4u; /* 0x0077E8BF: mov ecx, 0x88e9b4 */
    RECOMP_CALL(sub_0043C0B0); /* 0x0077E8C4: call 0x43c0b0 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077E8C9: ret  */

}

void sub_0077E8D0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077E8D0u);

L_0077E8D0:
    PUSH32(esp, 0x005DFBA0u); /* 0x0077E8D0: push 0x5dfba0 */
    PUSH32(esp, 0x005DF8A0u); /* 0x0077E8D5: push 0x5df8a0 */
    PUSH32(esp, 0x00034107u); /* 0x0077E8DA: push 0x34107 */
    ecx = 0x0088EA94u; /* 0x0077E8DF: mov ecx, 0x88ea94 */
    RECOMP_CALL(sub_0043C0B0); /* 0x0077E8E4: call 0x43c0b0 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077E8E9: ret  */

}

void sub_0077E8F0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077E8F0u);

L_0077E8F0:
    ecx = 0x00883E70u; /* 0x0077E8F0: mov ecx, 0x883e70 */
    RECOMP_CALL(sub_005E6360); /* 0x0077E8F5: call 0x5e6360 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007826B0u); /* 0x0077E8FA: push 0x7826b0 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077E8FF: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077E904: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077E905: ret  */

}

void sub_0077E910(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077E910u);

L_0077E910:
    PUSH32(esp, 0x004DEF30u); /* 0x0077E910: push 0x4def30 */
    PUSH32(esp, 0x00598750u); /* 0x0077E915: push 0x598750 */
    PUSH32(esp, 8); /* 0x0077E91A: push 8 */
    PUSH32(esp, 8); /* 0x0077E91C: push 8 */
    PUSH32(esp, 0x0088F1C8u); /* 0x0077E91E: push 0x88f1c8 */
    RECOMP_CALL(sub_0075C461); /* 0x0077E923: call 0x75c461 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00782650u); /* 0x0077E928: push 0x782650 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077E92D: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077E932: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077E933: ret  */

}

void sub_0077E940(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077E940u);

L_0077E940:
    PUSH32(esp, 0x007A534Cu); /* 0x0077E940: push 0x7a534c */
    ecx = 0x0088A2C0u; /* 0x0077E945: mov ecx, 0x88a2c0 */
    RECOMP_CALL(sub_0060B7E0); /* 0x0077E94A: call 0x60b7e0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007A534Cu); /* 0x0077E94F: push 0x7a534c */
    ecx = 0x0088A2F0u; /* 0x0077E954: mov ecx, 0x88a2f0 */
    RECOMP_CALL(sub_0060B7E0); /* 0x0077E959: call 0x60b7e0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00782520u); /* 0x0077E95E: push 0x782520 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077E963: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077E968: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077E969: ret  */

}

void sub_0077E970(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077E970u);

L_0077E970:
    PUSH32(esp, 0x007A5364u); /* 0x0077E970: push 0x7a5364 */
    ecx = 0x0088EA08u; /* 0x0077E975: mov ecx, 0x88ea08 */
    RECOMP_CALL(sub_0060B7E0); /* 0x0077E97A: call 0x60b7e0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007A5364u); /* 0x0077E97F: push 0x7a5364 */
    ecx = 0x0088EA38u; /* 0x0077E984: mov ecx, 0x88ea38 */
    RECOMP_CALL(sub_0060B7E0); /* 0x0077E989: call 0x60b7e0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00782540u); /* 0x0077E98E: push 0x782540 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077E993: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077E998: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077E999: ret  */

}

void sub_0077E9A0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077E9A0u);

L_0077E9A0:
    PUSH32(esp, 0x007A5378u); /* 0x0077E9A0: push 0x7a5378 */
    ecx = 0x0088F210u; /* 0x0077E9A5: mov ecx, 0x88f210 */
    RECOMP_CALL(sub_0060B7E0); /* 0x0077E9AA: call 0x60b7e0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007A5378u); /* 0x0077E9AF: push 0x7a5378 */
    ecx = 0x0088F240u; /* 0x0077E9B4: mov ecx, 0x88f240 */
    RECOMP_CALL(sub_0060B7E0); /* 0x0077E9B9: call 0x60b7e0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00782560u); /* 0x0077E9BE: push 0x782560 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077E9C3: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077E9C8: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077E9C9: ret  */

}

void sub_0077E9D0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077E9D0u);

L_0077E9D0:
    ecx = 0x0088F28Cu; /* 0x0077E9D0: mov ecx, 0x88f28c */
    RECOMP_CALL(sub_00598750); /* 0x0077E9D5: call 0x598750 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00782670u); /* 0x0077E9DA: push 0x782670 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077E9DF: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077E9E4: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077E9E5: ret  */

}

void sub_0077E9F0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077E9F0u);

L_0077E9F0:
    ecx = 0x0088FFA0u; /* 0x0077E9F0: mov ecx, 0x88ffa0 */
    RECOMP_CALL(sub_00598750); /* 0x0077E9F5: call 0x598750 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00782680u); /* 0x0077E9FA: push 0x782680 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077E9FF: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077EA04: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077EA05: ret  */

}

void sub_0077EA10(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077EA10u);

L_0077EA10:
    ecx = 0x0088E9C4u; /* 0x0077EA10: mov ecx, 0x88e9c4 */
    RECOMP_CALL(sub_00598750); /* 0x0077EA15: call 0x598750 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007825E0u); /* 0x0077EA1A: push 0x7825e0 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077EA1F: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077EA24: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077EA25: ret  */

}

void sub_0077EA30(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077EA30u);

L_0077EA30:
    ecx = 0x0088F208u; /* 0x0077EA30: mov ecx, 0x88f208 */
    RECOMP_CALL(sub_00598750); /* 0x0077EA35: call 0x598750 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007825F0u); /* 0x0077EA3A: push 0x7825f0 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077EA3F: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077EA44: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077EA45: ret  */

}

void sub_0077EA50(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077EA50u);

L_0077EA50:
    ecx = 0x0088F278u; /* 0x0077EA50: mov ecx, 0x88f278 */
    RECOMP_ITAIL(0x005D7B80u); RECOMP_RETURN(); /* 0x0077EA55: jmp 0x5d7b80 */

}

void sub_0077EA60(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077EA60u);

L_0077EA60:
    ecx = 0x0088E9FCu; /* 0x0077EA60: mov ecx, 0x88e9fc */
    RECOMP_CALL(sub_00598750); /* 0x0077EA65: call 0x598750 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007825A0u); /* 0x0077EA6A: push 0x7825a0 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077EA6F: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077EA74: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077EA75: ret  */

}

void sub_0077EA80(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077EA80u);

L_0077EA80:
    ecx = 0x0088EA84u; /* 0x0077EA80: mov ecx, 0x88ea84 */
    RECOMP_CALL(sub_00598750); /* 0x0077EA85: call 0x598750 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007825B0u); /* 0x0077EA8A: push 0x7825b0 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077EA8F: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077EA94: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077EA95: ret  */

}

void sub_0077EAA0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077EAA0u);

L_0077EAA0:
    ecx = 0x0088EADCu; /* 0x0077EAA0: mov ecx, 0x88eadc */
    RECOMP_CALL(sub_00598750); /* 0x0077EAA5: call 0x598750 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007825C0u); /* 0x0077EAAA: push 0x7825c0 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077EAAF: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077EAB4: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077EAB5: ret  */

}

void sub_0077EAC0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077EAC0u);

L_0077EAC0:
    eax = MEM32(0x7A481C); /* 0x0077EAC0: mov eax, dword ptr [0x7a481c] */
    fp_push(*(float*)&MEM32(0x7A481C)); /* 0x0077EAC5: fld dword ptr [0x7a481c] */
    _st[0] = -_st[0]; /* 0x0077EACB: fchs  */
    ecx = eax; /* 0x0077EACD: mov ecx, eax */
    edx = eax; /* 0x0077EACF: mov edx, eax */
    { float _v = (float)_st[0]; *(float*)ADDR(0x88FFB8) = _v; } /* 0x0077EAD1: fst dword ptr [0x88ffb8] */
    { float _v = (float)_st[0]; *(float*)ADDR(0x88FFC0) = _v; } /* 0x0077EAD7: fst dword ptr [0x88ffc0] */
    MEM32(0x88FFB0) = eax; /* 0x0077EADD: mov dword ptr [0x88ffb0], eax */
    { float _v = (float)_st[0]; *(float*)ADDR(0x88FFC4) = _v; } /* 0x0077EAE2: fst dword ptr [0x88ffc4] */
    MEM32(0x88FFB4) = ecx; /* 0x0077EAE8: mov dword ptr [0x88ffb4], ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x88FFCC) = _v; } /* 0x0077EAEE: fstp dword ptr [0x88ffcc] */
    MEM32(0x88FFBC) = edx; /* 0x0077EAF4: mov dword ptr [0x88ffbc], edx */
    MEM32(0x88FFC8) = eax; /* 0x0077EAFA: mov dword ptr [0x88ffc8], eax */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077EAFF: ret  */

}

void sub_0077EB00(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077EB00u);

L_0077EB00:
    fp_push(*(float*)&MEM32(0x784250)); /* 0x0077EB00: fld dword ptr [0x784250] */
    _st[0] /= (double)*(float*)ADDR(0x7A5470); /* 0x0077EB06: fdiv dword ptr [0x7a5470] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x89CF08) = _v; } /* 0x0077EB0C: fstp dword ptr [0x89cf08] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077EB12: ret  */

}

void sub_0077EB20(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077EB20u);

L_0077EB20:
    eax = MEM32(0x7A5488); /* 0x0077EB20: mov eax, dword ptr [0x7a5488] */
    edx = MEM32(0x7A5480); /* 0x0077EB25: mov edx, dword ptr [0x7a5480] */
    ecx = eax; /* 0x0077EB2B: mov ecx, eax */
    MEM32(0x8025E4) = ecx; /* 0x0077EB2D: mov dword ptr [0x8025e4], ecx */
    ecx = MEM32(0x7A5484); /* 0x0077EB33: mov ecx, dword ptr [0x7a5484] */
    MEM32(0x8025E0) = eax; /* 0x0077EB39: mov dword ptr [0x8025e0], eax */
    eax = edx; /* 0x0077EB3E: mov eax, edx */
    MEM32(0x802618) = edx; /* 0x0077EB40: mov dword ptr [0x802618], edx */
    edx = ecx; /* 0x0077EB46: mov edx, ecx */
    MEM32(0x80261C) = eax; /* 0x0077EB48: mov dword ptr [0x80261c], eax */
    MEM32(0x802620) = ecx; /* 0x0077EB4D: mov dword ptr [0x802620], ecx */
    MEM32(0x802624) = edx; /* 0x0077EB53: mov dword ptr [0x802624], edx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077EB59: ret  */

}

void sub_0077EB60(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077EB60u);

L_0077EB60:
    PUSH32(esp, 0x007864E8u); /* 0x0077EB60: push 0x7864e8 */
    RECOMP_CALL(sub_0043DB50); /* 0x0077EB65: call 0x43db50 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0077EB6A: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(0x89CF2C) = eax; /* 0x0077EB6D: mov dword ptr [0x89cf2c], eax */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077EB72: ret  */

}

void sub_0077EB80(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077EB80u);

L_0077EB80:
    PUSH32(esp, 0x007864FCu); /* 0x0077EB80: push 0x7864fc */
    RECOMP_CALL(sub_0043DB50); /* 0x0077EB85: call 0x43db50 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0077EB8A: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(0x89CCEC) = eax; /* 0x0077EB8D: mov dword ptr [0x89ccec], eax */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077EB92: ret  */

}

void sub_0077EBA0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077EBA0u);

L_0077EBA0:
    PUSH32(esp, 0x00786510u); /* 0x0077EBA0: push 0x786510 */
    RECOMP_CALL(sub_0043DB50); /* 0x0077EBA5: call 0x43db50 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0077EBAA: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(0x89CCF0) = eax; /* 0x0077EBAD: mov dword ptr [0x89ccf0], eax */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077EBB2: ret  */

}

void sub_0077EBC0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077EBC0u);

L_0077EBC0:
    PUSH32(esp, 0x00786520u); /* 0x0077EBC0: push 0x786520 */
    RECOMP_CALL(sub_0043DB50); /* 0x0077EBC5: call 0x43db50 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0077EBCA: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(0x89CCE0) = eax; /* 0x0077EBCD: mov dword ptr [0x89cce0], eax */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077EBD2: ret  */

}

void sub_0077EBE0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077EBE0u);

L_0077EBE0:
    PUSH32(esp, 0x00786530u); /* 0x0077EBE0: push 0x786530 */
    RECOMP_CALL(sub_0043DB50); /* 0x0077EBE5: call 0x43db50 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0077EBEA: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(0x89E78C) = eax; /* 0x0077EBED: mov dword ptr [0x89e78c], eax */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077EBF2: ret  */

}

void sub_0077EC00(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077EC00u);

L_0077EC00:
    PUSH32(esp, 0x00786548u); /* 0x0077EC00: push 0x786548 */
    RECOMP_CALL(sub_0043DB50); /* 0x0077EC05: call 0x43db50 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0077EC0A: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(0x89CF20) = eax; /* 0x0077EC0D: mov dword ptr [0x89cf20], eax */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077EC12: ret  */

}

void sub_0077EC20(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077EC20u);

L_0077EC20:
    PUSH32(esp, 0x00786560u); /* 0x0077EC20: push 0x786560 */
    RECOMP_CALL(sub_0043DB50); /* 0x0077EC25: call 0x43db50 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0077EC2A: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(0x890158) = eax; /* 0x0077EC2D: mov dword ptr [0x890158], eax */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077EC32: ret  */

}

void sub_0077EC40(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077EC40u);

L_0077EC40:
    PUSH32(esp, 0x0078657Cu); /* 0x0077EC40: push 0x78657c */
    RECOMP_CALL(sub_0043DB50); /* 0x0077EC45: call 0x43db50 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0077EC4A: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(0x89E820) = eax; /* 0x0077EC4D: mov dword ptr [0x89e820], eax */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077EC52: ret  */

}

void sub_0077EC60(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077EC60u);

L_0077EC60:
    PUSH32(esp, 0x00786598u); /* 0x0077EC60: push 0x786598 */
    RECOMP_CALL(sub_0043DB50); /* 0x0077EC65: call 0x43db50 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0077EC6A: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(0x89CF14) = eax; /* 0x0077EC6D: mov dword ptr [0x89cf14], eax */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077EC72: ret  */

}

void sub_0077EC80(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077EC80u);

L_0077EC80:
    PUSH32(esp, 4); /* 0x0077EC80: push 4 */
    PUSH32(esp, 0x008023A0u); /* 0x0077EC82: push 0x8023a0 */
    ecx = 0x0089CF24u; /* 0x0077EC87: mov ecx, 0x89cf24 */
    RECOMP_CALL(sub_00576770); /* 0x0077EC8C: call 0x576770 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077EC91: ret  */

}

void sub_0077ECA0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077ECA0u);

L_0077ECA0:
    PUSH32(esp, 4); /* 0x0077ECA0: push 4 */
    PUSH32(esp, 0x008023D0u); /* 0x0077ECA2: push 0x8023d0 */
    ecx = 0x0089CF30u; /* 0x0077ECA7: mov ecx, 0x89cf30 */
    RECOMP_CALL(sub_00576770); /* 0x0077ECAC: call 0x576770 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077ECB1: ret  */

}

void sub_0077ECC0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077ECC0u);

L_0077ECC0:
    PUSH32(esp, 2); /* 0x0077ECC0: push 2 */
    PUSH32(esp, 0x00802404u); /* 0x0077ECC2: push 0x802404 */
    ecx = 0x0089E790u; /* 0x0077ECC7: mov ecx, 0x89e790 */
    RECOMP_CALL(sub_00576770); /* 0x0077ECCC: call 0x576770 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077ECD1: ret  */

}

void sub_0077ECE0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077ECE0u);

L_0077ECE0:
    PUSH32(esp, 2); /* 0x0077ECE0: push 2 */
    PUSH32(esp, 0x00802414u); /* 0x0077ECE2: push 0x802414 */
    ecx = 0x0089E824u; /* 0x0077ECE7: mov ecx, 0x89e824 */
    RECOMP_CALL(sub_00576770); /* 0x0077ECEC: call 0x576770 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077ECF1: ret  */

}

void sub_0077ED00(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077ED00u);

L_0077ED00:
    PUSH32(esp, 2); /* 0x0077ED00: push 2 */
    PUSH32(esp, 0x00802424u); /* 0x0077ED02: push 0x802424 */
    ecx = 0x0089CF18u; /* 0x0077ED07: mov ecx, 0x89cf18 */
    RECOMP_CALL(sub_00576770); /* 0x0077ED0C: call 0x576770 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077ED11: ret  */

}

void sub_0077ED20(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077ED20u);

L_0077ED20:
    PUSH32(esp, 2); /* 0x0077ED20: push 2 */
    PUSH32(esp, 0x00802434u); /* 0x0077ED22: push 0x802434 */
    ecx = 0x00890150u; /* 0x0077ED27: mov ecx, 0x890150 */
    RECOMP_CALL(sub_00576770); /* 0x0077ED2C: call 0x576770 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077ED31: ret  */

}

void sub_0077ED40(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077ED40u);

L_0077ED40:
    PUSH32(esp, 2); /* 0x0077ED40: push 2 */
    PUSH32(esp, 0x00802444u); /* 0x0077ED42: push 0x802444 */
    ecx = 0x0089E798u; /* 0x0077ED47: mov ecx, 0x89e798 */
    RECOMP_CALL(sub_00576770); /* 0x0077ED4C: call 0x576770 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077ED51: ret  */

}

void sub_0077ED60(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077ED60u);

L_0077ED60:
    PUSH32(esp, 4); /* 0x0077ED60: push 4 */
    PUSH32(esp, 0x00802570u); /* 0x0077ED62: push 0x802570 */
    ecx = 0x0089CCE4u; /* 0x0077ED67: mov ecx, 0x89cce4 */
    RECOMP_CALL(sub_00576770); /* 0x0077ED6C: call 0x576770 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077ED71: ret  */

}

void sub_0077ED80(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077ED80u);

L_0077ED80:
    PUSH32(esp, 3); /* 0x0077ED80: push 3 */
    PUSH32(esp, 0x00802590u); /* 0x0077ED82: push 0x802590 */
    ecx = 0x0089CF0Cu; /* 0x0077ED87: mov ecx, 0x89cf0c */
    RECOMP_CALL(sub_00576770); /* 0x0077ED8C: call 0x576770 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077ED91: ret  */

}

void sub_0077EDA0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077EDA0u);

L_0077EDA0:
    ecx = 0x0089E7A0u; /* 0x0077EDA0: mov ecx, 0x89e7a0 */
    RECOMP_ITAIL(0x005ED5F0u); RECOMP_RETURN(); /* 0x0077EDA5: jmp 0x5ed5f0 */

}

void sub_0077EDB0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077EDB0u);

L_0077EDB0:
    PUSH32(esp, 0x0050F7D0u); /* 0x0077EDB0: push 0x50f7d0 */
    PUSH32(esp, 0x005F0D00u); /* 0x0077EDB5: push 0x5f0d00 */
    PUSH32(esp, 0x16u); /* 0x0077EDBA: push 0x16 */
    PUSH32(esp, 0x940u); /* 0x0077EDBC: push 0x940 */
    PUSH32(esp, 0x00890160u); /* 0x0077EDC1: push 0x890160 */
    RECOMP_CALL(sub_0075C461); /* 0x0077EDC6: call 0x75c461 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007826D0u); /* 0x0077EDCB: push 0x7826d0 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077EDD0: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077EDD5: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077EDD6: ret  */

}

void sub_0077EDE0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077EDE0u);

L_0077EDE0:
    ecx = 0x0089CF48u; /* 0x0077EDE0: mov ecx, 0x89cf48 */
    RECOMP_CALL(sub_005F9050); /* 0x0077EDE5: call 0x5f9050 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007826F0u); /* 0x0077EDEA: push 0x7826f0 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077EDEF: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077EDF4: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077EDF5: ret  */

}

void sub_0077EE00(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077EE00u);

L_0077EE00:
    ecx = 0x008A2B50u; /* 0x0077EE00: mov ecx, 0x8a2b50 */
    RECOMP_CALL(sub_00598750); /* 0x0077EE05: call 0x598750 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00782840u); /* 0x0077EE0A: push 0x782840 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077EE0F: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077EE14: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077EE15: ret  */

}

void sub_0077EE20(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077EE20u);

L_0077EE20:
    fp_push(*(float*)&MEM32(0x784250)); /* 0x0077EE20: fld dword ptr [0x784250] */
    _st[0] /= (double)*(float*)ADDR(0x7A65C8); /* 0x0077EE26: fdiv dword ptr [0x7a65c8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8A2CE0) = _v; } /* 0x0077EE2C: fstp dword ptr [0x8a2ce0] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077EE32: ret  */

}

void sub_0077EE40(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077EE40u);

L_0077EE40:
    fp_push(*(float*)&MEM32(0x7A65CC)); /* 0x0077EE40: fld dword ptr [0x7a65cc] */
    _st[0] += _st[0]; /* 0x0077EE46: fadd st(0), st(0) */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8A3160) = _v; } /* 0x0077EE48: fstp dword ptr [0x8a3160] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077EE4E: ret  */

}

void sub_0077EE50(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077EE50u);

L_0077EE50:
    fp_push(*(float*)&MEM32(0x7A65CC)); /* 0x0077EE50: fld dword ptr [0x7a65cc] */
    _st[0] *= (double)*(float*)ADDR(0x784260); /* 0x0077EE56: fmul dword ptr [0x784260] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8A3164) = _v; } /* 0x0077EE5C: fstp dword ptr [0x8a3164] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077EE62: ret  */

}

void sub_0077EE70(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077EE70u);

L_0077EE70:
    fp_push(*(double*)ADDR(0x7A65D0)); /* 0x0077EE70: fld qword ptr [0x7a65d0] */
    _st[0] += _st[0]; /* 0x0077EE76: fadd st(0), st(0) */
    { double _v = fp_pop(); *(double*)ADDR(0x8A3158) = _v; } /* 0x0077EE78: fstp qword ptr [0x8a3158] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077EE7E: ret  */

}

void sub_0077EE80(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077EE80u);

L_0077EE80:
    fp_push(*(double*)ADDR(0x7A65D0)); /* 0x0077EE80: fld qword ptr [0x7a65d0] */
    _st[0] *= *(double*)ADDR(0x7864E0); /* 0x0077EE86: fmul qword ptr [0x7864e0] */
    { double _v = fp_pop(); *(double*)ADDR(0x8A3150) = _v; } /* 0x0077EE8C: fstp qword ptr [0x8a3150] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077EE92: ret  */

}

void sub_0077EEA0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077EEA0u);

L_0077EEA0:
    PUSH32(esp, 0x007A8DA8u); /* 0x0077EEA0: push 0x7a8da8 */
    RECOMP_CALL(sub_0043DB50); /* 0x0077EEA5: call 0x43db50 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0077EEAA: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(0x8A31E0) = eax; /* 0x0077EEAD: mov dword ptr [0x8a31e0], eax */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077EEB2: ret  */

}

void sub_0077EEC0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077EEC0u);

L_0077EEC0:
    PUSH32(esp, 0x007A8DB8u); /* 0x0077EEC0: push 0x7a8db8 */
    RECOMP_CALL(sub_0043DB50); /* 0x0077EEC5: call 0x43db50 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0077EECA: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(0x8A3B00) = eax; /* 0x0077EECD: mov dword ptr [0x8a3b00], eax */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077EED2: ret  */

}

void sub_0077EEE0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077EEE0u);

L_0077EEE0:
    PUSH32(esp, 0x007A8DC8u); /* 0x0077EEE0: push 0x7a8dc8 */
    RECOMP_CALL(sub_0043DB50); /* 0x0077EEE5: call 0x43db50 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0077EEEA: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(0x8A1D90) = eax; /* 0x0077EEED: mov dword ptr [0x8a1d90], eax */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077EEF2: ret  */

}

void sub_0077EF00(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077EF00u);

L_0077EF00:
    ecx = 0x008A2CA4u; /* 0x0077EF00: mov ecx, 0x8a2ca4 */
    RECOMP_CALL(sub_00598750); /* 0x0077EF05: call 0x598750 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007828A0u); /* 0x0077EF0A: push 0x7828a0 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077EF0F: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077EF14: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077EF15: ret  */

}

void sub_0077EF20(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077EF20u);

L_0077EF20:
    PUSH32(esp, 0x007A9114u); /* 0x0077EF20: push 0x7a9114 */
    RECOMP_CALL(sub_0043DB50); /* 0x0077EF25: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007A9100u); /* 0x0077EF2A: push 0x7a9100 */
    MEM32(0x8A4358) = eax; /* 0x0077EF2F: mov dword ptr [0x8a4358], eax */
    RECOMP_CALL(sub_0043DB50); /* 0x0077EF34: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007A90ECu); /* 0x0077EF39: push 0x7a90ec */
    MEM32(0x8A435C) = eax; /* 0x0077EF3E: mov dword ptr [0x8a435c], eax */
    RECOMP_CALL(sub_0043DB50); /* 0x0077EF43: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007A90E0u); /* 0x0077EF48: push 0x7a90e0 */
    MEM32(0x8A4360) = eax; /* 0x0077EF4D: mov dword ptr [0x8a4360], eax */
    RECOMP_CALL(sub_0043DB50); /* 0x0077EF52: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007A90D0u); /* 0x0077EF57: push 0x7a90d0 */
    MEM32(0x8A4364) = eax; /* 0x0077EF5C: mov dword ptr [0x8a4364], eax */
    RECOMP_CALL(sub_0043DB50); /* 0x0077EF61: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007A90C4u); /* 0x0077EF66: push 0x7a90c4 */
    MEM32(0x8A4368) = eax; /* 0x0077EF6B: mov dword ptr [0x8a4368], eax */
    RECOMP_CALL(sub_0043DB50); /* 0x0077EF70: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007A90ACu); /* 0x0077EF75: push 0x7a90ac */
    MEM32(0x8A436C) = eax; /* 0x0077EF7A: mov dword ptr [0x8a436c], eax */
    RECOMP_CALL(sub_0043DB50); /* 0x0077EF7F: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007A909Cu); /* 0x0077EF84: push 0x7a909c */
    MEM32(0x8A4370) = eax; /* 0x0077EF89: mov dword ptr [0x8a4370], eax */
    RECOMP_CALL(sub_0043DB50); /* 0x0077EF8E: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007A9088u); /* 0x0077EF93: push 0x7a9088 */
    MEM32(0x8A4374) = eax; /* 0x0077EF98: mov dword ptr [0x8a4374], eax */
    RECOMP_CALL(sub_0043DB50); /* 0x0077EF9D: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007A9074u); /* 0x0077EFA2: push 0x7a9074 */
    MEM32(0x8A4378) = eax; /* 0x0077EFA7: mov dword ptr [0x8a4378], eax */
    RECOMP_CALL(sub_0043DB50); /* 0x0077EFAC: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007A905Cu); /* 0x0077EFB1: push 0x7a905c */
    MEM32(0x8A437C) = eax; /* 0x0077EFB6: mov dword ptr [0x8a437c], eax */
    RECOMP_CALL(sub_0043DB50); /* 0x0077EFBB: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007A9048u); /* 0x0077EFC0: push 0x7a9048 */
    MEM32(0x8A4380) = eax; /* 0x0077EFC5: mov dword ptr [0x8a4380], eax */
    RECOMP_CALL(sub_0043DB50); /* 0x0077EFCA: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007A9034u); /* 0x0077EFCF: push 0x7a9034 */
    MEM32(0x8A4384) = eax; /* 0x0077EFD4: mov dword ptr [0x8a4384], eax */
    RECOMP_CALL(sub_0043DB50); /* 0x0077EFD9: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007A9028u); /* 0x0077EFDE: push 0x7a9028 */
    MEM32(0x8A4388) = eax; /* 0x0077EFE3: mov dword ptr [0x8a4388], eax */
    RECOMP_CALL(sub_0043DB50); /* 0x0077EFE8: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007A9010u); /* 0x0077EFED: push 0x7a9010 */
    MEM32(0x8A438C) = eax; /* 0x0077EFF2: mov dword ptr [0x8a438c], eax */
    RECOMP_CALL(sub_0043DB50); /* 0x0077EFF7: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007A8FFCu); /* 0x0077EFFC: push 0x7a8ffc */
    MEM32(0x8A4390) = eax; /* 0x0077F001: mov dword ptr [0x8a4390], eax */
    RECOMP_CALL(sub_0043DB50); /* 0x0077F006: call 0x43db50 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x40u; /* 0x0077F00B: add esp, 0x40 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0x007A8FE8u); /* 0x0077F00E: push 0x7a8fe8 */
    MEM32(0x8A4394) = eax; /* 0x0077F013: mov dword ptr [0x8a4394], eax */
    RECOMP_CALL(sub_0043DB50); /* 0x0077F018: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007A8FD4u); /* 0x0077F01D: push 0x7a8fd4 */
    MEM32(0x8A4398) = eax; /* 0x0077F022: mov dword ptr [0x8a4398], eax */
    RECOMP_CALL(sub_0043DB50); /* 0x0077F027: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007A8FBCu); /* 0x0077F02C: push 0x7a8fbc */
    MEM32(0x8A439C) = eax; /* 0x0077F031: mov dword ptr [0x8a439c], eax */
    RECOMP_CALL(sub_0043DB50); /* 0x0077F036: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007A8FA8u); /* 0x0077F03B: push 0x7a8fa8 */
    MEM32(0x8A43A0) = eax; /* 0x0077F040: mov dword ptr [0x8a43a0], eax */
    RECOMP_CALL(sub_0043DB50); /* 0x0077F045: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007A8F9Cu); /* 0x0077F04A: push 0x7a8f9c */
    MEM32(0x8A43A4) = eax; /* 0x0077F04F: mov dword ptr [0x8a43a4], eax */
    RECOMP_CALL(sub_0043DB50); /* 0x0077F054: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007A8F88u); /* 0x0077F059: push 0x7a8f88 */
    MEM32(0x8A43A8) = eax; /* 0x0077F05E: mov dword ptr [0x8a43a8], eax */
    RECOMP_CALL(sub_0043DB50); /* 0x0077F063: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007A8F74u); /* 0x0077F068: push 0x7a8f74 */
    MEM32(0x8A43AC) = eax; /* 0x0077F06D: mov dword ptr [0x8a43ac], eax */
    RECOMP_CALL(sub_0043DB50); /* 0x0077F072: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007A8F5Cu); /* 0x0077F077: push 0x7a8f5c */
    MEM32(0x8A43B0) = eax; /* 0x0077F07C: mov dword ptr [0x8a43b0], eax */
    RECOMP_CALL(sub_0043DB50); /* 0x0077F081: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007A8F44u); /* 0x0077F086: push 0x7a8f44 */
    MEM32(0x8A43B4) = eax; /* 0x0077F08B: mov dword ptr [0x8a43b4], eax */
    RECOMP_CALL(sub_0043DB50); /* 0x0077F090: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007A8F28u); /* 0x0077F095: push 0x7a8f28 */
    MEM32(0x8A43B8) = eax; /* 0x0077F09A: mov dword ptr [0x8a43b8], eax */
    RECOMP_CALL(sub_0043DB50); /* 0x0077F09F: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007A8F10u); /* 0x0077F0A4: push 0x7a8f10 */
    MEM32(0x8A43BC) = eax; /* 0x0077F0A9: mov dword ptr [0x8a43bc], eax */
    RECOMP_CALL(sub_0043DB50); /* 0x0077F0AE: call 0x43db50 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x0077F0B3: add esp, 0x2c */
    _flag_k = FK_ADD;
    MEM32(0x8A43C0) = eax; /* 0x0077F0B6: mov dword ptr [0x8a43c0], eax */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077F0BB: ret  */

}

void sub_0077F0C0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077F0C0u);

L_0077F0C0:
    PUSH32(esp, 0x007A9208u); /* 0x0077F0C0: push 0x7a9208 */
    RECOMP_CALL(sub_0043DB50); /* 0x0077F0C5: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007A91F4u); /* 0x0077F0CA: push 0x7a91f4 */
    MEM32(0x8A4324) = eax; /* 0x0077F0CF: mov dword ptr [0x8a4324], eax */
    RECOMP_CALL(sub_0043DB50); /* 0x0077F0D4: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007A91E0u); /* 0x0077F0D9: push 0x7a91e0 */
    MEM32(0x8A4328) = eax; /* 0x0077F0DE: mov dword ptr [0x8a4328], eax */
    RECOMP_CALL(sub_0043DB50); /* 0x0077F0E3: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007A91CCu); /* 0x0077F0E8: push 0x7a91cc */
    MEM32(0x8A432C) = eax; /* 0x0077F0ED: mov dword ptr [0x8a432c], eax */
    RECOMP_CALL(sub_0043DB50); /* 0x0077F0F2: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007A91B8u); /* 0x0077F0F7: push 0x7a91b8 */
    MEM32(0x8A4330) = eax; /* 0x0077F0FC: mov dword ptr [0x8a4330], eax */
    RECOMP_CALL(sub_0043DB50); /* 0x0077F101: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007A91A4u); /* 0x0077F106: push 0x7a91a4 */
    MEM32(0x8A4334) = eax; /* 0x0077F10B: mov dword ptr [0x8a4334], eax */
    RECOMP_CALL(sub_0043DB50); /* 0x0077F110: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007A9190u); /* 0x0077F115: push 0x7a9190 */
    MEM32(0x8A4338) = eax; /* 0x0077F11A: mov dword ptr [0x8a4338], eax */
    RECOMP_CALL(sub_0043DB50); /* 0x0077F11F: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007A917Cu); /* 0x0077F124: push 0x7a917c */
    MEM32(0x8A433C) = eax; /* 0x0077F129: mov dword ptr [0x8a433c], eax */
    RECOMP_CALL(sub_0043DB50); /* 0x0077F12E: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007A9168u); /* 0x0077F133: push 0x7a9168 */
    MEM32(0x8A4340) = eax; /* 0x0077F138: mov dword ptr [0x8a4340], eax */
    RECOMP_CALL(sub_0043DB50); /* 0x0077F13D: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007A9154u); /* 0x0077F142: push 0x7a9154 */
    MEM32(0x8A4344) = eax; /* 0x0077F147: mov dword ptr [0x8a4344], eax */
    RECOMP_CALL(sub_0043DB50); /* 0x0077F14C: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007A913Cu); /* 0x0077F151: push 0x7a913c */
    MEM32(0x8A4348) = eax; /* 0x0077F156: mov dword ptr [0x8a4348], eax */
    RECOMP_CALL(sub_0043DB50); /* 0x0077F15B: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007A9124u); /* 0x0077F160: push 0x7a9124 */
    MEM32(0x8A434C) = eax; /* 0x0077F165: mov dword ptr [0x8a434c], eax */
    RECOMP_CALL(sub_0043DB50); /* 0x0077F16A: call 0x43db50 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x0077F16F: add esp, 0x30 */
    _flag_k = FK_ADD;
    MEM32(0x8A4350) = eax; /* 0x0077F172: mov dword ptr [0x8a4350], eax */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077F177: ret  */

}

void sub_0077F180(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077F180u);

L_0077F180:
    PUSH32(esp, 0x00782720u); /* 0x0077F180: push 0x782720 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077F185: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077F18A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077F18B: ret  */

}

void sub_0077F190(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077F190u);

L_0077F190:
    ecx = 0x008A1DE4u; /* 0x0077F190: mov ecx, 0x8a1de4 */
    RECOMP_CALL(sub_004AFAF0); /* 0x0077F195: call 0x4afaf0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007827E0u); /* 0x0077F19A: push 0x7827e0 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077F19F: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077F1A4: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077F1A5: ret  */

}

void sub_0077F1B0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077F1B0u);

L_0077F1B0:
    ecx = 0x008A3168u; /* 0x0077F1B0: mov ecx, 0x8a3168 */
    RECOMP_CALL(sub_004AFAF0); /* 0x0077F1B5: call 0x4afaf0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007827F0u); /* 0x0077F1BA: push 0x7827f0 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077F1BF: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077F1C4: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077F1C5: ret  */

}

void sub_0077F1D0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077F1D0u);

L_0077F1D0:
    ecx = 0x008A30F0u; /* 0x0077F1D0: mov ecx, 0x8a30f0 */
    RECOMP_CALL(sub_00598750); /* 0x0077F1D5: call 0x598750 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007828B0u); /* 0x0077F1DA: push 0x7828b0 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077F1DF: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077F1E4: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077F1E5: ret  */

}

void sub_0077F1F0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077F1F0u);

L_0077F1F0:
    ecx = 0x008A1DFCu; /* 0x0077F1F0: mov ecx, 0x8a1dfc */
    RECOMP_CALL(sub_004AFAF0); /* 0x0077F1F5: call 0x4afaf0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00782800u); /* 0x0077F1FA: push 0x782800 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077F1FF: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077F204: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077F205: ret  */

}

void sub_0077F210(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077F210u);

L_0077F210:
    ecx = 0x008A1F10u; /* 0x0077F210: mov ecx, 0x8a1f10 */
    RECOMP_CALL(sub_004AFAF0); /* 0x0077F215: call 0x4afaf0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00782810u); /* 0x0077F21A: push 0x782810 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077F21F: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077F224: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077F225: ret  */

}

void sub_0077F230(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077F230u);

L_0077F230:
    eax = 0x008A2CB4u; /* 0x0077F230: mov eax, 0x8a2cb4 */
    edx = 2; /* 0x0077F235: mov edx, 2 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x0077F23A: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    esp = esp; /* 0x0077F23C: lea esp, [esp] */

L_0077F240:
    MEM32(eax + (-0x8)) = ecx; /* 0x0077F240: mov dword ptr [eax - 8], ecx */
    MEM32(eax + (-0x4)) = ecx; /* 0x0077F243: mov dword ptr [eax - 4], ecx */
    MEM32(eax) = ecx; /* 0x0077F246: mov dword ptr [eax], ecx */
    MEM32(eax + 0x4) = ecx; /* 0x0077F248: mov dword ptr [eax + 4], ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x10u; /* 0x0077F24B: add eax, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x0077F24E: dec edx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_0077F240; /* 0x0077F24F: jne 0x77f240 */

L_0077F251:
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077F251: ret  */

}

void sub_0077F260(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077F260u);

L_0077F260:
    eax = 0x008A3130u; /* 0x0077F260: mov eax, 0x8a3130 */
    edx = 2; /* 0x0077F265: mov edx, 2 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x0077F26A: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    esp = esp; /* 0x0077F26C: lea esp, [esp] */

L_0077F270:
    MEM32(eax + (-0x8)) = ecx; /* 0x0077F270: mov dword ptr [eax - 8], ecx */
    MEM32(eax + (-0x4)) = ecx; /* 0x0077F273: mov dword ptr [eax - 4], ecx */
    MEM32(eax) = ecx; /* 0x0077F276: mov dword ptr [eax], ecx */
    MEM32(eax + 0x4) = ecx; /* 0x0077F278: mov dword ptr [eax + 4], ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x10u; /* 0x0077F27B: add eax, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x0077F27E: dec edx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_0077F270; /* 0x0077F27F: jne 0x77f270 */

L_0077F281:
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077F281: ret  */

}

void sub_0077F290(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077F290u);

L_0077F290:
    ecx = 0x008A2B68u; /* 0x0077F290: mov ecx, 0x8a2b68 */
    RECOMP_CALL(sub_00636AC0); /* 0x0077F295: call 0x636ac0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00782850u); /* 0x0077F29A: push 0x782850 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077F29F: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077F2A4: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077F2A5: ret  */

}

void sub_0077F2B0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077F2B0u);

L_0077F2B0:
    ecx = 0x008A31E4u; /* 0x0077F2B0: mov ecx, 0x8a31e4 */
    RECOMP_CALL(sub_00598750); /* 0x0077F2B5: call 0x598750 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00782860u); /* 0x0077F2BA: push 0x782860 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077F2BF: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077F2C4: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077F2C5: ret  */

}

void sub_0077F2D0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077F2D0u);

L_0077F2D0:
    PUSH32(esp, esi); /* 0x0077F2D0: push esi */
    PUSH32(esp, edi); /* 0x0077F2D1: push edi */
    PUSH32(esp, 0x007A9340u); /* 0x0077F2D2: push 0x7a9340 */
    RECOMP_CALL(sub_0043DB50); /* 0x0077F2D7: call 0x43db50 */
    RECOMP_FLAGS_IN();
    edi = 5; /* 0x0077F2DC: mov edi, 5 */
    PUSH32(esp, 0x007A9340u); /* 0x0077F2E1: push 0x7a9340 */
    MEM32(0x8A4418) = eax; /* 0x0077F2E6: mov dword ptr [0x8a4418], eax */
    MEM32(0x8A441C) = edi; /* 0x0077F2EB: mov dword ptr [0x8a441c], edi */
    RECOMP_CALL(sub_0043DB50); /* 0x0077F2F1: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007A932Cu); /* 0x0077F2F6: push 0x7a932c */
    MEM32(0x8A4420) = eax; /* 0x0077F2FB: mov dword ptr [0x8a4420], eax */
    RECOMP_CALL(sub_0043DB50); /* 0x0077F300: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007A9318u); /* 0x0077F305: push 0x7a9318 */
    MEM32(0x8A4424) = eax; /* 0x0077F30A: mov dword ptr [0x8a4424], eax */
    RECOMP_CALL(sub_0043DB50); /* 0x0077F30F: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007A9304u); /* 0x0077F314: push 0x7a9304 */
    MEM32(0x8A4428) = eax; /* 0x0077F319: mov dword ptr [0x8a4428], eax */
    RECOMP_CALL(sub_0043DB50); /* 0x0077F31E: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007A92F0u); /* 0x0077F323: push 0x7a92f0 */
    MEM32(0x8A442C) = eax; /* 0x0077F328: mov dword ptr [0x8a442c], eax */
    RECOMP_CALL(sub_0043DB50); /* 0x0077F32D: call 0x43db50 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x0077F332: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x007A92DCu); /* 0x0077F334: push 0x7a92dc */
    MEM32(0x8A4430) = eax; /* 0x0077F339: mov dword ptr [0x8a4430], eax */
    MEM32(0x8A4434) = esi; /* 0x0077F33E: mov dword ptr [0x8a4434], esi */
    MEM32(0x8A4438) = esi; /* 0x0077F344: mov dword ptr [0x8a4438], esi */
    MEM32(0x8A443C) = esi; /* 0x0077F34A: mov dword ptr [0x8a443c], esi */
    RECOMP_CALL(sub_0043DB50); /* 0x0077F350: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007A92DCu); /* 0x0077F355: push 0x7a92dc */
    MEM32(0x8A4440) = eax; /* 0x0077F35A: mov dword ptr [0x8a4440], eax */
    MEM32(0x8A4444) = edi; /* 0x0077F35F: mov dword ptr [0x8a4444], edi */
    RECOMP_CALL(sub_0043DB50); /* 0x0077F365: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007A9340u); /* 0x0077F36A: push 0x7a9340 */
    MEM32(0x8A4448) = eax; /* 0x0077F36F: mov dword ptr [0x8a4448], eax */
    RECOMP_CALL(sub_0043DB50); /* 0x0077F374: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007A92C8u); /* 0x0077F379: push 0x7a92c8 */
    MEM32(0x8A444C) = eax; /* 0x0077F37E: mov dword ptr [0x8a444c], eax */
    RECOMP_CALL(sub_0043DB50); /* 0x0077F383: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007A92B4u); /* 0x0077F388: push 0x7a92b4 */
    MEM32(0x8A4450) = eax; /* 0x0077F38D: mov dword ptr [0x8a4450], eax */
    RECOMP_CALL(sub_0043DB50); /* 0x0077F392: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007A92A4u); /* 0x0077F397: push 0x7a92a4 */
    MEM32(0x8A4454) = eax; /* 0x0077F39C: mov dword ptr [0x8a4454], eax */
    RECOMP_CALL(sub_0043DB50); /* 0x0077F3A1: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007A92C8u); /* 0x0077F3A6: push 0x7a92c8 */
    MEM32(0x8A4458) = eax; /* 0x0077F3AB: mov dword ptr [0x8a4458], eax */
    MEM32(0x8A445C) = esi; /* 0x0077F3B0: mov dword ptr [0x8a445c], esi */
    MEM32(0x8A4460) = esi; /* 0x0077F3B6: mov dword ptr [0x8a4460], esi */
    MEM32(0x8A4464) = esi; /* 0x0077F3BC: mov dword ptr [0x8a4464], esi */
    RECOMP_CALL(sub_0043DB50); /* 0x0077F3C2: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007A92C8u); /* 0x0077F3C7: push 0x7a92c8 */
    MEM32(0x8A4468) = eax; /* 0x0077F3CC: mov dword ptr [0x8a4468], eax */
    MEM32(0x8A446C) = edi; /* 0x0077F3D1: mov dword ptr [0x8a446c], edi */
    RECOMP_CALL(sub_0043DB50); /* 0x0077F3D7: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007A9318u); /* 0x0077F3DC: push 0x7a9318 */
    MEM32(0x8A4470) = eax; /* 0x0077F3E1: mov dword ptr [0x8a4470], eax */
    RECOMP_CALL(sub_0043DB50); /* 0x0077F3E6: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007A9304u); /* 0x0077F3EB: push 0x7a9304 */
    MEM32(0x8A4474) = eax; /* 0x0077F3F0: mov dword ptr [0x8a4474], eax */
    RECOMP_CALL(sub_0043DB50); /* 0x0077F3F5: call 0x43db50 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x40u; /* 0x0077F3FA: add esp, 0x40 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0x007A9290u); /* 0x0077F3FD: push 0x7a9290 */
    MEM32(0x8A4478) = eax; /* 0x0077F402: mov dword ptr [0x8a4478], eax */
    RECOMP_CALL(sub_0043DB50); /* 0x0077F407: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007A927Cu); /* 0x0077F40C: push 0x7a927c */
    MEM32(0x8A447C) = eax; /* 0x0077F411: mov dword ptr [0x8a447c], eax */
    RECOMP_CALL(sub_0043DB50); /* 0x0077F416: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007A9268u); /* 0x0077F41B: push 0x7a9268 */
    MEM32(0x8A4480) = eax; /* 0x0077F420: mov dword ptr [0x8a4480], eax */
    MEM32(0x8A4484) = esi; /* 0x0077F425: mov dword ptr [0x8a4484], esi */
    MEM32(0x8A4488) = esi; /* 0x0077F42B: mov dword ptr [0x8a4488], esi */
    MEM32(0x8A448C) = esi; /* 0x0077F431: mov dword ptr [0x8a448c], esi */
    RECOMP_CALL(sub_0043DB50); /* 0x0077F437: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007A9268u); /* 0x0077F43C: push 0x7a9268 */
    MEM32(0x8A4490) = eax; /* 0x0077F441: mov dword ptr [0x8a4490], eax */
    MEM32(0x8A4494) = edi; /* 0x0077F446: mov dword ptr [0x8a4494], edi */
    RECOMP_CALL(sub_0043DB50); /* 0x0077F44C: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007A9340u); /* 0x0077F451: push 0x7a9340 */
    MEM32(0x8A4498) = eax; /* 0x0077F456: mov dword ptr [0x8a4498], eax */
    RECOMP_CALL(sub_0043DB50); /* 0x0077F45B: call 0x43db50 */
    RECOMP_FLAGS_IN();
    MEM32(0x8A449C) = eax; /* 0x0077F460: mov dword ptr [0x8a449c], eax */
    PUSH32(esp, 0x007A9254u); /* 0x0077F465: push 0x7a9254 */
    RECOMP_CALL(sub_0043DB50); /* 0x0077F46A: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007A92C8u); /* 0x0077F46F: push 0x7a92c8 */
    MEM32(0x8A44A0) = eax; /* 0x0077F474: mov dword ptr [0x8a44a0], eax */
    RECOMP_CALL(sub_0043DB50); /* 0x0077F479: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007A9304u); /* 0x0077F47E: push 0x7a9304 */
    MEM32(0x8A44A4) = eax; /* 0x0077F483: mov dword ptr [0x8a44a4], eax */
    RECOMP_CALL(sub_0043DB50); /* 0x0077F488: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007A9240u); /* 0x0077F48D: push 0x7a9240 */
    MEM32(0x8A44A8) = eax; /* 0x0077F492: mov dword ptr [0x8a44a8], eax */
    MEM32(0x8A44AC) = esi; /* 0x0077F497: mov dword ptr [0x8a44ac], esi */
    MEM32(0x8A44B0) = esi; /* 0x0077F49D: mov dword ptr [0x8a44b0], esi */
    MEM32(0x8A44B4) = esi; /* 0x0077F4A3: mov dword ptr [0x8a44b4], esi */
    RECOMP_CALL(sub_0043DB50); /* 0x0077F4A9: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007A9240u); /* 0x0077F4AE: push 0x7a9240 */
    MEM32(0x8A44B8) = eax; /* 0x0077F4B3: mov dword ptr [0x8a44b8], eax */
    MEM32(0x8A44BC) = edi; /* 0x0077F4B8: mov dword ptr [0x8a44bc], edi */
    RECOMP_CALL(sub_0043DB50); /* 0x0077F4BE: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007A9340u); /* 0x0077F4C3: push 0x7a9340 */
    MEM32(0x8A44C0) = eax; /* 0x0077F4C8: mov dword ptr [0x8a44c0], eax */
    RECOMP_CALL(sub_0043DB50); /* 0x0077F4CD: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007A932Cu); /* 0x0077F4D2: push 0x7a932c */
    MEM32(0x8A44C4) = eax; /* 0x0077F4D7: mov dword ptr [0x8a44c4], eax */
    RECOMP_CALL(sub_0043DB50); /* 0x0077F4DC: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007A922Cu); /* 0x0077F4E1: push 0x7a922c */
    MEM32(0x8A44C8) = eax; /* 0x0077F4E6: mov dword ptr [0x8a44c8], eax */
    RECOMP_CALL(sub_0043DB50); /* 0x0077F4EB: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007A921Cu); /* 0x0077F4F0: push 0x7a921c */
    MEM32(0x8A44CC) = eax; /* 0x0077F4F5: mov dword ptr [0x8a44cc], eax */
    RECOMP_CALL(sub_0043DB50); /* 0x0077F4FA: call 0x43db50 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x38u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x38u; /* 0x0077F4FF: add esp, 0x38 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x0077F502: pop edi */
    MEM32(0x8A44D4) = esi; /* 0x0077F503: mov dword ptr [0x8a44d4], esi */
    MEM32(0x8A44D8) = esi; /* 0x0077F509: mov dword ptr [0x8a44d8], esi */
    MEM32(0x8A44DC) = esi; /* 0x0077F50F: mov dword ptr [0x8a44dc], esi */
    MEM32(0x8A44D0) = eax; /* 0x0077F515: mov dword ptr [0x8a44d0], eax */
    esi = POP32_VAL(esp); /* 0x0077F51A: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077F51B: ret  */

}

void sub_0077F520(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077F520u);

L_0077F520:
    PUSH32(esp, 0x007A8C98u); /* 0x0077F520: push 0x7a8c98 */
    RECOMP_CALL(sub_0043DB50); /* 0x0077F525: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007A8CC0u); /* 0x0077F52A: push 0x7a8cc0 */
    MEM32(0x8A43C8) = eax; /* 0x0077F52F: mov dword ptr [0x8a43c8], eax */
    RECOMP_CALL(sub_0043DB50); /* 0x0077F534: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007A8CACu); /* 0x0077F539: push 0x7a8cac */
    MEM32(0x8A43CC) = eax; /* 0x0077F53E: mov dword ptr [0x8a43cc], eax */
    RECOMP_CALL(sub_0043DB50); /* 0x0077F543: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007A8CD4u); /* 0x0077F548: push 0x7a8cd4 */
    MEM32(0x8A43D0) = eax; /* 0x0077F54D: mov dword ptr [0x8a43d0], eax */
    RECOMP_CALL(sub_0043DB50); /* 0x0077F552: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007A8C98u); /* 0x0077F557: push 0x7a8c98 */
    MEM32(0x8A43D4) = eax; /* 0x0077F55C: mov dword ptr [0x8a43d4], eax */
    RECOMP_CALL(sub_0043DB50); /* 0x0077F561: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007A8CC0u); /* 0x0077F566: push 0x7a8cc0 */
    MEM32(0x8A43D8) = eax; /* 0x0077F56B: mov dword ptr [0x8a43d8], eax */
    RECOMP_CALL(sub_0043DB50); /* 0x0077F570: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007A93F4u); /* 0x0077F575: push 0x7a93f4 */
    MEM32(0x8A43DC) = eax; /* 0x0077F57A: mov dword ptr [0x8a43dc], eax */
    RECOMP_CALL(sub_0043DB50); /* 0x0077F57F: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007A93E0u); /* 0x0077F584: push 0x7a93e0 */
    MEM32(0x8A43E0) = eax; /* 0x0077F589: mov dword ptr [0x8a43e0], eax */
    RECOMP_CALL(sub_0043DB50); /* 0x0077F58E: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007A8CC0u); /* 0x0077F593: push 0x7a8cc0 */
    MEM32(0x8A43E4) = eax; /* 0x0077F598: mov dword ptr [0x8a43e4], eax */
    RECOMP_CALL(sub_0043DB50); /* 0x0077F59D: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007A93F4u); /* 0x0077F5A2: push 0x7a93f4 */
    MEM32(0x8A43E8) = eax; /* 0x0077F5A7: mov dword ptr [0x8a43e8], eax */
    RECOMP_CALL(sub_0043DB50); /* 0x0077F5AC: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007A93E0u); /* 0x0077F5B1: push 0x7a93e0 */
    MEM32(0x8A43EC) = eax; /* 0x0077F5B6: mov dword ptr [0x8a43ec], eax */
    RECOMP_CALL(sub_0043DB50); /* 0x0077F5BB: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007A93CCu); /* 0x0077F5C0: push 0x7a93cc */
    MEM32(0x8A43F0) = eax; /* 0x0077F5C5: mov dword ptr [0x8a43f0], eax */
    RECOMP_CALL(sub_0043DB50); /* 0x0077F5CA: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007A8CC0u); /* 0x0077F5CF: push 0x7a8cc0 */
    MEM32(0x8A43F4) = eax; /* 0x0077F5D4: mov dword ptr [0x8a43f4], eax */
    RECOMP_CALL(sub_0043DB50); /* 0x0077F5D9: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007A93B8u); /* 0x0077F5DE: push 0x7a93b8 */
    MEM32(0x8A43F8) = eax; /* 0x0077F5E3: mov dword ptr [0x8a43f8], eax */
    RECOMP_CALL(sub_0043DB50); /* 0x0077F5E8: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007A93A4u); /* 0x0077F5ED: push 0x7a93a4 */
    MEM32(0x8A43FC) = eax; /* 0x0077F5F2: mov dword ptr [0x8a43fc], eax */
    RECOMP_CALL(sub_0043DB50); /* 0x0077F5F7: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007A9390u); /* 0x0077F5FC: push 0x7a9390 */
    MEM32(0x8A4400) = eax; /* 0x0077F601: mov dword ptr [0x8a4400], eax */
    RECOMP_CALL(sub_0043DB50); /* 0x0077F606: call 0x43db50 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x40u; /* 0x0077F60B: add esp, 0x40 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0x007A8CC0u); /* 0x0077F60E: push 0x7a8cc0 */
    MEM32(0x8A4404) = eax; /* 0x0077F613: mov dword ptr [0x8a4404], eax */
    RECOMP_CALL(sub_0043DB50); /* 0x0077F618: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007A937Cu); /* 0x0077F61D: push 0x7a937c */
    MEM32(0x8A4408) = eax; /* 0x0077F622: mov dword ptr [0x8a4408], eax */
    RECOMP_CALL(sub_0043DB50); /* 0x0077F627: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007A9368u); /* 0x0077F62C: push 0x7a9368 */
    MEM32(0x8A440C) = eax; /* 0x0077F631: mov dword ptr [0x8a440c], eax */
    RECOMP_CALL(sub_0043DB50); /* 0x0077F636: call 0x43db50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007A9354u); /* 0x0077F63B: push 0x7a9354 */
    MEM32(0x8A4410) = eax; /* 0x0077F640: mov dword ptr [0x8a4410], eax */
    RECOMP_CALL(sub_0043DB50); /* 0x0077F645: call 0x43db50 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x0077F64A: add esp, 0x10 */
    _flag_k = FK_ADD;
    MEM32(0x8A4414) = eax; /* 0x0077F64D: mov dword ptr [0x8a4414], eax */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077F652: ret  */

}

void sub_0077F660(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077F660u);

L_0077F660:
    ecx = 0x008A3288u; /* 0x0077F660: mov ecx, 0x8a3288 */
    RECOMP_CALL(sub_00637940); /* 0x0077F665: call 0x637940 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00782870u); /* 0x0077F66A: push 0x782870 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077F66F: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077F674: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077F675: ret  */

}

void sub_0077F680(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077F680u);

L_0077F680:
    ecx = 0x008A3148u; /* 0x0077F680: mov ecx, 0x8a3148 */
    RECOMP_CALL(sub_00598750); /* 0x0077F685: call 0x598750 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00782880u); /* 0x0077F68A: push 0x782880 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077F68F: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077F694: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077F695: ret  */

}

void sub_0077F6A0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077F6A0u);

L_0077F6A0:
    ecx = 0x008A2C9Cu; /* 0x0077F6A0: mov ecx, 0x8a2c9c */
    RECOMP_CALL(sub_00598750); /* 0x0077F6A5: call 0x598750 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007828C0u); /* 0x0077F6AA: push 0x7828c0 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077F6AF: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077F6B4: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077F6B5: ret  */

}

void sub_0077F6C0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077F6C0u);

L_0077F6C0:
    fp_push(*(float*)&MEM32(0x803940)); /* 0x0077F6C0: fld dword ptr [0x803940] */
    _st[0] += (double)*(float*)ADDR(0x784250); /* 0x0077F6C6: fadd dword ptr [0x784250] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8A1DE0) = _v; } /* 0x0077F6CC: fstp dword ptr [0x8a1de0] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077F6D2: ret  */

}

void sub_0077F6E0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077F6E0u);

L_0077F6E0:
    ecx = 0x008A4260u; /* 0x0077F6E0: mov ecx, 0x8a4260 */
    RECOMP_CALL(sub_00598750); /* 0x0077F6E5: call 0x598750 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00782890u); /* 0x0077F6EA: push 0x782890 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077F6EF: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077F6F4: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077F6F5: ret  */

}

void sub_0077F700(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077F700u);

L_0077F700:
    PUSH32(esp, 0x007A9408u); /* 0x0077F700: push 0x7a9408 */
    ecx = 0x008A1F28u; /* 0x0077F705: mov ecx, 0x8a1f28 */
    RECOMP_CALL(sub_0060B780); /* 0x0077F70A: call 0x60b780 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00782730u); /* 0x0077F70F: push 0x782730 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077F714: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077F719: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077F71A: ret  */

}

void sub_0077F720(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077F720u);

L_0077F720:
    PUSH32(esp, 0x004022C0u); /* 0x0077F720: push 0x4022c0 */
    PUSH32(esp, 0x00502FD0u); /* 0x0077F725: push 0x502fd0 */
    PUSH32(esp, 1); /* 0x0077F72A: push 1 */
    PUSH32(esp, 0x64u); /* 0x0077F72C: push 0x64 */
    PUSH32(esp, 0x008A42C0u); /* 0x0077F72E: push 0x8a42c0 */
    RECOMP_CALL(sub_0075C461); /* 0x0077F733: call 0x75c461 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00782820u); /* 0x0077F738: push 0x782820 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077F73D: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077F742: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077F743: ret  */

}

void sub_0077F750(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077F750u);

L_0077F750:
    PUSH32(esp, 0x007A9410u); /* 0x0077F750: push 0x7a9410 */
    ecx = 0x008A3180u; /* 0x0077F755: mov ecx, 0x8a3180 */
    RECOMP_CALL(sub_0060B7E0); /* 0x0077F75A: call 0x60b7e0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007A9410u); /* 0x0077F75F: push 0x7a9410 */
    ecx = 0x008A31B0u; /* 0x0077F764: mov ecx, 0x8a31b0 */
    RECOMP_CALL(sub_0060B7E0); /* 0x0077F769: call 0x60b7e0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00782740u); /* 0x0077F76E: push 0x782740 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077F773: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077F778: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077F779: ret  */

}

void sub_0077F780(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077F780u);

L_0077F780:
    PUSH32(esp, 0x007A9418u); /* 0x0077F780: push 0x7a9418 */
    ecx = 0x008A1E90u; /* 0x0077F785: mov ecx, 0x8a1e90 */
    RECOMP_CALL(sub_0060B7E0); /* 0x0077F78A: call 0x60b7e0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007A9418u); /* 0x0077F78F: push 0x7a9418 */
    ecx = 0x008A1EC0u; /* 0x0077F794: mov ecx, 0x8a1ec0 */
    RECOMP_CALL(sub_0060B7E0); /* 0x0077F799: call 0x60b7e0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00782760u); /* 0x0077F79E: push 0x782760 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077F7A3: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077F7A8: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077F7A9: ret  */

}

void sub_0077F7B0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077F7B0u);

L_0077F7B0:
    PUSH32(esp, 0x007A9424u); /* 0x0077F7B0: push 0x7a9424 */
    ecx = 0x008A31F0u; /* 0x0077F7B5: mov ecx, 0x8a31f0 */
    RECOMP_CALL(sub_0060B7E0); /* 0x0077F7BA: call 0x60b7e0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007A9424u); /* 0x0077F7BF: push 0x7a9424 */
    ecx = 0x008A3220u; /* 0x0077F7C4: mov ecx, 0x8a3220 */
    RECOMP_CALL(sub_0060B7E0); /* 0x0077F7C9: call 0x60b7e0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00782780u); /* 0x0077F7CE: push 0x782780 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077F7D3: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077F7D8: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077F7D9: ret  */

}

void sub_0077F7E0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077F7E0u);

L_0077F7E0:
    PUSH32(esp, 0x007A9438u); /* 0x0077F7E0: push 0x7a9438 */
    ecx = 0x008A1E30u; /* 0x0077F7E5: mov ecx, 0x8a1e30 */
    RECOMP_CALL(sub_0060B7E0); /* 0x0077F7EA: call 0x60b7e0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007A9438u); /* 0x0077F7EF: push 0x7a9438 */
    ecx = 0x008A1E60u; /* 0x0077F7F4: mov ecx, 0x8a1e60 */
    RECOMP_CALL(sub_0060B7E0); /* 0x0077F7F9: call 0x60b7e0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007827A0u); /* 0x0077F7FE: push 0x7827a0 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077F803: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077F808: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077F809: ret  */

}

void sub_0077F810(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077F810u);

L_0077F810:
    PUSH32(esp, 0x007A944Cu); /* 0x0077F810: push 0x7a944c */
    ecx = 0x008A3250u; /* 0x0077F815: mov ecx, 0x8a3250 */
    RECOMP_CALL(sub_0060B780); /* 0x0077F81A: call 0x60b780 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007A944Cu); /* 0x0077F81F: push 0x7a944c */
    ecx = 0x008A326Cu; /* 0x0077F824: mov ecx, 0x8a326c */
    RECOMP_CALL(sub_0060B780); /* 0x0077F829: call 0x60b780 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007827C0u); /* 0x0077F82E: push 0x7827c0 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077F833: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077F838: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077F839: ret  */

}

void sub_0077F840(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077F840u);

L_0077F840:
    fp_push(*(float*)&MEM32(0x7BFDF8)); /* 0x0077F840: fld dword ptr [0x7bfdf8] */
    _st[0] += _st[0]; /* 0x0077F846: fadd st(0), st(0) */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8A710C) = _v; } /* 0x0077F848: fstp dword ptr [0x8a710c] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077F84E: ret  */

}

void sub_0077F850(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077F850u);

L_0077F850:
    fp_push(*(float*)&MEM32(0x7BFDF8)); /* 0x0077F850: fld dword ptr [0x7bfdf8] */
    _st[0] *= (double)*(float*)ADDR(0x784260); /* 0x0077F856: fmul dword ptr [0x784260] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8A7108) = _v; } /* 0x0077F85C: fstp dword ptr [0x8a7108] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077F862: ret  */

}

void sub_0077F870(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077F870u);

L_0077F870:
    fp_push(*(double*)ADDR(0x7BFE00)); /* 0x0077F870: fld qword ptr [0x7bfe00] */
    _st[0] += _st[0]; /* 0x0077F876: fadd st(0), st(0) */
    { double _v = fp_pop(); *(double*)ADDR(0x8A7100) = _v; } /* 0x0077F878: fstp qword ptr [0x8a7100] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077F87E: ret  */

}

void sub_0077F880(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077F880u);

L_0077F880:
    fp_push(*(double*)ADDR(0x7BFE00)); /* 0x0077F880: fld qword ptr [0x7bfe00] */
    _st[0] *= *(double*)ADDR(0x7864E0); /* 0x0077F886: fmul qword ptr [0x7864e0] */
    { double _v = fp_pop(); *(double*)ADDR(0x8A70F8) = _v; } /* 0x0077F88C: fstp qword ptr [0x8a70f8] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077F892: ret  */

}

void sub_0077F8A0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077F8A0u);

L_0077F8A0:
    fp_push(*(float*)&MEM32(0x7BFE08)); /* 0x0077F8A0: fld dword ptr [0x7bfe08] */
    _st[0] += _st[0]; /* 0x0077F8A6: fadd st(0), st(0) */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8A713C) = _v; } /* 0x0077F8A8: fstp dword ptr [0x8a713c] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077F8AE: ret  */

}

void sub_0077F8B0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077F8B0u);

L_0077F8B0:
    fp_push(*(float*)&MEM32(0x7BFE08)); /* 0x0077F8B0: fld dword ptr [0x7bfe08] */
    _st[0] *= (double)*(float*)ADDR(0x784260); /* 0x0077F8B6: fmul dword ptr [0x784260] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8A7138) = _v; } /* 0x0077F8BC: fstp dword ptr [0x8a7138] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077F8C2: ret  */

}

void sub_0077F8D0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077F8D0u);

L_0077F8D0:
    fp_push(*(double*)ADDR(0x7BFE10)); /* 0x0077F8D0: fld qword ptr [0x7bfe10] */
    _st[0] += _st[0]; /* 0x0077F8D6: fadd st(0), st(0) */
    { double _v = fp_pop(); *(double*)ADDR(0x8A7130) = _v; } /* 0x0077F8D8: fstp qword ptr [0x8a7130] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077F8DE: ret  */

}

void sub_0077F8E0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077F8E0u);

L_0077F8E0:
    fp_push(*(double*)ADDR(0x7BFE10)); /* 0x0077F8E0: fld qword ptr [0x7bfe10] */
    _st[0] *= *(double*)ADDR(0x7864E0); /* 0x0077F8E6: fmul qword ptr [0x7864e0] */
    { double _v = fp_pop(); *(double*)ADDR(0x8A7128) = _v; } /* 0x0077F8EC: fstp qword ptr [0x8a7128] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077F8F2: ret  */

}

void sub_0077F900(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077F900u);

L_0077F900:
    ecx = 0x008A7114u; /* 0x0077F900: mov ecx, 0x8a7114 */
    RECOMP_CALL(sub_006D8360); /* 0x0077F905: call 0x6d8360 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007828D0u); /* 0x0077F90A: push 0x7828d0 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077F90F: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077F914: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077F915: ret  */

}

void sub_0077F920(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077F920u);

L_0077F920:
    ecx = 0x008A7168u; /* 0x0077F920: mov ecx, 0x8a7168 */
    RECOMP_CALL(sub_006D8360); /* 0x0077F925: call 0x6d8360 */
    RECOMP_FLAGS_IN();
    ecx = 0x008A717Cu; /* 0x0077F92A: mov ecx, 0x8a717c */
    RECOMP_CALL(sub_006D8360); /* 0x0077F92F: call 0x6d8360 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007828E0u); /* 0x0077F934: push 0x7828e0 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077F939: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077F93E: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077F93F: ret  */

}

void sub_0077F940(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077F940u);

L_0077F940:
    ecx = 0x008A7140u; /* 0x0077F940: mov ecx, 0x8a7140 */
    RECOMP_CALL(sub_006D8360); /* 0x0077F945: call 0x6d8360 */
    RECOMP_FLAGS_IN();
    ecx = 0x008A7154u; /* 0x0077F94A: mov ecx, 0x8a7154 */
    RECOMP_CALL(sub_006D8360); /* 0x0077F94F: call 0x6d8360 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007828F0u); /* 0x0077F954: push 0x7828f0 */
    RECOMP_CALL(sub_0075C5ED); /* 0x0077F959: call 0x75c5ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077F95E: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077F95F: ret  */

}

void sub_0077F960(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077F960u);

L_0077F960:
    fp_push(*(float*)&MEM32(0x7C05C0)); /* 0x0077F960: fld dword ptr [0x7c05c0] */
    _st[0] += _st[0]; /* 0x0077F966: fadd st(0), st(0) */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8A71AC) = _v; } /* 0x0077F968: fstp dword ptr [0x8a71ac] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077F96E: ret  */

}

void sub_0077F970(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077F970u);

L_0077F970:
    fp_push(*(float*)&MEM32(0x7C05C0)); /* 0x0077F970: fld dword ptr [0x7c05c0] */
    _st[0] *= (double)*(float*)ADDR(0x784260); /* 0x0077F976: fmul dword ptr [0x784260] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8A71A8) = _v; } /* 0x0077F97C: fstp dword ptr [0x8a71a8] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077F982: ret  */

}

void sub_0077F990(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077F990u);

L_0077F990:
    fp_push(*(double*)ADDR(0x7C05C8)); /* 0x0077F990: fld qword ptr [0x7c05c8] */
    _st[0] += _st[0]; /* 0x0077F996: fadd st(0), st(0) */
    { double _v = fp_pop(); *(double*)ADDR(0x8A71A0) = _v; } /* 0x0077F998: fstp qword ptr [0x8a71a0] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077F99E: ret  */

}

void sub_0077F9A0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077F9A0u);

L_0077F9A0:
    fp_push(*(double*)ADDR(0x7C05C8)); /* 0x0077F9A0: fld qword ptr [0x7c05c8] */
    _st[0] *= *(double*)ADDR(0x7864E0); /* 0x0077F9A6: fmul qword ptr [0x7864e0] */
    { double _v = fp_pop(); *(double*)ADDR(0x8A7198) = _v; } /* 0x0077F9AC: fstp qword ptr [0x8a7198] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077F9B2: ret  */

}

void sub_0077F9C0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077F9C0u);

L_0077F9C0:
    fp_push(*(float*)&MEM32(0x7C05D8)); /* 0x0077F9C0: fld dword ptr [0x7c05d8] */
    _st[0] += _st[0]; /* 0x0077F9C6: fadd st(0), st(0) */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8A71CC) = _v; } /* 0x0077F9C8: fstp dword ptr [0x8a71cc] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077F9CE: ret  */

}

void sub_0077F9D0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077F9D0u);

L_0077F9D0:
    fp_push(*(float*)&MEM32(0x7C05D8)); /* 0x0077F9D0: fld dword ptr [0x7c05d8] */
    _st[0] *= (double)*(float*)ADDR(0x784260); /* 0x0077F9D6: fmul dword ptr [0x784260] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8A71C8) = _v; } /* 0x0077F9DC: fstp dword ptr [0x8a71c8] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077F9E2: ret  */

}

void sub_0077F9F0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077F9F0u);

L_0077F9F0:
    fp_push(*(double*)ADDR(0x7C05E0)); /* 0x0077F9F0: fld qword ptr [0x7c05e0] */
    _st[0] += _st[0]; /* 0x0077F9F6: fadd st(0), st(0) */
    { double _v = fp_pop(); *(double*)ADDR(0x8A71C0) = _v; } /* 0x0077F9F8: fstp qword ptr [0x8a71c0] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077F9FE: ret  */

}

void sub_0077FA00(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077FA00u);

L_0077FA00:
    fp_push(*(double*)ADDR(0x7C05E0)); /* 0x0077FA00: fld qword ptr [0x7c05e0] */
    _st[0] *= *(double*)ADDR(0x7864E0); /* 0x0077FA06: fmul qword ptr [0x7864e0] */
    { double _v = fp_pop(); *(double*)ADDR(0x8A71B8) = _v; } /* 0x0077FA0C: fstp qword ptr [0x8a71b8] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077FA12: ret  */

}

void sub_0077FA20(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077FA20u);

L_0077FA20:
    fp_push(*(float*)&MEM32(0x7C05F0)); /* 0x0077FA20: fld dword ptr [0x7c05f0] */
    _st[0] += _st[0]; /* 0x0077FA26: fadd st(0), st(0) */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8A71E4) = _v; } /* 0x0077FA28: fstp dword ptr [0x8a71e4] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077FA2E: ret  */

}

void sub_0077FA30(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077FA30u);

L_0077FA30:
    fp_push(*(float*)&MEM32(0x7C05F0)); /* 0x0077FA30: fld dword ptr [0x7c05f0] */
    _st[0] *= (double)*(float*)ADDR(0x784260); /* 0x0077FA36: fmul dword ptr [0x784260] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8A71E0) = _v; } /* 0x0077FA3C: fstp dword ptr [0x8a71e0] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077FA42: ret  */

}

void sub_0077FA50(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077FA50u);

L_0077FA50:
    fp_push(*(double*)ADDR(0x7C05F8)); /* 0x0077FA50: fld qword ptr [0x7c05f8] */
    _st[0] += _st[0]; /* 0x0077FA56: fadd st(0), st(0) */
    { double _v = fp_pop(); *(double*)ADDR(0x8A71D8) = _v; } /* 0x0077FA58: fstp qword ptr [0x8a71d8] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077FA5E: ret  */

}

void sub_0077FA60(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077FA60u);

L_0077FA60:
    fp_push(*(double*)ADDR(0x7C05F8)); /* 0x0077FA60: fld qword ptr [0x7c05f8] */
    _st[0] *= *(double*)ADDR(0x7864E0); /* 0x0077FA66: fmul qword ptr [0x7864e0] */
    { double _v = fp_pop(); *(double*)ADDR(0x8A71D0) = _v; } /* 0x0077FA6C: fstp qword ptr [0x8a71d0] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077FA72: ret  */

}

void sub_0077FA80(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077FA80u);

L_0077FA80:
    fp_push(*(float*)&MEM32(0x7C0638)); /* 0x0077FA80: fld dword ptr [0x7c0638] */
    _st[0] += _st[0]; /* 0x0077FA86: fadd st(0), st(0) */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8A7204) = _v; } /* 0x0077FA88: fstp dword ptr [0x8a7204] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077FA8E: ret  */

}

void sub_0077FA90(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077FA90u);

L_0077FA90:
    fp_push(*(float*)&MEM32(0x7C0638)); /* 0x0077FA90: fld dword ptr [0x7c0638] */
    _st[0] *= (double)*(float*)ADDR(0x784260); /* 0x0077FA96: fmul dword ptr [0x784260] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8A7200) = _v; } /* 0x0077FA9C: fstp dword ptr [0x8a7200] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077FAA2: ret  */

}

void sub_0077FAB0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077FAB0u);

L_0077FAB0:
    fp_push(*(double*)ADDR(0x7C0640)); /* 0x0077FAB0: fld qword ptr [0x7c0640] */
    _st[0] += _st[0]; /* 0x0077FAB6: fadd st(0), st(0) */
    { double _v = fp_pop(); *(double*)ADDR(0x8A71F8) = _v; } /* 0x0077FAB8: fstp qword ptr [0x8a71f8] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077FABE: ret  */

}

void sub_0077FAC0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077FAC0u);

L_0077FAC0:
    fp_push(*(double*)ADDR(0x7C0640)); /* 0x0077FAC0: fld qword ptr [0x7c0640] */
    _st[0] *= *(double*)ADDR(0x7864E0); /* 0x0077FAC6: fmul qword ptr [0x7864e0] */
    { double _v = fp_pop(); *(double*)ADDR(0x8A71F0) = _v; } /* 0x0077FACC: fstp qword ptr [0x8a71f0] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077FAD2: ret  */

}

void sub_0077FAE0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077FAE0u);

L_0077FAE0:
    fp_push(*(float*)&MEM32(0x7C0648)); /* 0x0077FAE0: fld dword ptr [0x7c0648] */
    _st[0] += _st[0]; /* 0x0077FAE6: fadd st(0), st(0) */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8A721C) = _v; } /* 0x0077FAE8: fstp dword ptr [0x8a721c] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077FAEE: ret  */

}

void sub_0077FAF0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077FAF0u);

L_0077FAF0:
    fp_push(*(float*)&MEM32(0x7C0648)); /* 0x0077FAF0: fld dword ptr [0x7c0648] */
    _st[0] *= (double)*(float*)ADDR(0x784260); /* 0x0077FAF6: fmul dword ptr [0x784260] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8A7218) = _v; } /* 0x0077FAFC: fstp dword ptr [0x8a7218] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077FB02: ret  */

}

void sub_0077FB10(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077FB10u);

L_0077FB10:
    fp_push(*(double*)ADDR(0x7C0650)); /* 0x0077FB10: fld qword ptr [0x7c0650] */
    _st[0] += _st[0]; /* 0x0077FB16: fadd st(0), st(0) */
    { double _v = fp_pop(); *(double*)ADDR(0x8A7210) = _v; } /* 0x0077FB18: fstp qword ptr [0x8a7210] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077FB1E: ret  */

}

void sub_0077FB20(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077FB20u);

L_0077FB20:
    fp_push(*(double*)ADDR(0x7C0650)); /* 0x0077FB20: fld qword ptr [0x7c0650] */
    _st[0] *= *(double*)ADDR(0x7864E0); /* 0x0077FB26: fmul qword ptr [0x7864e0] */
    { double _v = fp_pop(); *(double*)ADDR(0x8A7208) = _v; } /* 0x0077FB2C: fstp qword ptr [0x8a7208] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077FB32: ret  */

}

void sub_0077FB40(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077FB40u);

L_0077FB40:
    fp_push(*(float*)&MEM32(0x7C0658)); /* 0x0077FB40: fld dword ptr [0x7c0658] */
    _st[0] += _st[0]; /* 0x0077FB46: fadd st(0), st(0) */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8A7304) = _v; } /* 0x0077FB48: fstp dword ptr [0x8a7304] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077FB4E: ret  */

}

void sub_0077FB50(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077FB50u);

L_0077FB50:
    fp_push(*(float*)&MEM32(0x7C0658)); /* 0x0077FB50: fld dword ptr [0x7c0658] */
    _st[0] *= (double)*(float*)ADDR(0x784260); /* 0x0077FB56: fmul dword ptr [0x784260] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8A7300) = _v; } /* 0x0077FB5C: fstp dword ptr [0x8a7300] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077FB62: ret  */

}

void sub_0077FB70(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077FB70u);

L_0077FB70:
    fp_push(*(double*)ADDR(0x7C0660)); /* 0x0077FB70: fld qword ptr [0x7c0660] */
    _st[0] += _st[0]; /* 0x0077FB76: fadd st(0), st(0) */
    { double _v = fp_pop(); *(double*)ADDR(0x8A72F8) = _v; } /* 0x0077FB78: fstp qword ptr [0x8a72f8] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077FB7E: ret  */

}

void sub_0077FB80(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077FB80u);

L_0077FB80:
    fp_push(*(double*)ADDR(0x7C0660)); /* 0x0077FB80: fld qword ptr [0x7c0660] */
    _st[0] *= *(double*)ADDR(0x7864E0); /* 0x0077FB86: fmul qword ptr [0x7864e0] */
    { double _v = fp_pop(); *(double*)ADDR(0x8A72F0) = _v; } /* 0x0077FB8C: fstp qword ptr [0x8a72f0] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077FB92: ret  */

}

void sub_0077FBA0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077FBA0u);

L_0077FBA0:
    fp_push(*(float*)&MEM32(0x7C0770)); /* 0x0077FBA0: fld dword ptr [0x7c0770] */
    _st[0] += _st[0]; /* 0x0077FBA6: fadd st(0), st(0) */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8A79DC) = _v; } /* 0x0077FBA8: fstp dword ptr [0x8a79dc] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077FBAE: ret  */

}

void sub_0077FBB0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077FBB0u);

L_0077FBB0:
    fp_push(*(float*)&MEM32(0x7C0770)); /* 0x0077FBB0: fld dword ptr [0x7c0770] */
    _st[0] *= (double)*(float*)ADDR(0x784260); /* 0x0077FBB6: fmul dword ptr [0x784260] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8A79D8) = _v; } /* 0x0077FBBC: fstp dword ptr [0x8a79d8] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077FBC2: ret  */

}

void sub_0077FBD0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077FBD0u);

L_0077FBD0:
    fp_push(*(double*)ADDR(0x7C0778)); /* 0x0077FBD0: fld qword ptr [0x7c0778] */
    _st[0] += _st[0]; /* 0x0077FBD6: fadd st(0), st(0) */
    { double _v = fp_pop(); *(double*)ADDR(0x8A79D0) = _v; } /* 0x0077FBD8: fstp qword ptr [0x8a79d0] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077FBDE: ret  */

}

void sub_0077FBE0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077FBE0u);

L_0077FBE0:
    fp_push(*(double*)ADDR(0x7C0778)); /* 0x0077FBE0: fld qword ptr [0x7c0778] */
    _st[0] *= *(double*)ADDR(0x7864E0); /* 0x0077FBE6: fmul qword ptr [0x7864e0] */
    { double _v = fp_pop(); *(double*)ADDR(0x8A79C8) = _v; } /* 0x0077FBEC: fstp qword ptr [0x8a79c8] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077FBF2: ret  */

}

void sub_0077FC00(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077FC00u);

L_0077FC00:
    PUSH32(esp, esi); /* 0x0077FC00: push esi */
    esi = MEM32(0x783138); /* 0x0077FC01: mov esi, dword ptr [0x783138] */
    PUSH32(esp, 0); /* 0x0077FC07: push 0 */
    RECOMP_ICALL(esi); /* 0x0077FC09: call esi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x7F00u); /* 0x0077FC0B: push 0x7f00 */
    PUSH32(esp, 0); /* 0x0077FC10: push 0 */
    MEM32(0x80C0CC) = eax; /* 0x0077FC12: mov dword ptr [0x80c0cc], eax */
    RECOMP_ICALL(esi); /* 0x0077FC17: call esi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x0077FC19: push eax */
    RECOMP_ICALL(MEM32(0x783338)); /* 0x0077FC1A: call dword ptr [0x783338] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x7F00u); /* 0x0077FC20: push 0x7f00 */
    PUSH32(esp, 0); /* 0x0077FC25: push 0 */
    MEM32(0x80C0D0) = eax; /* 0x0077FC27: mov dword ptr [0x80c0d0], eax */
    RECOMP_ICALL(MEM32(0x78333C)); /* 0x0077FC2C: call dword ptr [0x78333c] */
    RECOMP_FLAGS_IN();
    MEM32(0x80C0D4) = eax; /* 0x0077FC32: mov dword ptr [0x80c0d4], eax */
    MEM32(0x80C0D8) = 0; /* 0x0077FC37: mov dword ptr [0x80c0d8], 0 */
    MEM32(0x80C0DC) = 0; /* 0x0077FC41: mov dword ptr [0x80c0dc], 0 */
    MEM32(0x80C0E0) = 0x007C08ECu; /* 0x0077FC4B: mov dword ptr [0x80c0e0], 0x7c08ec */
    MEM32(0x80C0E4) = 0; /* 0x0077FC55: mov dword ptr [0x80c0e4], 0 */
    esi = POP32_VAL(esp); /* 0x0077FC5F: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077FC60: ret  */

}

void sub_0077FC70(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077FC70u);

L_0077FC70:
    fp_push(*(float*)&MEM32(0x7C0968)); /* 0x0077FC70: fld dword ptr [0x7c0968] */
    _st[0] += _st[0]; /* 0x0077FC76: fadd st(0), st(0) */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8A79F4) = _v; } /* 0x0077FC78: fstp dword ptr [0x8a79f4] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077FC7E: ret  */

}

void sub_0077FC80(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077FC80u);

L_0077FC80:
    fp_push(*(float*)&MEM32(0x7C0968)); /* 0x0077FC80: fld dword ptr [0x7c0968] */
    _st[0] *= (double)*(float*)ADDR(0x784260); /* 0x0077FC86: fmul dword ptr [0x784260] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8A79F0) = _v; } /* 0x0077FC8C: fstp dword ptr [0x8a79f0] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077FC92: ret  */

}

void sub_0077FCA0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077FCA0u);

L_0077FCA0:
    fp_push(*(double*)ADDR(0x7C0970)); /* 0x0077FCA0: fld qword ptr [0x7c0970] */
    _st[0] += _st[0]; /* 0x0077FCA6: fadd st(0), st(0) */
    { double _v = fp_pop(); *(double*)ADDR(0x8A79E8) = _v; } /* 0x0077FCA8: fstp qword ptr [0x8a79e8] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077FCAE: ret  */

}

void sub_0077FCB0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077FCB0u);

L_0077FCB0:
    fp_push(*(double*)ADDR(0x7C0970)); /* 0x0077FCB0: fld qword ptr [0x7c0970] */
    _st[0] *= *(double*)ADDR(0x7864E0); /* 0x0077FCB6: fmul qword ptr [0x7864e0] */
    { double _v = fp_pop(); *(double*)ADDR(0x8A79E0) = _v; } /* 0x0077FCBC: fstp qword ptr [0x8a79e0] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077FCC2: ret  */

}

void sub_0077FCD0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077FCD0u);

L_0077FCD0:
    fp_push(*(float*)&MEM32(0x7C0980)); /* 0x0077FCD0: fld dword ptr [0x7c0980] */
    _st[0] += _st[0]; /* 0x0077FCD6: fadd st(0), st(0) */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8A7A0C) = _v; } /* 0x0077FCD8: fstp dword ptr [0x8a7a0c] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077FCDE: ret  */

}

void sub_0077FCE0(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077FCE0u);

L_0077FCE0:
    fp_push(*(float*)&MEM32(0x7C0980)); /* 0x0077FCE0: fld dword ptr [0x7c0980] */
    _st[0] *= (double)*(float*)ADDR(0x784260); /* 0x0077FCE6: fmul dword ptr [0x784260] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8A7A08) = _v; } /* 0x0077FCEC: fstp dword ptr [0x8a7a08] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077FCF2: ret  */

}

void sub_0077FD00(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077FD00u);

L_0077FD00:
    fp_push(*(double*)ADDR(0x7C0988)); /* 0x0077FD00: fld qword ptr [0x7c0988] */
    _st[0] += _st[0]; /* 0x0077FD06: fadd st(0), st(0) */
    { double _v = fp_pop(); *(double*)ADDR(0x8A7A00) = _v; } /* 0x0077FD08: fstp qword ptr [0x8a7a00] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077FD0E: ret  */

}

void sub_0077FD10(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077FD10u);

L_0077FD10:
    fp_push(*(double*)ADDR(0x7C0988)); /* 0x0077FD10: fld qword ptr [0x7c0988] */
    _st[0] *= *(double*)ADDR(0x7864E0); /* 0x0077FD16: fmul qword ptr [0x7864e0] */
    { double _v = fp_pop(); *(double*)ADDR(0x8A79F8) = _v; } /* 0x0077FD1C: fstp qword ptr [0x8a79f8] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077FD22: ret  */

}

void sub_0077FD30(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077FD30u);

L_0077FD30:
    fp_push(*(float*)&MEM32(0x7C0998)); /* 0x0077FD30: fld dword ptr [0x7c0998] */
    _st[0] += _st[0]; /* 0x0077FD36: fadd st(0), st(0) */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8A7AA4) = _v; } /* 0x0077FD38: fstp dword ptr [0x8a7aa4] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077FD3E: ret  */

}

void sub_0077FD40(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077FD40u);

L_0077FD40:
    fp_push(*(float*)&MEM32(0x7C0998)); /* 0x0077FD40: fld dword ptr [0x7c0998] */
    _st[0] *= (double)*(float*)ADDR(0x784260); /* 0x0077FD46: fmul dword ptr [0x784260] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x8A7AA0) = _v; } /* 0x0077FD4C: fstp dword ptr [0x8a7aa0] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077FD52: ret  */

}

void sub_0077FD60(void) {
    int _fpu_cmp = 0;
    uint32_t _cf = 0;  /* carry flag */
    int _df = 1;  /* direction flag (1=forward, -1=backward) */
    uint32_t _flag_a = 0, _flag_b = 0;  /* flag-operand snapshots */
    uint32_t _flag_k = FK_NONE;  /* which instruction wrote them */
    /* _st[8]/_fp_top/_fpu_cw are GLOBAL (shared x87 stack) */
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077FD60u);

L_0077FD60:
    fp_push(*(double*)ADDR(0x7C09A0)); /* 0x0077FD60: fld qword ptr [0x7c09a0] */
    _st[0] += _st[0]; /* 0x0077FD66: fadd st(0), st(0) */
    { double _v = fp_pop(); *(double*)ADDR(0x8A7A98) = _v; } /* 0x0077FD68: fstp qword ptr [0x8a7a98] */
    RECOMP_FLAGS_OUT(); esp += 4; RECOMP_RETURN(); /* 0x0077FD6E: ret  */

}