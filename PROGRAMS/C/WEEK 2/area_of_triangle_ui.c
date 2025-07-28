/*
 * Author: Shaurya Bhatt
 * Date: 28/07/25
 * Purpose: Area of Triangle Using User Input
 */


#include <stdio.h>

int main()
{
    
    int base;
    int height;
    int area;
    printf("\nEnter Base of Triangle:");
    scanf("%d",&base);
    printf("Enter Height of Triangle:");
    scanf("%d",&height);
    area = 0.5 * base * height;
    printf("\nThe Area of Triangle:%d\n",area);
    return 0;
}