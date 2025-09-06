#include <iostream>
#include <string>
using namespace std;

bool checkRotation(string s1, string s2) {
    // If lengths differ, not rotation
    if (s1.length() != s2.length()){
      return false;
    } 

    // Concatenate s1 with itself
    string temp = s1 + s1;

    // Check if s2 is a substring of temp
    return (temp.find(s2) != string::npos);
}

int main() {

    string s1 = "ABCD";
    string s2 = "CDAB";

    if (checkRotation(s1, s2))
        cout << "Yes, it is a rotation." << endl;
    else
        cout << "No, it is not a rotation." << endl;

    return 0;
}
