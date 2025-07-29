#include <stdio.h>

int main(void) {
    // Sample, Pi (3.14159265358979323846)
    // Sample, Pi * 100 (314.159265358979323846)
    float x;
    printf("Input x: ");
    scanf("%f", &x);

    printf("(a) Exponential notation; left-justfied in a field size of 8; one digit after the decimal point.\n");
    printf("%8.1e\n", x);

    printf("(b) Exponential notation; right-justfied in a field size of 10; six digits after the decimal point.\n");
    printf("%-10.6e\n", x);
    printf("(c) Fixed decimal notation; left-justfied in a field size of 8; three digits after the decimal point.\n");
    printf("%8.3f\n", x);
    printf("(d) Fixed decimal notation; right-justfied in a field size of 6; no digits after the decimal point.\n");
    printf("%-6.f\n", x);

    return 0;
}
