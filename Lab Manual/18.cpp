/*wap A String-matching tool validates if IDs are palindromes. Implement
a solution to check whether a given ID is a palindrome.*/

#include <iostream>
#include <string>
using namespace std;
#include <cctype>

bool isPalindrome(const string& str) {
    int left = 0;
    int right = str.length() - 1;

    while (left < right) {
        // Skip non-alphanumeric characters
        while (left < right && !isalnum(str[left])) left++;
        while (left < right && !isalnum(str[right])) right--;

        // Compare characters case-insensitively
        if (tolower(str[left]) != tolower(str[right])) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}