/*
 * Author: Shaurya Bhatt
 * Date: 16/08/25
 */


#include <stdio.h>

int main()
{
    float f;
    float c;
    printf("Enter Fahrenheit:");
    scanf("%f",&f);
    c = (f - 32) * 5/9;
    printf("\nThe Celsius Temp is:%.2f",c);
    return 0;
}