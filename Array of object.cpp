#include<iostream>
using namespace std;
class student{
    public:
int id;
float cgpa;

};
int main(){
 student s1[2];
 int i;

 for( i=0; i<2; i++)
 cout<<"student id:";
 cin>>s1[i].id;

 cout<<"student cgpa:";
 cin>>s1[i].cgpa;

 cout<<s1[i].id<<endl;
 cout<<s1[i].cgpa<<endl;


}

