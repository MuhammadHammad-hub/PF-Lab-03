#include<stdio.h>
int countUpper(char *str){
    if(*str == '\0')
        return 0;

    if(*str >= 'A' && *str <= 'Z')
        return 1 + countUpper(str + 1);
    else
        return countUpper(str + 1);
}
int countDigits(char *str){
    if(*str == '\0')
        return 0;

    if(*str >= '0' && *str <= '9')
        return 1 + countDigits(str + 1);
    else
        return countDigits(str + 1);
}
int main(){
    char password[100];

    printf("Enter password: ");
    scanf("%s", password);

    printf("Uppercase letters: %d\n", countUpper(password));
    printf("Digits: %d\n", countDigits(password));

    return 0;
}