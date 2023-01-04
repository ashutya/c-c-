#include<stdio.h>
#include<math.h>
void is_prime();
void is_armstrong();
void to_upper();
void to_lower(); 
void is_upper(); 
void is_lower(); 
void is_digit(); 
void is_alphabet(); 
void power(); 
void factorial(); 
void NCR();
void NPR();
int main()
{
    int a;
     printf("enter 1 for armstrong\n");
    printf("enter 2 for prime number\n");
     printf("enter 3 for upper case\n");
    printf("enter 4 for lower case\n");
    printf("enter 5 for check ch is upper case\n");
    printf("enter 6 for check ch is lower case\n");
    printf("enter 7 for check digit\n");
    printf("enter 8 for check alphabet\n");
    printf("enter 9 for find pover\n");
    printf("enter 10 for find factorial\n");
    printf("enter 11 for find NCR\n");
    printf("enter 12 for find NPR\n");
    scanf("%d",&a);
    
    switch(a)
    {
        case 1:
        is_armstrong();
        break;
        case 2:
              is_prime();
        break;
        case 3:
            to_upper();
        break;
        case 4:
            to_lower();
        break;
        case 5:
             is_upper();
        break;
        case 6:
            is_lower();
        break;
        case 7:
             is_digit();
           break;
           case 8:
              is_alphabet();
              break;
              case 9:
                   power();
            break;
        case 10:
            factorial();
            break;
        case 11:
             NCR();
             break;
        case 12:
                NPR();
                break;
}
return(0);
 }
    
void is_armstrong()
{
    int i,sum=0,x;
    printf("enter no to check");
    scanf("%d",&i);
    x=i;
    for(i=x;i>0;i=i/10)
    {
    sum=sum+(i%10)*(i%10)*(i%10);
    }
if(sum==x)
{
printf("armstrong no");
}
else
{
printf(" not armstrong no");
}
}
void is_prime()
{
     int i,count=0,m;
     printf("enter number");
    scanf("%d",&m);
    for(i=1;i<=m;i++)
    {
        if(m%i==0)
        {
        count++;
        }
    }
    if(count==2)
    {
       printf("prime number");
    }
    else
         {
        printf("not prime");
          }
}
void to_upper()
    {
       char name;
       fflush(stdin);
       printf("enter lower case character\n");
       scanf("%c",&name);
       name=name-32;
       printf("upper case ch is %c",name);
    }
void to_lower()
    {
       char ch;
       fflush(stdin);
       printf("enter upper case character");
       scanf("%c",&ch);
       ch=ch+32;
       printf("lower case ch is %c",ch);
    }
    void is_upper()
    {
        char ch;
        fflush(stdin);
        printf("enter character");
        scanf("%c",&ch);
        if(ch>=65&&ch<=90)
        {
            printf("ch is upper case");
        }
        else
        {
            printf("ch is not upper case");
        }
    }
     void is_lower()
    {
        char ch;
        fflush(stdin);
        printf("enter character");
        scanf("%c",&ch);
        if(ch>=97&&ch<=122)
        {
            printf("ch is lower case");
        }
        else
        {
            printf("ch is not lower case");
        }
    }
    void is_digit()
    {
        char ch;
        fflush(stdin);
        printf("enter digit");
        scanf("%c",&ch);
        if(ch>='0'&&ch<='9')
        {
            printf("ch is digit");
        }
        else
        {
             printf("ch is not digit");
        }
        
    }
    void is_alphabet()
    {
       char ch;
       fflush(stdin);
       printf("enter character");
       scanf("%c",&ch);
       if(ch>=65 && ch<=122)
       {
        printf("given ch is alphabet");
       }
       else
       {
            printf("given ch is not alphabet");

       }

    }
    void power()
    {
          int a,b,p=1,i;
    printf("enter base number");
    scanf("%d",&a);
    printf("enter pover value");
    scanf("%d",&b);
    for(i=1;i<=b;i++)
    {
        p=p*a;
    }
    printf("p=%d\n",p);
    }
    void factorial()
    {
 int fact=1,a,b;
    printf("enter number");
    scanf("%d",&a);
    for(b=1;b<=a;b++)
    {
    fact=fact*b;
    }
    printf("fact=%d\n",fact);
    }
    void NCR()
    {
       


    }
    void NPR()
    {
       int n,r,NPR;
        printf("enter r");
       scanf("%d",&r);
       printf("enter n");
       scanf("%d",&n);


    }