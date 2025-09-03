#include <iostream>
#include <string>
using namespace std;

string compressString(const string &s) {
    string res = "";
    int count = 1;

    for (int i = 1; i < s.length(); i++) {
        if (s[i] == s[i - 1]) {
            count++;
        } else {
            res += string(1, s[i - 1]) + to_string(count);
            count = 1;
        }
    }
    // Add the last group
    res += string(1, s.back()) + to_string(count);

    return res;
}

int main() {
    string input;
    cout << "Enter string to compress: ";
    cin >> input;

    string compressed = compressString(input);
    cout << "Compressed string: " << compressed << endl;

    return 0;
}
