#include<stdio.h>
void main()
{
    FILE *fp;
    fp=fopen("ashu.txt","w");
    fprintf(fp,"hello in the world of file handling");
    printf("file created succesfully");
    fclose(fp);
}