/*
 * Author: Shaurya Bhatt
 * Date: 16/08/25

 */


#include <stdio.h>

int main()
{
    float f;
    float c;
    printf("Enter Cesius:");
    scanf("%f",&c);
    f = (c * 9/5) + 32
;
    printf("\nThe Fahrenheit Temp is:%.2f",f);
    return 0;
}