#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void reverseString(string &s) {
        int l = 0, r = s.size() - 1;
        
        while (l < r) {
            swap(s[l], s[r]);
            l++;
            r--;
        }
    }
};

int main() {
    Solution sol;
    string s = "OpenAI";

    sol.reverseString(s);
    cout << "Reversed String: " << s << endl;

    return 0;
}
