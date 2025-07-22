#include <stdio.h>
int main() {
    int hour, minute, second;
    printf("enter hour:");
    scanf("%d",&hour);
    printf("enter minute:");
    scanf("%d",&minute);
    printf("enter second:");
    scanf("%d",&second);
    if (hour >= 0 && hour < 24 && minute >= 0 && minute < 60 && second >= 0 && second < 60)
        printf("Valid time\n");
    else
        printf("Invalid time\n");
    return 0;
}