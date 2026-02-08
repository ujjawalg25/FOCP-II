#include<iostream>
using namespace std;
class score
{
    private:
    int a,b,c;
    public:
    void getdata(){
    cout<<"enter the score of player 1 = ";
    cin>>a;
    cout<<"enter the score of player 2 = ";
    cin>>b;
    cout<<"enter the score of player 3 = ";
    cin>>c;
    }
    void winner(){
      if(a>b && a>c)
      cout<<"a is the winner";
      else if(b>a && b>c)
      cout<<"b is the winner";
      else if(c>a && c>b)
      cout<<"c is the winner";  
    }
};
    int main(){
        score s1;
        s1.getdata();
        s1.winner();
        return 0;
    }

