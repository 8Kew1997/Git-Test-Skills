#include <stdio.h>

int main(void) {
    const double price_per_piece = 39.00;
    const double vat_rate = 0.07;
    int pieces;
    double total_including_vat;
    double discount = 0.00;
    double amount_to_pay;
    double vat_amount;

    printf("Enter the number of fried chicken pieces: ");
    if (scanf("%d", &pieces) != 1 || pieces <= 0) {
        printf("Please enter a valid number of pieces (more than 0)\n");
        return 1;
    }

    total_including_vat = pieces * price_per_piece;

    if (total_including_vat >= 1000.00) {
        discount = 50.00;
        
    } else if (total_including_vat >= 500.00) {
        discount = 25.00;

    } else if (total_including_vat >= 300.00) {
        discount = 10.00;
    }
    
    
    amount_to_pay = total_including_vat - discount;
    vat_amount = amount_to_pay * vat_rate / (1.00 + vat_rate);

    printf("\n--- IT Donalds Receipt ---\n");
    printf("Pieces: %d\n", pieces);
    printf("Price per piece (VAT included): %.2f Baht\n", price_per_piece);
    printf("Total price (VAT included): %.2f Baht\n", total_including_vat);
    printf("Discount: %.2f Baht\n", discount);
    printf("VAT included in final price: %.2f Baht\n", vat_amount);
    printf("Amount to pay: %.2f Baht\n", amount_to_pay);

    return 0;
}