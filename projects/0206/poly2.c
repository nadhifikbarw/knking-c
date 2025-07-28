#include <stdio.h>

int main(void) {

    float x;
    printf("x: ");
    scanf("%f", &x);

    float poly1 = 3.0f * x + 2.0f;
    float poly2 = poly1 * x - 5.0f;
    float poly3 = poly2 * x - 1.0f;
    float poly4 = poly3 * x + 7.0f;

    printf("Result: %f", poly4 * x - 6.0f);
    return 0;
}
