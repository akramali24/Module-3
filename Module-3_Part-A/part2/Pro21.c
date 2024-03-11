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

    float chargePerUnit = 1.20; 

    float totalAmount = unitConsumed * chargePerUnit;

    printf("\nElectricity Bill\n");
    printf("Customer ID: %d\n", customerId);
    printf("Customer Name: %s\n", customerName);
    printf("Units Consumed: %.2f\n", unitConsumed);
    printf("Charge per Unit: $%.2f\n", chargePerUnit);
    printf("Total Amount to be Paid: $%.2f\n", totalAmount);

    return 0;
}
