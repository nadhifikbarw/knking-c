#include <stdio.h>

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("The number %d is a negative number", number);
    } else if (number < 10) {
        printf("The number %d has 1 digit", number);
    } else if (number < 100) {
        printf("The number %d has 2 digits", number);
    } else if (number < 1000) {
        printf("The number %d has 3 digits", number);
    } else {
        printf("The number %d has more than 3 digits", number);
    }

    return 0;
}
