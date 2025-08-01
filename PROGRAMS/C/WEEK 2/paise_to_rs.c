/*
 * Author: Shaurya Bhatt
 * Date: 1/08/25
 * Purpose: Convert Paise to Rupees Using User Input
 */

#include <stdio.h>

int main() {
    float paise, rs;
    printf("Enter amount in Paise: ");
    scanf("%f", &paise);
    rs = paise / 100;
    printf("Rupees: %.2f\n", rs);
    return 0;
}
