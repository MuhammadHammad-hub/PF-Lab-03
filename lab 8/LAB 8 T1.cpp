#include <stdio.h>
int main()
{
    int marks[4][3] = {
        {80,75,90},
        {60,70,85},
        {88,92,79},
        {55,65,70}
    };

    int i,j;
    int total;

    for(i=0;i<4;i++)
    {
        total = 0;

        for(j=0;j<3;j++)
        {
            total = total + marks[i][j];
        }

        printf("Total marks of student %d = %d\n",i+1,total);
    }

    printf("\n");

    for(j=0;j<3;j++)
    {
        total = 0;

        for(i=0;i<4;i++)
        {
            total = total + marks[i][j];
        }

        printf("Average of subject %d = %.2f\n",j+1,(float)total/4);
    }

}