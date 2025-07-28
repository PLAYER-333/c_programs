/*
 * Author: Shaurya Bhatt
 * Date: 28/07/25
 * Purpose: Circumference of Circle Using User Input
 */


#include <stdio.h>

int main()
{
    int r;
    int c;
    printf("Enter Radius of Circle:");
    scanf("%d",&r);
    c = 2 * 3.14 * r;
    printf("\nThe Circumference of Circle:%d",c);
    return 0;
}