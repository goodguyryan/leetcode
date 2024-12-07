/*
    Time Complexity: O(n);
    Space Complexity: O(n);
    Method Used: Bucket Sort; Hash Map; Keep track of a list of elements with n-frequencies
*/

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
        unordered_map <int, int> count;
        vector<vector<int>> freq(nums.size() + 1);

        for (int n: nums)
        {
            count[n] = count[n] + 1;
        }       

        for (const auto& entry : count)
        {
            freq[entry.second].push_back(entry.first);
        }

        vector<int> res;
        for (int i = freq.size() - 1; i > 0; i--)
        {
            for (int n : freq[i])
            {
                res.push_back(n);
                if (res.size() == k)
                {
                    return res;
                }
            }
        }

        return res;
    }
};
