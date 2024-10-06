#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
#include <array>

using namespace std;

class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        int counts[3] = {0, 0, 0};

        for (auto &&color : nums)
        {
            counts[color]++;
        }

        int R = counts[0];
        int W = counts[1];
        int B = counts[2];

        fill(nums.begin(), nums.begin() + R, 0);
        fill(nums.begin() + R, nums.begin() + R + W, 1);
        fill(nums.begin() + R + W, nums.end(), 2);
    }
};