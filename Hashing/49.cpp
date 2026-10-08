// LeetCode 49 - Group Anagrams

// Given an array of strings strs, group the anagrams together.
// You can return the answer in any order.

// Example 1:
// Input:  strs = ["eat","tea","tan","ate","nat","bat"]
// Output: [["bat"],["nat","tan"],["ate","eat","tea"]]

// Example 2:
// Input:  strs = [""]
// Output: [[""]]

// Example 3:
// Input:  strs = ["a"]
// Output: [["a"]]

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        map<string, vector<string>> mp;

        for (string s : strs) {

            string key = s;
            sort(key.begin(), key.end());

            mp[key].push_back(s);
        }

        vector<vector<string>> ans;

        for (auto p : mp) {
            ans.push_back(p.second);
        }

        return ans;
    }
};

int main() {
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};

    Solution s;
    vector<vector<string>> ans = s.groupAnagrams(strs);

    for (auto group : ans) {
        cout << "[ ";

        for (string word : group) {
            cout << word << " ";
        }

        cout << "] ";
    }
}
