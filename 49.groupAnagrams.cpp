/*
    Time Complexity: O(m*nlogn);
    Space Complexity: O(m*n)
*/

#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs) 
{
    map<string, vector<string>> mp;
    
    for(auto x: strs){
        string word = x;
        sort(word.begin(), word.end());
        mp[word].push_back(x);
    }
    
    vector<vector<string>> ans;
    for(auto x: mp){
        ans.push_back(x.second);
    }
    return ans;
}
