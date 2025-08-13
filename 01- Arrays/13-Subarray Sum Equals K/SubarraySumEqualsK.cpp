#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
     int subarraySum(vector<int>& nums, int k){
        unordered_map<int, int> prefixSumFreq;  //prefix sum : count
        prefixSumFreq[0] = 1;  // Sum 0 Occurs once

        int count = 0, prefixSum = 0;

        for(int num : nums){
            prefixSum += num; // current prefix sum

            //if there exists a prefixSum - k in map,
            // it means a subarray ending here sums to k
            if(prefixSumFreq.find(prefixSum - k) != prefixSumFreq.end()){
                count += prefixSumFreq[prefixSum - k];
            }

            //store frequency of current prefix sum
            prefixSumFreq[prefixSum]++;
        }
        return count;
     }

};

int main(){
    vector<int> nums = {1, 2, 3};
    int k = 3;

    Solution sol;
    int result = sol.subarraySum(nums, k);

    cout << "Number of subarrays with sum " << k << " = " << result << endl;

    return 0;
}