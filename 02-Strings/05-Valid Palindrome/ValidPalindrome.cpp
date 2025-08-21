#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0, j = s.size() - 1;

        while (i < j) 
        {
            // skip non-alphanumeric
            while (i < j && !isalnum(s[i])){
              i++;
            } 
            while (i < j && !isalnum(s[j])){
                j--;
            }

            if (tolower(s[i]) != tolower(s[j])){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};

int main() {
    Solution sol;

    string s1 = "A man, a plan, a canal: Panama";
    cout << (sol.isPalindrome(s1) ? "true" : "false") << endl; // true

    string s2 = "race a car";
    cout << (sol.isPalindrome(s2) ? "true" : "false") << endl; // false

    string s3 = " ";
    cout << (sol.isPalindrome(s3) ? "true" : "false") << endl; // true

    return 0;
}
