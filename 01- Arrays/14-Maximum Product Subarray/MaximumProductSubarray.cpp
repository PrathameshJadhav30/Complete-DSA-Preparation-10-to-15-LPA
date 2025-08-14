#include <bits/stdc++.h>
using namespace std;

int maxProduct(vector<int>& nums) {
    int n = nums.size();
    int maxProd = nums[0]; // current maximum product
    int minProd = nums[0]; // current minimum product
    int result = nums[0];  // global maximum

    for (int i = 1; i < n; i++) {
        // If the current element is negative, swap maxProd and minProd
        if (nums[i] < 0) swap(maxProd, minProd);

        maxProd = max(nums[i], maxProd * nums[i]);
        minProd = min(nums[i], minProd * nums[i]);

        result = max(result, maxProd);
    }
    return result;
}

int main() {
    vector<int> nums = {2, 3, -2, 4};
    cout << "Maximum Product Subarray = " << maxProduct(nums) << endl;
    return 0;
}
