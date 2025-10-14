#include <bits/stdc++.h>
using namespace std;

class Solution 
{
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) 
    {
        unordered_map<int,int> freq;

        // Count frequency of elements in target
        for(int x : target) 
        {
            freq[x]++;
        }

        // Subtract frequency based on arr
        for(int x : arr) 
        {
            freq[x]--;
        }

        // Check if all frequencies are zero
        for(auto &p : freq) 
        {
            if(p.second != 0) 
            {
                return false;
            }
        }

        return true;
    }
};

int main() 
{
    Solution obj;
    vector<int> target = {1,2,3,4};
    vector<int> arr = {2,4,1,3};

    if(obj.canBeEqual(target, arr)) 
    {
        cout << "true";
    } 
    else 
    {
        cout << "false";
    }

    return 0;
}
