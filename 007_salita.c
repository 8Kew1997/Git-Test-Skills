#include <stdio.h>

int main()
{
    int quantity;
    float price = 39;
    float total;
    float discount = 0;
    float vat;
    float finalPrice;

    printf("ITDonalds\n");
    printf("Fried Chicken = %.2f Baht\n", price);

    printf("Enter quantity: ");
    scanf("%d", &quantity);

    total = price * quantity;

    if (total >= 1000)
        discount = 50.00;
    else if (total >= 500)
        discount = 25.00;
    else if (total >= 300)
        discount = 10.00;

    finalPrice = total - discount;
    vat = finalPrice * 7 / 107;

    printf("\nReceipt\n");
    printf("Chicken : %.2f Baht\n", price);
    printf("Quantity: %d\n", quantity);
    printf("Total   : %.2f Baht\n", total);
    printf("Discount: %.2f Baht\n", discount);
    printf("VAT 7%%  : %.2f Baht\n", vat);
    printf("Pay     : %.2f Baht\n", finalPrice);

    return 0;
} 