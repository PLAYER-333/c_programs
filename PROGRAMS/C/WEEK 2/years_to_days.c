/*
 * Author: Shaurya Bhatt
 * Date: 1/08/25
 * Purpose: Convert Years to Days Using User Input
 */

#include <stdio.h>

int main() {
    int years, days;
    printf("Enter number of years: ");
    scanf("%d", &years);
    days = years * 365;
    printf("Days: %d\n", days);
    return 0;
}
