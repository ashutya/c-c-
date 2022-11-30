#include<iostream>
using namespace std;
int main()
{
    int i,rev=0;
    cout<<"\n enter no to convert reverse";
    cin>>i;
    //while(i>0)
    for(;i>0;i=i/10)
    {
        rev=(rev*10)+(i%10);
        //i=i/10;
    }
    cout<<"\n rev="<<rev;
    return(0);

}