#include <iostream>

using namespace std;

class mobile{

private:
    int imei_no;

protected:
    string screen;

public:
    string model;
    void s(){
    cout<<"the screen type of mobile"<<endl;
    }
    void m(){
    cout<<"the model of the mobile"<<endl;
    }

    void setimei(int i)
    {
        imei_no=i;
    }
    void getimei()
    {
        cout<<"the imei number is:"<<imei_no<<endl;

    }

    void setscreen(string s)
    {
        screen=s;
    }
    void getscreen()
    {
        cout<<"the screen type is"<<screen<<endl;

    }

};

class samsung:private mobile{
public:

    int i;
    string s;



    samsung(){

    cout<<"its a samsung phone"<<endl;
    }


    samsung(string name){

    cout<<"the model of samsung is "<<name<<endl;
    }


    void setmobileinfo(int im,string sc)
    {
        i=im;
        s=sc;
        setimei(i);
        setscreen(s);
    }


    void getmobileinfo()
    {
        mobile::getimei();
        mobile::getscreen();
    }

    void smfunc()
    {
        mobile::s();
        mobile::m();

    }




};

class nokia:public mobile{
public:
    nokia(){

    cout<<"its a nokia phone"<<endl;
    }
    nokia(string name){

    cout<<"the model of nokia is "<<name<<endl;
    }

};
class iphone:protected mobile{
public:

    int i;
    string s;
    iphone(){

    cout<<"its a i phone"<<endl;
    }
    iphone(string name){

    cout<<"the model of iphone is "<<name<<endl;
    }
    void smfunc()
    {
        mobile::s();
        mobile::m();

    }
    void setmobileinfo(int im,string sc)
    {
        i=im;
        s=sc;
        setimei(i);
        setscreen(s);
    }


    void getmobileinfo()
    {
        mobile::getimei();
        mobile::getscreen();
    }

};


int main()
{
    mobile m;
    m.s();
    m.m();
    m.setimei(123677);
    m.getimei();
    m.setscreen("glass");
    m.getscreen();
    cout<<"............................."<<endl;
    cout<<endl;

    //private inheritance
    samsung a;
    samsung d("flip");
    a.setmobileinfo(1111,"gl");
    a.getmobileinfo();
    a.smfunc();
    cout<<"............................."<<endl;
    cout<<endl;

    //public inheritance
    nokia b;
    b.s();
    b.m();
    b.setimei(123677);
    b.getimei();
    b.setscreen("glass");
    b.getscreen();
    cout<<"............................."<<endl;
    cout<<endl;

    //protected inheritance
    iphone c;
    iphone n("14");
    c.smfunc();
    c.setmobileinfo(55555,"xyz");
    c.getmobileinfo();






}
