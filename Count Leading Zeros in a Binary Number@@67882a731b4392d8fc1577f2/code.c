#include<stdio.h>

int main(){
    unsigned int num;
    scanf("%u",&num);
    int leading_zeros = __builtin_clz(num);
    printf("%d", leading_zeros);
    return 0;
}
