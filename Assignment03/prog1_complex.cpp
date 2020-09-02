#include<iostream>
#include<conio.h>
using namespace std;
class Complex
{
public:
    int a,b;
    void setData(int x,int y)
    {
        a=x;
        b=y;
    }
    void showData()
    {
        cout<<"\n a="<<a<<" b="<<b;
    }
    friend ostream& operator<<(ostream & ,Complex);
    friend istream& operator>>(istream & ,Complex &);
};
ostream& operator<<(ostream &dout ,Complex C)
{
    cout<<"\n a="<<C.a<<", b="<<C.b;
    return(dout);
}
istream& operator>>(istream &din ,Complex &C)
{
    cin>>C.a>>C.b;
    return(din);
}
int main()
{
    Complex c1;
    cout<<"Enter a complex number: ";
    cin>>c1;
    cout<<"you entered: ";
    cout<<c1;
    getch();
}
