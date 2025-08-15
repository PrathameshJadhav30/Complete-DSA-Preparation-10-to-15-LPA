#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int k = accumulate(nums.begin(), nums.end(), 0); // Total 1's in array (window size)
        int n = nums.size();
        int cnt = accumulate(nums.begin(), nums.begin() + k, 0); // Count of 1's in first window
        int mx = cnt;

        // Sliding window over circular array
        for (int i = k; i < n + k; i++) {
            cnt += nums[i % n] - nums[(i - k + n) % n]; // Add new, remove old
            mx = max(mx, cnt);
        }
        return k - mx; // Min swaps = total 1's - max 1's in any window
    }
};

int main() {
    vector<int> nums = {0,1,0,1,1,0,0};
    Solution sol;
    cout << "Minimum Swaps: " << sol.minSwaps(nums) << endl;
    return 0;
}
