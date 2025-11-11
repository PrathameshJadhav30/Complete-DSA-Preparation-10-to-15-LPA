#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int left = 0, right = nums.size() - 1;
        
        while (left < right) {
            // Move left pointer if even
            if (nums[left] % 2 == 0) {
                left++;
            }
            // Move right pointer if odd
            else if (nums[right] % 2 == 1) {
                right--;
            }
            // Swap if left is odd and right is even
            else {
                swap(nums[left], nums[right]);
            }
        }
        return nums;
    }
};

int main() {
    Solution obj;
    
    vector<int> nums = {3, 1, 2, 4};
    vector<int> result = obj.sortArrayByParity(nums);

    cout << "Partitioned Array by Parity: ";
    for (int x : result)
        cout << x << " ";
    cout << endl;

    return 0;
}
