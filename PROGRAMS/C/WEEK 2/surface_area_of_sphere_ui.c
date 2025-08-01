/*
 * Author: Shaurya Bhatt
 * Date: 1/08/25
 * Purpose: Cal Surface Area of Sphere Using User Input
 */

#include <stdio.h>

int main() {
    int r,sa;
    printf("Enter R of Sphere:");
    scanf("%d",&r);
    sa = (4 * 3.14 * r*r);
    printf("The Surface Area of Sphere With R %d is %d",r,sa);
    return 0;
}