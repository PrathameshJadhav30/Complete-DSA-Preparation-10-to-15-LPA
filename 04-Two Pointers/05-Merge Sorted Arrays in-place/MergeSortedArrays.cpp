#include <iostream>
#include <vector>
using namespace std;

/*
Problem: Merge Sorted Arrays In-Place
Approach: Start merging from the end to avoid overwriting elements in nums1.
Time Complexity: O(m + n)
Space Complexity: O(1)
*/

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1;        // pointer for nums1 (end of valid elements)
        int j = n - 1;        // pointer for nums2
        int k = m + n - 1;    // pointer for final merged array (from back)

        // Merge nums1 and nums2 from the end
        while (i >= 0 && j >= 0) {
            if (nums1[i] > nums2[j])
                nums1[k--] = nums1[i--];
            else
                nums1[k--] = nums2[j--];
        }

        // If there are remaining elements in nums2
        while (j >= 0)
            nums1[k--] = nums2[j--];
    }
};

int main() {
    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    int m = 3;

    vector<int> nums2 = {2, 5, 6};
    int n = 3;

    Solution sol;
    sol.merge(nums1, m, nums2, n);

    cout << "Merged Array: ";
    for (int num : nums1)
        cout << num << " ";
    cout << endl;

    return 0;
}
