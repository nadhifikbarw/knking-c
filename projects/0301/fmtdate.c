#include <stdio.h>

int main(void) {
    int dd, mm, yyyy;
    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &dd, &mm, &yyyy);

    printf("You entered the date %04d%02d%02d", yyyy, mm, dd);
    return 0;
}
