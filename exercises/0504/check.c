#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int i, j;
    printf("i: ");
    scanf("%d", &i);
    printf("j: ");
    scanf("%d", &j);

    printf("%d", (i >= j) - (i <= j)); // This should produce the effects -1, 0, 1 based on i;j values
    return 0;
}
