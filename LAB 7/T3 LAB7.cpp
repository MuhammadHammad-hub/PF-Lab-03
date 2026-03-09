#include<stdio.h>
int main() {
    int pass[10], fail[10];
    int i=0, j=0, mark;
    float avgp=0, avgf=0;

    while(1)
    {
        printf("Enter marks (-1 to exit): ");
        scanf("%d",&mark);

        if(mark==-1)
            break;

        if(mark>=5 && mark<=10)
        {
            pass[i]=mark;
            avgp += mark;
            i++;
        }
        else if(mark>=0 && mark<5)
        {
            fail[j]=mark;
            avgf += mark;
            j++;
        }
    }

    printf("\nPass marks: ");
    for(int k=0;k<i;k++)
        printf("%d ",pass[k]);

    printf("\nFail marks: ");
    for(int k=0;k<j;k++)
        printf("%d ",fail[k]);

    if(i>0)
        printf("\nAverage pass marks: %.2f",avgp/i);

    if(j>0)
        printf("\nAverage fail marks: %.2f",avgf/j);
}
