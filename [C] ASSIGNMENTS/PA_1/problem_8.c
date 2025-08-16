/*
 * Author: Shaurya Bhatt
 * Date: 16/08/25
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
    printf("The Simple Interest is:%.2f",interest);
    return 0;
}