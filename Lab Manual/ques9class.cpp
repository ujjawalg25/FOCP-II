#include<iostream>
using namespace std;
class detect
{
    private:
    char alp;
    public:
    void getdata(){
        cout<<"enter the text = ";
        cin>>alp;
    }
    void find(){
        if(alp=='a'|| alp=='e' || alp=='i' || alp=='o' || alp=='u')
        cout<<"the text is a vowel";
        else if(alp=='0'||alp=='1'||alp=='2'||alp=='3'||alp=='4'||alp=='5'||alp=='6'||alp=='7'||alp=='8'||alp=='9')
        cout<<"the text is a number";
        else
        cout<<"the text is a consonant";
    }
};
    int main(){
        detect d1;
        d1.getdata();
        d1.find();
        return 0;
    }
