#include<stdio.h>
#include<string.h>
int main() {
    char names[5][30];
    char search[30];
    for(int i = 0; i < 5; i++){
        printf("Enter name %d: ", i+1);
        fgets(names[i], 30, stdin);
        names[i][strcspn(names[i], "\n")] = '\0';
    }
    printf("\nStudent List:\n");
    for(int i = 0; i < 5; i++){
        printf("%s\n", names[i]);
		}
        
    printf("\nEnter name to search: ");
    fgets(search, 30, stdin);
    search[strcspn(search, "\n")] = '\0';

    int found = 0;

    for(int i = 0; i < 5; i++){
        if(strcmp(names[i], search) == 0){
            printf("Found at position %d\n", i);
            found = 1;
            break;
        }
    }
    if(!found){
        printf("Student not found\n");
    }
    return 0;
}