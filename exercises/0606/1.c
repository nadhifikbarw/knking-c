#include <stdio.h>

/** Targeting: C89 */
int main(void) {
    int i;

    for (i = 1; i <= 128; i *= 2) {
        printf("%d ", i);
    }

    return 0;
}
