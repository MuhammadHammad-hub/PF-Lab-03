#include <stdio.h>

int main() {
    int category, type, qty;
    int price = 0;

    printf("Select Category:\n1. Fiction\n2. Non-Fiction\n");
    scanf("%d", &category);

    switch (category) {
        case 1:
            printf("1. Novel\n2. Comic\n");
            scanf("%d", &type);
            switch (type) {
                case 1: price = 600; break;
                case 2: price = 300; break;
                default: printf("Invalid choice\n");
            }
            break;

        case 2:
            printf("1. Biography\n2. Self-Help\n");
            scanf("%d", &type);
            switch (type) {
                case 1: price = 800; break;
                case 2: price = 500; break;
                default: printf("Invalid choice\n");
            }
            break;

        default:
            printf("Invalid category\n");
    }

    printf("Enter Quantity: ");
    scanf("%d", &qty);

    printf("Total Bill = Rs. %d\n", price * qty);

    return 0;
}
