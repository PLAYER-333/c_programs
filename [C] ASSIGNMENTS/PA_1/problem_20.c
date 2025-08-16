/*
 * Author: Shaurya Bhatt
 * Date: 16/08/25
 */

#include <stdio.h>

int main() {
    float b,h,area;

    printf("\nEnter Base of Triangle:");
    scanf("%f",&b);

    printf("\nEnter Height of Triangle:");
    scanf("%f",&h);

    area = 1/2 * b * h;
    printf("\nThe Area of Triangle:%.2f",area);
    printf("\n\n");
    return 0;
}