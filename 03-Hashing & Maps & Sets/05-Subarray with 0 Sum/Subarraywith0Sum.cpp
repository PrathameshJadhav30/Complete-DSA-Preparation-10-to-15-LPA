#include <bits/stdc++.h>
using namespace std;

// Function to check if subarray with 0 sum exists
bool subarrayWithZeroSum(vector<int>& arr) {
    unordered_set<int> prefixSums;
    int sum = 0;

    for (int num : arr) {
        sum += num;

        // If sum is 0 or already exists, 0-sum subarray found
        if (sum == 0 || prefixSums.count(sum))
            return true;

        prefixSums.insert(sum);
    }
    return false;
}

int main() {
    vector<int> arr = {4, 2, -3, 1, 6};

    if (subarrayWithZeroSum(arr))
        cout << "Yes, Subarray with 0 sum exists\n";
    else
        cout << "No, Subarray with 0 sum does not exist\n";

    return 0;
}
