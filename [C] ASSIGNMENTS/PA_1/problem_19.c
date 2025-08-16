/*
 * Author: Shaurya Bhatt
 * Date: 16/08/25
 */

#include <stdio.h>

int main() {
    float l,w,p;

    printf("\nEnter Length of Rectangle:");
    scanf("%f",&l);

    printf("\nEnter Width of Rectangle:");
    scanf("%f",&w);

    p = 2*(l + w);
    printf("The Perimeter of Rectangle:%.2f",p);
    printf("\n\n");
    return 0;
}