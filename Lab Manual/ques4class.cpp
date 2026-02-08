#include<iostream>
using namespace std;
class multiply
{
    private:
    int item,quantity,unitprice;
    float discount,totalamount,amountafterdiscount;
    public:
    void getdata();
    void display(); 
};
void multiply::getdata()
{
    cout<<"enter item no. = ";
    cin>>item;
    cout<<"enter total quantity = ";
    cin>>quantity;
    cout<<"enter unitprice = ";
    cin>>unitprice;
    
};
void multiply::display()
{
totalamount = quantity*unitprice;
amountafterdiscount = totalamount - totalamount*20/100;
cout<<"amountafterdiscount"<<amountafterdiscount;
};
int main()
{
    multiply m1;
    m1.getdata();
    m1.display();
return 0;
}

