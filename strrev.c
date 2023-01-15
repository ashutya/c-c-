#include<stdio.h>
void stringrev(char[]);
void main()
{
    char s1[20];
    printf("enter string");
    scanf("%[^\n]",s1);
    stringrev(s1);
     //printf("rev=%s",s2);
}
void stringrev(char s1[])
{
    int l=0,i=0;
    while(s1[i]!='\0')
    {
        l++;
        i++;
    }
    for(i=l-1;i>=0;i--)
    {
        printf("%c",s1[i]);
    }
}