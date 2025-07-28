#include <stdio.h>

int main(void) {
    float amt;
    printf("Enter an amount: ");
    scanf("%f", &amt);

    printf("With tax added: %f\n", amt * 1.05f);
    return 0;
}
