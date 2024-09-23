/*
    Time Complexity: O(n);
    Space Complexity: O(1);
    Methods used: Array, Math
*/

#include <iostream>
#include <vector>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;

int findClosestNumber(vector<int>& nums)
{
        int closest = nums[0];
        for (int i = 0; i < nums.size(); i++)
        {
            if (abs(nums[i]) < abs(closest))
            {
                closest = nums[i];
            }
        }
        
        if (closest < 0 && count(nums.begin(), nums.end(), abs(closest)))
        {
            return abs(closest);
        }
        return closest;
}