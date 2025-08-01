/*
 * Author: Shaurya Bhatt
 * Date: 1/08/25
 * Purpose: Convert Kilometers to Meters Using User Input
 */
#include <stdio.h>

int main() {
    float km, m;
    printf("Enter kilometers: ");
    scanf("%f", &km);
    m = km * 1000;
    printf("Meters: %.2f\n", m);
    return 0;
}
