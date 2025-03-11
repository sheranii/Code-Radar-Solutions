#include<stdio.h>
int main(){
    int N;
    int top_marks;
    scanf("%d",&N);
    int rollno;
    char name[50];
    float marks;
    while(N--){
        scanf("%d",&rollno);
        scanf("%c",&name);
        scanf("%d",&marks);
}
        if (marks > top_marks) {
            top_marks = marks;
            top_rollno = rollno;
            strcpy(top_name, name);
        }
    }
    printf("Top Scorer:");
    printf("Roll Number: %d", top_rollno);
    printf("Name: %s", top_name);
    printf("Marks: %.2f", top_marks);



}
