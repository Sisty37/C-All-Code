#include<iostream>
using namespace std;
int main()
{
    char x;
    cout<<"Enter your letter="<<endl;
    cin>>x;

    x = tolower(x);
    x = toupper(x);
    // capital or small letter er jonno capital dileo run hobe tolower er jonno
    // abr toupper er jonno small dileo run hbe

    if(x=='a' || x=='e' || x=='i' || x=='o' || x=='u')
    {
        cout<<"vowel"<<endl;
    }
    else
    {
        cout<<"consonent"<<endl;
    }
    return 0;

}
