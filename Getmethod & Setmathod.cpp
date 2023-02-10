#include<iostream>
using namespace std;

class item{

public:
    int a;
    int b;

    void display()
    {
        cout<<a<<" "<<b<<endl;
    }

    item(int x, int y)
    {
         a=x;
        b=y;
    }

};

int main()

{
   item w(20, 30);
   w.display();




}

