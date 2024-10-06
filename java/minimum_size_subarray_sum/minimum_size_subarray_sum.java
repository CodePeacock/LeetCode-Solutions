package minimum_size_subarray_sum;

class Solution {
    public int minSubArrayLen(int target, int[] nums) {
        double min_length = Double.POSITIVE_INFINITY;
        int summ = 0;
        int l = 0;

        for (int r = 0; r < nums.length; r++) {
            summ += nums[r];
            while (summ >= target) {
                min_length = Math.min(min_length, r - l + 1);
                summ -= nums[l];
                l += 1;
            }
        }
        return (int) (min_length < Double.POSITIVE_INFINITY ? min_length : 0.0);
    }
}