/*
 * Author: Shaurya Bhatt
 * Date: 1/08/25
 * Purpose: Calculate BMI Using User Input
 */

#include <stdio.h>

int main() {
    float weight, height, bmi;
    printf("Enter weight in kg: ");
    scanf("%f", &weight);
    printf("Enter height in meters: ");
    scanf("%f", &height);
    bmi = weight / (height * height);
    printf("BMI: %.2f\n", bmi);
    return 0;
}
