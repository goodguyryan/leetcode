/*
    Time complexity: O(n);
    Space complexity: O(1);
    Methods used: Hash map
*/
#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;

int maxNumberOfBalloons(string text) {
    unordered_map<char, int> counter;
    string balloon = "balloon";

    for (char c: text)
    {
        if (balloon.find(c) != string::npos)
        {
            counter[c]++;
        }
    }

    if (counter.find('b') == counter.end() ||
        counter.find('a') == counter.end() ||
        counter.find('l') == counter.end() ||
        counter.find('o') == counter.end() ||
        counter.find('n') == counter.end()) {
            return 0;
        }
    else
    {
        return min({counter['b'], counter['a'], counter['l'] / 2, counter['o'] / 2, counter['n']});
    }
}