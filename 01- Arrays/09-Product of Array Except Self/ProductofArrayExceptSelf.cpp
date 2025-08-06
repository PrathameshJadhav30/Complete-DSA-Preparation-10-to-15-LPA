#include <iostream>
#include <vector>
using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
    vector<int> res(n, 1);

    // Step 1: Calculate prefix product for each element
    for (int i = 1; i < n; i++){
        res[i] = res[i - 1] * nums[i - 1];
    }
       
    // Step 2: Multiply with suffix product from right
    int suffix = 1;
    for (int i = n - 1; i >= 0; i--) {
        res[i] *= suffix;
        suffix *= nums[i]; // update suffix
    }

    return res;
}

int main() {
    vector<int> nums = {1, 2, 3, 4};
    vector<int> result = productExceptSelf(nums);

    cout << "Output: ";
    for (int val : result){
      cout << val << " ";
    }   
    cout << endl;

    return 0;
}
