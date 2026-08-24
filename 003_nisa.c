#include <stdio.h>
int main() {
    int quantity;
    float price = 39.00;
    float total, discount = 0, netTotal, vat;

    printf("========== ITDonalds ==========\n");
    printf("Chicken Price: %.2f Baht\n", price);

    printf("Enter quantity: ");
    scanf("%d", &quantity);

    total = price * quantity;

    if (total >= 1000) {
        discount = 50.00;
    } else if (total >= 500) {
        discount = 25.00;
    } else if (total >= 300) {
        discount = 10.00;
    }

    netTotal = total - discount;
    vat = netTotal * 7 / 107;

    
    printf("Quantity      : %d pieces\n", quantity);
    printf("Total         : %.2f Baht\n", total);
    printf("Discount      : %.2f Baht\n", discount);
    printf("VAT 7%%        : %.2f Baht\n", vat);
    printf("Grand Total   : %.2f Baht\n", netTotal);

    return 0;
}