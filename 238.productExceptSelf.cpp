/*
    Time Complexity = O(n);
    Space Complexity = O(1);
    Method used = Array Sum/ Prefix/Postfix Sum
*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
    vector<int> answer;
    int prefix = 1;
    for (int i = 0; i < nums.size(); i++)
    {   
        answer.push_back(1);
        answer[i] = prefix;
        prefix *= nums[i];
    }
    int postfix = 1;
    for (int j = nums.size() - 1; j >= 0; j--)
    {   
        answer[j] *= postfix;
        postfix *= nums[j];   
    }

    return answer;
}