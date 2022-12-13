#include<stdio.h>
void pover();
void sumdigit();
void factorial(int,int);
void main()
{
    int n,i;
    printf("enter no 1 for fact\n");
    printf("enter no 2 for power\n");
    printf("enter no 3 for sumdigit\n");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
           factorial(n,i);
           break;
        case 2:
           pover();
            break;
        case 3:
           sumdigit();
           break;
    }  
}
void factorial(int a, int b)
{
    int fact=1;
    printf("enter number");
    scanf("%d",&a);
    for(b=1;b<=a;b++)
    {
    fact=fact*b;
    }
    printf("fact=%d\n",fact);
}
void pover()
{
    int a,b,p=1,i;
    printf("enter base number");
    scanf("%d",&a);
    printf("enter pover value");
    scanf("%d",&b);
    for(i=1;i<=b;i++)
    {
        p=p*a;
    }
    printf("p=%d\n",p);
}
void sumdigit()
{
    int n,sum=0,i;
    printf("enter number");

    scanf("%d",&n);
    for(i=n;i>0;i=i/10)
    {
        sum=sum+i%10;
    }
    printf("sum=%d",sum);
} 