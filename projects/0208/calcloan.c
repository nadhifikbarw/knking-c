#include <stdio.h>

int main(void) {

    float balance, apr, monthly, interest;

    printf("Enter amount of loan: ");
    scanf("%f", &balance);

    printf("Enter interest rate (APR %%): ");
    scanf("%f", &apr);

    interest = apr/100.0f/12.0f;

    printf("Enter amount of loan: ");
    scanf("%f", &monthly);

    // First
    balance = balance + (balance * interest);
    balance = balance - monthly;
    printf("Balance remaining after first payment: $%.2f\n", balance);

    // Second
    balance = balance + (balance * interest);
    balance = balance - monthly;
    printf("Balance remaining after second payment: $%.2f\n", balance);

    // Third
    balance = balance + (balance * interest);
    balance = balance - monthly;
    printf("Balance remaining after third payment: $%.2f\n", balance);
    return 0;
}
