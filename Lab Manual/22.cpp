/*wap A jewelry design tool generates hollow diamond outlines for patterns. Implement a solution to display a 
hollow diamond pattern of *. 
     * 
    * * 
   *   * 
  *     * 
  *     * 
   *   * 
   *  * 
    * * 
     * 
*/

#include<iostream>
using namespace std;
int main(){
    for(int i=1; i<=5; i++){
        for(int j=1; j<=5-i; j++){
            cout<<" ";
        }
        for(int k=1; k<=2*i-1; k++){
            if(k==1 || k==2*i-1)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }
    for(int i=4; i>0; i--){
        for(int j=1; j<=5-i; j++){
            cout<<" ";
        }
        for(int k=1; k<=2*i-1; k++){
            if(k==1 || k==2*i-1)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}