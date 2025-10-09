#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> findDuplicates(vector<int>& nums) {
    unordered_map<int, int> freq;
    vector<int> result;
    
    for (int num : nums) {
        if (++freq[num] == 2)  // increment count; if 2 → duplicate
            result.push_back(num);
    }
    
    return result;
}

int main() {
    vector<int> nums = {4,3,2,7,8,2,3,1};
    vector<int> duplicates = findDuplicates(nums);
    
    cout << "Duplicates are: ";
    for (int num : duplicates){
      cout << num << " ";
    } 
    cout << endl;
}
