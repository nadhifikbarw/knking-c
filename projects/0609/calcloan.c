#include <stdio.h>

int main(void) {
    int i, n_payments;
    float balance, apr, monthly, interest;

    printf("Enter amount of loan: ");
    if (scanf("%f", &balance) != 1 || balance < 0) {
        printf("Invalid amount provided");
        return 1;
    }

    printf("Enter interest rate (APR %%): ");
    if (scanf("%f", &apr) != 1 || apr < 0) {
        printf("Invalid APR provided");
        return 1;
    }

    interest = apr/100.0f/12.0f;

    printf("Enter monthly loan payment: ");
    if (scanf("%f", &monthly) != 1 || monthly < 0) {
        printf("Invalid monthly payment");
        return 1;
    }

    printf("Enter number of payments: ");
    if (scanf("%d", &n_payments) != 1 || n_payments < 1) {
        printf("Invalid number of payments");
        return 1;
    }

    for(i = 1; i <= n_payments; i++) {
        if (balance > 0) {
            balance = balance + (balance * interest);
            balance = balance - monthly;
        }
        printf("Balance remaining after Payment#%d: $%.2f\n", i, balance < 0 ? 0 : balance);
    }

    return 0;
}
