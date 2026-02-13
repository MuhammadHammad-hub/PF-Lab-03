#include <stdio.h>

int main() {
    int balance;

    printf("Enter account balance: ");
    scanf("%d", &balance);

    if (balance > 0) {
        printf("Positive Balance\n");
    }
    else if (balance < 0) {
        printf("Overdrawn\n");
    }
    else {
        printf("Zero Balance\n");
    }

    return 0;
}
