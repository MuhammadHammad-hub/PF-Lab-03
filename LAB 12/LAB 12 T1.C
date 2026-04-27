#include<stdio.h>
#include<stdlib.h>
int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    float *grades = (float*) malloc(n * sizeof(float));

    if (grades == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    for (int i = 0; i < n; i++) {
        printf("Enter grade: ");
        scanf("%f", &grades[i]);
    }

    printf("\nGrades:\n");
    for (int i = 0; i < n; i++) {
        printf("%.2f\n", grades[i]);
    }
    free(grades);
    return 0;
}