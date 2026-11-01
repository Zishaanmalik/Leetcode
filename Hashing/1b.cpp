// LeetCode 1 - Two Sum

// Given an array of integers nums and an integer target,
// return the indices of the two numbers such that they add up to target.

// Example 1:
// Input:  nums = [2,7,11,15], target = 9
// Output: [0,1]

// Example 2:
// Input:  nums = [3,2,4], target = 6
// Output: [1,2]

// Example 3:
// Input:  nums = [3,3], target = 6
// Output: [0,1]

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        map<int, int> mp;

        for (int i = 0; i < nums.size(); i++) {

            int needed = target - nums[i];

            if (mp.find(needed) != mp.end()) {
                return {mp[needed], i};
            }

            mp[nums[i]] = i;
        }

        return {};
    }
};

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    Solution s;
    vector<int> ans = s.twoSum(nums, target);

    for (int x : ans)
        cout << x << " ";
}
