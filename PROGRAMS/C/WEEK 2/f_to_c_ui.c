/*
 * Author: Shaurya Bhatt
 * Date: 28/07/25
 * Purpose: Convert Fahrenheit to Celsius Using User Input
 */


#include <stdio.h>

int main()
{
    int f;
    int c;
    printf("Enter Fahrenheit:");
    scanf("%d",&f);
    c = (f - 32) * 5/9;
    printf("\nThe Celsius Temp is:%d",c);
    return 0;
}