#include<stdio.h>
int main(){
    int i;
    int n;
    int m=1;
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            printf("%d ",m);
            m++;
        }
        printf("\n");
    }
}