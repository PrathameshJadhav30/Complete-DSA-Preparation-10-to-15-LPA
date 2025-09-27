#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp; // stores number -> index
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            if (mp.find(complement) != mp.end()) {
                return {mp[complement], i}; // found the pair
            }
            mp[nums[i]] = i; // store current number
        }
        return {};
    }
};

int main() {
    Solution obj;
    vector<int> nums = {2,7,11,15};
    int target = 9;

    vector<int> ans = obj.twoSum(nums, target);
    cout << "[" << ans[0] << "," << ans[1] << "]" << endl;
    return 0;
}
