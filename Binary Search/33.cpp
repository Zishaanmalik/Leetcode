// LeetCode 33 - Search in Rotated Sorted Array
// Search for target in a rotated sorted array.
// Return its index, or -1 if not found.
//
// Example 1:
// Input:  nums = [4,5,6,7,0,1,2], target = 0
// Output: 4
//
// Example 2:
// Input:  nums = [4,5,6,7,0,1,2], target = 3
// Output: -1
//
// Example 3:
// Input:  nums = [1], target = 0
// Output: -1

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1;

        while (low <= high) {
            int mid = (low + high) / 2;

            if (nums[mid] == target) return mid;

            if (nums[low] <= nums[mid]) {
                if (nums[low] <= target && target < nums[mid])
                    high = mid - 1;
                else
                    low = mid + 1;
            }
            else {
                if (nums[mid] < target && target <= nums[high])
                    low = mid + 1;
                else
                    high = mid - 1;
            }
        }

        return -1;
    }
};

int main() {
    vector<int> nums = {4,5,6,7,0,1,2};
    int target = 0;

    Solution obj;
    cout << obj.search(nums, target);
}
