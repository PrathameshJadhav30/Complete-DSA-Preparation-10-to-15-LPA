#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int freq = 0, ans = 0;

        // Boyer–Moore Voting Algorithm
        for (int i = 0; i < n; i++) {
            if (freq == 0) {
                ans = nums[i];
            }
            if (ans == nums[i]) {
                freq++;
            } else {
                freq--;
            }
        }
        return ans;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2}; // Example input
    int result = sol.majorityElement(nums);

    cout << "Majority element (> n/2) is: " << result << endl;
    return 0;
}
