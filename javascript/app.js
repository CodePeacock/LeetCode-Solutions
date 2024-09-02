function twoSum(nums, target) {
    indicies = {}
    i = 0
    for (i; i <= nums.length; i++) {
        difference = target - nums[i]
        if (difference in indicies) {
            return [indicies[difference], i]
        }
        indicies[nums[i]] = i
    }
}

nums = [4, 7, 1, 8, 0]
target = 15

console.log(twoSum(nums, target))