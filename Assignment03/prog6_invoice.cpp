#include<iostream>
using namespace std;

class Invoice
{
private:
    string part_no;
    string part_des;
    int item_qty;
    int item_price;
public:
    Invoice(string, string ,int ,int);
    void setPart_no(string);
    string getPart_no();
    void setPart_des(string);
    string getPart_des();
    void setItem_qty(int);
    int getItem_qty();
    void setItem_price(int);
    int getItem_price();
    int getInvoiceAmount();
};
Invoice::Invoice(string num , string despt, int qtty , int price)
{
    part_no=num;
    part_des=despt;
    if(qtty>0)
        item_qty=qtty;
    else{
        item_qty=0;
        cout<<"invalid quantity."<<endl;
    }
    if(price>0)
        item_price=price;
    else{
        item_price=0;
        cout<<" price invalid"<<endl;
    }
}void Invoice::setPart_no(string num)
{
    if(num.length() <=25)
        part_no=num;
    if(num.length() >25)
    {
        part_no=num.substr(0,25);
    cout<<"Name \""<<num<<"/"<<"maximum lengtth(25).\n"<<endl;
    }
}
void Invoice::setPart_des(string despt)
{
    if(despt.length() <=25)
        part_des=despt;
    if(despt.length() >25)
    {
        part_des=despt.substr(0,25);
    cout<<"Name \""<<despt<<"/"<<"maximum lengtth(25).\n"<<endl;
    }
}void Invoice::setItem_qty(int qtty)
{
   if(qtty>0)
        item_qty=qtty;
    else{
        item_qty=0;
        cout<<"invalid quantity."<<endl;
    }
}
void Invoice::setItem_price(int price)
{
    if(price>0)
        item_price=price;
    else{
        item_price=0;
        cout<<" price invalid"<<endl;
}
}
string Invoice::getPart_no()
{
    return part_no;
}
string Invoice::getPart_des()
{
    return part_des;
}
int Invoice::getItem_qty()
{
    return item_qty;
}
int Invoice::getItem_price()
{
    return item_price;
}
int Invoice::getInvoiceAmount()
{
    return item_qty*item_price;
}
int main()
{
    Invoice in1("ab11" , "part_A" , 1 , 10);
    Invoice in2("ab12" , "part B" , 2 , 20);
    cout<<"Invoice:1 initial part number : "<<in1.getPart_no();
    cout<<"\nInvoice:1 initial part description : "<<in1.getPart_des()<<endl;
    cout<<"quantity per item: "<<in1.getItem_qty();
    cout<<"\nprice per item: "<<in1.getItem_price()<<endl;
    cout<<"invoice 1 total is: "<<in1.getInvoiceAmount()<<endl;
    cout<<"Invoice:2 initial part number : "<<in2.getPart_no();
    cout<<"\nInvoice:2 initial part description : "<<in2.getPart_des()<<endl;
    cout<<"quantity per item: "<<in2.getItem_qty();
    cout<<"\nprice per item: "<<in2.getItem_price()<<endl;
    cout<<"invoice 2 total is: "<<in2.getInvoiceAmount()<<endl;
}
