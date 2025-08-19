#include <bits/stdc++.h>
using namespace std;

// Function to check if two strings are anagrams using sorting
bool isAnagram(string s1, string s2) {
    // If lengths differ, not anagrams
    if (s1.size() != s2.size()){
       return false;
    } 

    // Sort both strings
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    // Compare sorted strings
    return s1 == s2;
}

int main() {
    string s1, s2;
    cout << "Enter first string: ";
    cin >> s1;
    cout << "Enter second string: ";
    cin >> s2;

    if (isAnagram(s1, s2)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}
