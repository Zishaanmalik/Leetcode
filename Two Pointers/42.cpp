// LeetCode 42 - Trapping Rain Water
// Calculate how much rainwater can be trapped.
//
// Example 1:
// Input:  height = [0,1,0,2,1,0,1,3,2,1,2,1]
// Output: 6
//
// Example 2:
// Input:  height = [4,2,0,3,2,5]
// Output: 9

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int trap(vector<int>& height) {
        int l = 0, r = height.size() - 1;
        int leftMax = 0, rightMax = 0, water = 0;

        while (l < r) {
            if (height[l] < height[r]) {
                leftMax = max(leftMax, height[l]);
                water += leftMax - height[l];
                l++;
            }
            else {
                rightMax = max(rightMax, height[r]);
                water += rightMax - height[r];
                r--;
            }
        }

        return water;
    }
};

int main() {
    vector<int> height = {0,1,0,2,1,0,1,3,2,1,2,1};

    Solution obj;
    cout << obj.trap(height);
}