#include<iostream>
#include<string>
using namespace std;
int main()
{
    string first ="abu jafar";
    string middle="sisty";
    string last;

    last = first;

    cout<<last;
    cout<<" ";

    last=middle;

    cout<<middle;

    cout<<"\n ";

     last=first + middle;


     cout<<last<<" ";
     cout<<"\n";

     int length= first.size();

    cout<<"Total string:"<<length<<endl;






    return 0;

}


