#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int age;

    printf("Age: ");
    scanf("%d", &age);
    int teenager = (age >= 13) && (age <= 19) ? true : false;

    printf("Teenager: %s", teenager ? "true" : "false");
    return 0;
}
