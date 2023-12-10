#include<iostream>
using namespace std ;
int main()
{

    int a,b,t;
    int sum=0;
    for(a=199;a<=800;a++)
    {
    t=a;
    while(t>0)
    {
        b=t%10          ;
        sum=sum+(b*b*b);
        t=t/10;
    }
    if(sum==a)
        cout<<a<<endl;
        sum=0 ;
    }

    return 0;
}

