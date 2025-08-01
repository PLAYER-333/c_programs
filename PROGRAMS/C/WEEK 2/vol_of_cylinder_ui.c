/*
 * Author: Shaurya Bhatt
 * Date: 31/07/25
 * Purpose: Cal Volume of Cylinder Using User Input
 */


#include <stdio.h>

int main() {
    float r,h,vol;
    printf("\nEnter R of Cylinder:");
    scanf("%f",&r);
    printf("\nEnter H of Cylinder:");
    scanf("%f",&h);
    vol = 3.14 * r * r * h;
    printf("\nThe vol of Cylinder With Radius %.2f & Height %.2f is:%.2f",r,h,vol);
    return 0;
}