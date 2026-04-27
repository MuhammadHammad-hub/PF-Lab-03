#include <stdio.h>
#include <string.h>

struct Department{
    char deptCode[10];
    char deptName[50];
};

struct Course{
    char courseCode[10];
    char courseName[60];
    int creditHours;
    struct Department dept;
};

void searchByDept(struct Course c[], int n, char code[]){
    printf("\nCourses in Department %s:\n", code);
    for(int i=0; i<n; i++){
        if(strcmp(c[i].dept.deptCode, code) == 0){
            printf("%s - %s (%d CH)\n", c[i].courseCode, c[i].courseName, c[i].creditHours);
        }
    }
}

int main(){
    struct Course c[3];

    for(int i=0; i<3; i++){
        printf("\nEnter course %d details\n", i+1);

        printf("Course Code: ");
        scanf("%s", c[i].courseCode);

        printf("Course Name: ");
        scanf(" %[^\n]", c[i].courseName);

        printf("Credit Hours: ");
        scanf("%d", &c[i].creditHours);

        printf("Department Code: ");
        scanf("%s", c[i].dept.deptCode);

        printf("Department Name: ");
        scanf(" %[^\n]", c[i].dept.deptName);
    }

    printf("\n--- All Courses ---\n");
    for(int i=0; i<3; i++){
        printf("\n%s - %s\n", c[i].courseCode, c[i].courseName);
        printf("Credits: %d\n", c[i].creditHours);
        printf("Dept: %s (%s)\n", c[i].dept.deptName, c[i].dept.deptCode);
    }

    char code[10];
    printf("\nEnter department code to search: ");
    scanf("%s", code);

    searchByDept(c, 3, code);

    return 0;
}