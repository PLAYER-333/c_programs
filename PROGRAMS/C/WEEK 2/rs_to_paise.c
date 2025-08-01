/*
 * Author: Shaurya Bhatt
 * Date: 1/08/25
 * Purpose: Convert Rupees to Paise Using User Input
 */

#include <stdio.h>

int main() {
    float rs, paise;
    printf("Enter amount in Rupees: ");
    scanf("%f", &rs);
    paise = rs * 100;
    printf("Paise: %.2f\n", paise);
    return 0;
}
