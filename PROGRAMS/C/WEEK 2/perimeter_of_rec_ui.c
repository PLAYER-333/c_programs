/*
 * Author: Shaurya Bhatt
 * Date: 28/07/25
 * Purpose: Perimeter of Rectangle Using User Input
 */


#include <stdio.h>

int main()
{
    
    int length;
    int breadth;
    int perimeter;
    printf("\nEnter Length of Rectangle:");
    scanf("%d",&length);
    printf("Enter Breadth of Rectangle:");
    scanf("%d",&breadth);
    perimeter = 2 + (length + breadth);
    printf("\nThe Perimeter of Rectangle:%d\n",perimeter);
    return 0;
}