#include <stdio.h>
int main(){
    char a;
    scanf("%C",&a);
    switch(a){
        case 'A':
        printf("Excellent");
        break;
        case 'B':
        printf("Good");
        break;
        case 'C':
        printf("Average");
        break;
        case 'D':
        printf("Below Average");
        break;
        case 'F':
        printf("Fail");
        break;
        default:
        printf("invalid grade");
        break;
    }
    
    
    }