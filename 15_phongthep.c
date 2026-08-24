#include <stdio.h>

int main()
{
    float price = 39.0, sum, vat = 0.07, buy, discount;
    int piece;
    printf("=========> IT Donalds <=========\n");

    printf("Fried chicken 39 Baht/piece\n");
    printf("Which piece do you want to buy? : ");
    scanf("%d", &piece);
    buy = price * piece;

    if (buy > 1000)
    {
        discount = 50;
    }
    else if (buy > 500)
    {
        discount = 25;
    }
    else if (buy > 300)
    {
        discount = 10;
    }
    else
    {
        discount = 0;
    }

    printf("Fried chicken %.2f\n", price);
    printf("total chicken [piece] = %d\n", piece);
    printf("price = %.2f\n", buy);
    printf("discount = %.2f\n", discount);
    printf("vat = %.2f (included)\n", (buy - discount) * vat);
    printf("total price = %.2f\n", buy - discount);

    return 0;
}