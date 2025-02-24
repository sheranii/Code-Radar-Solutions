#include<stdio.h>
iint main(){
    int i;
    int n;
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        for(int j=n; j>=i; j--){
            printf("%c",i);
        }
        printf("\n");
    }
}