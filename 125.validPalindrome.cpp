/*
    Time Complexity: O(n);
    Space Complexity: O(1);
    Method used: two pointers
*/
#include <iostream>
#include <cctype>
#include <string>
using namespace std;

bool isPalindrome(string s) {
    int L = 0;
    int R = s.length() - 1;

    while (L < R)
    {
        while (L<R && !isalnum(s[L]))
        {
            L++;
        }

        while (L<R && !isalnum(s[R]))
        {
            R--;
        }

        if (L<R && tolower(s[L]) != tolower(s[R]))
        {
            return false;
        }

        L++;
        R--;
    }
    return true;
}