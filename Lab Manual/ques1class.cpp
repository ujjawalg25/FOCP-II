#include<iostream>
using namespace std;
class division
{
    private:
    int a,b,c;
    int sum;
    float average;
    public:
    void getdata();
    void display();
};
void division::getdata()
{
    cout<<"enter mark1= ";
    cin>>a;
    cout<<"enter mark2= ";
    cin>>b;
    cout<<"enter mark3= ";
    cin>>c;
};
void division::display()
{
    average=a+b+c/3;
    cout<<"average is = "<<average;

};
int main()
{
division d1;
d1.getdata();
d1.display();
return 0;



}
