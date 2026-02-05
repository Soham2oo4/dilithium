// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vntt_bfu.h for the primary calling header

#include "Vntt_bfu__pch.h"
#include "Vntt_bfu__Syms.h"
#include "Vntt_bfu___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vntt_bfu___024root___dump_triggers__act(Vntt_bfu___024root* vlSelf);
#endif  // VL_DEBUG

void Vntt_bfu___024root___eval_triggers__act(Vntt_bfu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vntt_bfu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vntt_bfu___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, vlSelf->__VdlySched.awaitingCurrentTime());
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vntt_bfu___024root___dump_triggers__act(vlSelf);
    }
#endif
}
