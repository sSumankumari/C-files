#include<stdio.h>

int main()
{
    int arr[5];
    int i, sum;
    for(i=0; i<5; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<5; i++)
    {
        sum=sum+arr[i];
        printf("%d\t",sum);
    }
    printf("\n Total sum=%d",sum);
    return 0;
}