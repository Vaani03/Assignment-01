#include<iostream>
using namespace std;
void rectangle(int l,int b)
{
  for(int i=0;i<l;i++)
  {
      cout<<"\n";
      for(int j=0;j<b;j++)
       {
          if(i==0||i==l-1||j==0||j==b-1)
             cout<<"*";
          else
             cout<<" ";
        }
       }
}
int main()
{
   int l,b;
   cout<<"enter the length: ";
   cin>>l;
   cout<<"enter the breadth: ";
   cin>>b;
   rectangle(l,b);
   return 0;
}
