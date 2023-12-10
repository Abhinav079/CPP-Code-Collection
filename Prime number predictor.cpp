#include<iostream>
using namespace std ;
int main()
{
    int b,i;
    cout<<"Enter the number: ";
    cin>>b;
    int c=0;
    for(i=1;i<=b;i++)
    {
        if(b%i==0)
        c++;
    }
    if(c==2)
        cout<<"Entered number is prime";
    else
        cout<<"Entered number is not prime";
    return 0;
}
