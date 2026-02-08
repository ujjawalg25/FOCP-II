#include<iostream>
using namespace std;
class findtriangle
{
    private:
    int a,b,c;
    public:
    void getdata(){
        cout<<"enter the first side = ";
        cin>>a;
        cout<<"enter the second side = ";
        cin>>b;
        cout<<"enter the third side = ";
        cin>>c;
    }
    void display(){
        if(a == b && b == c)
        cout<<"it is an equilateral triangle";
        else if(a == b || b == c || a == c)
        cout<<"the triangle is isosceles";
        else
        cout<<"it is a scalene triangle";
    }
};
int main(){
    findtriangle a1;
    a1.getdata();
    a1.display();
    return 0;
}