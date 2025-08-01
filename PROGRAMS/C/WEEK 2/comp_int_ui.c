/*
 * Author: Shaurya Bhatt
 * Date: 31/07/25
 * Purpose: Cal Compound Interest Using User Input
 */

#include <stdio.h>

int main() {
    float p,r,ci;
    printf("\nEnter P:");
    scanf("%f",&p);
    printf("\nEnter R:");
    scanf("%f",&r);
    ci = p * (1 + r/100);
    printf("\nThe Compound Interest For 1 Year is: %.2f",ci);
    printf("\n\n");
    return 0;
}