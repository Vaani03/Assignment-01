#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"enter the number of rows";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-2;j++)
        {
            if(((i==1||i==n)&&(j>=n-6&&j<=n-4))||((i==2||i==n-1)&&(j==2||j==n-3))||((i>=3&&i<=n-2)&&(j==1||j==n-2)))
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
