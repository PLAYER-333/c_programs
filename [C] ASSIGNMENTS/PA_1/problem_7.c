/*
 * Author: Shaurya Bhatt
 * Date: 16/08/25
 */

#include <stdio.h>

int main() {
    float l,w,s,ar,as;

    printf("\nEnter Length of Rectangle:");
    scanf("%f",&l);

    printf("\nEnter Width of Rectangle:");
    scanf("%f",&w);

    printf("\nEnter Side of Square:");
    scanf("%f",&s);

    ar = l * w;
    as = s*s;

    printf("\nThe Area of Rectangle:%.2f",ar);
    printf("\nThe Area of Square:%.2f",as);
    printf("\n\n");
    return 0;
}