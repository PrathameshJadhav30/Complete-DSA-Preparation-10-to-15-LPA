#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int length = 0;
        int i = s.length() - 1;

        // Skip trailing spaces
        while (i >= 0 && s[i] == ' ') {
            i--;
        }

        // Count the last word length
        while (i >= 0 && s[i] != ' ') {
            length++;
            i--;
        }

        return length;
    }
};

int main() {
    Solution sol;
    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    cout << "Length of last word: " << sol.lengthOfLastWord(s) << endl;
    return 0;
}
