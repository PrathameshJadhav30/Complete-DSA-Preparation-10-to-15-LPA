#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string intToRoman(int num) {
        // Roman numeral values and their corresponding symbols
        vector<pair<int, string>> roman = {
            {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
            {100, "C"},  {90, "XC"}, {50, "L"},  {40, "XL"},
            {10, "X"},   {9, "IX"},  {5, "V"},   {4, "IV"},
            {1, "I"}
        };

        string result = "";

        // Loop through the roman symbols
        for (auto &p : roman) {
            // Keep subtracting while num is greater than current value
            while (num >= p.first) {
                result += p.second; // Append symbol
                num -= p.first;     // Subtract value
            }
        }

        return result;
    }
};

int main() {
    Solution s;
    int num;

    cout << "Enter an integer (1 - 3999): ";
    cin >> num;

    string roman = s.intToRoman(num);
    cout << "Roman numeral: " << roman << endl;

    return 0;
}
