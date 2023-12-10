#include<iostream>
using namespace std;
int main()
{
    int a[100],n,i,t,j;
    cout<<"Enter the vales required: ";
    cin>>n;
    for(i=0;i<n;i++)
    {   cout<<"THE VALUES ENTER: ";
        cin>>a[i];
    }
    t=a[0] ;
    for(i=1; i<n; i++)
    {
        if(t<a[i])
            {
                t=a[i];
            }
    }
    cout<<"The greatest no is "<<t;
    return 0;
}
