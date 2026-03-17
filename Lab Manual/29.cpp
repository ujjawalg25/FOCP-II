/*wap A weather monitoring app records 30-day temperature logs. Implement a solution to store daily 
temperatures in an array and display the minimum temperature for the month. */

#include<iostream>
using namespace std;
int main(){
    float temperatures[30], minTemp;
    cout<<"Enter daily temperatures for 30 days: ";
    for(int i = 0; i < 30; i++){
        cin>>temperatures[i];
    }
    minTemp = temperatures[0];
    for(int i = 1; i < 30; i++){
        if(temperatures[i] < minTemp){
            minTemp = temperatures[i];
        }
    }
    cout<<"Minimum temperature for the month: "<<minTemp<<endl;
    return 0;
}