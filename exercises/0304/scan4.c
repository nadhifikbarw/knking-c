#include <stdio.h>

// Use input: 10.3 5 6
int main(void) {
    int i, j, discarded;
    float x;

    printf("Input: ");
    scanf("%d%f%d", &i, &x, &j);
    printf("%d\n%f\n%d\n", i, x, j);

    // Consume the rest of buffer
    scanf("%d", &discarded);
    printf("Discarded: %d", discarded);
}
