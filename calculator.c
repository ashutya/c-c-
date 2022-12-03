#include<stdio.h>
void main()
{   
    float a,b;
    int mul,div,sub,sum,count;
    char c;
    do
    {
        printf("enter two number");
        scanf("%f%f",&a,&b);
        fflush(stdin);
        printf("enter the operator which you want to perform + - * / %  ");
        scanf("%c",&c);
        switch(c)
        {
            case '+':
            printf("sum=%f",a+b);
            break;
            case '-':
            printf("sub=%f",a-b);
            break;
            case '*':
            printf("mul=%f",a*b);
            break;
            case '/':
            printf("div=%f",a/b);
            break;
            default:
            printf("invalid choice");
        }
        printf("ASHU TYAGI ");
        printf("\n do you want to continue");
        scanf("%d",&count);
    
    }  
    while(count==1);
} 