#include<iostream>
#include<cmath>
using namespace std;
 const double PI=3.14;
 inline double spherevolume(const double radius)
 {
     return 4.0/3.0* PI*pow(radius,3);
 }
int main()
{
    double r_value;
    cout<<"enter the radius";
    cin>>r_value;
    cout<<"\n Volume of sphere is:"<<spherevolume(r_value)<<endl;

}
