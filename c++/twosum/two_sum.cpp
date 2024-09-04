#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> indices; // Using unordered_map for faster lookup
        for (int i = 0; i < nums.size(); i++)
        {
            int difference = target - nums[i];
            if (indices.count(difference))
            {
                return {indices[difference], i};
            }
            indices[nums[i]] = i;
        }
        return {}; // No solution found
    }
};

int main()
{
    Solution trial;
    vector<int> nums = {4, 7, 1, 8, 0};
    int target = 11;
    vector<int> result = trial.twoSum(nums, target);
    if (!result.empty())
    {
        cout << "Indices of the two numbers that add up to the target: " << result[0] << " and " << result[1] << endl;
    }
    else
    {
        cout << "No solution found." << endl;
    }
    return 0;
}