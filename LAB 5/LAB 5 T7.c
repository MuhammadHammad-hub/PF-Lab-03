#include <stdio.h>

int main() {
    int enteredCard, enteredPIN;
    int validCard = 1234;
    int validPIN = 5678;
    float balance = 5000, amount;

    printf("Enter Card Number: ");
    scanf("%d", &enteredCard);

    if (enteredCard == validCard) {
        printf("Enter PIN: ");
        scanf("%d", &enteredPIN);

        if (enteredPIN == validPIN) {
            printf("Enter Amount: ");
            scanf("%f", &amount);

            if (amount <= balance)
                printf("Transaction Successful\n");
            else
                printf("Insufficient Funds\n");
        }
        else {
            printf("Invalid PIN\n");
        }
    }
    else {
        printf("Invalid Card\n");
    }

    return 0;
}
