#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for (int i=1; i<=n;i++){
        for(char j='A'; j< 'A' +n; j++){
            printf("%c",j);
        }
    }
    printf("\n");
}