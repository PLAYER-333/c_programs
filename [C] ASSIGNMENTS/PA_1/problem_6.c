/*
 * Author: Shaurya Bhatt
 * Date: 15/08/25
 */



#include <stdio.h>

int main() {
    float pi = 3.14;
    float area,cir,r;
    
    printf("\nEnter Radius of Circle:");
    scanf("%f",&r);

    area = pi * r * r;
    cir = 2 * pi * r;

    printf("\nArea of Circle:%.2f",area);
    printf("\nCircumference of Circle:%.2f",cir);
    printf("\n\n");

    return 0;
}