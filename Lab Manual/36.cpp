/*wap A machine learning model multiplies matrices for neural network layers. Implement a 
solution to multiply two matrices of order m×n and p×q (if valid). */
#include<iostream>
using namespace std;
int main(){
    int m, n, p, q;
    cout<<"Enter dimensions of first matrix (m n): ";
    cin>>m>>n;
    cout<<"Enter dimensions of second matrix (p q): ";
    cin>>p>>q;
    
    if(n != p){
        cout<<"Matrix multiplication not possible. Number of columns in first matrix must be equal to number of rows in second matrix."<<endl;
        return 0;
    }
    
    int matrixA[m][n], matrixB[p][q], result[m][q];
    
    cout<<"Enter elements of first matrix: "<<endl;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin>>matrixA[i][j];
        }
    }
    
    cout<<"Enter elements of second matrix: "<<endl;
    for(int i = 0; i < p; i++){
        for(int j = 0; j < q; j++){
            cin>>matrixB[i][j];
        }
    }
    
    // Initialize result matrix with zeros
    for(int i = 0; i < m; i++){
        for(int j = 0; j < q; j++){
            result[i][j] = 0;
        }
    }
    
    // Matrix multiplication
    for(int i = 0; i < m; i++){
        for(int j = 0; j < q; j++){
            for(int k = 0; k < n; k++){
                result[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }
    
    cout<<"Result of matrix multiplication: "<<endl;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < q; j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}