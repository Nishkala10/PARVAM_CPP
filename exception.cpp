#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter your age:";
    cin>>age;
    try
    {
        if (age<18)
        throw(age);
        else
        cout<<"Access given";
    }
    catch(int age)
    {
        cout<<"Access denied - You must be at least 18 years old. Age provided: "<<age<<endl;
    }
    return 0;
};
