#include <stdio.h>
int main() {
     int quantity;
    float price = 39.0;
    float total;
    double discount = 0, final_price; 

    printf("=====> IT Donalas <=====\n");
    printf("fried chicken / 39 Baht:\n");

    printf("Number of fried chickens: ");
    scanf("%d", &quantity);

    total = quantity * price;
    printf("Total price: %.2f Baht\n", total);

    if (total >= 1000) {
        discount = 50;
    } else if (total >= 500) {
        discount = 25;
    } else if (total >= 300) {
        discount = 10;
    } else {
        discount = 0;
    }

    final_price = total - discount;

    printf("Discount: %.2f Baht\n", discount);
    printf("VAT : %.2f Baht\n", final_price * 0.07);
    printf("Final price to pay: %.2f Baht\n", final_price);


    return 0;
}