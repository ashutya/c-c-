#include<stdio.h>
int max(int a[]);
void main()
{
    int a[10],i;
    printf("enter element in array");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
   max(a);
   printf("max=%d",max(a));
}
int max(int a[])
{
    int max=a[0],i;
for(i=1;i<10;i++)
{
    if(max<a[i])
    max=a[i];
}
return max;
}