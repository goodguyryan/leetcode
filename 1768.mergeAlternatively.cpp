/*
    Time Complexity: O(a + b);
    Space Complexity: O(a + b);
    Methods used: Two-pointer, String;
*/

#include <iostream>
#include <string>
using namespace std;

string mergeAlternately(string word1, string word2) {
        int length1 = word1.size();
        int length2 = word2.size();
        int count1 = 0;
        int count2 = 0;

        string answer = "";

        int current_word = 1;
        while (count1 < length1 && count2 < length2)
        {
            if (current_word == 1)
            {
                answer = answer + word1[count1];
                count1++;
                current_word = 2;
            }
            else
            {
                answer = answer + word2[count2];
                count2++;
                current_word = 1;
            }
        }

        while (count1 < length1)
        {
            answer = answer + word1[count1];
            count1++;
        }

        while(count2 < length2)
        {
            answer = answer + word2[count2];
            count2++;
        }
        return answer;
    }
