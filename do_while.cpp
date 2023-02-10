#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter any number "<<endl;
    cin>>num;

    int i=1;

    while(i%2==0)
        {
    if(i%2==0)
    {
        cout<<"even"<<i<<endl;
    }
    else
    {
        cout<<"odd"<<i<<endl;
    }
    i++;

    }

    return 0;
}
