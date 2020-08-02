#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a[30],n,i,j,temp,max,max2;
    cout<<"enter the size of array";
    cin>>n;
    cout<<"enter the elements of array";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    max=0;
    max2=0;
  for(i=0;i<n;i++)
  {
      for(j=i+1;j<n;j++)
      {
         temp=a[i];
         a[i]=a[j];
         a[j]=temp;
      }
  }
  for(i=0;i<n;i++)
  {
      if(a[i]>max)
      {
          max2=max;
          max=a[i];
      }
      if(a[i]<max&&a[i]>max2)
      {
          max2=a[i];
      }
  }
      cout<<"the second max number is: "<<max2;
      cout<<"the second minimum number is: "<<a[n-2];
}
