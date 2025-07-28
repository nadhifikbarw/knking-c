/* Computes the dimensional weight of a 12 11 x 10 11 x a II box */
#include <stdio.h>

int main(void) {
    // Condense program using initialization, and remove `weight` variable
    int height = 8, length = 12, width = 10, volume = height * length * width;
    // Demonstrate that using initialized variables within the same line is safe

    printf("Dimensions: %dx%dx%d\n", length, width, height);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", (volume + 165)/166);

    return 0;
}
