package twosum;
import java.util.HashMap;

class Solution {
    public int[] twoSum(int[] nums, int target) {
        HashMap<Integer, Integer> indices = new HashMap<>();
        for (int i = 0; i < nums.length; i++) {
            int difference = target - nums[i];
            if (indices.containsKey(difference)) {
                return new int[] { indices.get(difference), i };
            }
            indices.put(nums[i], i);
        }
        return new int[] {};
    }
}

public class twosum {
    public static void main(String[] args) {
        Solution trial = new Solution();
        int[] nums = { 4, 7, 1, 8, 0 };
        int target = 15;
        int[] result = trial.twoSum(nums, target);
        for (int i = 0; i < result.length; i++) {
            System.out.println(result[i]);
        }
    }
}