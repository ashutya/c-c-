#include<stdio.h>
int is_prime(int);
void main()
{
    int n;
    printf("enter number");
    scanf("%d",&n);
    if(is_prime(n))
    {
        printf("prime number");
    }
    else
    {
        printf("not prime number");
    }
}
int is_prime(int m)
{
    int i,count=0;
    for(i=1;i<=m;i++)
    {
        if(m%i==0)
        {
        count++;
        }
    }
    if(count==2)
    {
        return 1;
    }
    else
         {
        return 0;
          }
    
}