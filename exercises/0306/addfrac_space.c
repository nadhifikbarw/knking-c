/* Adds two fractions, accept space before `/` when specifying fraction */

#include <stdio.h>

int main(void) {
    int num1, denom1, num2, denom2, result_num, result_denom;

    printf("Enter first fraction: ");
    scanf("%d /%d", &num1, &denom1);

    printf("Enter second fraction: ");
    scanf("%d /%d", &num2, &denom2); // whitespace prior second %d is not required as scanf will skip any whitespaces until valid %d digit encountered

    result_num = num1 * denom2 + num2 * denom1;
    result_denom = denom1 * denom2;

    printf("The sum is %d/%d\n", result_num, result_denom);
    return 0;
}
