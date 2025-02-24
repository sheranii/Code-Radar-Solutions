#include<stdio.h>
int main(){
    int i;
    int n;
    scanf("%d",&n);
    char c= 'A';
    for(i=5; i>=n; i--){
        for(int j=1; j<=i; j++){
            printf("%c",c+j-1);
        }
        printf("\n");
    }
}