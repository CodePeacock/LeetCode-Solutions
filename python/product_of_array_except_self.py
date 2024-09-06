from typing import List


class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        result = [1] * (len(nums))

        prefix = 1  # Scan from left to right
        for i in range(len(nums)):
            result[i] = prefix
            prefix *= nums[i]
        postfix = 1  # Scan from right to left
        for i in range(len(nums) - 1, -1, -1):
            result[i] *= postfix
            postfix *= nums[i]
        return result
