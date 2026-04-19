#include<stdio.h>
int main() {
    FILE *fptr;
    int score, sum = 0, val, count = 0;
    float avg;

    fptr = fopen("survey.txt", "w");

    if(fptr == NULL){
        printf("Error opening file\n");
        return 1;
    }
    for(int i = 0; i < 5; i++){
        printf("Enter score: ");
        scanf("%d", &score);
        fprintf(fptr, "%d\n", score);
    }
    fclose(fptr);

    fptr = fopen("survey.txt", "r");
    if(fptr == NULL){
        printf("Error opening file\n");
        return 1;
    }
    while(fscanf(fptr, "%d", &val) != EOF){
        sum += val;
        count++;
    }
    fclose(fptr);
    avg = (float)sum / count;
    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", avg);
    return 0;
}