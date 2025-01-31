#include <stdio.h>
int main(){
    int a;
    int b;
    char c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%c",&c);
    switch(c){
        case '+':
        printf("%d + %d= %d",a,b,a+b);
        break;
        case '-':
        printf("%d -%d =%d",a,b,a-b);
        break;
        case '*':
        printf("%d * %d= %d",a,b,a*b);
        break;
        case '/':
        if(b!=0){
            printf("%d / %d=%d",a,b,a/b);
        } else{
            printf("error");
        }
        break;
        default:
        printf("error");
        
}
}
