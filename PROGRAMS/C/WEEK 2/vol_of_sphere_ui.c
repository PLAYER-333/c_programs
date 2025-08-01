/*
 * Author: Shaurya Bhatt
 * Date: 31/07/25
 * Purpose: Cal Volume of Sphere Using User Input
 */


#include <stdio.h>

int main() {
    int r;
    float vol;
    printf("\nEnter R of Sphere:");
    scanf("%d",&r);   
    vol = (4 / 3) * 3.14 * r*r*r;
    printf("\nThe vol of Sphere With Radius is:%.2f",vol);
    return 0;
}