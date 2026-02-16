#include <stdio.h>

int main() {
    int i;
    float marks, total = 0, percentage;

    for (i = 1; i <= 5; i++) {
        printf("Enter marks of subject %d: ", i);
        scanf("%f", &marks);
        total += marks;
    }

    percentage = (total / 500) * 100;

    printf("Percentage = %.2f%%\n", percentage);

    if (percentage >= 85)
        printf("Full Scholarship");
    else if (percentage >= 70)
        printf("Partial Scholarship");
    else if (percentage >= 50)
        printf("Eligible for Consideration");
    else
        printf("Not Eligible");

    return 0;
}
