#include <stdio.h>
#include <string.h>

int main() {
    char username[20];
    int password;

    printf("Enter username: ");
    scanf("%s", username);

    printf("Enter password: ");
    scanf("%d", &password);

    if (strcmp(username, "Hammad") == 0 && password == 0000) {
        printf("Connected Successfully\n");
    }
    else {
        printf("Connection Failed\n");
    }

    return 0;
}
