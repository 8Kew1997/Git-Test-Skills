#include <stdio.h>

int main() {
    int quantity;
    float price = 39.00;
    float total, discount, netTotal, vat, grandTotal;

    discount = 0;

    printf("========== ITDonalds ==========\n");
    printf("Fried Chicken Price: %.2f Baht\n", price);

    printf("Please enter the quantity: ");
    scanf("%d", &quantity);

    // Calculate total price
    total = price * quantity;

    // Check discount
    if (total >= 1000) {
        discount = 50;
    } else if (total >= 500) {
        discount = 25;
    } else if (total >= 300) {
        discount = 10;
    }

    // Apply discount
    netTotal = total - discount;

    // Calculate VAT 7%
    vat = netTotal * 0.07;

    // Calculate grand total
    grandTotal = netTotal + vat;

    printf("\n========== Receipt ==========\n");
    printf("Quantity     : %d pieces\n", quantity);
    printf("Total Price  : %.2f Baht\n", total);
    printf("Discount     : %.2f Baht\n", discount);
    printf("VAT 7%%       : %.2f Baht\n", vat);
    printf("Net Total    : %.2f Baht\n", grandTotal);

    return 0;
}