#include<stdio.h>
void stringcopy(char *,char *);
void main()
{
    char data[30];
    char copydata[30];
    printf("enter string");
    scanf("%[^\n]",data);
    stringcopy(copydata,data);
     printf("copy=%s",copydata);
}
void stringcopy(char *destination, char *source)
{
    while(*source!='\0')
    {
        *destination=*source;
         source++;
         destination++;
    }
       *destination='\0';
     //printf("copy=%s",destination);
}
