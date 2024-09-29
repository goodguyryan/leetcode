/*
    Time complexity: O(m + n)
    Space complexity: O(n)
    Method used: Hash map
*/
#include <iostream>
#include <string>
#include <map>
using namespace std;

bool canConstruct(string ransomNote, string magazine) {
    map<char, int> letters;
    for (char c : magazine)
    {
        if (letters.find(c) == letters.end())
        {
            letters[c] = 1;
        }
        else
        {
            letters[c]++;
        }
    }
    for (char c : ransomNote)
    {
        if (letters.find(c) != letters.end() && letters[c] > 0)
        {
            letters[c]--;
        }
        else
        {
            return false;
        }  
    }
    return true;
}