#include<stdio.h>
#include<string.h>
int main() {
    char email[100];
    char copy[100];
    char formatted[150] = "Email: ";
    printf("Enter email: ");
    scanf("%s", email);
    strcpy(copy, email);
    char *ptr = strchr(copy, '@');

    if(ptr == NULL){
        printf("Invalid email (no @ found)\n");
        return 0;
    }
    char *domain = ptr + 1;
    if(strstr(domain, ".") == NULL){
        printf("Invalid domain (no . found)\n");
        return 0;
    }
    printf("Domain: %s\n", domain);
    strcat(formatted, copy);

    printf("%s\n", formatted);

    return 0;
}