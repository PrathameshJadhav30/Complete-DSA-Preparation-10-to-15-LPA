#include <bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(string s) {
    unordered_map<char, int> lastIndex;
    int maxLength = 0;
    int start = 0;

    for (int end = 0; end < s.size(); end++) {
        if (lastIndex.find(s[end]) != lastIndex.end()) {
            start = max(start, lastIndex[s[end]] + 1);
        }
        lastIndex[s[end]] = end;
        maxLength = max(maxLength, end - start + 1);
    }

    return maxLength;
}

int main() {
    string s = "abcabcbb";

    int result = lengthOfLongestSubstring(s);
    cout << "Input string: " << s << endl;
    cout << "Length of longest substring without repeating characters: " << result << endl;

    return 0;
}
