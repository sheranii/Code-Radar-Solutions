#include <stdio.h>
int main(){
    int x;
    int N;
    scanf("%d",&N);
    for (x=1;x<=10;x=x+1){
        printf("%d X %d = %d \n",N,x, N*x);
    }
    return 0;
}