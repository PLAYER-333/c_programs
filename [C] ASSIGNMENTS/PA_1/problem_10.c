/*
 * Author: Shaurya Bhatt
 * Date: 16/08/25
 */


#include <stdio.h>

int main() {
    float num1, num2, _;


    printf("Enter the first integer: ");
    scanf("%f", &num1);
    printf("Enter the second integer: ");
    scanf("%f", &num2);

    printf("\nBefore swapping:\n");
    printf("\nFirst Number: %.2f\n", num1);
    printf("\nSecond Number: %.2f", num2);


    _ = num1;   
    num1 = num2;   
    num2 = _;   

    printf("\nAfter swapping:\n");
    printf("\nFirst Number: %.2f\n", num1);
    printf("\nSecond Number: %.2f", num2);

    return 0;
}