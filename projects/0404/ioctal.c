#include <stdio.h>

int main(void) {
    int i, oct1, oct2, oct3, oct4, oct5;

    printf("Enter a number between 0 and 32767: ");
    scanf("%5d", &i);

    oct5 = i%8;
    i /= 8;

    oct4 = i%8;
    i /= 8;

    oct3 = i%8;
    i /= 8;

    oct2 = i%8;
    i /= 8;

    oct1 = i%8;
    i /= 8;

    printf("In octal, your number is: 0o%d%d%d%d%d", oct1, oct2, oct3, oct4, oct5);
    return 0;
}
