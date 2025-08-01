/*
 * Author: Shaurya Bhatt
 * Date: 1/08/25
 * Purpose: Convert Kilometers to Miles Using User Input
 */
#include <stdio.h>

int main() {
    float km, miles;
    printf("Enter kilometers: ");
    scanf("%f", &km);
    miles = km * 0.621371;
    printf("Miles: %.2f\n", miles);
    return 0;
}
