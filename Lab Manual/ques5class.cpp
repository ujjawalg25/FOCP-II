#include<iostream>
using namespace std;
class division
{
    private:
    int a,b;
    public:
    void getdata();
    void display();

};
void division::getdata()
{
    cout<<"enter number1 = ";
    cin>>a;
    cout<<"enter number2 = ";
    cin>>b;
};
void division::display()
{
    a = a*b;
    b = a/b;
    a = a/b;
    cout<<"number1 after swaping = "<<a<<endl;
    cout<<"number2 after swaping = "<<b<<endl;
};
int main()
{
    division d1;
    d1.getdata();
    d1.display();
    return 0;
}
