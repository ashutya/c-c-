#include<stdio.h>
int fact(int);
void main()
{
    int n;
    printf("enter number");
    scanf("%d",&n);
    fact(n);
    printf("fact=%d",fact(n));
}
int fact(int a)
{
    if(a==0) 
    {
        return 1;
    }
    else
         return a*fact(a-1);
}