/*
 * Author: Shaurya Bhatt
 * Date: 31/07/25
 * Purpose: Cal Minutes to Hours Using User Input
 */


#include <stdio.h>

int main() {
    int m,h;
    printf("\nEnter Minutes:");
    scanf("%d",&m);
    h = m / 60;
    printf("Hours:%d",h);
    return 0;
}