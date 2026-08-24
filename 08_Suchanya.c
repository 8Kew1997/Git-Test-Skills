#include <stdio.h>

int main() {
    int quantity;
    float price = 39.00;
    float total, discount = 0, vat, net_total;

    printf("==========> ITDonalds <==========\n");
    printf("Fried Chicken | Price per piece: %.2f Baht\n", price);
    printf("Quantity: ");
    scanf("%d", &quantity);

    total = price * quantity;

    if (total >= 1000) {
        discount = 50;
    } else if (total >= 500) {
        discount = 25;
    } else if (total >= 300) {
        discount = 10;
    }

    net_total = total - discount;
    vat = net_total * 7 / 107;

    printf("\nTotal: %.2f Baht\n", total);
    printf("Discount: %.2f Baht\n", discount);
    printf("VAT: %.2f Baht\n", vat);
    printf("Grand Total: %.2f Baht\n", net_total);

    return 0;
}