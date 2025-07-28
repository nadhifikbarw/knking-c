#include <stdio.h>

int main(void) {
    // Compiler will not emit any warning using -std=c99 -Wextra -Wall -Wconversion
    float fr = 4.0f/3.0f, buggy_fr = 4/3;
    float pi = 3.14f;

    float radius = 10.0f;

    printf("Sphere volume (m): %f\n", fr * pi * radius * radius * radius);
    printf("Sphere volume (m) (buggy): %f\n", buggy_fr * pi * radius * radius * radius);

    printf("fr=%f ; buggy_fr=%f\n", fr, buggy_fr);
    return 0;
}
