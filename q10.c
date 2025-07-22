#include <stdio.h>
int main() 
{
    float a, b, c;
    printf("Enter first side of a triangle: ");
    scanf("%f",&a);
    printf("Enter second side of a triangle: ");
    scanf("%f",&a);
    printf("Enter third side of a triangle: ");
    scanf("%f",&c);
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