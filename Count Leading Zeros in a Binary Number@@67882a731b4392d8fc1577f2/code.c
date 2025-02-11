#include <stdio.h>
int countLeadingZeros(int n) {
    int count = 0;
    if (n == 0) {
        return 0;
    }
    while ((n & 1)== 0) {  
        count++;  
        n>>=1;
    }
    return count;
}
int main() {
    int num ;
    scanf("%d", &num);
    int leadingZeros = countLeadingZeros(num);
    printf("%d ",leadingZeros);
return 0;
}
