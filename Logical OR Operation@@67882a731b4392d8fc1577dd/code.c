#include <stdio.h>
int main(){
    int a;
    int b;
    scanf("%d",&a);
    scanf("%b",&b);
    if(a<0 || b<0){
        printf("True");
    } 
    else{
        printf("False");
    }
}