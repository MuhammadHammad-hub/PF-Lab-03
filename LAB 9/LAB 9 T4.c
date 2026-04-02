#include<stdio.h>
int validatePIN(int storedPIN, int enteredPIN);
int main() {
    int storedPIN = 4729;
    int enteredPIN;
    int attempts;

    for (attempts = 1; attempts <= 3; attempts++) {
        printf("Enter PIN: ");
        scanf("%d", &enteredPIN);

        if (validatePIN(storedPIN, enteredPIN)) {
            printf("Access granted. Welcome!\n");
            break;
        } else {
            if (attempts < 3)
                printf("Incorrect PIN. Attempts remaining: %d\n", 3 - attempts);
        }
    }

    if (attempts > 3) {
        printf("Card blocked. Contact your bank.\n");
    }

    return 0;
}
int validatePIN(int storedPIN, int enteredPIN) {
    if (storedPIN == enteredPIN)
        return 1;
    else
        return 0;
}