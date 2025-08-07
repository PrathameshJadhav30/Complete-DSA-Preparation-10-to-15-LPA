#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void nextPermutation(vector<int>& nums) {
    int n = nums.size(), i = n - 2;
    
    // Step 1: Find first decreasing element
    while (i >= 0 && nums[i] >= nums[i + 1]){
       i--;
    }
        
    if (i >= 0) 
    {
        // Step 2: Find next greater element to swap
        int j = n - 1;
        while (nums[j] <= nums[i]){
           j--;
        }   
        swap(nums[i], nums[j]);
    }

    // Step 3: Reverse the suffix
    reverse(nums.begin() + i + 1, nums.end());
}

int main() {
    vector<int> nums = {1, 2, 3};
    nextPermutation(nums);
    cout << "Next Permutation: ";

    for (int num : nums){
        cout << num << " ";
    }   
    cout << endl;
    return 0;
}
