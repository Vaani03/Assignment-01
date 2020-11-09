#include <iostream>
#include<cstring>
using namespace std;
bool testPalindrome( const char [], int, int );
int main()
{
    const int SIZE = 80;
    char c, string[ SIZE ], copy[ SIZE ];
    int count = 0, copyCount, i;
    cout << "Enter a sentence:\n";
    while((c = cin.get() ) != '\n' && count < SIZE )
        string[ count++ ] = c;
    string[ count ] = '\0'; // terminate cstring
    for ( copyCount = 0, i = 0; string[ i ] != '\0'; ++i )
        if ( string[ i ] != ' ' )
    copy[ copyCount++ ] = string[ i ];
    if ( testPalindrome( copy, 0, copyCount - 1 ) )
        cout << '\"' << string << "\" is a palindrome" << endl;
    else
        cout << '\"' << string << "\" is not a palindrome" << endl;
    return 0;
}
bool testPalindrome( const char array[], int left, int right )
{
    if ( left == right || left > right )
        return true;
    else if ( array[ left ] != array[ right ] )
        return false;
    else
        return testPalindrome( array, left + 1, right - 1 );
}
