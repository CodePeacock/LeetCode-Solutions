#include <vector>
#include <limits>
#include <algorithm>
#include <iostream>

using namespace std;
class Solution
{
public:
    int minSubArrayLen(int target, vector<int> &nums)
    {
        int min_length = std::numeric_limits<int>::max();
        int summ = 0;
        int l = 0;
        for (int r = 0; r < nums.size(); r++)
        {
            summ += nums[r];
            while (summ >= target)
            {
                min_length = std::min(min_length, r - l + 1);
                summ -= nums[l];
                l += 1;
            }
        }
        return (min_length < std::numeric_limits<int>::max()) ? min_length : 0;
    }
};