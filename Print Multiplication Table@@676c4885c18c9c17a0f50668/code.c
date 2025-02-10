#include <stdio.h>
int main(){
    int x=1,N;
    scanf("%d",&N);
    for (x<=10;){
        printf("%d X %d = %d\n",N,x,N*x);
        x++;
    }
    return 0;
}
