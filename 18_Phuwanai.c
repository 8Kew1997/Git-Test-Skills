#include <stdio.h>

int main() {
    int amount;
    int total;
    int discount;
    int payment;

    printf("Enter quantity: ");
    scanf("%d", &amount);

    total = amount * 39;

    if (total >= 1000) {
        discount = 50;
    } else if (total >= 500) {
        discount = 25;
    } else if (total >= 300) {
        discount = 10;
    } else {
        discount = 0;
    }

    payment = total - discount;

    printf("Total = %d\n", total);
    printf("Discount = %d\n", discount);
    printf("Payment = %d\n", payment);

    return 0;
}