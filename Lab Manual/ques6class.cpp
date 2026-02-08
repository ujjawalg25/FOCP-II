#include<iostream>
using namespace std;
class multiply
{
    private:
    int salary,employe;
    float salaryafterbonus,bonus;
    public:
    void getdata();
    void display();

};
void multiply::getdata()
{
    cout<<"enter total number of employes = ";
    cin>>employe;
    cout<<"enter salary of employe = ";
    cin>>salary;
};
void multiply::display()
{
    salaryafterbonus = employe*salary*12/100 + employe*salary ;
    cout<<"final salary = "<<salaryafterbonus;
};
int main()
{
    multiply m1;
    m1.getdata();
    m1.display();
    return 0;
}