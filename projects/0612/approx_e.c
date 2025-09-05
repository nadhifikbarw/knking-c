#include <stdio.h>

int main(void) {
    float e = 0;

    float min_term;
    printf("Provide min term: ");
    if (scanf("%f", &min_term) != 1 || min_term <= 0 || min_term > 1) {
        printf("Please provide min term <= 0 and > 1");
        return 1;
    }

    int i;
    float factor, term;
    for (i = 0, factor = 1.00f;;i++) {
        if (i > 1) factor *= i;
        term = 1.0f/factor;
        if (term < min_term) break;
        e += 1.0f/factor;
    }

    printf("Approximate: %f", e);
    return 0;
}
