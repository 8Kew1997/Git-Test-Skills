#include <stdio.h>
int main() {
    int quantity;
    double price = 39.00;
    double total;
    double discount = 0.00;
    double netTotal;
    double vat;
    printf("===== ITDonalds =====\n");
    printf("chicken ชิ้นละ %.2f บาท\n", price);
    printf("จำนวนไก่ทอด (ชิ้น): ");
    scanf("%d", &quantity);
    total = price * quantity;
    if (total >= 1000) {
        discount = 50.00;
    }
    else if (total >= 500) {
        discount = 25.00;
    }
    else if (total >= 300) {
        discount = 10.00;
    }
    netTotal = total - discount;
    vat = netTotal * 7 / 107;
    printf("\n=====  =====\n");
    printf("fried_chicken | ราคาชิ้นละ %.2f baht\n", price);
    printf("amount (ชิ้น) : %d\n", quantity);
    printf("Total_price : %.2f baht\n", total);
    printf("discount : %.2f baht\n", discount);
    printf("Tax (สินค้า7%) : %.2f baht\n", vat);
    printf("รวมราคา : %.2f baht\n", netTotal);
}
//โจทย์
//ร้าน IT Donalds ขายไก่ทอดชิ้นล่ะ 39 บาท โดยมีโปรโมชันดังนี้
// ซื้อไก่ทอดครบ 300 บาท ลด 10 บาท
//ซื้อไก่ทอดครบ 500 บาท ลด 25 บาท
//ซื้อไก่ทอดครบ 1000 บาท ลด 50 บาท
//ไก่ทอดมีภาษีในตัวสินค้า ให้คำนวณและแสดงผลออกทางหน้าจอ
//ลูกค้าจะต้องชำระเงินเท่าไร
