/*
    Time Complexity: O(n);
    Space Complexity: O(1);
    Methods used: Array;
*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> summaryRanges(vector<int>& nums) 
{
    vector<string> ranges;
    int counter = 0;

    while (counter < nums.size())
    {
        int start = nums[counter];

        while (counter < nums.size() - 1 && nums[counter] + 1 == nums[counter+1])
        {
            counter++;
        }

        if (start != nums[counter])
        {
            ranges.push_back(to_string(start) + "->" + to_string(nums[counter]));
        }
        else
        {
            ranges.push_back(to_string(nums[counter]));
        }

        counter++;
    }
    return ranges;
}