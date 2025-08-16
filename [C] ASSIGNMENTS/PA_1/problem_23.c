/*
 * Author: Shaurya Bhatt
 * Date: 16/08/25
 */


#include <stdio.h>

int main() {

    double a, b, c, d, e, x;

    printf("Enter the value for a: ");
    scanf("%lf", &a);
    printf("Enter the value for b: ");
    scanf("%lf", &b);
    printf("Enter the value for c: ");
    scanf("%lf", &c);
    printf("Enter the value for d: ");
    scanf("%lf", &d);
    printf("Enter the value for e: ");
    scanf("%lf", &e);

    if ((d + e) == 0) {
        printf("Error: Division by zero is not allowed.\n");
    }

    x = (a + b * c) / (d + e);
    printf("The value of x is: %.2lf\n", x);
    return 0;
}