#include <stdio.h>

int main() {
    int choice;
    int balance = 10000;   
    int amount;

    printf("1. Balance Inquiry\n");
    printf("2. Withdraw Money\n");
    printf("3. Deposit Money\n");
    printf("4. Exit\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {

        case 1:
            printf("Your current balance is: %d", balance);
            break;

        case 2:
            printf("Enter amount to withdraw: ");
            scanf("%d", &amount);

            if (amount <= balance && amount > 0) {
                balance = balance - amount;
                printf("Withdrawal successful.\nNew Balance: %d", balance);
            } else {
                printf("Insufficient balance or invalid amount");
            }
            break;

        case 3:
            printf("Enter amount to deposit: ");
            scanf("%d", &amount);

            if (amount > 0) {
                balance = balance + amount;
                printf("Deposit successful.\nNew Balance: %d", balance);
            } else {
                printf("Invalid deposit amount");
            }
            break;

        case 4:
            printf("Thank you! Exiting...");
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}
