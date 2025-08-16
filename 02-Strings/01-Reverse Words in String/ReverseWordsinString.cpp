#include <bits/stdc++.h>
using namespace std;

string reverseWords(string s) {
    stringstream ss(s);
    string word;
    vector<string> words;

    // split string into words
    while (ss >> word) {
        words.push_back(word);
    }

    // reverse the order of words
    reverse(words.begin(), words.end());

    // join words with a space
    string result = "";
    for (int i = 0; i < words.size(); i++) {
        result += words[i];
        if (i != words.size() - 1){
          result += " ";
        } 
    }
    return result;
}

int main() {
    string s = "  hello   world  ";
    cout << reverseWords(s) << endl; // Output: "world hello"
    return 0;
}
