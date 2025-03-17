#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int rollno;
    char name[50];
    float marks;
    for(int i=1; i<=N; i++){
        scanf("%d",&rollno);
        scanf("%s",name);
        scanf("%f",&marks);
    }
    int searchedrollno;
    scanf("%d",&searchedrollno);
    int find;
    for(int i=0; i<N; i++){
        if(rollno==searchedrollno){
            printf("Roll Number: %d,",rollno);
            printf(" Name: %s,",name);
            printf(" Marks: %.2f",marks);
            find=1;
            break;
        }
    }
    if(!find){
        printf("Student not found");
    }
}
