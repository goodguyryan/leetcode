/*
    Time complexity: O(n + m);
    Space complexity: O(n);
    Methods used: Hash Set;
*/

#include <iostream>
#include <string>
#include <set>
#include <algorithm>
using namespace std;

int numJewelsInStones(string jewels, string stones) 
{
    set<char> jewel;
    for (int i = 0; i < jewels.size(); i++)
    {
        jewel.insert(jewels[i]);
    }

    int count = 0;
    for (char stone: stones)
    {
        if (jewel.find(stone))
        {
            count++;
        }
    }
    return count;
}