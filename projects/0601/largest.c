#include <stdio.h>

int main(void) {
    int number_provided = 0;
    float n, largest = -1.0f;

    while(1) {
        printf("Enter a number: ");
        if(scanf("%f", &n) != 1) {
            printf("Invalid number provided, try again");
            continue;
        }

        if (n <= 0) break;
        number_provided = 1;

        if (n > largest) largest = n;
    }

    if (!number_provided)
        printf("No number provided");
    else
        printf("The largest number entered was %.2f", largest);
}
