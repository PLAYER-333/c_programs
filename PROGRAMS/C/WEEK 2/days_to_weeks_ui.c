/*
 * Author: Shaurya Bhatt
 * Date: 31/07/25
 * Purpose: Cal Days to Weeks Using User Input
 */

#include <stdio.h>

int main() {
    int total_days,week,days;
    printf("\nEnter Total No of Days:");
    scanf("%d",&total_days);
    week =  total_days/ 7;
    days = total_days % 7;
    printf("\nWeeks:%d",week);
    printf("\nDays:%d",days);
    return 0;
}