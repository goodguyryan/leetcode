/*
    Time Complexity: O(n);
    Space Complexity: O(n);
    Method used: Stack
*/
#include <iostream>
#include <vector>
#include <string>
#include <stack>
using namespace std;

int evalRPN(vector<string>& tokens) {
    stack<int> token;

    for (const auto&op : tokens)
    {
        if (op == "+" || op == "-" || op == "*" || op == "/") 
        {
            int b = token.top(); token.pop();
            int a = token.top(); token.pop();
        
            if (op == "+")
            {
                token.push(a + b);
            }
            else if (op == "-")
            {
                token.push(a - b);
            }
            else if (op == "*")
            {
                token.push(a * b);
            }
            else
            {
                token.push(a/b);
            }
        }
        else
        {
            token.push(stoi(op));
        }
    } 
    return token.top();       
}
