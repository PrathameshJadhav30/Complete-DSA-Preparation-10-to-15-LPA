#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;

        for (string s : strs) {
            string key = s;
            sort(key.begin(), key.end());  // sort characters
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

    cout << "Grouped Anagrams: " << endl;
    for (auto &group : groups) {
        cout << "[ ";
        for (auto &word : group) {
            cout << word << " ";
        }
        cout << "]" << endl;
    }

    return 0;
}
