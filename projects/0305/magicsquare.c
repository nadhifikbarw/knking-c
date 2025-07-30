#include <stdio.h>

int main(void) {
    int i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, i12, i13, i14, i15, i16;
    int r1, r2, r3, r4;
    int c1, c2, c3, c4;
    int d1, d2;

    printf("Enter the numbers from 1 to 16 in any order: ");
    scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d", &i1, &i2, &i3, &i4, &i5, &i6, &i7, &i8, &i9, &i10, &i11, &i12, &i13, &i14, &i15, &i16);


    printf("\n");
    printf("%2d %2d %2d %2d\n", i1, i2, i3, i4);
    printf("%2d %2d %2d %2d\n", i5, i6, i7, i8);
    printf("%2d %2d %2d %2d\n", i9, i10, i11, i12);
    printf("%2d %2d %2d %2d\n", i13, i14, i15, i16);

    r1 = i1 + i2 + i3 + i4;
    r2 = i5 + i6 + i7 + i8;
    r3 = i9 + i10 + i11 + i12;
    r4 = i13 + i14 + i15 + i16;
    printf("Row sums: %d %d %d %d\n", r1, r2, r3, r4);

    c1 = i1 + i5 + i9 + i13;
    c2 = i2 + i6 + i10 + i14;
    c3 = i3 + i7 + i11 + i15;
    c4 = i4 + i8 + i12 + i16;

    printf("Column sums: %d %d %d %d\n", c1, c2, c3, c4);

    d1 = i1 + i6 + i11 + i16;
    d2 = i4 + i7 + i10 + i13;

    printf("Diagonal sums: %d %d\n", d1, d2);

    return 0;
}
