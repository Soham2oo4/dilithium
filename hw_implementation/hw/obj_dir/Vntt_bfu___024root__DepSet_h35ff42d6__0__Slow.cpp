// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vntt_bfu.h for the primary calling header

#include "Vntt_bfu__pch.h"
#include "Vntt_bfu__Syms.h"
#include "Vntt_bfu___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vntt_bfu___024root___dump_triggers__stl(Vntt_bfu___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vntt_bfu___024root___eval_triggers__stl(Vntt_bfu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vntt_bfu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vntt_bfu___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vntt_bfu___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
