#include <stdio.h>
int main() {
    int n;

    printf("Enter a n: ");
    scanf("%d", &n);
    if (n % 5 == 0) {
        if (n % 7 == 0) {
            if (n % 5 == 0 && n % 7 == 0) {
                printf("%d is divisible by both 5 and 7.\n", n);
            }
        } else {
            printf("%d is divisible by 5\n", n);
        }
    } else {
        if (n % 7 == 0) {
            printf("%d is divisible by 7 \n", n);
        } else {
            printf("%d is NOT divisible by 5 or 7.\n", n);
        }
    }

    return 0;
}