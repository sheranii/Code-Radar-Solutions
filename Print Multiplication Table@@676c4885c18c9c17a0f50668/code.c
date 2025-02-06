#include <stdio.h>
int main(){
    int i;
    int N;
    scanf("%d",&N);
    for (i=1;i<=10;i=i+1){
        printf("%d X %d =  %d \n",N,i, N*i);
    }
    return 0;
}