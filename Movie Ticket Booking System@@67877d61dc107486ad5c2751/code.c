#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int std,pre,vip;
    float tstd=0.0,tpre=0.0,tvip=0.0;
    for(int i=0; i<N;i++){
    scanf("%d %d %d",&std,&pre,&vip);
    tstd += std;
    tpre += pre;
    tvip += vip;
    }
    printf("Standard: %.2f, ",tstd);
    printf(" Premium: %.2f, ",tpre);
    printf(" VIP: %.2f",tvip);
}