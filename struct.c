#include<stdio.h>
void main()
{
    struct student
     {
            char name[20];
            int sid;
            char section;
    };
    struct student s1,s2;
    printf("enter name");
    scanf("%s",s1.name);
    printf("enter sid");
    scanf("%d",&s1.sid);
    fflush(stdin);
    printf("enter section");
    scanf("%c",&s1.section);
    printf("enter name=%s\n",s1.name);
    printf("enter id=%d\n",s1.sid);
    printf("enter section=%c\n",s1.section);


    printf("enter name");
    scanf("%s",s2.name);
    printf("enter sid");
    scanf("%d",&s2.sid);
    fflush(stdin);
    printf("enter section");
    scanf("%c",&s2.section);
    printf("enter name=%s\n",s2.name);
    printf("enter id=%d\n",s2.sid);
    printf("enter section=%c\n",s2.section);
}