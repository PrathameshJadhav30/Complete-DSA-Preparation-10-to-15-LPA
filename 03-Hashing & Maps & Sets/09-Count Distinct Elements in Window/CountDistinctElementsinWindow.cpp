#include <bits/stdc++.h>
using namespace std;

void countDistinctElements(vector<int> &arr, int k) {
    int n = arr.size();
    unordered_map<int, int> freq;

    // Process first window
    for (int i = 0; i < k; i++) {
        freq[arr[i]]++;
    }

    cout << freq.size() << " ";  // first window distinct count

    // Slide the window
    for (int i = k; i < n; i++) {
        // Remove the element going out
        freq[arr[i - k]]--;
        if (freq[arr[i - k]] == 0)
            freq.erase(arr[i - k]);

        // Add the new element
        freq[arr[i]]++;

        // Print current distinct count
        cout << freq.size() << " ";
    }
    cout << endl;
}

int main() {
    int n = 7, k = 4;
    vector<int> arr = {1, 2, 1, 3, 4, 2, 3};

    countDistinctElements(arr, k);

    return 0;
}
