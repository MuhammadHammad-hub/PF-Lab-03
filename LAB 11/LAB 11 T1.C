#include <stdio.h>

int powerFloor(int n){
    if(n == 1)
        return 100;
    return 2 * powerFloor(n - 1);
}

int totalPower(int floors){
    if(floors == 1)
        return 100;
    return powerFloor(floors) + totalPower(floors - 1);
}

int main(){
    int n;
    printf("Enter number of floors: ");
    scanf("%d", &n);

    printf("Total Power = %d kWh\n", totalPower(n));

    return 0;
}