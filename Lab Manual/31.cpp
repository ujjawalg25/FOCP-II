/*wap A manufacturing QC system checks defect codes divisible by both 3 and 5. 
Implement a solution to store 5 elements in an array and count how many numbers are divisible by 3 and 5. */

#include<iostream>
using namespace std;
int main(){
    int defectCodes[5], count = 0;
    cout<<"Enter 5 defect codes: ";
    for(int i = 0; i < 5; i++){
        cin>>defectCodes[i];
        if(defectCodes[i] % 3 == 0 && defectCodes[i] % 5 == 0){
            count++;
        }
    }
    cout<<"Number of defect codes divisible by both 3 and 5: "<<count<<endl;
    return 0;
}