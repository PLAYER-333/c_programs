/*
 * Author: Shaurya Bhatt
 * Date: 16/08/25
 */

#include <stdio.h>

int main() {
    float l,w,s,ar;

    printf("\nEnter Length of Rectangle:");
    scanf("%f",&l);

    printf("\nEnter Width of Rectangle:");
    scanf("%f",&w);



    ar = l * w;

    printf("\nThe Area of Rectangle:%.2f",ar);
    printf("\n\n");
    return 0;
}