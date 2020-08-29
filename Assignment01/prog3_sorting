#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i,j,a[50],n,temp;
    cout<<"enter the number of elements";
    cin>>n;
    cout<<"enter the elements";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=1;i<n;i++)
    {
        temp=a[i];
        j=i-1;
        while((temp<a[j])&&(j>=0))
              {
                  a[j+1]=a[j];
                  j=j-1;
              }
              a[j+1]=temp;
    }
    cout<<"the sorted elements is as follows: ";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
