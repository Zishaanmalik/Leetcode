// LeetCode 53 - Maximum Subarray

// Given an integer array nums, find the subarray with the largest sum
// and return its sum.

// Example 1:
// Input:  nums = [-2,1,-3,4,-1,2,1,-5,4]
// Output: 6

// Example 2:
// Input:  nums = [1]
// Output: 1

// Example 3:
// Input:  nums = [5,4,-1,7,8]
// Output: 23

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int best = nums[0];
        int current = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            current = max(nums[i], current + nums[i]);
            best = max(best, current);
        }

        return best;
    }
};

int main() {
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    Solution s;
    int ans = s.maxSubArray(nums);

    cout << ans;
}
