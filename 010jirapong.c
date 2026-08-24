#include <stdio.h>

int main(void)
{
    int friedChickenPrice = 39;
    double vatRate = 0.07;
    int friedChickenAmount;
    double discount = 0;

    printf("คุณต้องการไก่กี่ชิ้น?: ");
    scanf("%d", &friedChickenAmount);

    double totalPrice = friedChickenAmount * friedChickenPrice;

    printf("ไก่ทอด I ราคาชิ้นละ : %d บาท\n", friedChickenPrice);
    printf("จำนวนไก่ : %d ชิ้น\n", friedChickenAmount);
    printf("ราคารวม : %.2f บาท\n", totalPrice);

    if (totalPrice >= 1000)
    {
        discount = 50;
        printf("ส่วนลดโปรโมชั่น : %.2f บาท\n", discount);
    }
    else if (totalPrice >= 500)
    {
        discount = 25;
        printf("ส่วนลดโปรโมชั่น : %.2f บาท\n", discount);
    }
    else if (totalPrice >= 300)
    {
        discount = 10;
        printf("ส่วนลดโปรโมชั่น : %.2f บาท\n", discount);
    }
    else
    {
        printf("ส่วนลดโปรโมชั่น : 0.00 บาท\n");
    }

    double priceAfterDiscount = totalPrice - discount;
    double vat = priceAfterDiscount * vatRate;
    double finalPrice = priceAfterDiscount + vat;

    printf("ราคาหลังหักส่วนลด : %.2f บาท\n", priceAfterDiscount);
    printf("ภาษีมูลค่าเพิ่ม 7%% : %.2f บาท\n", vat);
    printf("ราคารวมทั้งหมด : %.2f บาท\n", finalPrice);

    return 0;
}