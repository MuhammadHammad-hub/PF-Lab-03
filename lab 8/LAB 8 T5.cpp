#include <stdio.h>
int main()
{
    int a[5][5];
    int r,c,i,j;
    int zero=1,identity=1;

    printf("Enter rows and columns: ");
    scanf("%d%d",&r,&c);

    printf("Enter matrix:\n");

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    if(r==c)
    printf("Square Matrix\n");
    else
    printf("Rectangular Matrix\n");

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(a[i][j]!=0)
            zero=0;
        }
    }

    if(zero==1)
    printf("Zero Matrix\n");

    if(r==c)
    {
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                if(i==j && a[i][j]!=1)
                identity=0;

                if(i!=j && a[i][j]!=0)
                identity=0;
            }
        }

        if(identity==1)
        printf("Identity Matrix\n");
    }

}