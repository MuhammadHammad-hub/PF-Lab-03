#include <stdio.h>

int main() {
    float amount, discount = 0;

    printf("Enter total purchase amount: ");
    scanf("%f", &amount);

    if (amount >= 5000)
        discount = amount * 0.20;
    else if (amount >= 3000)
        discount = amount * 0.10;

    printf("Discount = %.2f\n", discount);
    printf("Final Amount = %.2f", amount - discount);

    return 0;
}
