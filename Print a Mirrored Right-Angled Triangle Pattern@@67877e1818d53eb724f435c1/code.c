#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);  

    for (int i = 1; i <= n; i++) { 
        for (int j = 1; j <= n - i; j++) {
            printf(" ");  
        }

        for (int k = 1; k <= i; k++) {
            printf("*");  // Print star
        }
        
        // Move to the next line after printing a row
        printf("\n");
    }

    return 0;
}
