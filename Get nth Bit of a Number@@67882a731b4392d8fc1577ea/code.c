#include <stdio.h>
#include <string.h>
int main() {
    char binarySequence[100];  
    int n;                  
    scanf("%s", binarySequence);
    scanf("%d", &n);
    if (n > 0 && n <= strlen(binarySequence)) {
        printf("%c", binarySequence[n-1]);
    } else {
        printf("Invalid position\n");
    }

    return 0;
}
