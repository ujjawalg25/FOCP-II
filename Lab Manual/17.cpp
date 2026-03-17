/*wap A learning application analyzes numbers for mathematical properties.
Design a solution to check whether a given number is a Perfect number or an Armstrong number*/

#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int num, sum = 0, temp, remainder, n = 0;
    
    cout << "Enter a number: ";
    cin >> num;
    
    temp = num;
    
    // Count the number of digits
    while (temp != 0) {
        temp /= 10;
        n++;
    }
    
    temp = num;
    
    // Calculate the sum of the nth powers of the digits
    while (temp != 0) {
        remainder = temp % 10;
        sum += pow(remainder, n);
        temp /= 10;
    }
    
    if (sum == num) {
        cout << num << " is an Armstrong number." << endl;
    } else {
        cout << num << " is not an Armstrong number." << endl;
    }
    
    return 0;
}