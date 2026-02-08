#include <stdio.h>

int main() {
    double num;

    printf("Enter a double value: ");
    scanf("%lf", &num);

    printf("Default precision: %lf\n", num);
    printf("Two decimal places: %.2lf\n", num);
    printf("Five decimal places: %.5lf\n", num);

    return 0;
}
