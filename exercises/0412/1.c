#include <stdio.h>

int main(void) {
    int i, j;

    i = 5;
    j = ++i * 3 - 2;
    printf("(a) %d %d\n", i, j);

    printf("\n");
    i = 5;
    j = 3 - 2 * i++;
    printf("(b) %d %d\n", i, j);

    printf("\n");
    i = 7;
    j = 3 * i-- + 2;
    printf("(b) %d %d\n", i, j);

    printf("\n");
    i = 7;
    j = 3 + --i * 2;
    printf("(b) %d %d\n", i, j);

    return 0;
}
