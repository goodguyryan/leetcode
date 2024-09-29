#include <iostream>
#include <string>
#include <map>
using namespace std;

bool isAnagram(string s, string t) {
    map<char, int> s_chars;
    map<char, int> t_chars;
    
    if (s.length() != t.length())
    {
        return false;
    }       

    for (int i = 0; i < s.length(); i++)
    {
        s_chars[s[i]]++;
        t_chars[t[i]]++;
    }

    for (int i = 0; i < s_chars.size();i++)
    {
        if(s_chars[i] != t_chars[i])
        {
            return false;
        }
    }
    return true;
}