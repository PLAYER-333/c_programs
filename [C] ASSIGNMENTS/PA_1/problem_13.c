/*
 * Author: Shaurya Bhatt
 * Date: 16/08/25
 */

#include <stdio.h>

int main() {
    int s1,s2,s3,s4,s5;
    float total,per;

    printf("\nTotal Marks is 100");
    printf("\nEnter Marks of Subject 1:");
    scanf("%d",&s1);
    printf("\nEnter Marks of Subject 2:");
    scanf("%d",&s2);
    printf("\nEnter Marks of Subject 3:");
    scanf("%d",&s3);
    printf("\nEnter Marks of Subject 4:");
    scanf("%d",&s4);
    printf("\nEnter Marks of Subject 5:");
    scanf("%d",&s5);


    total = s1+s2+s3+s4+s5;
    per = total / 500 * 100;

    printf("The Percentage You Got is:%.2f",per);
    return 0;
}