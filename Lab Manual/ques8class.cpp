#include<iostream>
using namespace std;
class event
{
    private:
    int id;
    public:
    void getdata(){
        cout<<"enter the number of id = ";
        cin>>id;

    }
    void name(){
        if(id%3==0)
        cout<<"name tag is buzz";
        else if(id%5==0)
        cout<<"name tag is fuzz";
        else if(id%5==0 && id%3==0)
        cout<<"name tag is fuzz and buzz";
    }
};
    int main(){
        event e1;
        e1.getdata();
        e1.name();
        return 0;
    }