#include <stdio.h>

int main() {
    float a, b, c;

    // Ask user for input
    printf("Enter three sides of a triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    // Check triangle validity using separate if...else if...else
    if (a + b <= c) {
        printf("The triangle is NOT valid.\n");
    } else if (a + c <= b) {
        printf("The triangle is NOT valid.\n");
    } else if (b + c <= a) {
        printf("The triangle is NOT valid.\n");
    } else {
        printf("The triangle is valid.\n");
    }

    return 0;
}