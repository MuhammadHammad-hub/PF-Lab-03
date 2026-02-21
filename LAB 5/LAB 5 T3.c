#include <stdio.h>

int main() {
    int type, subType;
    float weight, rate = 0, total;

    printf("Enter Luggage Type:\n");
    printf("1. Handbag\n2. Checked Bag\n3. Sports Equipment\n");
    scanf("%d", &type);

    printf("Enter Weight (kg): ");
    scanf("%f", &weight);

    switch (type) {
        case 1:
            printf("1. Small\n2. Large\n");
            scanf("%d", &subType);
            switch (subType) {
                case 1: rate = 100; break;
                case 2: rate = 200; break;
                default: printf("Invalid size\n");
            }
            break;

        case 2:
            printf("1. Domestic\n2. International\n");
            scanf("%d", &subType);
            switch (subType) {
                case 1: rate = 300; break;
                case 2: rate = 500; break;
                default: printf("Invalid type\n");
            }
            break;

        case 3:
            rate = 1000;
            break;

        default:
            printf("Invalid luggage type\n");
    }

    total = weight * rate;
    printf("Total Fee = Rs. %.2f\n", total);

    return 0;
}
