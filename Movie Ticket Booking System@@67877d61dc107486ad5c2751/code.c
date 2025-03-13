#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int std,pre,vip;
    float tstd=0.0,tpre=0.0,tvip=0.0;
    for(int i=1; i<=N;i++){
    scanf("%d",&std);
    scanf("%d",&pre);
    scanf("%d",&vip);
    tstd+=std;
    tpre+=pre;
    tvip+=vip;
    }
    printf("Standard: %.2f, ",std);
    printf(" Premium: %.2f, ",pre);
    printf(" VIP: %.2f",vip);
}