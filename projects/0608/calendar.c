#include <stdio.h>

int main(void) {
    int days, start;

    printf("Enter number of days in month: ");
    if (scanf("%d", &days) != 1 || days < 28 || days > 31) {
        printf("Please provide number of days from 28-31");
        return 1;
    }

    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    if (scanf("%d", &start) != 1 || start < 1 || start > 7) {
        printf("Please provide starting day of week from 1-7");
        return 1;
    }

    printf("\n");
    int i;
    for(i = 1; i < days + start; i++) {
        if (i < start) {
            printf("  ");
        } else {
            /** 1 here because start need to be offset */
            printf("%2d", i - (start - 1));
        }
        printf(i % 7 == 0 ? "\n" : " ");
    }
    printf("\n");

    return 0;
}
