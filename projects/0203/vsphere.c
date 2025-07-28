#include <stdio.h>

int main(void) {
    float fr = 4.0f/3.0f;
    float pi = 3.14f;

    float radius;
    printf("Radius (m): ");
    scanf("%f", &radius);

    printf("Sphere volume (m): %f\n", fr * pi * radius * radius * radius);

    return 0;
}
