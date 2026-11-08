// LeetCode 239 - Sliding Window Maximum
// Find the maximum element in every window of size k.
//
// Example 1:
// Input:  nums = [1,3,-1,-3,5,3,6,7], k = 3
// Output: [3,3,5,5,6,7]
//
// Example 2:
// Input:  nums = [1], k = 1
// Output: [1]

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;

        for (int i = 0; i <= nums.size() - k; i++) {
            ans.push_back(*max_element(nums.begin() + i,
                                       nums.begin() + i + k));
        }

        return ans;
    }
};

int main() {
    vector<int> nums = {1,3,-1,-3,5,3,6,7};
    int k = 3;

    Solution obj;
    vector<int> ans = obj.maxSlidingWindow(nums, k);

    for (int x : ans)
        cout << x << " ";
}
