#include <stdio.h>
int main(){
    int x,N;
    scanf("%d",&N);
    for (x=1;x<=10;){
        printf("%d X %d = %d\n",N,x,N*x);
        x++;
    }
    return 0;
}
