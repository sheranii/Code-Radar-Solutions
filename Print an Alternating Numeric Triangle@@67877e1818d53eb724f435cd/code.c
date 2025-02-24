#include<stdio.h>
int main(){
    int i;
    int n;
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            printf("%d ",(i+j+1)%2);
        }
        printf("\n");
    }
}