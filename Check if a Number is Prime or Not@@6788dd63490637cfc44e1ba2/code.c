#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    
    // Handle edge cases
    if (a <= 1) {
        printf("Not Prime");
        return 0;
    }

    // Check divisibility from 2 to sqrt(a)
    int is_prime = 1;
    for (int i = 2; i * i <= a; i++) {
        if (a % i == 0) {
            is_prime = 0;  // Not prime
            break;
        }
    }
    if (is_prime) {
        printf("Prime");
    } else {
        printf("Not Prime");
    }

    return 0;
}

