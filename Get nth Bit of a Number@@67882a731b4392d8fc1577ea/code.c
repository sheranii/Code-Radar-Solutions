#include <stdio.h>
int main(){
    int num;
    int n;
    n=0 | n=1;
    scanf("%d",&num);
    scanf("%d",&n);
    int bitstatus;
    bitstatus=(num>>1)&1;
    printf("%d",bitstatus);
}