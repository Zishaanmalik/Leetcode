// LeetCode 128 - Longest Consecutive Sequence

// Given an unsorted array of integers nums, return the length
// of the longest consecutive elements sequence.
//
// Example 1:
// Input:  nums = [100,4,200,1,3,2]
// Output: 4
// Explanation: The longest consecutive sequence is [1,2,3,4].
//
// Example 2:
// Input:  nums = [0,3,7,2,5,8,4,6,0,1]
// Output: 9
//
// Example 3:
// Input:  nums = [1,0,1,2]
// Output: 3

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int best = 1;
        int current = 1;

        if (nums.begin() == nums.end()) {
            return 0;
        }

        sort(nums.begin(), nums.end());
        nums.push_back(INT_MAX);

        for (int i = 0; i < nums.size() - 1; i++) {

            // Skip duplicate numbers
            if ((long long)nums[i + 1] - nums[i] == 0) {
                continue;
            }

            // Consecutive numbers
            if ((long long)nums[i + 1] - nums[i] == 1) {
                current += 1;
            }
            else {
                current = 1;
            }

            best = max(best, current);
        }

        return best;
    }
};

int main() {
    vector<int> nums = {100, 4, 200, 1, 3, 2};

    Solution s;
    int ans = s.longestConsecutive(nums);

    cout << ans;
}