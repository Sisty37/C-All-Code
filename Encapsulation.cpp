#include<iostream>
using namespace std;

class square{

public:
    int num,numm;
    void get(int n, int a)
    {
        num=n;
        numm =a;

    }

    void display()
    {  float mul= num*num;
        cout<<"square is:"<<mul<<endl;
    }


};

int main()

{
    square obj;
    obj.get(5,7);
    obj.display();

    obj.numm=100;

    //obj.get(a);
    obj.display();
}
