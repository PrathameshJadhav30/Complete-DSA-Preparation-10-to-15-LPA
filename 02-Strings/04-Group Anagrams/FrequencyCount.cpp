#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;

        for (string s : strs) {
            // Create frequency key for each word
            vector<int> count(26, 0);
            for (char c : s) count[c - 'a']++;
            
            // Convert frequency to string key
            string key = "";
            for (int i = 0; i < 26; i++) {
                key += "#" + to_string(count[i]);
            }

            mp[key].push_back(s);
        }

        vector<vector<string>> result;
        for (auto &entry : mp) {
            result.push_back(entry.second);
        }
        return result;
    }
};

int main() {
    Solution obj;
    vector<string> strs = {"eat","tea","tan","ate","nat","bat"};
    
    vector<vector<string>> groups = obj.groupAnagrams(strs);

    cout << "Grouped Anagrams (Frequency Count): " << endl;
    for (auto &group : groups) {
        cout << "[ ";
        for (auto &word : group) {
            cout << word << " ";
        }
        cout << "]" << endl;
    }

    return 0;
}
