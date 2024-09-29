/*
    Time Complexity: O(n);
    Space Complexity: O(n);
    Methods used: Hash Set;
*/
#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int longestConsecutive(vector<int>& nums) {
    unordered_set <int> numSet;
    int longest = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        numSet.insert(nums[i]);
    }

    for (int num: numSet)
    {
        if (numSet.find(num - 1) == numSet.end())
        {
            int length = 1;
            int nextNum = num + 1;
            while (numSet.find(nextNum) != numSet.end())
            {
                length++;
                nextNum++;
            }
            longest = max(length, longest);
        }
    }
    return longest;
}
