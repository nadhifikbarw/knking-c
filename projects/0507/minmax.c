#include <stdio.h>

int main(void) {
    int i1, i2, i3, i4, min = 999, max = -999;

    printf("Enter four integers: ");
    if(scanf("%d %d %d %d", &i1, &i2, &i3, &i4) != 4) {
        printf("Provide 4 integers");
        return 1;
    }

    if (i1 < min) min = i1;
    if (i1 > max) max = i1;
    if (i2 < min) min = i2;
    if (i2 > max) max = i2;
    if (i3 < min) min = i3;
    if (i3 > max) max = i3;
    if (i4 < min) min = i4;
    if (i4 > max) max = i4;


    printf("Largest: %i\n", max);
    printf("Smallest: %i", min);

    return 0;
}
