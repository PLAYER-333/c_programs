/*
 * Author: Shaurya Bhatt
 * Date: 28/07/25
 * Purpose: Area of Rectangle Using User Input
 */


#include <stdio.h>

int main()
{
    
    int length;
    int breadth;
    int area;
    printf("\nEnter Length of Rectangle:");
    scanf("%d",&length);
    printf("Enter Breadth of Rectangle:");
    scanf("%d",&breadth);
    area = length * breadth;
    printf("\nThe Area of Rectangle:%d\n",area);
    return 0;
}