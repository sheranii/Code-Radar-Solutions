#include <stdio.h>
#include <math.h>

int main() {
    int a, i;
    scanf("%d", &a);

    if (a <= 1) {
        printf("Not Prime");
        return 0;
    }

    // Loop from 2 to sqrt(a), cast sqrt(a) to an int
    for (i = 2; i <= (int)sqrt(a); i++) {
        if (a % i == 0) {
            printf("Not Prime");
            return 0;
        }
    }

    printf("Prime");
    return 0;
}

