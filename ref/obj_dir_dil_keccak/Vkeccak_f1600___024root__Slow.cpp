// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vkeccak_f1600.h for the primary calling header

#include "Vkeccak_f1600__pch.h"
#include "Vkeccak_f1600__Syms.h"
#include "Vkeccak_f1600___024root.h"

void Vkeccak_f1600___024root___ctor_var_reset(Vkeccak_f1600___024root* vlSelf);

Vkeccak_f1600___024root::Vkeccak_f1600___024root(Vkeccak_f1600__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vkeccak_f1600___024root___ctor_var_reset(this);
}

void Vkeccak_f1600___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vkeccak_f1600___024root::~Vkeccak_f1600___024root() {
}
