#include <iostream>
#include <vector>
using namespace std;

void moveZerosToEnd(vector<int>& arr) {
    int j = 0; // index to place next non-zero element

    // move all non-zero elements to the front
    for(int i = 0; i < arr.size(); i++) 
    {
        if(arr[i] != 0) 
        {
            arr[j++] = arr[i];
        }
    }

    // fill remaining elements with 0
    while(j < arr.size()) 
    {
        arr[j++] = 0;
    }
}

int main() {
    vector<int> arr = {0, 1, 0, 3, 12};

    moveZerosToEnd(arr);

    cout << "Result: ";
    for(int num : arr) 
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
