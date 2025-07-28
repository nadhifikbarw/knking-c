#include <stdio.h>

int main(void) {

    float x;
    printf("x: ");
    scanf("%f", &x);

    float term1 = 3.f * x * x * x * x * x;
    float term2 = 2.f * x * x * x * x;
    float term3 = -5.f * x * x * x;
    float term4 = -1.f * x * x;
    float term5 = 7.f * x;
    float term6 = -6.f;

    printf("Result: %f", term1+term2+term3+term4+term5+term6);
    return 0;
}
