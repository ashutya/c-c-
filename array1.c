#include<stdio.h>
void main()
{
    int a[10],i;
    printf("enter element");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("elemt are");
    for(i=0;i<10;i++)
    {
       printf("%d",a[i]);
    }
}