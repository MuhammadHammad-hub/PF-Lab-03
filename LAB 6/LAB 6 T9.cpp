#include <stdio.h>

int main() {
    int n;
    int totalItems = 0;

    printf("Enter number of boxes: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        totalItems += i;
    }

    printf("Total decorative items required = %d\n", totalItems);

    return 0;
}
