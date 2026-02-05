// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VNTT_BFU__SYMS_H_
#define VERILATED_VNTT_BFU__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vntt_bfu.h"

// INCLUDE MODULE CLASSES
#include "Vntt_bfu___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vntt_bfu__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vntt_bfu* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vntt_bfu___024root             TOP;

    // CONSTRUCTORS
    Vntt_bfu__Syms(VerilatedContext* contextp, const char* namep, Vntt_bfu* modelp);
    ~Vntt_bfu__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
