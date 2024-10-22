#include <stdio.h>

int main(void) {
    int in_hour, in_minute;
    int out_hour, out_minute;

    // Input
    scanf("%d", &in_hour);
    scanf("%d", &in_minute);
    scanf("%d", &out_hour);
    scanf("%d", &out_minute);

    int last_hour, last_minute;

    // Calculate the time difference
    last_hour = out_hour - in_hour;
    last_minute = out_minute - in_minute;

    // Adjust if minutes are negative
    if (last_minute < 0) {
        last_minute += 60;
        last_hour -= 1;
    }

    // Price categories
    int no_15 = 0;
    int no_3hour = 10;
    int hour4_hour6 = 20;
    int hour6 = 200;

    // Determine the price based on the parking duration
    if (last_hour == 0 && last_minute <= 15) {
        // Less than or equal to 15 minutes
        printf("%d", no_15);
    } else if (last_hour < 4 || (last_hour == 3 && last_minute == 0)) {
        // 1-3 hours (or less than 4 hours)
        if (last_minute > 0) {
            last_hour += 1;
        }
        printf("%d", no_3hour * last_hour);
    } else if (last_hour >= 4 && last_hour <= 6) {
        // 4-6 hours
        if (last_minute > 0) {
            last_hour += 1;
        }
        printf("%d", hour4_hour6 * (last_hour - 3) + no_3hour * 3);
    if (last_minute > 0) {
            last_hour += 1;
        }
    } else {
        // More than 6 hours
        printf("%d", hour6);
    }

    return 0;
}

