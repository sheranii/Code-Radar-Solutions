#include <stdio.h>
int main(){
    int x,N;
    scanf("%d",&N);
    for (x=1;x<=10;x++){
        printf("%d x %d = %d\n",N,x,N*x);
    }
    return 0;
}
