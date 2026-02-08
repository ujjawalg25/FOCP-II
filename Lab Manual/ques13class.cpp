#include<iostream>
using namespace std;
class equation
{
    private:
    int a,b,c;
    float root1,root2,d;
    public:
    void getdata(){
        cout<<"enter the value of a = ";
        cin>>a;
        cout<<"enter the value of b = ";
        cin>>b;
        cout<<"enter the cvalue of c = ";
        cin>>c;

    }
    void display(){
        d = b*b - 4*a*c;
        if(d>0){
            root1=(-b+d)/2*a;
            root2=(-b-d)/2*a;
            cout<<"roots are different and real"<<endl;
            cout<<"root1 = "<<root1<<endl;
            cout<<"root2 = "<<root2<<endl;
        }
            else if(d==0){
                root1=root2=-b/2*a;
                cout<<"roots are equal and real"<<endl;
                cout<<"root = "<<root1<<endl;
            }
            else
            cout<<"roots are imaginary";

        }

    };
    int main(){
        equation e1;
        e1.getdata();
        e1.display();
        return 0;
    }


