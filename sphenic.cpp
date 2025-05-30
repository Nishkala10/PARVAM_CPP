#include<iostream>
using namespace std;
int main()
{
    int count,n,i,a[10],j,ctr;
    cout<<"Enter an integer:";
    cin>>n;
    
    for(i=1;i<=n;i++)
    {
    if(n%i==0)
    count++;
    a[j]=i;
    j++;
    }

    cout<<"Number of divisors of "<<n<<" is:"<<count<<endl;
    if (count==8)
    for(i=0;i<=7;i++)
    {
        if(ctr<4)
        
    }
    cout<<"The number is a sphenic number"<<endl;
    else
    cout<<"The number is not a sphenic number"<<endl;
    return 0;

}