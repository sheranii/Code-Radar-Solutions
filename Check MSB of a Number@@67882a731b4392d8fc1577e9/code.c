#include <stdio.h>
#define  BITS sizeof(int)*8

int main(){
     unsigned int a;
     unsigned int msb;
    scanf("%u",&a);
    msb=1<<(BITS-1);
    if (num & msb){
        printf("Set");
    }
    else{
        printf("Not Set");
    }


}