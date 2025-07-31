#include <stdio.h>

int main(void) {
    int i, d1, d2;

    printf("Enter a two-digit number: ");
    scanf("%d", &i);

    // Make it fun i guess
    d2 = i - (10 * (d1 = i / 10));

    printf("The reversal is: %d%d", d2, d1);
    return 0;
}
