#include <stdio.h>

int main() {
    float attendance;

    printf("Enter practice attendance percentage: ");
    scanf("%f", &attendance);

    if (attendance < 0 || attendance > 100) {
        printf("Invalid attendance percentage!\n");
    }
    else if (attendance >= 75) {
        printf("Selected for Tournament\n");
    }
    else {
        printf("Not Selected\n");
    }

    return 0;
}
