#include <stdio.h>

int main(void) {
    int m, n, gcd_m, gcd_n, gcd_reminder;

    printf("Enter a fraction: ");
    if (scanf("%d/%d", &m, &n) != 2) {
        printf("Please provide a valid fraction");
        return 1;
    }

    gcd_m = m;
    gcd_n = n;

    /** Determine GCD */
    while (gcd_n > 0) {
        gcd_reminder = m % n;
        gcd_m = gcd_n;
        gcd_n = gcd_reminder;
    }

    printf("In lowest terms: %d/%d", m / gcd_m, n / gcd_m);
    return 0;
}
