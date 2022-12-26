#include<stdio.h>
void main()
{
    int a[10],i,sum=0;
    printf("\n enter number");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\narray element are");
    for(i=0;i<10;i++)
    {
       sum=sum+a[i];
    }
    printf("sum=%d",sum);
}