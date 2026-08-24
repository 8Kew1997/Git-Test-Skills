#include <stdio.h>

int main(void)
{
    int friedChickenPrice = 39;
    double vatRate = 0.07;
    int friedChickenAmount;
    double discount = 0;

    printf("คุณตก๊ายไก่กี่ชิ้น?:");
    scanf("%d", &friedChickenAmount);

    double totalPrice = friedChickenAmount * friedChickenPrice;

    printf("ไก่ทอด I ราคาชิ้นละ : %d\n", friedChickenPrice);
    printf("จำนวนก๊ายไก่: %d\n", friedChickenAmount);
    printf("ราคารวม: %.2f\n", totalPrice);

    if (totalPrice >= 1000)
    {
        discount = 50;
        printf("ส่วนลดโปรโมชั่น : 50\n");
    }
    else if (totalPrice >= 500)
    {
        discount = 25;
        printf("ส่วนลดโปรโมชั่น : 25\n");
    }
    else if (totalPrice >= 300)
    {
        discount = 10;
        printf("ส่วนลดโปรโมชั่น : 10\n");
    }

    printf("ภาษีมูลค่าเพิ่ม : %.2f\n", totalPrice * vatRate);
    printf("ราคารวมทั้งหมด : %.2f\n", (totalPrice - discount) * (1 + vatRate));

}
