// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VINTT_FULL__SYMS_H_
#define VERILATED_VINTT_FULL__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vintt_full.h"

// INCLUDE MODULE CLASSES
#include "Vintt_full___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vintt_full__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vintt_full* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vintt_full___024root           TOP;

    // CONSTRUCTORS
    Vintt_full__Syms(VerilatedContext* contextp, const char* namep, Vintt_full* modelp);
    ~Vintt_full__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
