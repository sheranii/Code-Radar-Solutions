#include <stdio.h>
int countTrailingZeros(int n) {
    if (n == 0) {
        return 0;
    }
    int count = 0;
    while ((n & 1)== 0) {  
        count++;  
        n>>=1;
    }
    return count;
}
int main() {
    int num ;
    scanf("%d", &num);
    int leadingZeros = countTrailingZeros(num);
    printf("%d \n",leadingZeros);
return 0;
}
