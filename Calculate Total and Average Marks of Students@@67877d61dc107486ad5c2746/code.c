#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int rollno;
    char name[80];
    float marks;
    float totalmarks=0;
    for(int i=1; i<=N; i++){
        scanf("%d",&rollno);
        scanf("%s",name);
        scanf("%f",&marks);
        totalmarks+=marks;   
    }
    float avgmarks = totalmarks/N;
    printf("Total Marks: %.2f", totalmarks);
    printf("Average Marks: %.2f", avgmarks);

}