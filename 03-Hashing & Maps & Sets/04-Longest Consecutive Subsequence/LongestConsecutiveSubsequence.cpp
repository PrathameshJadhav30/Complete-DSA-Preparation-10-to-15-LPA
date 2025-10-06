#include <bits/stdc++.h>
using namespace std;

int findLongestConseqSubseq(vector<int>& arr) {
    unordered_set<int> s(arr.begin(), arr.end());  // Step 1: Store all elements in a set for O(1) lookup
    int longest = 0;

    for (int num : s) {
        if (s.find(num - 1) == s.end()) {  // Step 2: Check if 'num' is the start of a sequence
            int current = num;
            int streak = 1;

            while (s.find(current + 1) != s.end()) {  // Step 3: Count forward consecutive numbers
                current++;
                streak++;
            }
            longest = max(longest, streak);  // Update maximum length
        }
    }
    return longest;
}

int main() {
    vector<int> arr = {1, 9, 3, 10, 4, 20, 2};
    cout << "Length of Longest Consecutive Subsequence: " 
         << findLongestConseqSubseq(arr) << endl;
    return 0;
}
