#include<iostream>
using namespace std;
class review
{
    private:
    int year;
    public:
    void getdata(){
        cout<<"enter the year = ";
        cin>>year;
    }
    void display(){
        if(year%4==0)
        cout<<"this is a leap year and february has 29 days";
        else
        cout<<"not a leap year";
        
    }
};
int main(){
    review r1;
    r1.getdata();
    r1.display();
    return 0;
}