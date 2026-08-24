#include <stdio.h>

int main()
{
    float price = 39.0, sum, vat = 0.07, buy, discount;
    int piece;

    printf("ไก่ทอดชิ้นละ 39บาท/piece\n");
    printf("ต้องการซื้อกี่ชิ้น : ");
    scanf("%d", &piece);
    printf("\n=========> IT Donalds <=========\n");

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

    printf("ไก่ทอด %.2f\n", price);
    printf("จำนวนกี่ชิ้น [piece] = %d\n", piece);
    printf("ราคา = %.2f\n", buy);
    printf("ส่วนลด = %.2f\n", discount);
    printf("ภาษี = %.2f (included)\n", (buy - discount) * vat);
    printf("รวมทั้งหมด = %.2f\n", buy - discount);

    return 0;
}