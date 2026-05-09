/*wap A content-management system receives user-entered text that may contain inconsistent spacing,
 mixed letter cases, and invalid characters. For reliable storage and processing, the system must
  normalize and validate the input string. Develop a C++ program that performs the following tasks 
  on a given input string: 1. Remove leading, trailing, and extra spaces between words 2. Convert 
  the string to sentence case (first character uppercase, remaining lowercase) 3. Count and 
  display: o Total number of words o Total number of digits o Total number of special characters
   4. Validate that the final string contains only alphabets, digits, and spaces Display 
   appropriate messages based on the validation result. */

#include <iostream>
#include <cctype>
using namespace std;
int main() {
    string s;
    int words = 0, digits = 0, special = 0;
    cout << "Enter a string: ";
    getline(cin, s);
    for(char c : s) {
        if(isdigit(c))
            digits++;
        else if(!isalnum(c) && c!=' ')
            special++;
    }
    if(!s.empty())
        s[0] = toupper(s[0]);
    for(int i=1;i<s.length();i++)
        s[i] = tolower(s[i]);
    for(int i=0;i<s.length();i++) {
        if(i==0 || (s[i]!=' ' && s[i-1]==' '))
            words++;
    }
    cout << "Sentence Case: " << s << endl;
    cout << "Words = " << words << endl;
    cout << "Digits = " << digits << endl;
    cout << "Special Characters = " << special << endl;
    bool valid = true;
    for(char c : s) {
        if(!isalnum(c) && c!=' ') {
            valid = false;
            break;
        }
    }
    if(valid)
        cout << "String is valid";
    else
        cout << "String contains invalid characters";
    return 0;
}