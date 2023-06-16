#include <stdio.h>
#include <stdint.h>

void printExponent(double x) {
    union {
        double d;
        uint64_t u;
    } convert;

    convert.d = x;
    uint64_t bits = convert.u;

    uint16_t exponentBits = (bits >> 52) & 0x7FF;
    uint16_t exponentHex = exponentBits - 1023;

    printf("Exponent in hexadecimal: 0x%X\n", exponentHex);

    printf("Exponent in binary: 0b");
    for (int i = 10; i >= 0; i--) {
        printf("%d", (exponentBits >> i) & 1);
    }
    printf("\n");
}

int main() {
    double x = 0.7;
    printExponent(x);

    return 0;
}

