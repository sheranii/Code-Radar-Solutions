#include <stdio.h>

int main(){
    int x ; 
    scanf("%d" , &x);
    (x & (1<<31)) ? printf("Set") : printf("Not Set");
    return 0;
}