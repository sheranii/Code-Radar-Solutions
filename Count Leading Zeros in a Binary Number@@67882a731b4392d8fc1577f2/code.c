#include <stdio.h>
int countLeadingZeros(unsigned int n) {
    int count = 0;
    if (n == 0) return 32;
    while ((n & (1 << 31)) == 0) {
        n <<= 1;  
        count++;  
    }
    return count;
}
int main() {
    unsigned int num ;
    scanf("%d", num);
    int leadingZeros = countLeadingZeros(num);
    printf("%d ",leadingZeros);
return 0;
}
