//calculator in c 
#include<stdio.h>
int main()
{
    char c;
    int a,b,sum,sub,mul,div,per;
    printf("enter the value of a and b");
    scanf("%d%d",&a,&b);
    printf("select operator whic you want to perform + - * / % ");
    fflush(stdin);
    scanf("%c",&c);
     if(c=='+')
     {
    sum=a+b;
    printf("addition is %d",sum);
     }
      else if(c=='-')
     {
    sub=a-b;
    printf("sub=%i",sub);
     }
     else if(c=='*')
     {
        mul=a*b;
        printf("mul=%d",mul);
     }
     else if(c=='/')
     {
     div=a/b;
     printf(" div=%d ",div);
     }
     else if(c=='%')
     {
        per=a%b;
        printf("per=%d",per);
     }
     else
     printf("invalid input");
}
