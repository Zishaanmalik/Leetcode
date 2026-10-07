// LeetCode 560 - Subarray Sum Equals K

// Given an integer array nums and an integer k,
// return the total number of subarrays whose sum equals k.

// Example 1:
// Input:  nums = [1,1,1], k = 2
// Output: 2

// Example 2:
// Input:  nums = [1,2,3], k = 3
// Output: 2

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int, int> mp;

        mp[0] = 1;

        int sum = 0;
        int count = 0;

        for (int x : nums) {
            sum += x;

            if (mp.find(sum - k) != mp.end()) {
                count += mp[sum - k];
            }

            mp[sum]++;
        }

        return count;
    }
};

int main() {
    vector<int> nums = {1, 2, 3};
    int k = 3;

    Solution s;
    int ans = s.subarraySum(nums, k);

    cout << ans;
}

