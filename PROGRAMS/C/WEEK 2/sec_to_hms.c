/*
 * Author: Shaurya Bhatt
 * Date: 1/08/25
 * Purpose: Convert Seconds to Hours, Minutes, Seconds Using User Input
 */

#include <stdio.h>

int main() {
    int total_sec, hours, minutes, seconds;
    printf("Enter total seconds: ");
    scanf("%d", &total_sec);

    hours = total_sec / 3600;
    total_sec %= 3600;
    minutes = total_sec / 60;
    seconds = total_sec % 60;

    printf("Time: %d Hour(s), %d Minute(s), %d Second(s)\n", hours, minutes, seconds);
    return 0;
}
