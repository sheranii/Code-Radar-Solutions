#include <stdio.h>
void printPalindromeTree(int n) {
    for (int i = 1; i <= n; i++) {
        // Print spaces for alignment
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // Print first half of the palindrome
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }

        // Print second half of the palindrome
        for (int j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }

        // Move to next line
        printf("\n");
    }
}

int main() {
    int n;
    scanf("%d", &n);
    printPalindromeTree(n);
    return 0;
}
