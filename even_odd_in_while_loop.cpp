#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter any num"<< endl;
    cin>>num;

    int i=1;

   // for(int i=1; i<=num; i++)

    while(i<=num){
        if(i%2==0)
        {
        cout<<"Even"<<i<<endl;}
    else
    {
        cout<<"Odd"<<i<<endl;}


    }
    i=i+1;
    return 0;

}

