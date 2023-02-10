#include<iostream>
using namespace std;
int main ()
{
    int sum=0, n;
    cout<<"Enter the last number="<<endl;
    cin>>n;

    for(int i=1.5; i<=n; i=i+1)
    {
        sum=sum+i;

    }
    cout<<sum;

    return 0;
}

