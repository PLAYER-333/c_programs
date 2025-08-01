/*
 * Author: Shaurya Bhatt
 * Date: 1/08/25
 * Purpose: Calculate Square of a Number Using User Input
 */
#include <stdio.h>

int main() {
    float n, sq;
    printf("Enter a number: ");
    scanf("%f", &n);
    sq = n * n;
    printf("Square: %.2f\n", sq);
    return 0;
}
