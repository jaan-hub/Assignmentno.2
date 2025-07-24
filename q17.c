#include <stdio.h>

int main() {
    int qty1, qty2, qty3;
    float rate1, rate2, rate3;
    float amt1, amt2, amt3, total, discount, finalamt;
    printf("enter quantity and rate for item 1:");
    scanf("%d %f", &qty1, &rate1);
    printf("enter quantity and rate for item 2:");
    scanf("%d %f", &qty2, &rate2);
    printf("enter quantity and rate for item 3:");
    scanf("%d %f", &qty3, &rate3);

    amt1 = qty1 * rate1;
    amt2 = qty2 * rate2;
    amt3 = qty3 * rate3;
    total = amt1 + amt2 + amt3;
    if (total > 50000)
        discount = 0.20 * total;
    else if (total >= 15000)
        discount = 0.15 * total;
    else if (total >= 5000)
        discount = 0.08 * total;
    else
        discount = 0;

    finalamt = total - discount;
    printf("\nTotal Sales Amount: %.2f\n", total);
    printf("Discount Applied:     %.2f\n", discount);
    printf("Final Amount to Pay:  %.2f\n", finalamt);
    return 0;
}