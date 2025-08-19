#include <bits/stdc++.h>
using namespace std;

// Function to check if two strings are anagrams
bool isAnagram(string s1, string s2) {
    // If lengths differ, cannot be anagrams
    if (s1.size() != s2.size()) return false;

    // Frequency array for 26 lowercase English letters
    vector<int> freq(26, 0);

    // Count frequency from s1 and subtract from s2
    for (char c : s1) {
        freq[c - 'a']++;
    }
    for (char c : s2) {
        freq[c - 'a']--;
    }

    // If all frequencies are zero, it's an anagram
    for (int count : freq) {
        if (count != 0) return false;
    }
    return true;
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
