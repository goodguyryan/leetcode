/*
    Time Complexity: O(n);
    Space Complexity: O(1);
    Method used: Counting
*/
#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int>& nums) {
    int ans = 0;
    int count = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (count == 0)
        {
            ans = nums[i];
        }
        if (nums[i] == ans)
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    return ans;
}
