#include <stdio.h>
#define  BITS sizeof( unsigned int)*16

int main(){
     unsigned int a;
     unsigned int msb;
    scanf("%u",&a);
    msb=1<<(BITS-1);
    if ((num & msb)==1){
        printf("Set");
    }
    else{
        printf("Not Set");
    }


}