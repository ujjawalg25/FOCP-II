/*wap A security system generates list of prime keys within given range. Implement a solution to display all 
prime numbers between two limits. 
A web-based application enforces strong password policies during user registration to improve account security. 
The system requires that every password must satisfy the following conditions: 
• Contain at least one uppercase letter (A–Z) 
• Contain at least one lowercase letter (a–z) 
• Contain at least one digit (0–9) 
• Contain at least one special character from the set 
@ # $ % ! & * 
You are required to develop the code so that the password validation logic can be implemented in the application. 
*/

#include<iostream>
using namespace std;
int main(){
    int lower, upper;
    cout<<"Enter lower limit: ";
    cin>>lower;
    cout<<"Enter upper limit: ";
    cin>>upper;
    cout<<"Prime numbers between "<<lower<<" and "<<upper<<" are: ";
    for(int i=lower; i<=upper; i++){
        bool isPrime = true;
        if(i<2)
            isPrime = false;
        for(int j=2; j<=i/2; j++){
            if(i%j==0){
                isPrime = false;
                break;
            }
        }
        if(isPrime)
            cout<<i<<" ";
    }
    return 0;
}