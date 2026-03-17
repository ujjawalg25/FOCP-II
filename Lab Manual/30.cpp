/*wap A payroll system maintains employee salary records. Implement a solution to accept salary of 
10 employees in an array, compute total salary and average salary, then display the result.*/

#include<iostream>
using namespace std;
int main(){
    float salaries[10], totalSalary = 0, averageSalary;
    cout<<"Enter salaries of 10 employees: ";
    for(int i = 0; i < 10; i++){
        cin>>salaries[i];
        totalSalary += salaries[i];
    }
    averageSalary = totalSalary / 10;
    cout<<"Total salary: "<<totalSalary<<endl;
    cout<<"Average salary: "<<averageSalary<<endl;
    return 0;
}