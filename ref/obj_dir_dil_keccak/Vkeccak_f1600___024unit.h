// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vkeccak_f1600.h for the primary calling header

#ifndef VERILATED_VKECCAK_F1600___024UNIT_H_
#define VERILATED_VKECCAK_F1600___024UNIT_H_  // guard

#include "verilated.h"


class Vkeccak_f1600__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vkeccak_f1600___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vkeccak_f1600__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vkeccak_f1600___024unit(Vkeccak_f1600__Syms* symsp, const char* v__name);
    ~Vkeccak_f1600___024unit();
    VL_UNCOPYABLE(Vkeccak_f1600___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
