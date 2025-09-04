#include <stdio.h>

int main(void) {
    int n;
    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid number provided");
        return 1;
    }

    for(int i = 1, odd = 3, square = 1; i <= n; i++, odd += 2) {
        printf("%10d%10d\n", i, square);
        square += odd;
    }
    return 0;
}
