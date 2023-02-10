#include<iostream>
using namespace std;
int main()
{
    int a1, b2, c3;
    cout<<"Enter 3 numbers"<<endl;
    cin>>a1>>b2>>c3;

    if(a1>b2 && a1>c3){
        cout<<"large:"<<a1<<endl;

    }
    else if(b2>a1 && b2>c3)     //22 66 99
        {
        cout<<"large:"<<b2<<endl;
        }

    else if(c3>a1 && c3>b2)
    {
        cout<<"large:"<<c3<<endl;

    }
    //small

    if(a1<b2 && a1<c3){
        cout<<"small:"<<a1<<endl;

    }
    else if(b2<a1 && b2<c3)     //22 66 99
        {
        cout<<"small:"<<b2<<endl;
        }

    else if(c3<a1 && c3<b2)
    {
        cout<<"small:"<<c3<<endl;

    }


           //middle

    if(b2>a1 && c3>b2){
            //22 44 88
        cout<<"middle:"<<b2<<endl;               // 22 44 88

                                                //44  88 22

                                                //88 22 44
    }
    //88 22 44
    else if(a1>b2 && c3>a1){
        cout<<"middle:"<<a1<<endl;
        }

   else if( c3>a1&& b2>c3)
    {
        //44 88 22
        cout<<"middle:"<<c3<<endl;

    }



    return 0;

}

