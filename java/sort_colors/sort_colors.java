import java.util.Arrays;

class Solution {
    public void sortColors(int[] nums) {
        int[] counts = { 0, 0, 0 };

        for (int color : nums) {
            counts[color]++;
        }

        int R = counts[0];
        int W = counts[1];
        int B = counts[2];

        Arrays.fill(nums, 0, R, 0);
        Arrays.fill(nums, R, R + W, 1);
        Arrays.fill(nums, R + W, R + W + B, 2);
    }
}