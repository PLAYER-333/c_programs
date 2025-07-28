/*
 * Author: Shaurya Bhatt
 * Date: 28/07/25
 * Purpose: Cal Simple Interest Using User Input
 */

#include <stdio.h>

int main()
{
    float p;
    float r;
    float t;
    float interest;
    printf("Enter Principal:");
    scanf("%f",&p);
    printf("Enter Rate:");
    scanf("%f",&r);
    printf("Enter Time:");
    scanf("%f",&t);
    interest = p * r * t / 100;
    printf("The Simple Interest is:%f",interest);
    return 0;
}