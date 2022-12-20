#include<stdio.h>
void main()
{
int i,j,a,n;
printf("enter number of row");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
a=65;
for(j=0;j<=i;j++)
{
printf("*   ");
a++;
}
printf("\n");
}
}
