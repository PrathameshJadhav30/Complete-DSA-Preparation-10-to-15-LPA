#include <iostream>
#include <vector>
#include <algorithm> // for reverse
using namespace std;

// Function to rotate the array to the left by k positions
void rotateArray(vector<int>& arr, int k) {
    int n = arr.size();
    k = k % n; // in case k > n

    // Core logic for Left Rotation:
    reverse(arr.begin(), arr.begin() + k);     // Step 1: Reverse first k elements
    reverse(arr.begin() + k, arr.end());       // Step 2: Reverse remaining n-k elements
    reverse(arr.begin(), arr.end());           // Step 3: Reverse entire array
}

// print the array
void printArray(const vector<int>& arr) {
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;

    cout << "Original Array: ";
    printArray(arr);

    rotateArray(arr, k);

    cout << "Left Rotated Array by " << k << " positions: ";
    printArray(arr);

    return 0;
}
