#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int rollno;
    char name[50];
    float marks;
    float totalmarks=0;
    scanf("%d",&N);
    for(int i=1; i<=N; i++){
        scanf("%d",&rollno);
        scanf("%s",&name);
        scanf("%f",&marks);
        totalmarks+=marks;
    }
    float average= totalmarks/N;
    printf("Average Marks: %.2f", averageMarks);


}