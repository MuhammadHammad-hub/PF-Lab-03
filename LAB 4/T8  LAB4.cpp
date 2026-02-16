#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    float a, b;

    printf("\n1. Addition");
    printf("\n2. Subtraction");
    printf("\n3. Multiplication");
    printf("\n4. Division");
    printf("\n5. Square");
    printf("\n6. Cube");
    printf("\n7. Square Root");
    printf("\n8. Power (x^y)");
    printf("\n9. Absolute Value");
    printf("\n10. Modulus");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            scanf("%f%f", &a, &b);
            printf("Result = %.2f", a + b);
            break;

        case 2:
            scanf("%f%f", &a, &b);
            printf("Result = %.2f", a - b);
            break;

        case 3:
            scanf("%f%f", &a, &b);
            printf("Result = %.2f", a * b);
            break;

        case 4:
            scanf("%f%f", &a, &b);
            if (b != 0)
                printf("Result = %.2f", a / b);
            else
                printf("Division by zero not allowed");
            break;

        case 5:
            scanf("%f", &a);
            printf("Square = %.2f", a * a);
            break;

        case 6:
            scanf("%f", &a);
            printf("Cube = %.2f", a * a * a);
            break;

        case 7:
            scanf("%f", &a);
            if (a >= 0)
                printf("Square Root = %.2f", sqrt(a));
            else
                printf("Square root of negative number not allowed");
            break;

        case 8:
            scanf("%f%f", &a, &b);
            printf("Result = %.2f", pow(a, b));
            break;

        case 9:
            scanf("%f", &a);
            printf("Absolute Value = %.2f", fabs(a));
            break;

        case 10:
            scanf("%f%f", &a, &b);
            if ((int)b != 0)
                printf("Modulus = %d", (int)a % (int)b);
            else
                printf("Modulus by zero not allowed");
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}
