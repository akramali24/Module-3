#include <stdio.h>

int main() {
    
    int customerId;
    char customerName[50];
    float unitConsumed;

    printf("Enter customer ID: ");
    scanf("%d", &customerId);

    printf("Enter customer name: ");
    scanf("%s", customerName); 
    printf("Enter units consumed: ");
    scanf("%f", &unitConsumed);

    float chargePerUnit;

    if (unitConsumed <= 350) {
        chargePerUnit = 1.20;  
    } else if (unitConsumed < 600) {
        chargePerUnit = 2.50; 
    } else if (unitConsumed < 800) {
        chargePerUnit = 3.50; 
        chargePerUnit = 4.50;
    }

    float totalAmount = unitConsumed * chargePerUnit;

    printf("\nElectricity Bill\n");
    printf("Customer ID: %d\n", customerId);
    printf("Customer Name: %s\n", customerName);
    printf("Units Consumed: %.2f\n", unitConsumed);
    printf("Charge per Unit: $%.2f\n", chargePerUnit);
    printf("Total Amount to be Paid: $%.2f\n", totalAmount);

    return 0;
}
