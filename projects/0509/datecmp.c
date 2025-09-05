#include <stdio.h>

int main(void) {
    int mm1, dd1, yy1;
    int mm2, dd2, yy2;

    // Once the book introduces function, this will be easier
    printf("Enter first date (mm/dd/yy): ");
    if (
        scanf("%d/%d/%d", &mm1, &dd1, &yy1) != 3
        || mm1 <= 0 || mm1 > 12
        || yy1 < 0 || yy1 > 99
        || dd1 <= 0
    ) {
        printf("Please provide valid inputs using (mm/dd/yy format)");
        return 7;
    }

    int max_days;
    switch(mm1) {
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
            // 100th year is not 29
            max_days = yy1 == 0 || yy1 % 4 != 0  ? 28 : 29;
            break;
    }
    if (dd1 > max_days) {
        printf("Please provide valid inputs using (mm/dd/yy format)");
        return 7;
    }


    printf("Enter second date (mm/dd/yy): ");
    if (
        scanf("%d/%d/%d", &mm2, &dd2, &yy2) != 3
        || mm2 <= 0 || mm2 > 12
        || yy2 < 0 || yy2 > 99
        || dd2 <= 0
    ) {
        // Once the book introduces function, this will be easier
        printf("Please provide valid inputs using (mm/dd/yy format)");
        return 7;
    }
    switch(mm2) {
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
            max_days = yy2 % 4 != 0 ? 28 : 29;
            break;
    }
    if (dd2 > max_days) {
        printf("Please provide valid inputs using (mm/dd/yy format)");
        return 7;
    }

    if (yy1 == yy2 && mm1 == mm2 && dd1 == dd2) {
        printf(
            "%d/%d/%02d and %d/%d/%02d are the same date",
            mm1, dd1, yy1, mm2, dd2, yy2
        );
        return 0;
    }

    int first_earlier = (
        yy < earlier_yy
        || (yy == earlier_yy && mm < earlier_mm)
        || (yy == earlier_yy && mm == earlier_mm && dd < earlier_dd)
    );
    printf(
        "%d/%d/%02d is earlier than %d/%d/%02d",
        first_earlier ? mm1 : mm2,
        first_earlier ? dd1 : dd2,
        first_earlier ? yy1 : yy2,
        first_earlier ? mm2 : mm1,
        first_earlier ? dd2 : dd1,
        first_earlier ? yy2 : yy1
    );
    return 0;
}
