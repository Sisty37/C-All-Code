#include<iostream>
using namespace std;
int main()
{ int num=160;

    int i=1;

    do
      {
          if(i%2==0)
        {
        cout<<"Even"<<i<<endl;}
    else
    {
        cout<<"Odd"<<i<<endl;}
     i++;
      }

    while(i<=num);

    return 0;
}
