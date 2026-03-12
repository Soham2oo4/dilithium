// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VNTT_FULL__SYMS_H_
#define VERILATED_VNTT_FULL__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vntt_full.h"

// INCLUDE MODULE CLASSES
#include "Vntt_full___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vntt_full__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vntt_full* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vntt_full___024root            TOP;

    // CONSTRUCTORS
    Vntt_full__Syms(VerilatedContext* contextp, const char* namep, Vntt_full* modelp);
    ~Vntt_full__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
