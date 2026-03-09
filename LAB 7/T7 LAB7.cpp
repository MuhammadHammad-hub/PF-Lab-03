#include<stdio.h>
int main() {
    int arr[10], i, j;

    printf("Enter 10 numbers:\n");
    for(i=0;i<10;i++)
        scanf("%d",&arr[i]);

    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(arr[i]==arr[j])
                arr[j]=-1;
        }
    }

    printf("Updated array:\n");
    for(i=0;i<10;i++)
        printf("%d ",arr[i]);
}
