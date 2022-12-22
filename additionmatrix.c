#include<stdio.h>
int main()
{
int i,j,a[3][3],b[3][3],c[3][3];
printf("\n enter value for 1 matrix ");
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("enter value of 2 matrix");
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
{
scanf("%d",&b[i][j]);
}
}
printf("\n first matrix is");
for(i=0;i<=2;i++)
{
printf("\n");
for(j=0;j<=2;j++)
printf("%d\t",a[i][j]);
}
printf("\n second matrix is");
for(i=0;i<=2;i++)
{
printf("\n");
for(j=0;j<=2;j++)
printf("%d\t",b[i][j]);
}
for(i=0;i<=2;i++)
{

    for(j=0;j<=2;j++)
        c[i][j]=a[i][j]+b[i][j];
}
printf("\n addition matrix is");
for(i=0;i<=2;i++)
{
    printf("\n");
    for(j=0;j<=2;j++)
        printf("%d\t",c[i][j]);
}
return(0);
}
