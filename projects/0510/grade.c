#include <stdio.h>

int main(void) {
    int grade;

    printf("Enter numerical grade: ");
    if (scanf("%d", &grade) != 1) {
        printf("Please provide a number from 0-100\n");
        return 1;
    }

    if (grade < 0 || grade > 100) {
        printf("Please provide a number from 0-100\n");
        return 1;
    }

    if (grade == 100) {
        grade = 99;
    }

    switch (grade / 10) {
        case 9: printf("A\n"); break;
        case 8: printf("B\n"); break;
        case 7: printf("C\n"); break;
        case 6: printf("D\n"); break;
        default: printf("F\n"); break;
    }

    return 0;
}
