#include<iostream>
using namespace std;

class Item{
public:
int a=12;
int b=13;

int displayA();
int displayB();
};
int Item::displayA(){
return a;
}
int Item::displayB(){
return b;
}
int main(){
Item w;
cout<<w.displayB();
return 0;
}
