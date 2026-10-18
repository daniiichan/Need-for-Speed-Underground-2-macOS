/*
 * recomp_simd.h - the SSE register file and helpers behind tools/lift/simd32.py.
 *
 * Included by recomp_types.h. One V128 type serves both register files: an
 * MMX operand is a V128 whose high quadword is ignored, so every packed
 * integer op is written once and works at 64 or 128 bits.
 *
 * Memory goes through ADDR() like every other lifted access, with memcpy so an
 * unaligned m128 (movups) is fine and no host alignment rule is assumed -- the
 * same code has to compile for ARM64, where the guest image is not at its VA.
 */
#ifndef RECOMP_SIMD_H
#define RECOMP_SIMD_H
#include <stdint.h>
#include <string.h>
#include <math.h>

typedef union {
    float    f32[4];
    double   f64[2];
    uint8_t  u8[16];
    int8_t   i8[16];
    uint16_t u16[8];
    int16_t  i16[8];
    uint32_t u32[4];
    int32_t  i32[4];
    uint64_t u64[2];
    int64_t  i64[2];
} V128;

extern V128     g_xmm[8];
extern uint32_t g_mxcsr;          /* only the rounding field (bits 13-14) is honoured */

static inline V128 v128_q(uint64_t q) { V128 v; v.u64[0] = q; v.u64[1] = 0; return v; }
static inline V128 v128_d(uint32_t d) { V128 v; memset(&v, 0, sizeof v); v.u32[0] = d; return v; }

static inline V128     rdv128(uint32_t va) { V128 v; memcpy(&v, (const void *)ADDR(va), 16); return v; }
static inline void     wrv128(uint32_t va, V128 v) { memcpy((void *)ADDR(va), &v, 16); }
static inline uint64_t rdm64(uint32_t va) { uint64_t v; memcpy(&v, (const void *)ADDR(va), 8); return v; }
static inline void     wrm64(uint32_t va, uint64_t v) { memcpy((void *)ADDR(va), &v, 8); }
static inline uint32_t rdm32(uint32_t va) { uint32_t v; memcpy(&v, (const void *)ADDR(va), 4); return v; }
static inline void     wrm32(uint32_t va, uint32_t v) { memcpy((void *)ADDR(va), &v, 4); }
static inline float    rdmf32(uint32_t va) { float v; memcpy(&v, (const void *)ADDR(va), 4); return v; }
static inline double   rdmf64(uint32_t va) { double v; memcpy(&v, (const void *)ADDR(va), 8); return v; }

/* Saturation, the lane's own range. The sum or difference is computed a width
 * up, so the clamp can see the overflow. */
static inline int32_t simd_sat_i8 (int32_t v) { return v > 127 ? 127 : v < -128 ? -128 : v; }
static inline int32_t simd_sat_u8 (int32_t v) { return v > 255 ? 255 : v < 0 ? 0 : v; }
static inline int32_t simd_sat_i16(int32_t v) { return v > 32767 ? 32767 : v < -32768 ? -32768 : v; }
static inline int32_t simd_sat_u16(int32_t v) { return v > 65535 ? 65535 : v < 0 ? 0 : v; }

/* float -> int32. Out of range (and NaN) is the "integer indefinite" value
 * 0x80000000, where a C cast is undefined behaviour. */
static inline int32_t simd_cvtt_i32(double v) {
    return (v >= -2147483648.0 && v < 2147483648.0) ? (int32_t)v : (int32_t)0x80000000;
}
static inline int32_t simd_cvt_i32(double v) {
    double r;
    switch ((g_mxcsr >> 13) & 3) {
    case 0:  /* to nearest, ties to even -- computed, not taken from the host's mode */
             r = floor(v + 0.5);
             if (r - v == 0.5 && fmod(r, 2.0) != 0.0) r -= 1.0;
             break;
    case 1:  r = floor(v); break;
    case 2:  r = ceil(v); break;
    default: r = trunc(v); break;
    }
    return simd_cvtt_i32(r);
}

/* (U)COMISS/SD: an EFLAGS image for the lifter's FK_EFLAGS state.
 * unordered ZF=PF=CF=1; less CF=1; equal ZF=1; OF/SF/AF cleared. */
static inline uint32_t simd_comi_eflags(double a, double b) {
    if (a != a || b != b) return 0x45u;
    if (a < b) return 0x01u;
    if (a == b) return 0x40u;
    return 0u;
}

#endif
