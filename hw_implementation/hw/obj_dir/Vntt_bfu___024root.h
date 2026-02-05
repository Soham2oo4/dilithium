// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vntt_bfu.h for the primary calling header

#ifndef VERILATED_VNTT_BFU___024ROOT_H_
#define VERILATED_VNTT_BFU___024ROOT_H_  // guard

#include "verilated.h"


class Vntt_bfu__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vntt_bfu___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    VL_IN(a,31,0);
    VL_IN(b,31,0);
    VL_IN(zeta,31,0);
    VL_OUT(a_out,31,0);
    VL_OUT(b_out,31,0);
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vntt_bfu__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vntt_bfu___024root(Vntt_bfu__Syms* symsp, const char* v__name);
    ~Vntt_bfu___024root();
    VL_UNCOPYABLE(Vntt_bfu___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
