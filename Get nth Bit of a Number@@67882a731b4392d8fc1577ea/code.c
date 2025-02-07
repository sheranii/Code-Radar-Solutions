#include <stdio.h>
#include <string.h>
int main() {
    char binarySequence[100];  
    int n;                  
    // Input the binary sequence as a string
    printf("Enter a binary sequence (only 0s and 1s): ");
    scanf("%s", binarySequence);

    // Input the position (1-based index)
    printf("Enter the position (n): ");
    scanf("%d", &n);

    // Check if the position is valid
    if (n > 0 && n <= strlen(binarySequence)) {
        // Output the nth value (1-based indexing)
        printf("The %dth value is: %c\n", n, binarySequence[n-1]);
    } else {
        printf("Invalid position\n");
    }

    return 0;
}
