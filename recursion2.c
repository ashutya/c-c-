#include<stdio.h>
void displayNumber(int num);
void main()
{
    int num=10;
    displayNumber(num);
}
void displayNumber(int num)
{
    if(num==0)
    {
        return;
    }
    else
    //printf("%d ",num);
    displayNumber(num-1);
    printf("%d ",num);
}