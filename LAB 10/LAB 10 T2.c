#include<stdio.h>
#include<string.h>
int main() {
    char password[] = "fast123";
    char input[50];
    int attempts = 0;
    while(attempts < 3){
        printf("Enter password: ");
        scanf("%s", input);
        if(strlen(input) == 0){
            printf("Empty password not allowed\n");
            continue;
        }

        int cmp = strcmp(input, password);

        if(cmp == 0){
            printf("Access Granted\n");
            return 0;
        }
        else{
            if(cmp < 0)
                printf("Input is alphabetically BEFORE stored password\n");
            else
                printf("Input is alphabetically AFTER stored password\n");
        }

        attempts++;
        if(attempts == 2){
            if(strncmp(input, password, 3) == 0)
                printf("Hint: First 3 characters match\n");
            else
                printf("Hint: First 3 characters do not match\n");
        }
    }
    printf("Account Locked after 3 failed attempts\n");

    return 0;
}