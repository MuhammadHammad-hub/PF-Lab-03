#include<stdio.h>
float toMegajoules(float kwh);
float toBTU(float kwh);
float toCalories(float kwh);
int main() {
    float kwh;

    printf("Enter energy in kWh: ");
    scanf("%f", &kwh);

    printf("\n----- CONVERSION REPORT -----\n");
    printf("Input Energy: %.2f kWh\n", kwh);

    printf("Megajoules (MJ): %.2f\n", toMegajoules(kwh));
    printf("BTU: %.2f\n", toBTU(kwh));
    printf("Calories (kcal): %.2f\n", toCalories(kwh));
  
}
float toMegajoules(float kwh) {
    return kwh * 3.6;
}
float toBTU(float kwh) {
    return kwh * 3412.14;
}

float toCalories(float kwh) {
    return kwh * 859845;
}