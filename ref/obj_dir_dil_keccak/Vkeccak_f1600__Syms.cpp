// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vkeccak_f1600__pch.h"
#include "Vkeccak_f1600.h"
#include "Vkeccak_f1600___024root.h"
#include "Vkeccak_f1600___024unit.h"

// FUNCTIONS
Vkeccak_f1600__Syms::~Vkeccak_f1600__Syms()
{
}

Vkeccak_f1600__Syms::Vkeccak_f1600__Syms(VerilatedContext* contextp, const char* namep, Vkeccak_f1600* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(246146);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
