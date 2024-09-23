/*
    Time Complexity: O(n);
    Space Complexity: O(1);
    Methods used: Array;
*/

#include <iostream>
#include <vector>
using namespace std;

int maxProfit(vector<int>& prices) 
{
    int min_price = 10000;
    int max_profit = 0;

    for (int i = 0; i < prices.size(); i++)
    {
        if (prices[i] < min_price)
        {
            min_price = prices[i];
        }

        int profit = prices[i] - min_price;

        if (profit > max_profit)
        {
            max_profit = profit;
        }
    }
    return max_profit;
}