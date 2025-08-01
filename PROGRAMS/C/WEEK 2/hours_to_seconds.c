/*
 * Author: Shaurya Bhatt
 * Date: 1/08/25
 * Purpose: Convert Hours to Seconds Using User Input
 */

#include <stdio.h>

int main() {
    float hours, seconds;
    printf("Enter hours: ");
    scanf("%f", &hours);
    seconds = hours * 3600;
    printf("Seconds: %.2f\n", seconds);
    return 0;
}
