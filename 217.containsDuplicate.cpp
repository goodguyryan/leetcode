/*
    Time complexity: O(n);
    Space Complexity: O(n);
    Method used: Hash set
*/
#include <iostream>
#include <set>
#include <vector>
using namespace std;

bool containsDuplicate(vector<int>& nums) {
    set<int> seen;
    for (int num: nums)
    {
        if (seen.count(num))
        {
            return true;
        }
        seen.insert(num);
    }
    return false;
}