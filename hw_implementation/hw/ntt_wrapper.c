#include <stdint.h>

// Forward declarations of the plain functions in ../ntt.c
void ntt(int32_t a[256]);
void invntt_tomont(int32_t a[256]);

// Namespaced wrappers expected by the testbench
void pqcrystals_dilithium2_ref_ntt(int32_t a[256]) {
    ntt(a);
}

void pqcrystals_dilithium2_ref_invntt_tomont(int32_t a[256]) {
    invntt_tomont(a);
}
