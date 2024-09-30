/*
    Time Complexity: O(n);
    Space Complexity: O(1);
    Methods used: Two Pointers
*/
#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int>& numbers, int target) {
    int L = 0;
    int R = numbers.size() - 1;
    vector<int> res;

    while (L < R)
    {
        int total = numbers[L] + numbers[R];
        if (total < target)
        {
            L++;
        }
        else if (total > target)
        {
            R--;
        }
        else
        { 
            res.push_back(L + 1);
            res.push_back(R + 1);
            break;
        }
    }
    return res;
}
