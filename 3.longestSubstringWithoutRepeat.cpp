/*
    Time Complexity: O(n);
    Space Complexity: O(m);
    Method used: Sliding Window
*/
#include <unordered_map>
#include <string>
using namespace std;

int lengthOfLongestSubstring(string s) 
{
    unordered_map <char, int> chars;
    int l = 0;
    int res = 0;

    for (int r = 0; r < s.size(); r++)
    {
        if (chars.find(s[r]) != chars.end())
        {
            l = max(chars[s[r]] + 1, l);
        }
        chars[s[r]] = r;
        res = max(res, r - l + 1);
    }        
    return res;
}

