#include <stdio.h>

int main(void) {
    float income, tax;

    printf("Income ($): ");
    scanf("%f", &income);

    if (income < 750)
        tax = 0.01f * income;
    else if (income < 2251)
        tax = 7.50f + (0.02f * (income - 750));
    else if (income < 3751)
        tax = 37.50f + (0.03f * (income - 2250));
    else if (income < 5251)
        tax = 82.50f + (0.04f * (income - 3750));
    else if (income < 7001)
        tax = 142.50f + (0.05f * (income - 5250));
    else
        tax = 230.00f + (0.06f * (income - 7000));

    printf("Tax ($): %.2f", tax);
    return 0;
}
