/*
 * Author: Shaurya Bhatt
 * Date: 1/08/25
 * Purpose: Convert Centimeters to Inches Using User Input
 */
#include <stdio.h>

int main() {
    float cm, inch;
    printf("Enter centimeters: ");
    scanf("%f", &cm);
    inch = cm / 2.54;
    printf("Inches: %.2f\n", inch);
    return 0;
}
