#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size();
        int m = needle.size();

        // Slide a window of size m over haystack
        for (int i = 0; i <= n - m; ++i) {
            if (haystack.substr(i, m) == needle) {
                return i; // Found needle, return starting index
            }
        }

        return -1; // Needle not found
    }
};
int main() {
    Solution sol;
    string haystack = "hello";
    string needle = "ll";

    cout << sol.strStr(haystack, needle) << endl; // Output: 2
    return 0;
}
