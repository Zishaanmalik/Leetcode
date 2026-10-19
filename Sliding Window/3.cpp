// LeetCode 3 - Longest Substring Without Repeating Characters
// Find the length of the longest substring without duplicate characters.
//
// Example 1:
// Input:  s = "abcabcbb"
// Output: 3
//
// Example 2:
// Input:  s = "bbbbb"
// Output: 1
//
// Example 3:
// Input:  s = "pwwkew"
// Output: 3

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans = 0;
        string current;

        for (auto ch : s) {
            if (current.find(ch) == string::npos) {
                current += ch;
            }
            else {
                current = current.substr(current.find(ch) + 1);
                current += ch;
            }

            ans = max(ans, (int)current.size());
        }

        return ans;
    }
};

int main() {
    Solution obj;
    cout << obj.lengthOfLongestSubstring("abcabcbb");
}
