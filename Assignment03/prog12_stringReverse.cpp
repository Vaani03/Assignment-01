#include <iostream>
using namespace std;
void stringReverse(const char[]);
int main()
{
   const int SIZE = 30;
   char strArray[ SIZE ] = "string in backwards.";
   for ( int loop = 0; loop < SIZE; ++loop )
      cout << strArray[ loop ];
   cout << '\n';
   stringReverse( strArray );
   cout << endl;
   return 0;
}
void stringReverse( const char strArray[] )
{
   if ( strArray[ 0 ] == '\0' )
   return;
   stringReverse(&strArray[1]);
   cout<<strArray[0];
}
