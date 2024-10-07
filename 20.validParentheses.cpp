/*
    Time Complexity: O(n);
    Space Complexity: O(n);
    Methods used: Stack, Hashmap
*/
#include <iostream>
#include <string>
#include <stack>
#include <unordered_map>
using namespace std;

bool isValid(string s) {
    stack<char> stk;
    unordered_map<char, char>hashmap = {{')', '('}, {'}', '{'}, {']', '['}};

    for (char c: s)
    {
        if (hashmap.find(c) == hashmap.end())
        {
            stk.push(c);
        }      
        else
        {
            if (stk.empty() || stk.top() != hashmap[c])
            {
                return false;
            }
            stk.pop();
        }
    }
    return stk.empty();        
}