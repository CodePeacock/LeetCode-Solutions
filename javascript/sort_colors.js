var sortColors = function (nums) {
    let counts = [0, 0, 0]

    for (let color of nums) {
        counts[color] += 1
    }

    [R, W, B] = counts
    nums.fill(0, 0, R)
    nums.fill(1, R, R + W)
    nums.fill(2, R + W, nums.length)
};