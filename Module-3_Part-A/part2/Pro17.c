#include <stdio.h>

int main() {
   
    float costPrice, sellingPrice;

    printf("Enter the cost price: ");
    scanf("%f", &costPrice);

    printf("Enter the selling price: ");
    scanf("%f", &sellingPrice);

    float profit = sellingPrice - costPrice;
    float loss = costPrice - sellingPrice;

    if (profit > 0) {
        printf("Profit: $%.2f\n", profit);
    } else if (loss > 0) {
        printf("Loss: $%.2f\n", loss);
    } else {
        printf("No profit, no loss.\n");
    }

    return 0;
}
