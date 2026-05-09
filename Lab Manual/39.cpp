/*wap  In software applications such as data analytics and probability systems, combinatorial
 values are frequently required. To ensure efficiency, developers avoid factorial-based solutions 
 and use iterative logic with loops. As a Junior Software Developer, design a C++ program to
  generate Pascal’s Triangle for a given number of rows. */

#include<iostream>
using namespace std;
void generatePascalsTriangle(int rows) {
    for (int i = 0; i < rows; i++) {
        int value = 1; // First value in every row is 1
        for (int j = 0; j <= i; j++) {
            cout << value << " ";
            value = value * (i - j) / (j + 1); // Calculate next value using the previous one
        }
        cout << endl;
    }
}

int main() {
    int rows;
    cout << "Enter the number of rows for Pascal's Triangle: ";
    cin >> rows;
    generatePascalsTriangle(rows);
    return 0;
}