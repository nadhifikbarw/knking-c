#include <stdio.h>

int main(void) {
    int n;
    printf("Enter an integer 1-100: ");
    if (scanf("%d", &n) != 1 || n < 0 || n > 100) {
        printf("Please provide an integer between 0-100");
        return 1;
    }

    int i;
    for (i = 2; i * i <= n; i+=2) printf("%d\n", i * i);
}
