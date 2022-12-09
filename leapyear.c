#include<stdio.h>
void main()
{
    int yr;
    printf("enter year");
    scanf("%d",&yr);
    {
    if(yr%4==0||yr%400==0)
    printf("year is leap year");
    else
    printf("not a leap year");
    }
}