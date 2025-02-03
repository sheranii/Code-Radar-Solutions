#include <stdio.h>
int main(){
    bits=8;
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