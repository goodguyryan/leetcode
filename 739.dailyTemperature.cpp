/*
    Time Complexity: O(n);
    Space Complexity: O(n);
    Method used: Stack;
*/
#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> dailyTemperatures(vector<int>& temperatures) 
{
    vector<int> answer(temperatures.size(), 0);
    stack<pair<int, int>> stk; //pair<temp, index>

    for (int i = 0; i < temperatures.size(); i++)
    {
        int temp = temperatures[i];
        while(!stk.empty() && stk.top().first < temp)
        {
            auto[stk_temp, stk_index] = stk.top();
            stk.pop();
            answer[stk_index] = i - stk_index;
        }
        stk.push({temp, i});
    }    
    return answer;    
}
