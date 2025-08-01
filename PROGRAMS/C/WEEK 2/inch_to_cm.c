/*
 * Author: Shaurya Bhatt
 * Date: 1/08/25
 * Purpose: Convert Inches to Centimeters Using User Input
 */
#include <stdio.h>

int main() {
    float inch, cm;
    printf("Enter inches: ");
    scanf("%f", &inch);
    cm = inch * 2.54;
    printf("Centimeters: %.2f\n", cm);
    return 0;
}
