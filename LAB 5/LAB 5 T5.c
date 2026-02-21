#include <stdio.h>

int main() {
    float salary, incentive;
    int serviceYears;

    printf("Enter Salary: ");
    scanf("%f", &salary);

    printf("Enter Years of Service: ");
    scanf("%d", &serviceYears);

    incentive = (serviceYears > 15) ? salary * 0.35 :
                (serviceYears > 7)  ? salary * 0.20 :
                                      salary * 0.05;

    printf("Incentive Amount = Rs. %.2f\n", incentive);

    return 0;
}
