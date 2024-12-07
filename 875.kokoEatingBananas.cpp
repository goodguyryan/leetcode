/*
    Time Complexity: O(n*logm);
    Space Complexity: O(1);
    Method Used:
    - Uses fact that koko can eat a max of one pile per hour (ceil function)
    - Uses binary search from 1 to biggest pile to find k (total time)
*/
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;

class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1;
        int r = *max_element(piles.begin(), piles.end());
        int res = r;

        while (l <= r)
        {
            int k = (l+r)/2;

            long long totalTime = 0;
            for (int p: piles)
            {
                totalTime += ceil(static_cast<double> (p) / k);
            }

            if (totalTime <= h)
            {
                res = k;
                r = k - 1;
            }
            else
            {
                l = k + 1;
            }
        }       
        
        return res;
    }
};