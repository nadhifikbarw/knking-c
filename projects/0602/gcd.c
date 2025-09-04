#include <stdio.h>

int main(void) {
    int m, n, reminder;

    printf("Enter two integers: ");
    if (scanf("%d %d", &m, &n) != 2) {
        printf("Please provide 2 integers");
        return 1;
    }

    while (n > 0) {
        reminder = m % n;
        m = n;
        n = reminder;
    }

    printf("Greatest common divisor: %d", m);
    return 0;

}
