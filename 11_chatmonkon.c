#include <stdio.h>
int main() {
    int kai_price = 39; 
    int how_many_you_want; 
    float lod_ra_ka = 0; 
    float tax_rate = 0.07; 
    float price, last_tax, lastprice;
    printf("=========> Welcome to ITDonalds <=========\n");
    printf("How many chicken you want to buy: ");
    scanf("%d", &how_many_you_want);

    price = kai_price * how_many_you_want;

    if (price >= 1000) {
        lod_ra_ka = 50;
    } else if (price >= 500) {
        lod_ra_ka = 25;
    } else if (price >= 300) {
        lod_ra_ka = 10;
    }

    price -= lod_ra_ka; 
    last_tax = price * tax_rate;
    lastprice = price + last_tax; 

    printf("Price chicken: %d Baht\n", kai_price);
    printf("How many chicken: %d\n", how_many_you_want);
    printf("Lod Ra Ka: %.2f Baht\n", lod_ra_ka);
    printf("Tax: %.2f Baht\n", last_tax);
    printf("Pay all: %.2f Baht\n", lastprice);

    return 0;
}