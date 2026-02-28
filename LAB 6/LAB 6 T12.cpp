#include <stdio.h>

int main() {
    int seats = 40;
    int booking;

    while(seats > 0) {

        printf("Seats remaining: %d\n", seats);
        printf("Enter 1 to book a seat (0 to stop): ");
        scanf("%d", &booking);

        if(booking == 0) {
            break;
        }

        if(seats > 0) {
            seats--;
        }
    }

    if(seats == 0) {
        printf("All seats are booked.\n");
    } else {
        printf("Reservation stopped. Seats left: %d\n", seats);
    }

    return 0;
}
