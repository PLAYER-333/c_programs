/*
 * Author: Shaurya Bhatt
 * Date: 28/07/25
 * Purpose: Convert Celsius to Fahrenheit Using User Input
 */


#include <stdio.h>

int main()
{
    int f;
    int c;
    printf("Enter Cesius:");
    scanf("%d",&c);
    f = (c * 9/5) + 32
;
    printf("\nThe Fahrenheit Temp is:%d",f);
    return 0;
}