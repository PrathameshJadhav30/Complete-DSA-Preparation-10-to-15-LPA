#include <iostream>
#include <string>
using namespace std;

// Function to check palindrome using two-pointer approach
bool isPalindrome(string str) {
    int left = 0;
    int right = str.length() - 1;

    while (left < right) {
        if (str[left] != str[right])
            return false;
        left++;
        right--;
    }

    return true;
}

int main() {
    string str = "madam"; 

    cout << "String: " << str << endl;

    if (isPalindrome(str))
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}
