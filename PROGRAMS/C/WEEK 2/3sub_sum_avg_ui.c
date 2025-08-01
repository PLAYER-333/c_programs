/*
 * Author: Shaurya Bhatt
 * Date: 1/08/25
 * Purpose: Calculate 3 Subjects Sum & Avg Using User Input
 */


#include <stdio.h>

int main() {
    int mark1,mark2,mark3;
    float sum,avg;
    printf("Enter Marks of Subject 1:");
    scanf("%d",mark1);
    printf("Enter Marks of Subject 2:");
    scanf("%d",mark2);
    printf("Enter Marks of Subject 3:");
    scanf("%d",mark3);


    sum = mark1 + mark2 + mark3;
    avg = mark1 + mark2 + mark3/3;
    printf("\nThe Sum of Marks of 3 Subjects %d %d %d is:%.2f",mark1,mark2,mark3,sum);
    printf("\nThe Avg of Marks of 3 Subjects %d %d %d is:%.2f",mark1,mark2,mark3,avg);
    return 0;
}