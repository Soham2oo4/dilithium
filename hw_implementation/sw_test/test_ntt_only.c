#include <stdio.h>
#include <stdint.h>
#include "params.h"
#include "ntt_hw.h"
#include "ntt.h"

int main() {
    int32_t a[256];

    a[0] = 1;
    a[1] = 2;
    for (int i = 2; i < 256; i++) {
        a[i] = 0;
    }

    printf("Running HW NTT...\n");
    ntt_hw(a);

    for (int i = 0; i < 256; i++) {
        printf("a[%d] = %d\n", i, a[i]);
    }

    printf("Running SW NTT...\n");


    a[0] = 1;
    a[1] = 2;
    for (int i = 2; i < 256; i++) {
        a[i] = 0;
    }
    ntt(a);


    for (int i = 0; i < 256; i++) {
        printf("a[%d] = %d\n", i, a[i]);
    }

    return 0;
}
