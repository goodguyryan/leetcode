/*
    Time Complexity: O(n);
    Space Complexity: O(1);
    Methods used: Hash Table, String
*/

#include <iostream>
#include <string>
#include <map>
using namespace std;

int romanToInt(string s) {
    int ans = 0;
    int length = s.length();
    int counter = 0;

    map<char, int>roman = {
        {'I', 1}, 
        {'V', 5}, 
        {'X',10}, 
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000},
    };

    while(counter < length)
    {
        if ((counter < length - 1) && roman[s[counter]] < roman[s[counter + 1]])
        {
            ans+= roman[s[counter + 1]] - roman[s[counter]];
            counter+=2;
        }
        else
        {
            ans+= roman[s[counter]];
            counter+=1;
        }
    }

    return ans;
}