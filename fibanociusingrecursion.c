#include<stdio.h>
void fibonaci(int);
void main()
{
    int n;
    printf("enter no of term");
    scanf("%d",&n);
    //printf("\n 0 \n 1");
    fibonaci(n);
}
void fibonaci(int n)
{
     static int x=0,y=1,z=0;
    if(n>0)
    {
         printf("\n%d",z);
         x=y;
         y=z;
         z=x+y;
        fibonaci(n-1);
    }
}