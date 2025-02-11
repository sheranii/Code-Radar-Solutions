#include <stdio.h>
#include <math.h>
int main() {
    int a, i;
    scanf("%d", &a);
    if (a <= 1) {
        printf("Not Prime");
        return 0;
    }
    for (i = 2; i <= sqrt(a); i++) {
        if (a % i == 0) {
            printf("Not Prime");
            return 0;
        }
    }
    printf("Prime");
    return 0;
}
