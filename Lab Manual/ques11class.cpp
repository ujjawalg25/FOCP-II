#include<iostream>
using namespace std;
class wholesale
{
    private:
    int items,price;
    float totalamount,amount;
    public:
    void getdata(){
        cout<<"total number of items = ";
        cin>>items;
        cout<<"price of item = ";
        cin>>price;
    }
    void display(){
        amount=price*items;
        totalamount= price*items-0.1*price*items;
        if(items>=1000)
        cout<<" price after discount = "<<totalamount;
        else
        cout<<"price remains the same = "<<amount;

    }
};
int main(){
    wholesale w1;
    w1.getdata();
    w1.display();
    return 0;
}