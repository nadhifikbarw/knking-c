#include <stdio.h>

int main(void) {
    int digits, base;

    printf("Enter an integer: ");
    if (scanf("%d", &digits) != 1) {
        printf("Invalid integer provided");
        return 1;
    }

    printf("The reversal is: ");
    do {
        base = digits / 10;
        printf("%d", digits - 10 * base);
        digits = base;
    } while(digits > 0);

    return 0;
}
