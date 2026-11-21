# LeetCode 53 - Maximum Subarray
# Find the contiguous subarray with the largest sum.

# Example 1:
# Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
# Output: 6
# Explanation: [4,-1,2,1] has the largest sum (6).

# Example 2:
# Input: nums = [1]
# Output: 1

# Example 3:
# Input: nums = [5,4,-1,7,8]
# Output: 23

class Solution:
    def maxSubArray(self, nums: list[int]) -> int:
        current = nums[0]
        best = nums[0]

        for i in range(1, len(nums)):
            current = max(nums[i], current + nums[i])
            best = max(best, current)

        return best


# Local testing
nums = [-2, 1, -3, 4, -1, 2, 1, -5, 4]

obj = Solution()
print(obj.maxSubArray(nums))
