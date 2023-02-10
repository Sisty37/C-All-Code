#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter any num"<< endl;
    cin>>num;

    for(int i=1; i<=num; i++)
    {


        if(i%2==0)
        {
        cout<<"Even"<<i<<endl;

        }
    else
    {
        cout<<"Odd"<<i<<endl;}
    }






    return 0;

}
