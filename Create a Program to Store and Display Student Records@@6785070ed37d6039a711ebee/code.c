#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int rollno;
    char name[50];
    float marks;
    while(N--){
        scanf("%d",&rollno);
        printf("Roll Number: %d",rollno);
        scanf("%c",&name);
        printf("Name: %c",name);
        scanf("%d",&marks);
        printf("Marks: %.2f",marks);
    }
    return 0;
}