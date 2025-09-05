#include <stdio.h>

int main(void) {
    int earlier_mm = 0, earlier_dd = 0, earlier_yy = 0;
    int mm, dd, yy;

    int max_days;
    while(1) {
        printf("Enter a date (mm/dd/yy): ");
        if (
            scanf("%d/%d/%d", &mm, &dd, &yy) != 3
            || mm < 0 || mm > 12
            || yy < 0 || yy > 99
            || dd < 0
        ) {
            printf("Please provide valid inputs using (mm/dd/yy format)");
            continue;
        }
        if (mm == 0 && dd == 0 && yy == 0) break;

        /** Validate days */
        switch(mm) {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                max_days = 31;
                break;
            case 4:
            case 6:
            case 9:
            case 11:
                max_days = 30;
                break;
            case 2:
                max_days = yy % 4 != 0 ? 28 : 29;
                break;
        }
        if (mm < 0 || dd < 0 || dd > max_days) {
            printf("Please provide valid input using (mm/dd/yy format)");
            continue;
        }

        if (
            earlier_dd == 0
            || yy < earlier_yy
            || (yy == earlier_yy && mm < earlier_mm)
            || (yy == earlier_yy && mm == earlier_mm && dd < earlier_dd)
        ) {
            earlier_mm = mm;
            earlier_dd = dd;
            earlier_yy = yy;
        }
    }

    if (earlier_dd == 0) {
        printf("No valid date provided");
        return 1;
    }

     printf(
        "%d/%d/%02d is the earliest date",
        earlier_mm, earlier_dd, earlier_yy
    );
    return 0;
}
