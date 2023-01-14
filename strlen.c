#include<stdio.h>
int strlen(char *);
void main()
{
   char data[30];
   printf("enter string");
   scanf("%[^\n]",data);

   int len=strlen(data);
   printf("len of string=%d",len);
}
int strlen(char *data)
{
    int len=0;
    while(*(data)!='\0')
    {
        data++;
        len++;
    }
    return len;
}