#include<iostream>
using namespace std;
int main()
{
    int count = 0;
    long int hyptSquared, sidesSquared;
    for(long side1 = 1; side1 <= 500; ++side1 )
    {
       for(long side2 = 1; side2 <= 500; ++side2 )
       {
          for(long hypt = 1; hypt <= 500; ++hypt )
          {
              hyptSquared = hypt * hypt;
              sidesSquared = side1 * side1 + side2 * side2;
              if ( hyptSquared == sidesSquared )
              {
                  cout << side1 << '\t' << side2 << '\t'<< hypt << '\n';
                  ++count;
              }
          }
       }
    }
    cout << "A total of " << count << " triples were found." << endl;
    return 0;
}
