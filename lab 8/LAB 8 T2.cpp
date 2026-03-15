#include <stdio.h>
int main()
{
    int seats[5][6] = {
        {1,0,0,1,0,0},
        {0,0,1,1,0,0},
        {1,1,1,0,0,0},
        {0,0,0,0,0,0},
        {1,0,1,0,1,0}
    };

    int i,j;
    int available=0;
    int booked,row,max=0,maxrow=0;

    for(i=0;i<5;i++)
    {
        for(j=0;j<6;j++)
        {
            if(seats[i][j]==0)
            available++;
        }
    }

    printf("Available seats = %d\n",available);

    for(i=0;i<5;i++)
    {
        booked=0;

        for(j=0;j<6;j++)
        {
            if(seats[i][j]==1)
            booked++;
        }

        if(booked>max)
        {
            max=booked;
            maxrow=i+1;
        }
    }

    printf("Row with maximum booked seats = Row %d\n",maxrow);

}