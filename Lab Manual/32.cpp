/*A stock market app tracks first and second highest stock values. Implement a solution to find the largest 
and second largest number in an array of size 5.*/
#include<iostream>
using namespace std;

int main(){
    int stocks[5], largest, secondLargest;
    cout<<"Enter 5 stock values: ";
    for(int i = 0; i < 5; i++){
        cin>>stocks[i];
    }
    largest = stocks[0];
    secondLargest = stocks[1];
    if(secondLargest > largest){
        largest = stocks[1];
        secondLargest = stocks[0];
    }
    for(int i = 2; i < 5; i++){
        if(stocks[i] > largest){
            secondLargest = largest;
            largest = stocks[i];
        }
        else if(stocks[i] > secondLargest){
            secondLargest = stocks[i];
        }
    }
    cout<<"Largest stock value: "<<largest<<endl;
    cout<<"Second largest stock value: "<<secondLargest<<endl;
    return 0;
}