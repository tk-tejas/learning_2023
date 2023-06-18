#include <stdio.h>

void printing_bits(unsigned int n) {
    // Number of bits in an unsigned int
    int nBits = sizeof(unsigned int) * 8;

    // Loop through each bit position from left to right
    for (int i = nBits - 1; i >= 0; i--) {
        // Check if the current bit is set (1) or unset (0)
        unsigned int mask = 1 << i;
        int bit = (n & mask) ? 1 : 0;

        // Print the bit
        printf("%d", bit);

        // Add spacing for better readability
        if (i % 8 == 0) {
            printf(" ");
        }
    }

    printf("\n");
}

int main() {
    unsigned int n;

    printf("Enter a 32-bit integer: ");
    scanf("%u", &n);

    printf("Bits: ");
    printing_bits(n);

    return 0;
}

