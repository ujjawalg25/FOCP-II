/*wap A supermarket software maintains item price lists. Implement a solution to store the prices of 10 
items in an array and display the maximum price.*/
#include<iostream>
using namespace std;

int main(){
    float prices[10], maxPrice;
    cout<<"Enter prices of 10 items: ";
    for(int i = 0; i < 10; i++){
        cin>>prices[i];
    }
    maxPrice = prices[0];
    for(int i = 1; i < 10; i++){
        if(prices[i] > maxPrice){
            maxPrice = prices[i];
        }
    }
    cout<<"Maximum price: "<<maxPrice<<endl;
    return 0;
}