/*
 * Author: Shaurya Bhatt
 * Date: 1/08/25
 * Purpose: Convert Days to Months and Days Using User Input
 */

#include <stdio.h>

int main() {
    int days, months, rem_days;
    printf("Enter number of days: ");
    scanf("%d", &days);
    months = days / 30;
    rem_days = days % 30;
    printf("Months: %d, Remaining Days: %d\n", months, rem_days);
    return 0;
}
