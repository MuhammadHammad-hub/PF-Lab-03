#include <stdio.h>

int main() {
    float data;

    printf("Enter total GB used: ");
    scanf("%f", &data);

    if (data < 0) {
        printf("Invalid data usage!\n");
    }
    else if (data <= 50) {
        printf("Basic User\n");
    }
    else if (data <= 150) {
        printf("Standard User\n");
    }
    else {
        printf("Heavy User\n");
    }

    return 0;
}
