#include <stdio.h>

int main() {
    float dataGB, rate, bill;
    int customerType; // 1 = Prepaid, 2 = Postpaid

    printf("Enter Data Usage (GB): ");
    scanf("%f", &dataGB);

    printf("Customer Type (1=Prepaid, 2=Postpaid): ");
    scanf("%d", &customerType);

    if (dataGB <= 2) {
        rate = 50;
    } 
    else if (dataGB <= 10) {
        if (customerType == 1)
            rate = 40;
        else
            rate = 35;
    } 
    else {
        rate = 25;
    }

    bill = dataGB * rate;

    printf("Total Bill = Rs. %.2f\n", bill);

    return 0;
}

