#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

// Function to count frequency and print
void countFrequency(const vector<int>& arr) {
    unordered_map<int, int> freq;

    // Store frequency
    for (int num : arr) {
        freq[num]++;
    }

    // Print frequency
    for (auto p : freq) {
        cout << p.first << " occurs " << p.second << " times" << endl;
    }
}

int main() {
    vector<int> arr = {1, 2, 2, 3, 3, 3, 4};
    countFrequency(arr);
    return 0;
}
