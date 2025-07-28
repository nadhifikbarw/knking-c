#include <stdio.h>

int main(void) {
    // Compiler will not emit any warning using -std=c99 -Wextra -Wall -Wconversion
    float fr = 4.0f/3.0f, buggy_fr = 4/3;
    float pi = 3.14f;

    float radius;
    printf("Radius: ");
    scanf("%f", &radius);

    printf("Sphere volume: %f\n", fr * pi * radius * radius * radius);
    printf("Sphere volume (buggy): %f\n", buggy_fr * pi * radius * radius * radius);
    printf("fr=%f ; buggy_fr=%f\n", fr, buggy_fr);
    return 0;
}
