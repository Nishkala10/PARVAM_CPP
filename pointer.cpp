#include<iostream>
using namespace std;
int main()
{
    int number=30;
    int *p;
    p=&number;
    cout<<"Address of number variable is:"<<&number<<endl;
    cout<<"Address of p variable is:"<<p<<endl;
    cout<<"Value of p variable is:"<<*p<<endl;
    cout<<*p<<endl;
    cout<<&number<<endl;
    cout<<p<<endl;
    return 0;

}