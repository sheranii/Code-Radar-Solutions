#include<stdio.h>
#include<string.h>
int main(){
    int N;
    float top_marks= -1.0;
    scanf("%d",&N);
    int rollno, top_rollno;
    char name[50], top_name[50];
    float marks;
    while(N--){
        scanf("%d",&rollno);
        scanf("%s",&name);
        scanf("%f",&marks);
        if (marks > top_marks) {
            top_marks = marks;
            top_rollno = rollno;
            strcpy(top_name, name);}
            }

    printf("Top Scorer: ");
    printf("Roll Number: %d ,", top_rollno);
    printf("Name: %s ,", top_name);
    printf("Marks: %.2f", top_marks);
}
