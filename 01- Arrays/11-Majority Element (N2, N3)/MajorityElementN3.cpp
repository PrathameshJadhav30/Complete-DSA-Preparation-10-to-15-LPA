#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int count1 = 0, count2 = 0;
        int can1 = INT_MIN, can2 = INT_MIN;

        // Step 1: Find candidates
        for (int num : nums) {
            if (num == can1) {
                count1++;
            } else if (num == can2) {
                count2++;
            } else if (count1 == 0) {
                can1 = num;
                count1 = 1;
            } else if (count2 == 0) {
                can2 = num;
                count2 = 1;
            } else {
                count1--;
                count2--;
            }
        }

        // Step 2: Validate candidates
        int c1 = 0, c2 = 0;
        for (int num : nums) {
            if (num == can1) c1++;
            else if (num == can2) c2++;
        }

        // Step 3: Add valid candidates to result
        vector<int> result;
        if (c1 > nums.size() / 3) result.push_back(can1);
        if (c2 > nums.size() / 3) result.push_back(can2);

        return result;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {3, 2, 3, 1, 2, 2, 3, 3}; // Example input
    vector<int> ans = sol.majorityElement(nums);

    cout << "Majority elements (> n/3) are: ";
    for (int num : ans) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
