#include<stdio.h>
#include<stdlib.h>
int main() {
    int n;
    printf("Enter number of sensors: ");
    scanf("%d", &n);

    float *buffer = (float*) calloc(n, sizeof(float));
    if (buffer == NULL) {
        printf("Allocation failed\n");
        return 1;
    }
    printf("\nInitial values:\n");
    for (int i = 0; i < n; i++) {
        printf("%.2f\n", buffer[i]);
    }
    for (int i = 0; i < n; i++) {
        printf("Enter temperature: ");
        scanf("%f", &buffer[i]);
    }

    printf("\nUpdated values:\n");
    for (int i = 0; i < n; i++) {
        printf("%.2f\n", buffer[i]);
    }
    free(buffer);
    return 0;
}