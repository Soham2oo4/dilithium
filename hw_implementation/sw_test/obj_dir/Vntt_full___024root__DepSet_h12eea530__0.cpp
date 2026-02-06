// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vntt_full.h for the primary calling header

#include "Vntt_full__pch.h"
#include "Vntt_full__Syms.h"
#include "Vntt_full___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vntt_full___024root___dump_triggers__ico(Vntt_full___024root* vlSelf);
#endif  // VL_DEBUG

void Vntt_full___024root___eval_triggers__ico(Vntt_full___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vntt_full__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vntt_full___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vntt_full___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vntt_full___024root___dump_triggers__act(Vntt_full___024root* vlSelf);
#endif  // VL_DEBUG

void Vntt_full___024root___eval_triggers__act(Vntt_full___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vntt_full__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vntt_full___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))));
    vlSelf->__VactTriggered.set(1U, (((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))) 
                                     | ((IData)(vlSelf->rst) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__rst__0)))));
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__rst__0 = vlSelf->rst;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vntt_full___024root___dump_triggers__act(vlSelf);
    }
#endif
}
