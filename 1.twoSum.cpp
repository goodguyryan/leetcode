/*  
    Time Complexity: O(n)
    Space Complexity: O(n)
    Method used: Hash Table
*/

#include <vector>
#include <map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map <int, int> checked;
        for (int i = 0; i < nums.size(); i++)
        {
            int complement = target - nums[i];
            if (checked.count(complement))
            {
                return {checked[complement], i};
            }
            checked[nums[i]] = i;
        }
        return {};
    }
};