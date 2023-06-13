#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter the value of a");
    scanf("%d",&a);
    printf("enter the value of b");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("after swap a = %d\n",a);
    printf("after swap b = %d",b);

}