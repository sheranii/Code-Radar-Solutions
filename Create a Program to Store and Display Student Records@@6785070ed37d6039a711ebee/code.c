#include<Stdio.h>
int main(){
    int N;
    int rollno;
    char name[50];
    float marks;
    for(int i=1; i<=N; i++){
        scanf("%d",&rollno);
        printf("Roll Number: %d",rollno);
        scanf("%c",&name);
        printf("Name: %c",name);
        scanf("%d",&marks);
        printf("Marks: %f",marks);
    }
}