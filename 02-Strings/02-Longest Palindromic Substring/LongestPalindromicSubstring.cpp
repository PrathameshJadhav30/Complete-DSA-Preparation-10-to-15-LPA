#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to expand around the given center and return length of palindrome
    int expandFromCenter(string s, int left, int right) 
    {
        while (left >= 0 && right < s.size() && s[left] == s[right]) 
        {
            left--;
            right++;
        }
        // Length of palindrome is (right - left - 1)
        return right - left - 1;
    }

    string longestPalindrome(string s) {
        if (s.empty()){
           return "";
        } 

        int start = 0, end = 0;

        for (int i = 0; i < s.size(); i++) 
        {
            // Odd length palindrome (center at i)
            int len1 = expandFromCenter(s, i, i);
            // Even length palindrome (center between i and i+1)
            int len2 = expandFromCenter(s, i, i + 1);
            int len = max(len1, len2);

            // Update max palindrome boundaries
            if (len > (end - start + 1)) 
            {
                start = i - (len - 1) / 2;
                end = i + len / 2;
            }
        }

        return s.substr(start, end - start + 1);
    }
};

int main() {
    Solution obj;

    // Example 1
    string s1 = "babad";
    cout << "Input: " << s1 << endl;
    cout << "Output: " << obj.longestPalindrome(s1) << endl << endl;

    // Example 2
    string s2 = "cbbd";
    cout << "Input: " << s2 << endl;
    cout << "Output: " << obj.longestPalindrome(s2) << endl << endl;

    // Example 3 
    string s3 = "racecar";
    cout << "Input: " << s3 << endl;
    cout << "Output: " << obj.longestPalindrome(s3) << endl;

    return 0;
}
