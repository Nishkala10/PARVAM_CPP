#include<iostream>
using namespace std;
int main()
{
    int n,i,j,rev=0,dig;
    cout<<"Enter an integer";
    cin>>n;
    for(i=2;i<=n;i++)
    {
    if(n%i==0)
    cout<<"It is a not a prime number";
    else
    cout<<"It is prime number";
    break;
    }
    while(n>0)
    {
        dig=n%10;
        cout<<dig<<"\n";
        n=n/10;
        rev=rev*10+dig;
        cout<<rev<<"\n";
    }
    

    return 0;
}