/*
 * Author: Shaurya Bhatt
 * Date: 1/08/25
 * Purpose: Calculate Cube of a Number Using User Input
 */
#include <stdio.h>

int main() {
    float n, cube;
    printf("Enter a number: ");
    scanf("%f", &n);
    cube = n * n * n;
    printf("Cube: %.2f\n", cube);
    return 0;
}
