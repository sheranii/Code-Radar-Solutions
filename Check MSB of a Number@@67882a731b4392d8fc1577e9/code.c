#include <stdio.h>
#define bits sizeof(int)*8

int main(){
    int a;
    int msb;
    scanf("%d",&a);
    msb=1<<(bits-1);
    if (num & msb){
        printf("Set");
    }
    else{
        printf("Not Set");
    }


}