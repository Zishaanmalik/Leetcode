# LeetCode 560 - Subarray Sum Equals K
# Find the total number of continuous subarrays whose sum equals k.

# Example 1:
# Input: nums = [1,1,1], k = 2
# Output: 2

# Example 2:
# Input: nums = [1,2,3], k = 3
# Output: 2

from typing import List

class Solution:
    def subarraySum(self, nums: List[int], k: int) -> int:
        mp = {0: 1}
        sum = 0
        count = 0

        for x in nums:
            sum += x

            if (sum - k) in mp:
                count += mp[sum - k]

            mp[sum] = mp.get(sum, 0) + 1

        return count


# Local testing
nums = [1, 1, 1]
k = 2

obj = Solution()
print(obj.subarraySum(nums, k))
