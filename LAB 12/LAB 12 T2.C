#include<stdio.h>
#include<stdlib.h>
int main() {
    int *contacts = (int*) malloc(3 * sizeof(int));

    if (contacts == NULL) {
        printf("Allocation failed\n");
        return 1;
    }
    for (int i = 0; i < 3; i++) {
        printf("Enter contact ID: ");
        scanf("%d", &contacts[i]);
    }
    int *temp = (int*) realloc(contacts, 5 * sizeof(int));

    if (temp == NULL) {
        printf("Reallocation failed\n");
        free(contacts);
        return 1;
    }

    contacts = temp;

    for (int i = 3; i < 5; i++) {
        printf("Enter contact ID: ");
        scanf("%d", &contacts[i]);
    }

    printf("\nAll contacts:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d\n", contacts[i]);
    }

    free(contacts);
    return 0;
}