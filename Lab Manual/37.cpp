/*wap A registration system rejects usernames that contain spaces or special characters. 
Write a C++ program to validate whether a given string can be accepted as a username. */

#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;

bool isValidUsername(const string& username) {
    // Check if username is empty
    if (username.empty()) {
        return false;
    }

    // Check if username contains spaces or special characters
    for (char c : username) {
        if (!isalnum(c)) {
            return false;
        }
    }

    return true;
}

int main() {
    string username;
    cout << "Enter a username: ";
    cin >> username;

    if (isValidUsername(username)) {
        cout << "Username is valid." << endl;
    } else {
        cout << "Username is invalid." << endl;
    }

    return 0;
}