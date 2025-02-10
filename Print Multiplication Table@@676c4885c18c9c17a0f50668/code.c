#include <stdio.h>
int main(){
    int x,N;
    scanf("%d",&N);
    for (x=0;x<=10;x++){
        printf("%d X %d = %d\n",N,x,N*x);
    }
    return 0;
}
