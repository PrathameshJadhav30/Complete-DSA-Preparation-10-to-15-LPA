#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int longestSubarrayWithSumK(const vector<int>& arr, int k) {
    unordered_map<int, int> prefixMap;
    int sum = 0, maxLen = 0;

    for(int i = 0; i < arr.size(); i++) {
        sum += arr[i];

        if(sum == k)
            maxLen = i + 1;

        if(prefixMap.find(sum - k) != prefixMap.end()) {
            int len = i - prefixMap[sum - k];
            maxLen = max(maxLen, len);
        }

        // Store the first occurrence only
        if(prefixMap.find(sum) == prefixMap.end()) {
            prefixMap[sum] = i;
        }
    }

    return maxLen;
}

int main() {
    vector<int> arr = {10, 5, 2, 7, 1, 9};
    int k = 15;

    cout << "Longest subarray length with sum " << k << " is: " << longestSubarrayWithSumK(arr, k) << endl;
    return 0;
}
