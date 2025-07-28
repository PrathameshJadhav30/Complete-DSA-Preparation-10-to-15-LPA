#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxSubArraySum(const vector<int>& arr) {
    int maxSum = arr[0];
    int currSum = arr[0];

    for (int i = 1; i < arr.size(); i++) 
    {
        currSum = max(arr[i], currSum + arr[i]);  // Choose max: start new or continue
        maxSum = max(maxSum, currSum);            // Update max if current is greater
    }

    return maxSum;
}

int main() {
    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    int result = maxSubArraySum(arr);
    cout << "Maximum Subarray Sum: " << result << endl;

    return 0;
}
