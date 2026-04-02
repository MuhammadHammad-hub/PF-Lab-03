#include<stdio.h>
float applyDiscount(float price, int tier);
void printInvoice(float original, float discounted);
int main() {
    float price, discountedPrice;
    int tier;

    printf("Enter original price: ");
    scanf("%f", &price);

    printf("Enter membership tier (1=Bronze, 2=Silver, 3=Gold, 4=Platinum): ");
    scanf("%d", &tier);

    discountedPrice = applyDiscount(price, tier);

    printInvoice(price, discountedPrice);

    return 0;
}
float applyDiscount(float price, int tier) {
    float discountRate;

    if (tier == 1)
        discountRate = 0.05;
    else if (tier == 2)
        discountRate = 0.10;
    else if (tier == 3)
        discountRate = 0.20;
    else if (tier == 4)
        discountRate = 0.30;
    else
        discountRate = 0.0;

    return price - (price * discountRate);
}
void printInvoice(float original, float discounted) {
    float discountAmount = original - discounted;
    float delivery = 0.0;

    if (discounted < 2000)
        delivery = 150;

    float finalTotal = discounted + delivery;

    printf("\n----- INVOICE -----\n");
    printf("Original Price: Rs. %.2f\n", original);
    printf("Discount Amount: Rs. %.2f\n", discountAmount);
    printf("Price After Discount: Rs. %.2f\n", discounted);

    if (delivery > 0)
        printf("Delivery Charges: Rs. %.2f\n", delivery);
    else
        printf("Delivery Charges: Free\n");

    printf("Final Total: Rs. %.2f\n", finalTotal);
}