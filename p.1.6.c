#include<stdio.h>
void main()
{
    int a,b;
    printf("enter the value of a");
    scanf("%d",&a);
    printf("enter the value of b");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swap a =%d\n",a);
    printf("after swap b=%d",b);
}