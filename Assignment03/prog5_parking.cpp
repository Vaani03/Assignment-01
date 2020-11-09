#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
double calculateCharges( double );
int main()
{
    double hour, currentCharge, totalCharges = 0.0, totalHours = 0.0;
    int first = 1;
    cout << "Enter the hours parked for 3 cars: ";
    for ( int i = 1; i <= 3; i++ )
    {
       cin >> hour;
       totalHours += hour;
       if(first)
       {
           cout << setw( 5 ) << "Car" << setw( 15 ) << "Hours"
           << setw( 15 ) << "Charge\n";
             first = 0; // prevents this from printing again
       }
    totalCharges += ( currentCharge = calculateCharges( hour ) );
    cout << setiosflags( ios::fixed | ios::showpoint )
     << setw( 3 ) << i << setw( 17 ) << setprecision( 1 ) << hour
    << setw( 15 ) << setprecision( 2 ) << currentCharge << "\n";
   }
   cout << setw( 7 ) << "TOTAL" << setw( 13 ) << setprecision( 1 )
   << totalHours << setw( 15 ) << setprecision( 2 )
   << totalCharges << endl;
   return 0;
}
double calculateCharges( double hours )
{
   double charge;
   if ( hours < 3.0 )
      charge = 2.0;
   else if ( hours < 19.0 )
      charge = 2.0 + .5 * ceil( hours - 3.0 );
   else
      charge = 10.0;
   return charge;
}
