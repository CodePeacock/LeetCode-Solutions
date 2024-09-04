#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Solution
{
public:
    vector<int> moveZeroes(vector<int> &nums)
    {
        int l = 0;
        int r = 0;
        for (r; r < nums.size(); r++)
        {
            if (nums[r])
            {
                std::swap(nums[r], nums[l]);
                l += 1;
            }
        }
        return nums;
    }
};

int main()
{
    Solution trial;
    vector<int> nums = {0, 1, 0, 3, 12};
    vector<int> result = trial.moveZeroes(nums);
    if (!result.empty())
    {
        cout << "[";
        for (size_t i = 0; i < result.size(); i++)
        {
            cout << result[i];
            if (i != result.size() - 1)
            {
                cout << ",";
            }
        }
        cout << "]" << endl;
    }
    else
    {
        cout << "Empty list" << endl;
    }
    return 0;
}