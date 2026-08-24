#include <stdio.h>

int main() {
    int quantity;
    float price = 39.00;
    float total;
    float discount = 0.00;
    float netTotal;
    float vat;

    printf("========== ITDonalds ==========\n");
    printf("Fried Chicken - %.2f Baht/piece\n", price);

    printf("Enter quantity: ");
    scanf("%d", &quantity);

    total = price * quantity;

    // Calculate discount
    if (total >= 1000) {
        discount = 50.00;
    } 
    else if (total >= 500) {
        discount = 25.00;
    } 
    else if (total >= 300) {
        discount = 10.00;
    }

    netTotal = total - discount;

    // Calculate VAT 7%
    vat = netTotal * 7 / 107;

    printf("\n Receipt \n");
    printf("Item : Fried Chicken\n");
    printf("Price : %.2f Baht\n", price);
    printf("Quantity : %d pieces\n", quantity);
    printf("Total : %.2f Baht\n", total);
    printf("Discount : %.2f Baht\n", discount);
    printf("VAT 7%% : %.2f Baht\n", vat);
    printf("Grand Total : %.2f Baht\n", netTotal);

    return 0;
}