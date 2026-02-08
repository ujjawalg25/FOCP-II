#include<iostream>
using namespace std;
class multiply
{
    private:
    int r;
    float area;
    public:
    void getdata();
    void display();

};
void multiply::getdata()
{
    cout<<"enter radius = ";
    cin>>r;
};
void multiply::display()
{
    area=3.14*r*r;
    cout<<"area is = "<<area;
};
int main()
{
    multiply m1;
    m1.getdata();
    m1.display();
    return 0;
}