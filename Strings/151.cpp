// LeetCode 151 - Reverse Words in a String

// Given a string s, reverse the order of its words.
// Remove extra spaces between words and at the beginning/end.
//
// Example 1:
// Input:  s = "the sky is blue"
// Output: "blue is sky the"
//
// Example 2:
// Input:  s = "  hello world  "
// Output: "world hello"
//
// Example 3:
// Input:  s = "a good   example"
// Output: "example good a"

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string word, ans;

        while (ss >> word) {
            ans = ans.empty() ? word : word + " " + ans;
        }

        return ans;
    }
};

int main() {
    string s = "  hello world  ";

    Solution obj;
    string ans = obj.reverseWords(s);

    cout << ans;
}