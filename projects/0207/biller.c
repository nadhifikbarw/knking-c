#include <stdio.h>

int main(void) {
    int amt;
    printf("Enter a dollar amount: ");
    scanf("%d", &amt);

    int bills20 = amt/20;
    amt = amt - (bills20 * 20);
    printf("$20 bills: %d\n", bills20);

    int bills10 = amt/10;
    amt = amt - (bills10 * 10);
    printf("$10 bills: %d\n", bills10);

    int bills5 = amt/5;
    amt = amt - (bills5 * 5);
    printf("$5 bills: %d\n", bills5);

    printf("$1 bills: %d\n", amt);
    return 0;
}
