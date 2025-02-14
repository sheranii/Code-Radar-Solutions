#include <stdio.h>

int main() {
    double a;
    double b;
    char c;
    scanf("%lf", &a);  // Use %lf for double
    scanf("%lf", &b);  // Use %lf for double
    scanf(" %c", &c);  // Add a space before %c to handle new line characters from previous input
    switch(c) {
        case '+':
            printf("%0.lf", a + b);  
            break;
        case '-':
            printf("%0.lf", a - b);  // Use %lf to print double
            break;
        case '*':
            printf("%0.lf", a * b);  // Use %lf to print double
            break;
        case '/':
            if(b == 0) {
                printf("error");
            } else {
                printf("%0.lf", a / b);  // Use %lf to print double
            }
            break;
        default:
            printf("error");
    }
    
    return 0;
}
