#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans;

        // Step 1: Sort the array
        sort(nums.begin(), nums.end());

        // Step 2: Fix one element at a time
        for (int i = 0; i < n; i++) {

            // Skip duplicate values for the first element
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }

            int j = i + 1;    // left pointer
            int k = n - 1;    // right pointer

            // Step 3: Two pointer approach
            while (j < k) {
                int sum = nums[i] + nums[j] + nums[k];

                if (sum < 0) {
                    j++; // need a larger sum
                }
                else if (sum > 0) {
                    k--; // need a smaller sum
                }
                else {
                    // Found valid triplet
                    ans.push_back({nums[i], nums[j], nums[k]});
                    j++;
                    k--;

                    // Skip duplicate values for j
                    while (j < k && nums[j] == nums[j - 1]) {
                        j++;
                    }
                }
            }
        }
        return ans;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {-1, 0, 1, 2, -1, -4};

    vector<vector<int>> result = sol.threeSum(nums);

    cout << "Unique triplets that sum to zero:\n";
    for (auto triplet : result) {
        cout << "[ ";
        for (auto num : triplet)
            cout << num << " ";
        cout << "]\n";
    }

    return 0;
}
