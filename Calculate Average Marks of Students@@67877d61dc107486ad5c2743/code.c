#include<stdio.h>
int main(){
    int N;
    int rollno;
    char name[50];
    float marks;
    scanf("%d",&N);
    for(int i=1; i<=N; i++){
        scanf("%d",&rollno);
        printf("Roll Number: %d, ",rollno);
        scanf("%c",&name);
        printf("Name: %c, ",name);
        scanf("%f",&marks);
        printf("Marks: %.2f ",marks);

    }
}