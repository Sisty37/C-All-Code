#include <iostream>
using namespace std;

void calculateTriangularNumber ( int n )

{
 int i, triangularNumber = 0;

   for ( i = 1; i <= n; ++i )

   triangularNumber = triangularNumber + i ;

   cout<<"Triangular number "<<n <<" is " <<triangularNumber<<endl;
}

int main (void)
{
calculateTriangularNumber (10);
calculateTriangularNumber (20);
calculateTriangularNumber (50);
calculateTriangularNumber (200);
return 0;
}
