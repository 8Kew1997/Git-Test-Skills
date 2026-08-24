#include <stdio.h>
int main(){
    int chickenprice = 39;
    int chickencount;
    int totalprice;
    int promotion;
    float vet = 0.07;
    printf("chicken Price = 39 Baht\n");
    printf("Number of chickens: ");
    scanf("%d", &chickencount);

    totalprice = chickencount * chickenprice;

    if (totalprice > 1000){
        promotion = 50;
    }
    else if (totalprice > 500){
        promotion = 25;
    }
    else if (totalprice > 300){
        promotion = 10;
    }
    else{
        promotion = 0;
    }
    printf("Total price: %d Baht\n", totalprice);
    printf("Promotion: %d Baht\n", promotion);
    printf("VAT: %.2f Baht\n", (totalprice - promotion) * vet);
    printf("Total price after promotion: %d Baht\n", totalprice - promotion);
}