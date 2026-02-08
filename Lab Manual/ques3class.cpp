#include<iostream>
using namespace std;
class multiply
{
    private:
    float f,c;
    public:
    void getdata();
    void display();
};
void multiply::getdata()
{
    cout<<"enter temp in farenhiegt = ";
    cin>>f;
};
void multiply::display()
{
c=(f-32)*5/9;
cout<<"temp in celcius = "<<c;

};
int main()
{
    multiply m1;
    m1.getdata();
    m1.display();
    return 0;
}