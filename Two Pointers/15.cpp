// LeetCode 15 - 3Sum
// Find all unique triplets whose sum is 0.
//
// Example:
// Input:  [-1, 0, 1, 2, -1, -4]
// Output: [[-1, -1, 2], [-1, 0, 1]]

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> s;
        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size() - 2; i++) {
            int left = i + 1, right = nums.size() - 1;

            while (left < right) {
                int sum = nums[i] + nums[left] + nums[right];

                if (sum == 0) {
                    s.insert({nums[i], nums[left], nums[right]});
                    left++;
                    right--;
                }
                else if (sum < 0) left++;
                else right--;
            }
        }

        return vector<vector<int>>(s.begin(), s.end());
    }
};
int main() {
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    Solution obj;
    vector<vector<int>> ans = obj.threeSum(nums);

    for (auto t : ans)
        cout << "[" << t[0] << "," << t[1] << "," << t[2] << "] ";
}