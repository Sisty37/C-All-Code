#include<iostream>
using namespace std;
int main()
{
    char x;
    cout<<"Enter your mark"<<endl;
    cin>>x;

    if(x>=90 && x<=100){
        cout<<"your grade is A+"<<endl;
    }
    else if(x>=80 && x<=89)
    {
        cout<<"your grade is A"<<endl;
    }
    else if(x>=70 && x<=79)
    {
        cout<<"your grade is B+"<<endl;
    }
    else if(x>=60 && x<=69)
    {
        cout<<"your grade is B"<<endl;
    }
    else if(x>=50 && x<=59){
        cout<<"your grade id c+"<<endl;
    }

    else if(x<50)
        cout<<"you are fail"<<endl;

    return 0;

}
