#include <stdio.h>

int main() {
    int x, N;
    scanf("%d", &N);  // Take input for N
    
    // Printing multiplication table
    for (x = 1; x <= 10; x++) {
        printf("%d X %d = %d\n", N, x, N * x);
    }

    return 0;
}
