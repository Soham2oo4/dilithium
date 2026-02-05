// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vntt_bfu.h for the primary calling header

#include "Vntt_bfu__pch.h"
#include "Vntt_bfu__Syms.h"
#include "Vntt_bfu___024root.h"

void Vntt_bfu___024root___ctor_var_reset(Vntt_bfu___024root* vlSelf);

Vntt_bfu___024root::Vntt_bfu___024root(Vntt_bfu__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vntt_bfu___024root___ctor_var_reset(this);
}

void Vntt_bfu___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vntt_bfu___024root::~Vntt_bfu___024root() {
}
