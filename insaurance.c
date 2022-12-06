#include<stdio.h>
void main()
{
    int age,amt;
    char gender,smoker;
    printf("enter gender");
    scanf("%c",&gender);
    fflush(stdin);
    printf("enter smoker");
    scanf("%c",&smoker);
    printf("enter age");
    scanf("%d",&age);
    if(age>=21 && age<=30)
    {
        amt=10000;
    }
    else if(age>=31 && age<=40)
    {
        amt=15000;
    }
    else if(age>=41 && age<=50)
    {
        amt=20000;
    }
    else if(age>=51 && age<=60)
    {
        amt=40000;
    }
    else
    {
        printf("insaurance is not valid ");
    }
    if(gender=='f')
    {
        amt=amt-amt*10/100;
        printf("%d",amt);
    }
    else if(smoker=='y')
    {
        amt=amt+amt*10/100;
        printf("%d",amt);
    }
    else
    printf("%d",amt);

}