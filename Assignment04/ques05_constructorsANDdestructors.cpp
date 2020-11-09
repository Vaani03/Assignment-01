#include<iostream>
using namespace std;
class parent
{
    int x;
public:
    parent(){cout<<" Base** Default Constructor"<<endl;}
    ~parent(){cout<<"Base** Default Destructor"<<endl;}
};
class child: public parent
{
    int y;
public:
    child(){cout<<"Derived** Default Constructor"<<endl;}
    ~child(){cout<<"Derived** Default Destructor"<<endl;}
};
int main()
{
    parent p1;
    p1.~parent();
    child c1;
    c1.~child();
}

/* Calling of parameterized Constructor and Destructor.
*************Code************************ */
#include<iostream>
using namespace std;
class child;
class parent
{
    int x;
public:
    parent(){
    x=0;
    cout<<"\n[BASE]** default constructor";
    }
    parent(int x1){
    x=x1;
    x1=10;
    cout<<"\n [BASE]** parameterized Constructor: "<<x1;
    }
   ~parent()
   {
       cout<<"\n base destructor"<<endl;
   }
};
class child : public parent
{
    int y;
public:
    child()
    {
        y=0;
        cout<<"\n[DRIVED]**default constructor";
    }
    child(int y1,int x)
        {  y=y1;
           y1=10;
            cout<<"\n[Derived]** parameterized Constructor : "<<y1;
        }                         */
    ~child()
    {
        cout<<"\n dreived destructor";
    }
};
int main()
{   parent p2(10);
    child c1(10,10),c2;
    c1.~child();
}
