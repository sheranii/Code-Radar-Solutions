#include <stdio.h>
int main(){
    char a;
    scanf("%c",&a);
    if(a>='A' && b<='Z'){
        printf("Uppercase");
    }
    else if(a>='a' && b<='z'){
        printf("Lowercase");
    }
    else{
        printf("Not an alphabet");
    }
}