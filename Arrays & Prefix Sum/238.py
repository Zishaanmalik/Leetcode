# LeetCode 238 - Product of Array Except Self
# Return an array where each element is the product of all
# elements except the element at that index.

# Example 1:
# Input: nums = [1,2,3,4]
# Output: [24,12,8,6]

# Example 2:
# Input: nums = [-1,1,0,-3,3]
# Output: [0,0,9,0,0]

class Solution:
    def productExceptSelf(self, nums: list[int]) -> list[int]:
        n = len(nums)
        res = [1] * n

        # 1. Move right (prefix product)
        r = 1
        for i in range(n):
            res[i] = r
            r *= nums[i]

        # 2. Move left (suffix product)
        l = 1
        for i in range(n - 1, -1, -1):
            res[i] *= l
            l *= nums[i]

        return res


# Local testing
nums = [1, 2, 3, 4]

obj = Solution()
print(obj.productExceptSelf(nums))
