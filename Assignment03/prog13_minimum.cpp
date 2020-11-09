#include <iostream>
#include <iomanip>
 #include <cstdlib>
#include <ctime>
using namespace std;
const int RANGE = 1000;
int recursiveMinimum( const int [], int, int );
int main()
{
   const int SIZE = 10;
   int array[ SIZE ], smallest;
   srand( time( 0 ) );
   for ( int loop = 0; loop < SIZE; ++loop )
      array[ loop ] = 1 + rand() % RANGE;
   cout << "Array members are:\n";
   for ( int k = 0; k < SIZE; ++k )
      cout << setw( 5 ) << array[ k ];
   cout << '\n';
   smallest = recursiveMinimum( array, 0, SIZE - 1 );
   cout << "\nSmallest element is: " << smallest << endl;
   return 0;
}
int recursiveMinimum( const int array[], int low, int high )
{
   static int smallest = RANGE;
   if ( array[ low ] < smallest )
   smallest = array[ low ];
   return low == high ? smallest : recursiveMinimum( array, low + 1, high );
}
