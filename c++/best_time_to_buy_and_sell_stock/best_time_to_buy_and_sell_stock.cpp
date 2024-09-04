#include <vector>
#include <iostream>

using namespace std;

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int lowest_buying_price = prices[0];
        int max_profit = 0;
        for (size_t index = 0; index < prices.size(); index++)
        {
            int price = prices[index];
            if (price < lowest_buying_price)
            {
                lowest_buying_price = price;
            }
            int current_proft = price - lowest_buying_price;
            if (current_proft > max_profit)
            {
                max_profit = current_proft;
            }
        }
        return max_profit;
    }
};