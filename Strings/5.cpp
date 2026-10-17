// LeetCode 5 - Longest Palindromic Substring
// Given a string s, return its longest palindromic substring.
//
// Example 1:
// Input: s = "babad"
// Output: "bab"
// Explanation: "aba" is also a valid answer.
//
// Example 2:
// Input: s = "cbbd"
// Output: "bb"


#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int expand(string& s, int l, int r) {
        while (l >= 0 && r < s.size() && s[l] == s[r]) {
            l--;
            r++;
        }
        return r - l - 1;
    }

    string longestPalindrome(string s) {
        int start = 0, best = 1;

        for (int i = 0; i < s.size(); i++) {
            int odd = expand(s, i, i);
            int even = expand(s, i, i + 1);

            int len = max(odd, even);

            if (len > best) {
                best = len;
                start = i - (len - 1) / 2;
            }
        }

        return s.substr(start, best);
    }
};

int main() {
    string s = "babad";
    Solution obj;
    cout << obj.longestPalindrome(s);
}