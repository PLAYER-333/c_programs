/*
 * Author: Shaurya Bhatt
 * Date: 1/08/25
 * Purpose: Calculate Speed Using User Input
 */

#include <stdio.h>

int main() {
    float distance, time, speed;
    printf("Enter distance: ");
    scanf("%f", &distance);
    printf("Enter time: ");
    scanf("%f", &time);
    speed = distance / time;
    printf("Speed: %.2f\n", speed);
    return 0;
}
