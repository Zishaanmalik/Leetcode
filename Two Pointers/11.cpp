// LeetCode 11 - Container With Most Water
// Find two lines that can hold the maximum amount of water.
//
// Example 1:
// Input: height = [1,8,6,2,5,4,8,3,7]
// Output: 49
//
// Example 2:
// Input: height = [1,1]
// Output: 1

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int best = 0;
        int l = 0, r = height.size() - 1;

        while (l < r) {
            int width = r - l;
            int current = width * min(height[l], height[r]);
            best = max(best, current);

            if (height[l] < height[r])
                l++;
            else
                r--;
        }

        return best;
    }
};

int main() {
    vector<int> height = {1,8,6,2,5,4,8,3,7};

    Solution obj;
    cout << obj.maxArea(height);
}