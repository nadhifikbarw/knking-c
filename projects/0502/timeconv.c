#include <stdio.h>

int main() {
    int hour, is_am;
    int min = 0;

    printf("Enter a 24-hour time: ");

    // Trying out how to safely handle the operation result of `scanf`,
    // since uninitialized integer value is unknown
    // we need to check whether scanf for the initial number returns OK
    // `scanf` returns number of arguments that have successfully filled
    // in this case 1 indicate hour is filled
    if (scanf("%d", &hour) != 1) {
        printf("Invalid 24-hour time format");
        return 7;
    }
    // After that we want to check whether user provide `:`
    // which indicate that minute is supplied, or can be assumed supplied
    // It checks whether it explicitly provides actual minute value
    // otherwise the 0 default value is retained
    scanf(":%d", &min);
    
    if (
        hour < 0
        || min < 0
        || hour > 23
        || min > 59
    ) {
        printf("Invalid 24-hour time format");
        return 7;
    }

    is_am = hour >= 0 && hour < 12;
    if (hour == 0) {
        hour = 12;
    } else if (hour > 12) {
        hour = hour - 12;
    }

    printf(
        "Equivalent 12-hour time: %02d:%02d %s",
        hour, min, is_am ? "AM" : "PM"
    );

    return 0;
}
