#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    float weight, height, age, result;

    printf("1. BMI\n2. BMR\n3. Ideal Weight\n4. Heart Rate Zone\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1: 
            printf("Enter weight (kg) and height (m): ");
            scanf("%f %f", &weight, &height);

            if (weight > 0 && height > 0) {
                result = weight / pow(height, 2);
                printf("BMI = %.2f\n", result);
            } else {
                printf("Invalid input\n");
            }
            break;

        case 2: 
            printf("Enter weight, height (cm), age: ");
            scanf("%f %f %f", &weight, &height, &age);

            if (weight > 0 && height > 0 && age > 0) {
                result = 10*weight + 6.25*height - 5*age + 5;
                printf("BMR = %.2f\n", result);
            } else {
                printf("Invalid input\n");
            }
            break;

        case 3: 
            printf("Enter height (inches): ");
            scanf("%f", &height);

            if (height > 0) {
                result = 50 + 2.3 * (height - 60);
                printf("Ideal Weight = %.2f kg\n", fabs(result));
            } else {
                printf("Invalid input\n");
            }
            break;

        case 4: 
            printf("Enter Age: ");
            scanf("%f", &age);

            if (age > 0) {
                result = 0.7 * (220 - age);
                printf("Target Heart Rate = %.2f bpm\n", result);
            } else {
                printf("Invalid input\n");
            }
            break;

        default:
            printf("Invalid choice\n");
    }

    return 0;
}
