#include <stdio.h>

int main(void) {
    int i;
    for (i = 0; i >= 0; i++) {
        printf("%d ", i);
        if (i == 5) goto print_end;
    }
    print_end:
    printf("END");

    return 0;
}
