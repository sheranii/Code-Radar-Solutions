#include <stdio.h>

int main(){
    int x ; 
    scanf("%d" , &x);
    (x && (1<<32)) ? printf("Set") : printf("Not Set");
    return 0;
}