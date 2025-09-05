#include <stdio.h>

int main(void) {
    float e = 0;

    int n;
    printf("Enter n iterations: ");
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Please provide an integer");
        return 1;
    }

    int i;
    float factor;
    for (i = 0, factor = 1.00f; i <= n; i++) {
        if (i > 1) factor *= i;
        e += 1.0f/factor;
    }

    printf("Approximate: %f", e);
    return 0;
}
