#include<stdio.h>
int main(){
    unsigned int num;
    scanf("%u",&num);
    int leading_zeros = _builtin_clz(num);
    printf("%d\n", leading_zeros);
    return 0;
}
