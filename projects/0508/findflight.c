#include <stdio.h>


int main(void) {

    int hh, mm, min_since_midnight;
    int dept_hh, dept_mm, arv_hh, arv_mm, is_next_day = 0;

    printf("Enter a 24-hour time: ");

    if(
        scanf("%d:%d", &hh, &mm) != 2
        || hh < 0
        || mm < 0
        || hh > 23
        || mm > 59
    ) {
        printf("Please provide valid time using 24-hour format (e.g. 06:00)");
        return 7;
    }

    min_since_midnight = 60 * hh + mm;

    if (min_since_midnight <= (8 * 60) + 0) {
        dept_hh = 8; dept_mm = 0;
        arv_hh = 10; arv_mm = 16;
    }
    else if (min_since_midnight <= (9 * 60) + 43) {
        dept_hh = 9; dept_mm = 43;
        arv_hh = 11; arv_mm = 52;
    }
    else if (min_since_midnight <= (11 * 60) + 19) {
        dept_hh = 11; dept_mm = 19;
        arv_hh = 13; arv_mm = 31;
    }
    else if (min_since_midnight <= (12 * 60) + 47) {
        dept_hh = 12; dept_mm = 47;
        arv_hh = 15; arv_mm = 0;
    }
    else if (min_since_midnight <= (14 * 60) + 0) {
        dept_hh = 14; dept_mm = 0;
        arv_hh = 16; arv_mm = 8;
    }
    else if (min_since_midnight <= (15 * 60) + 45) {
        dept_hh = 15; dept_mm = 45;
        arv_hh = 17; arv_mm = 55;
    }
    else if (min_since_midnight <= (19 * 60) + 0) {
        dept_hh = 19; dept_mm = 0;
        arv_hh = 21; arv_mm = 20;
    }
    else if (min_since_midnight <= (21 * 60) + 45) {
        dept_hh = 21; dept_mm = 45;
        arv_hh = 23; arv_mm = 58;
    }
    else {
        dept_hh = 8; dept_mm = 0;
        arv_hh = 10; arv_mm = 16;
        is_next_day = 1;
    }

    printf(
        "Closest departure time is %d:%02d %s%s, arriving at %d:%02d %s%s.",
        dept_hh > 12 ? dept_hh - 12 : (dept_hh == 0 ? 12 : dept_hh),
        dept_mm,
        dept_hh < 12 ? "a.m." : "p.m.",
        is_next_day ? " tomorrow" : "",
        arv_hh > 12 ? arv_hh - 12 : (arv_hh == 0 ? 12: arv_hh),
        arv_mm,
        arv_hh < 12 ? "a.m." : "p.m.",
        is_next_day ? " tomorrow" : ""
    );
    return 0;
}
