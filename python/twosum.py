class Solution:
    def twoSum(self, nums, target):
        indices = {}
        for i in range(len(nums)):
            difference = target - nums[i]
            if difference in indices:
                return [indices[difference], i]
            indices[nums[i]] = i


trial = Solution()
nums = [4, 7, 1, 8, 0]
target = 15
print(trial.twoSum(nums=nums, target=target))
