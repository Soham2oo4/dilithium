// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_ntt_bfu.h for the primary calling header

#include "Vtb_ntt_bfu__pch.h"
#include "Vtb_ntt_bfu__Syms.h"
#include "Vtb_ntt_bfu___024root.h"

void Vtb_ntt_bfu___024root___ctor_var_reset(Vtb_ntt_bfu___024root* vlSelf);

Vtb_ntt_bfu___024root::Vtb_ntt_bfu___024root(Vtb_ntt_bfu__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_ntt_bfu___024root___ctor_var_reset(this);
}

void Vtb_ntt_bfu___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_ntt_bfu___024root::~Vtb_ntt_bfu___024root() {
}
