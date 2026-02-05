#include <stdio.h>
#include <stdint.h>
#include "params.h"
#include "ntt.h"
/* Hardware stub */
void ntt_hw(int32_t *a) {
    printf("[HW] NTT accelerator invoked\n");

    /* For now, just call software */
    extern void ntt(int32_t a[N]);
    ntt(a);
}
