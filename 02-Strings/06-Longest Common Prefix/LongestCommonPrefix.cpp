#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()){
            return "";
        } 

        // Start with the first string as prefix
        string prefix = strs[0];

        // Compare prefix with every string in the array
        for (int i = 1; i < strs.size(); i++) 
        {
            // Reduce prefix until it matches the beginning of strs[i]
            while (strs[i].find(prefix) != 0) 
            {
                prefix = prefix.substr(0, prefix.size() - 1);
                if (prefix.empty()) return "";
            }
        }
        return prefix;
    }
};

int main() {
    Solution sol;

    // Example 1
    vector<string> strs1 = {"flower","flow","flight"};
    cout << "Longest Common Prefix : " << sol.longestCommonPrefix(strs1) << endl;

    // Example 2
    vector<string> strs2 = {"dog","racecar","car"};
    cout << "Longest Common Prefix : " << sol.longestCommonPrefix(strs2) << endl;

    // Example 3
    vector<string> strs3 = {"interspecies","interstellar","interstate"};
    cout << "Longest Common Prefix : " << sol.longestCommonPrefix(strs3) << endl;

    return 0;
}
