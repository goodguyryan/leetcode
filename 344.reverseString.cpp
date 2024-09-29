/*
    Time Complexity: O(n);
    Space Complexity: O(1);
    Method used: 2 pointer
*/
#include <iostream>
#include <vector>
using namespace std;

void reverseString(vector<char>& s) {
    int left = 0;
    int right = s.size() - 1;

    while (left < right)
    {
        swap(s[left], s[right]);
        left++;
        right--;
    }       
}