//Problem Link: https://leetcode.com/problems/edit-distance/description/
#include <bits/stdc++.h>
using namespace std;

// Function to compute Edit Distance using space-optimized DP
int editDistance(string s1, string s2) {
    int m = s1.size();
    int n = s2.size();

    // Only two rows needed
    vector<int> prev(n + 1), curr(n + 1);

    // Base case: converting "" -> s2
    for (int j = 0; j <= n; j++) prev[j] = j;

    for (int i = 1; i <= m; i++) {
        curr[0] = i; // converting s1[0..i-1] -> ""
        for (int j = 1; j <= n; j++) {
            if (s1[i - 1] == s2[j - 1]) {
                curr[j] = prev[j - 1]; // no operation
            } else {
                curr[j] = 1 + min({ prev[j], curr[j - 1], prev[j - 1] });
            }
        }
        prev = curr;
    }

    return prev[n];
}

int main() {
    string s1 = "horse";
    string s2 = "ros";

    cout << "String 1: " << s1 << endl;
    cout << "String 2: " << s2 << endl;
    cout << "Minimum Edit Distance = " << editDistance(s1, s2) << endl;

    return 0;
}
