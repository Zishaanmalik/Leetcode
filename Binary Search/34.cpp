// LeetCode 34 - Find First and Last Position of Element in Sorted Array
// Find the starting and ending positions of target.
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
        int low = 0, high = nums.size() - 1;

        while (low <= high) {
            int mid = (low + high) / 2;

            if (nums[mid] >= target)
                high = mid - 1;
            else
                low = mid + 1;

            if (nums[mid] == target)
                first = mid;
        }

        low = 0;
        high = nums.size() - 1;

        while (low <= high) {
            int mid = (low + high) / 2;

            if (nums[mid] <= target)
                low = mid + 1;
            else
                high = mid - 1;

            if (nums[mid] == target)
                last = mid;
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
