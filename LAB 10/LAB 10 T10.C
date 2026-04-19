#include<stdio.h>
int main() {
    FILE *fptr;
    char name[30];
    int s1, s2, s3;
    float avg;
    char status[10];
    char line[100];

    printf("Enter name: ");
    scanf("%s", name);

    printf("Enter 3 scores: ");
    scanf("%d %d %d", &s1, &s2, &s3);

    avg = (s1 + s2 + s3) / 3.0;
    if(avg >= 50)
        sprintf(status, "Pass");
    else
        sprintf(status, "Fail");

    fptr = fopen("report.txt", "w+");

    if(fptr == NULL){
        printf("Error opening file\n");
        return 1;
    }
    fprintf(fptr, "Name: %s\n", name);
    fprintf(fptr, "Scores: %d %d %d\n", s1, s2, s3);
    fprintf(fptr, "Average: %.2f\n", avg);
    fprintf(fptr, "Status: %s\n", status);

    rewind(fptr);
    while(fgets(line, sizeof(line), fptr) != NULL){
        printf("%s", line);
    }
    fclose(fptr);
    return 0;
}