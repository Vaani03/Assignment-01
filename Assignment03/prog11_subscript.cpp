#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
void printArray( const int [], int, int );
int main()
{
   const int SIZE = 10, MAXNUMBER = 500;
   int array[ SIZE ];
   srand(time(0));
   for(int loop = 0; loop < SIZE; ++loop )
      array[ loop ] = 1 + rand() % MAXNUMBER;
   cout << "Array values printed in main:\n";
   for ( int j = 0; j < SIZE; ++j )
      cout << setw( 5 ) << array[ j ];
   cout << "\n\nArray values printed in printArray:\n";
   printArray( array, 0, SIZE - 1 );
   cout << endl;
   return 0;
}
void printArray( const int array[], int low, int high )
{
    cout << setw( 5 ) << array[ low ];
    if(low == high)
       return;
    else
       printArray( array, low + 1, high) ;
}
