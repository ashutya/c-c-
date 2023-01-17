#include<stdio.h>
void addmat(int[][3],int[][3]);
void main()
{
     int i,j;
    // printf("enter no of row");
    // scanf("%d",&r);
    // printf("enter no of col");
    // scanf("%d",&c);
    int a[3][3],b[3][3];
    printf("enter first matrix elemnt");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter second matrix element");
    {
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
    }
       addmat(a,b);
}
void addmat(int a[][3],int b[][3])
{
    int i,j,sum[3][3];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            sum[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("addition matrix is");
       for(i=0;i<3;i++)
       {
        printf("\n");
        for(j=0;j<3;j++)
        {
            printf("%d ",sum[i][j]);
        }
       }
}