#include <stdio.h>

int main() 
{
    float costprice, sellingprice, amount;
    printf("Enter Cost Price: ");
    scanf("%f", &costprice);
    printf("Enter Selling Price: ");
    scanf("%f", &sellingprice);
    if (sellingprice > costprice){
        amount = sellingprice - costprice;
        printf("Profit of %.2f\n", amount);
    }else if (sellingprice<costprice){ 
        amount = sellingprice-costprice;
        printf("Loss of %.2f\n", amount);
    }else{ 
        printf("nothing happen\n");
    }
    return 0;
}