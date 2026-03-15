#include <stdio.h>
int main()
{
    int temp[7][3];
    int i,j;
    int max;
    float avg;

    printf("Enter temperature for 7 days (Morning Afternoon Night)\n");

    for(i=0;i<7;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&temp[i][j]);
        }
    }

    max=temp[0][0];

    for(i=0;i<7;i++)
    {
        for(j=0;j<3;j++)
        {
            if(temp[i][j]>max)
            max=temp[i][j];
        }
    }

    printf("Highest temperature = %d\n",max);

    for(i=0;i<7;i++)
    {
        int sum=0;

        for(j=0;j<3;j++)
        {
            sum=sum+temp[i][j];
        }

        avg=(float)sum/3;

        printf("Average temperature of day %d = %.2f\n",i+1,avg);
    }

}