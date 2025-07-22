#include <stdio.h>
int main() {
    int n1,n2;
    printf("Enter first number: ");
    scanf("%d", &n1);
    printf("Enter second number: ");
    scanf("%d", &n2);
    if (n1 == n2) {
        printf("n1 is equal to n2\n");
    }
    if (n1 > n2) {
        printf("n1 is greater than n2\n");
    }
    if (n1 < n2) {
        printf("n1 is less than n2\n");
    }
    return 0;
}