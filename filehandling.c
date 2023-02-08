#include<stdio.h>
void main()
{
    FILE *fp;
    int ch;
    fp=fopen("evenodd.c","r");
    while(!feof(fp))
    {
        ch=fgetc(fp);
        printf("%c",ch);
    }
    fclose(fp);
}