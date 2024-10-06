var minSubArrayLen = function (target, nums) {
    let min_length = Infinity
    let summ = 0
    let l = 0

    for (let r in nums) {
        summ += nums[r]

        while (summ >= target) {
            min_length = Math.min(min_length, r - l + 1)
            summ -= nums[l]
            l += 1
        }
    }
    return min_length < Infinity ? min_length : 0;
};