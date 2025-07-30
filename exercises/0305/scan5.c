#include <stdio.h>

// Use input: 12.3 45.6 789
int main(void) {
    int i, discarded;
    float x, y;

    printf("Input: ");
    scanf("%f%d%f", &x, &i, &y);
    printf("%f\n%d\n%f\n", x, i, y);

    // Consume the rest of buffer
    scanf("%d", &discarded);
    printf("Discarded: %d", discarded);
}
