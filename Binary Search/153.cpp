// LeetCode 153 - Find Minimum in Rotated Sorted Array
// Find the minimum element in a rotated sorted array.
//
// Example 1:
// Input:  nums = [3,4,5,1,2]
// Output: 1
//
// Example 2:
// Input:  nums = [4,5,6,7,0,1,2]
// Output: 0
//
// Example 3:
// Input:  nums = [11,13,15,17]
// Output: 11

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMin(vector<int>& nums) {
        int l = 0, r = nums.size() - 1, m;

        while (l < r) {
            m = (l + r) / 2;

            if (nums[m] > nums[r])
                l = m + 1;
            else
                r = m;
        }

        return nums[l];
    }
};

int main() {
    vector<int> nums = {3,4,5,1,2};

    Solution obj;
    cout << obj.findMin(nums);
}
