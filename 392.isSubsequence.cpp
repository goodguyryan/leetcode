/*
    Time Complexity: O(n);
    Space Complexity: O(1);
    Methods used: Array, Two-Pointers(?);
*/

#include <iostream>
#include <string>
using namespace std;

bool isSubsequence(string s, string t) {
    int counter_s = 0;
    for (int i = 0; i < t.length(); i++)
    {
        if (t[i] == s[counter_s])
        {
            counter_s++;
        }
    }

    if (counter_s == s.length())
    {
        return true;
    }

    return false;
}

int main()
{
    cout << isSubsequence("abc", "ahbgdc");
}