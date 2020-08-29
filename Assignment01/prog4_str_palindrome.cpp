#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;
int main()
{
    char str[100];
    int i,len;
    int flag=0;
    cout<<"enter the string";
    cin>>str;
    len=strlen(str);
    for(i=0;i<len;i++)
    {
        if(str[i]!=str[len-i-1])
        {
            flag=1;
            break;
        }
    }
    if(flag)
    {
        cout<<str<<" is not a palindrome";
    }
    else
    {
        cout<<str<<" is a palindrome";
    }
    return 0;
}
