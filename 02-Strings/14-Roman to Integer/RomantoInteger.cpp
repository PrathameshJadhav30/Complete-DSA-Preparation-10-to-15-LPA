#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> roman{
            {'I', 1}, {'V', 5}, {'X', 10},
            {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}
        };

        int total = 0;
        int prevValue = 0;

        for (int i = s.length() - 1; i >= 0; i--) {
            int currValue = roman[s[i]];

            if (currValue < prevValue) {
                total -= currValue;
            } else {
                total += currValue;
            }

            prevValue = currValue;
        }

        return total;
    }
};

int main() {
    Solution sol;

    // Example test cases
    string roman1 = "III";
    cout << roman1 << " -> " << sol.romanToInt(roman1) << endl;

    string roman2 = "IV";
    cout << roman2 << " -> " << sol.romanToInt(roman2) << endl;

    string roman3 = "IX";
    cout << roman3 << " -> " << sol.romanToInt(roman3) << endl;

    string roman4 = "LVIII";
    cout << roman4 << " -> " << sol.romanToInt(roman4) << endl;

    string roman5 = "MCMXCIV";
    cout << roman5 << " -> " << sol.romanToInt(roman5) << endl;

    return 0;
}
