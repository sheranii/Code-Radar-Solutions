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
        printf("%d",a+b);
        break;
        case '-':
        printf("%d",a-b);
        break;
        case '*':
        printf("%d",a*b);
        break;
        case '/':
        if(b==0){
            printf("error");
        } else if(a%b!=0){
            printf("error");
        }
        else{
            printf("%d",a/b);
        }
        break;
        default:
        printf("error");
        
}
}
