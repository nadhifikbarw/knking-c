/* Calculates a broker's commission */

#include <stdio.h>

int main(void) {
    float price, share, value;
    float commission, rival;

    printf("Enter price per share: $");
    scanf("%f", &price);

    printf("Enter number of shares: ");
    scanf("%f", &share);

    value = price * share;

    if (value < 2500.00f)
        commission = 30.00f + .017f * value;
    else if (value < 6250.00f)
        commission = 56.00f + .0066f * value;
    else if (value < 20000.00f)
        commission = 76.00f + .0034f * value;
    else if (value < 50000.00f)
        commission = 100.00f + .0022f * value;
    else if (value < 500000.00f)
        commission = 155.00f + .0011f * value;
    else
        commission = 255.00f + .0009f * value;

    if (commission < 39.00f)
        commission = 39.00f;

    rival = 33.00f + (share < 2000 ? share * .03f : share * .02f);

    printf("Trade value: $%.2f\n", value);
    printf("Our commissions: $%.2f\n", commission);
    printf("Rival commissions: $%.2f", rival);
    return 0;
}
