/*
 * Author: Shaurya Bhatt
 * Date: 31/07/25
 * Purpose: Cal Volume of Cube Using User Input
 */


#include <stdio.h>

int main() {
    float side,vol;
    printf("\nEnter Side of Cube:");
    scanf("%f",&side);
    vol = side * side * side;
    printf("\nThe vol of Cube With Side %.2f is:%.2f",side,vol);
    return 0;
}