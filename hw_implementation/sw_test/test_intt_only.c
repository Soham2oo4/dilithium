#include <stdio.h>
#include <stdint.h>
#include "params.h"
#include "ntt.h"
#include "reduce.h"

int main() {
    int32_t a[256];

    // Example input
    for(int i = 0; i < 256; i++) {
        a[i] = (i == 0) ? 1 : 0;   // delta input
    }

    printf("INPUT:\n");
    for(int i = 0; i < 256; i++) {
        printf("a[%d] = %d\n", i, a[i]);
    }

    // Run INTT
    invntt_tomont(a);

    printf("\nAfter INTT (Montgomery domain):\n");
    for(int i = 0; i < 256; i++) {
        printf("a[%d] = %d\n", i, a[i]);
    }

    return 0;
}