#include <stdio.h>
int main(){
    int a;
    int b;
    scanf("%d",&a);
    scanf("%d",&b);
    if(a>=18 && ((b==1) || (b==0))){
        printf("Eligible");
    }
    else{
        printf("Not Eligible");
    }
}