#include<stdio.h>
void counter();
void main()
{
  counter();
  counter();
  counter();
}
void counter()
{
    static int count=10;
    count++;
    printf("%d\n",count);
}