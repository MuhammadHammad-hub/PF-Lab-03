#include<stdio.h>
#include<string.h>
struct Patient{
    char name[50];
    int age;
    char bloodType[5];
    int patientID;
    char diagnosis[100];
};
void displayAll(struct Patient p[], int n){
    printf("\n--- Patient Records ---\n");
    for(int i=0; i<n; i++){
        printf("\nID: %d\n", p[i].patientID);
        printf("Name: %s\n", p[i].name);
        printf("Age: %d\n", p[i].age);
        printf("Blood Type: %s\n", p[i].bloodType);
        printf("Diagnosis: %s\n", p[i].diagnosis);
    }
}
void searchByID(struct Patient p[], int n, int id){
    for(int i=0; i<n; i++){
        if(p[i].patientID == id){
            printf("\nPatient Found:\n");
            printf("Name: %s\n", p[i].name);
            printf("Age: %d\n", p[i].age);
            printf("Blood Type: %s\n", p[i].bloodType);
            printf("Diagnosis: %s\n", p[i].diagnosis);
            return;
        }
    }
    printf("Patient not found\n");
}
int main(){
    struct Patient p[5];

    for(int i=0; i<5; i++){
        printf("\nEnter details for patient %d\n", i+1);

        printf("Name: ");
        scanf(" %[^\n]", p[i].name);

        printf("Age: ");
        scanf("%d", &p[i].age);

        printf("Blood Type: ");
        scanf("%s", p[i].bloodType);

        printf("Patient ID: ");
        scanf("%d", &p[i].patientID);

        printf("Diagnosis: ");
        scanf(" %[^\n]", p[i].diagnosis);
    }
    displayAll(p, 5);
    int id;
    printf("\nEnter ID to search: ");
    scanf("%d", &id);

    searchByID(p, 5, id);
    return 0;
}