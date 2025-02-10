#include <stdio.h>

int countLeadingZeros(unsigned int n) {
    int count = 0;

    // If n is zero, all 32 bits are leading zeros
    if (n == 0) return 32;

    // Shift the number to the right until it becomes non-zero
    while ((n & (1 << 31)) == 0) {
        n <<= 1;  // Shift left by 1
        count++;  // Increment the count for each leading zero
    }

    return count;
}

int main() {
    unsigned int num = 18;  // Example number
    int leadingZeros = countLeadingZeros(num);

    printf("%d ",leadingZeros);

    return 0;
}
