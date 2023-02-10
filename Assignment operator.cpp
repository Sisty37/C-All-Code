#include <iostream>
using namespace std;

int main()
{
    int rows, i, c;

    cout << "Enter number of rows: ";
    cin >> rows;


    for(i = 1; i <= rows; i++)
    {
        //inner loop is responsible for columns
        for( c= 1;  c<= i; c++)
        {
            cout << c << " ";
        }

        cout << "\n";
    }
    return 0;
}
