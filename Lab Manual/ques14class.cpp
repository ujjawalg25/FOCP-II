#include<iostream>
using namespace std;
class calculator{
    private:
    int a,b;
    char opr;
    public:
    void getdata(){
        cout<<"enter the value of a = ";
        cin>>a;
        cout<<"enter the value of b = ";
        cin>>b;
        cout<<"enter operation = ";
        cin>>opr;
    }
    void display(){
        if(opr=='+'){
            cout<<"sum = "<<a+b<<endl;
        }
            else if(opr=='-'){
                cout<<"diff= "<<a-b<<endl;
            }
            else if(opr=='*'){
                cout<<"product = "<<a*b<<endl;}

            else if(opr=='/'){
                cout<<"qtnt = "<<a/b<<endl;
            }
            else{
                cout<<"invalid";
            }
        }
   };
   int main(){
    calculator c1;
    c1.getdata();
    c1.display();
    return 0;

   }
