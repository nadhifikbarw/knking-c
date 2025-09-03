#include <stdio.h>

int main(void) {
    int n;
    printf("Enter n (int): ");
    if (scanf("%d",&n) != 1) {
        printf("Invalid number provided");
        return 1;
    }

    /*
     * The error from the original program
     * caused by dangling comma at the end of the
     * if statement, effectively creating null body
     * causing semantic error
     */
    if (n % 2 == 0)
        printf("n is even");
    else
        printf("n is odd");
    return 0;
}
