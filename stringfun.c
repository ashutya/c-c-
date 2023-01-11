#include<stdio.h>
#include<string.h>
void main()
{
    int n;
    printf("enter 1 for len of string\n");
    printf("enter 2 for rev of string\n");
    printf("enter 3 for concat string\n");
    printf("enter 4 for copy string\n");
    printf("enter 5 for convert uppercase\n");
    printf("enter 6 for convert lower case\n");
    scanf("%d",&n);
    char s[20],p[20];
    switch(n)
    {
       case 1:
           //char s[20],p[20];
           fflush(stdin);
           printf("enter string");
           gets(s);
           printf("length of string is=%d",strlen(s));
        break;
    case 2:
         //char p[20];
         fflush(stdin);
         printf("enter string");
         gets(p);
         printf("rev of string is=%s",strrev(p));
         break;
    case 3:
        //char a[20],b[30];
        fflush(stdin);
        printf("enter string 1");
        gets(p);
        fflush(stdin);
        printf("enter string 2");
        gets(s);
        printf("concat string is=%s",strcat(p,s)); 
        break;
    case 4:
            fflush(stdin);
         printf("enter 1 string");
         gets(p);
         printf("copy string is=%s",strcpy(p,s));
         break;
    case 5:
           fflush(stdin);
            printf("enter lower case string");
            gets(p);
            printf("upper case string is =%s",strupr(p));
            break;
    case 6:
          
           fflush(stdin);
            printf("enter upper case string");
            gets(p);
            printf("lower case string is =%s",strlwr(p));
            break;
    }
}