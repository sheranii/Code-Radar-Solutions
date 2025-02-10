#include <stdio.h>
int main(){
    int x=1,N;
    scanf("%d",&N);
    while (x<=10){
        printf("%d x %d = %d\n",N,x,N*x);
        x++;
    }
    return 0;
}
