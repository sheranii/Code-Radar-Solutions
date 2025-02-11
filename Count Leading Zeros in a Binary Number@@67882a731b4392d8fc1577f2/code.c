#include<stdio.h>
int main(){
    unsigned int num;
    scanf("%u",&num);
    int leading_zeroes = _builtin_clz(num);
    printf("%d \n", leading_zeroes);
    return 0;
}
