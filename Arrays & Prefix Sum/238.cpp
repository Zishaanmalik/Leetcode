// LeetCode 238 - Product of Array Except Self

// Example 1:
// Input:  nums = [1,2,3,4]
// Output: [24,12,8,6]

// Example 2:
// Input:  nums = [-1,1,0,-3,3]
// Output: [0,0,9,0,0]
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, 1);

        int left = 1;
        for (int i = 0; i < n; i++) {
            ans[i] = left;
            left *= nums[i];
        }

        int right = 1;
        for (int i = n - 1; i >= 0; i--) {
            ans[i] *= right;
            right *= nums[i];
        }

        return ans;
    }
};

int main() {
    vector<int> nums = {-1, 1, 0, -3, 3};

    Solution s;
    vector<int> ans = s.productExceptSelf(nums);

    for (int x : ans)
        cout << x << " ";
}