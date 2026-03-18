// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vintt_full.h for the primary calling header

#include "Vintt_full__pch.h"
#include "Vintt_full__Syms.h"
#include "Vintt_full___024root.h"

void Vintt_full___024root___ctor_var_reset(Vintt_full___024root* vlSelf);

Vintt_full___024root::Vintt_full___024root(Vintt_full__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vintt_full___024root___ctor_var_reset(this);
}

void Vintt_full___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vintt_full___024root::~Vintt_full___024root() {
}
