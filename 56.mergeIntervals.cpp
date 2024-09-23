/*
    Time Complexity: O(n);
    Space Complexity: O(1);
    Method used: Arrays, Sorting
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


vector<vector<int>> merge(vector<vector<int>>& intervals) 
{
    sort(intervals.begin(), intervals.end());
    vector<vector<int>> res;
    
    for (vector<int>& interval : intervals)
    {
        if (res.empty() || res.back()[1] < interval[0])
        {
            res.push_back(interval);
        }
        else
        {
            res[res.size()-1][1] = max(res.back()[1], interval[1]);
        }
    }

    return res;
}