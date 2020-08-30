#include<iostream>
using namespace std;
int main()
{
    int arrow_head,arrow_length,arrow_tail;
    char outputchar='*';
    cout<<"enter the parameters arrow_head_width: ";
    cin>>arrow_head;
    cout<<" arrow_length: ";
    cin>>arrow_length;
    cout<<"and arrow_tail_width: ";
    cin>>arrow_tail;
    cout<<"\n\n";
for(int i=1;i<=arrow_head;i+=2)
{
    for(int space=arrow_head;space>i;space-=2)
    {
        cout<<" ";
    }
    for(int star=0;star<i;star++)
    {
        cout<<outputchar;
    }
    cout<<endl;
}
int arrow_tail_length = arrow_length - (arrow_head/2)-1;
//arrow tail
for(int r=0;r<arrow_tail_length;r++)
{
    for(int c=0;c<arrow_tail;c++)
    {
        cout<<"  "<<"*";
    }
    cout<<endl;
