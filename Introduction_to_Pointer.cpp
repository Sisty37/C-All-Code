#include<iostream>
using namespace std;
int main ()
{
   int x=5;
   int *pointer;

   pointer=&x;

   cout<<"x="<< x<<endl;
   cout<<"Address of x ="<< &x<<endl;  //&x ar pointer dile result same asbe address print korbe
   cout<<"Address of x ="<< pointer<<endl;
   cout<<"x= "<<*pointer<<endl;




    return 0;
}
