// LeetCode 34 - Find First and Last Position of Element in Sorted Array
// Find the first and last occurrence of target in a sorted array.
// Return [-1, -1] if target is not found.
//
// Example 1:
// Input:  nums = [5,7,7,8,8,10], target = 8
// Output: [3,4]
//
// Example 2:
// Input:  nums = [5,7,7,8,8,10], target = 6
// Output: [-1,-1]
//
// Example 3:
// Input:  nums = [], target = 0
// Output: [-1,-1]

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = -1, last = -1;
        int l = 0, r = nums.size() - 1;

        while (l <= r) {
            int m = (l + r) / 2;

            if (nums[m] == target) {
                first = m;
                r = m - 1;
            }
            else if (nums[m] < target)
                l = m + 1;
            else
                r = m - 1;
        }

        l = 0;
        r = nums.size() - 1;

        while (l <= r) {
            int m = (l + r) / 2;

            if (nums[m] == target) {
                last = m;
                l = m + 1;
            }
            else if (nums[m] < target)
                l = m + 1;
            else
                r = m - 1;
        }

        return {first, last};
    }
};

int main() {
    vector<int> nums = {5,7,7,8,8,10};
    int target = 8;

    Solution obj;
    vector<int> ans = obj.searchRange(nums, target);

    cout << "[" << ans[0] << "," << ans[1] << "]";
}