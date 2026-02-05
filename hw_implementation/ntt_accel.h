#ifndef NTT_ACCEL_H
#define NTT_ACCEL_H
#include "ntt.h"   

#include <stdint.h>
#include "params.h"

#ifdef USE_HW
void ntt_hw(int32_t a[N]);
#define ntt_accel ntt_hw
#else
void ntt(int32_t a[N]);   // Dilithium SW
#define ntt_accel ntt
#endif

#endif
