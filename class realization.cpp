#include<iostream>
using namespace std;
class stud
{
public:
void student()
{
    int x,y,z;
    char a,b;
    string name,age;
    cout<<"Enter your name: ";
    cin>>name;
    cout<<"Enter your date of birth(ddmmyyyy): ";
    cin>>y;
    cout<<"Enter your Age: "<<endl;
    cin>>z;
    cout<<"-----------------------------------------------";
}
};
int main()
{
    stud o,b,g;
    cout<<"Enter records of student 1 : "<<endl;
    o.student();
    return 0;
}

