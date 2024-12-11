/*
    Time Complexity: O(log n);
    Space Complexity: O(1);
    Method Used:
    Case 1: Target = middle
    Case 2: Left to middle is sorted
        2.1: Search rightside
        2.2 Search leftside
    Case 3: Middle to Right is sorted
        3.1 Search leftside
        3.2 Search rightside

Based off Binary Search
*/
#include <vector>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size() - 1;

        while (l <= r)
        {
            int m = (l + r)/2;
            if (target == nums[m])
            {
                return m;
            }

            if (nums[l] <= nums[m])
            {
                if (target > nums[m] || target < nums[l])
                {
                    l = m + 1;
                }
                else
                {
                    r = m - 1;
                }
            }
            else
            {
                if (target < nums[m] || target > nums[r])
                {
                    r = m - 1;
                }
                else
                {
                    l = m + 1;
                }
            }
        }        
        return -1;
    }
};