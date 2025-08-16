/*
 * Author: Shaurya Bhatt
 * Date: 16/08/25
 */


#include <stdio.h>

int main() {
    int num1, num2, _;


    printf("Enter the first integer: ");
    scanf("%d", &num1);
    printf("Enter the second integer: ");
    scanf("%d", &num2);

    printf("\nBefore swapping:\n");
    printf("First Number: %d\n", num1);
    printf("Second Number: %d\n", num2);


    _ = num1;   
    num1 = num2;   
    num2 = _;   

    printf("\nAfter swapping:\n");
    printf("First Number: %d\n", num1);
    printf("Second Number: %d\n", num2);

    return 0;
}