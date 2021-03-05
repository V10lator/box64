/*****************************************************************
 * File automatically generated by rebuild_wrappers.py (v1.2.0.09)
 *****************************************************************/
#ifndef __WRAPPER_H_
#define __WRAPPER_H_
#include <stdint.h>
#include <string.h>

typedef struct x64emu_s x64emu_t;

// the generic wrapper pointer functions
typedef void (*wrapper_t)(x64emu_t* emu, uintptr_t fnc);

// list of defined wrapper
// v = void, i = int32, u = uint32, U/I= (u)int64
// l = signed long, L = unsigned long (long is an int with the size of a pointer)
// p = pointer, P = callback
// f = float, d = double, D = long double, K = fake long double
// V = vaargs, E = current x86emu struct, e = ref to current x86emu struct
// 0 = constant 0, 1 = constant 1
// o = stdout
// C = unsigned byte c = char
// W = unsigned short w = short
// O = libc O_ flags bitfield
// S = _IO_2_1_stdXXX_ pointer (or FILE*)
// Q = ...
// 2 = struct of 2 uint
// P = Vulkan struture pointer
// G = a single GValue pointer
// N = ... automatically sending 1 arg
// M = ... automatically sending 2 args

void vFE(x64emu_t *emu, uintptr_t fnc);
void vFv(x64emu_t *emu, uintptr_t fnc);
void vFp(x64emu_t *emu, uintptr_t fnc);
void iFE(x64emu_t *emu, uintptr_t fnc);
void iFi(x64emu_t *emu, uintptr_t fnc);
void iFu(x64emu_t *emu, uintptr_t fnc);
void iFp(x64emu_t *emu, uintptr_t fnc);
void IFp(x64emu_t *emu, uintptr_t fnc);
void dFp(x64emu_t *emu, uintptr_t fnc);
void lFp(x64emu_t *emu, uintptr_t fnc);
void LFv(x64emu_t *emu, uintptr_t fnc);
void pFE(x64emu_t *emu, uintptr_t fnc);
void pFp(x64emu_t *emu, uintptr_t fnc);
void vFEp(x64emu_t *emu, uintptr_t fnc);
void vFpp(x64emu_t *emu, uintptr_t fnc);
void iFEp(x64emu_t *emu, uintptr_t fnc);
void iFip(x64emu_t *emu, uintptr_t fnc);
void iFup(x64emu_t *emu, uintptr_t fnc);
void iFLL(x64emu_t *emu, uintptr_t fnc);
void iFLp(x64emu_t *emu, uintptr_t fnc);
void pFEp(x64emu_t *emu, uintptr_t fnc);
void pFLL(x64emu_t *emu, uintptr_t fnc);
void vFEpu(x64emu_t *emu, uintptr_t fnc);
void iFEpp(x64emu_t *emu, uintptr_t fnc);
void iFEpV(x64emu_t *emu, uintptr_t fnc);
void iFpiu(x64emu_t *emu, uintptr_t fnc);
void pFEpi(x64emu_t *emu, uintptr_t fnc);
void pFEpp(x64emu_t *emu, uintptr_t fnc);
void vFEpup(x64emu_t *emu, uintptr_t fnc);
void iFEupp(x64emu_t *emu, uintptr_t fnc);
void iFEpip(x64emu_t *emu, uintptr_t fnc);
void iFEppp(x64emu_t *emu, uintptr_t fnc);
void iFuipp(x64emu_t *emu, uintptr_t fnc);
void pFEppi(x64emu_t *emu, uintptr_t fnc);
void pFEppp(x64emu_t *emu, uintptr_t fnc);
void iFEpppp(x64emu_t *emu, uintptr_t fnc);
void iFipppi(x64emu_t *emu, uintptr_t fnc);
void iFEpippppp(x64emu_t *emu, uintptr_t fnc);

void iFEv(x64emu_t *emu, uintptr_t fnc);
void pFEv(x64emu_t *emu, uintptr_t fnc);

#endif //__WRAPPER_H_
