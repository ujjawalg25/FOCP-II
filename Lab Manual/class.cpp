#include<iostream>
using namespace std;
class addition 
{
    private:
    int a,b;
    int sum;
    public:
    void getdata();
    void display();
};
void addition::getdata()
{
    cout<<"enter the first number = ";
    cin>>a;
    cout<<"enter the second number = ";
    cin>>b;
};
void addition::display()
{
    sum=a+b;
    cout<<"sum of two no is = "<<sum;
};
int main()
{
    addition a1;
    a1.getdata();
    a1.display();
    return 0;
}
