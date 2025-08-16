/*
 * Author: Shaurya Bhatt
 * Date: 16/08/25
 */

/*
 * Author: Shaurya Bhatt
 * Date: 16/08/25
 */

#include <stdio.h>

int main() {
    int n1,n2,n3,n4,n5;
    float avg;

    printf("\nTotal Marks is 100");
    printf("\nEnter Number 1:");
    scanf("%d",&n1);
    printf("\nEnter Number 2:");
    scanf("%d",&n2);
    printf("\nEnter Number 3:");
    scanf("%d",&n3);
    printf("\nEnter Number 4:");
    scanf("%d",&n4);
    printf("\nEnter Number 5:");
    scanf("%d",&n5);


    avg = n1+n2+n3+n4+n5/5;


    printf("The Average is:%.2f",avg);
    return 0;
}