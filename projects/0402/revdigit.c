#include <stdio.h>

int main(void) {
    int i, d100, d10;

    printf("Enter a three-digit number: ");
    scanf("%d", &i);

    i -= 100 * (d100 = i / 100);
    i -= 10 * (d10 = i / 10);

    printf("The reversal is: %d%d%d", i, d10, d100);
    return 0;
}
