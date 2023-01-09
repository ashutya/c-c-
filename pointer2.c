#include<stdio.h>
void main()
{
    int a,b,*p,*q,c;
    printf("enter a and b");
    scanf("%d%d",&a,&b);
    p=&a;
    q=&b;
    c=*p+*q;
    printf("add=%d",c);
}