function moveZeroes(nums) {
    left = 0
    for (right = 0; right < nums.length; right++) {
        if (nums[right] !== 0) {
            [nums[left], nums[right]] = [nums[right], nums[left]];
            left++
        }
    }
    return nums
}


nums = [0, 1, 0, 3, 12]

console.log(moveZeroes(nums))