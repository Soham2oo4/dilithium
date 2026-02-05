// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_ntt_bfu.h for the primary calling header

#include "Vtb_ntt_bfu__pch.h"
#include "Vtb_ntt_bfu__Syms.h"
#include "Vtb_ntt_bfu___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_ntt_bfu___024root___dump_triggers__act(Vtb_ntt_bfu___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_ntt_bfu___024root___eval_triggers__act(Vtb_ntt_bfu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_ntt_bfu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ntt_bfu___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, vlSelf->__VdlySched.awaitingCurrentTime());
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_ntt_bfu___024root___dump_triggers__act(vlSelf);
    }
#endif
}
