#include<stdio.h>
int main() {
    int arr[6];
    int *p = arr;
    int highest;
    printf("Enter marks of 6 students:\n");
    for (int i = 0; i < 6; i++) {
        scanf("%d", (p + i));
    }
    printf("\nOriginal Marks:\n");
    for (int i = 0; i < 6; i++) {
        printf("%d ", *(p + i));
    }
    highest = *p;
    for (int i = 1; i < 6; i++) {
        if (*(p + i) > highest)
            highest = *(p + i);
    }
    for (int i = 0; i < 6; i++) {
        *(p + i) = (int)(((float)*(p + i) / highest) * 100);
    }

    printf("\n\nScaled Marks:\n");
    for (int i = 0; i < 6; i++) {
        printf("%d ", *(p + i));
    }
}