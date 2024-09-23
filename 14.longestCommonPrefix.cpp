/*
    Time Complexity: O(n*m);
    Space Complexity: O(1);
    Methods Used: String;
*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

string longestCommonPrefix(vector<string>& strs) 
{
    int min_length = 200;
    for (int i = 0; i < strs.size(); i++)
    {
        if (strs[i].length() < min_length)
        {
            min_length = strs[i].length();
        }
    }

    int counter = 0;
    while (counter < min_length)
    {
        for (int i = 0; i < strs.size(); i++)
        {
            if (strs[i][counter] != strs[0][counter])
            {
                return strs[0].substr(0, counter);
            }
        }
        counter+=1;
    }
    return strs[0].substr(0,counter);
}