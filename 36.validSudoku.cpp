/*
    Time Complexity: O(1); -> Because it is always a guranteed 9x9 box
    Space Complexity: O(1);
    Methods used: Hash Set;
*/
#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

bool isValidSudoku(vector<vector<char>>& board) {
    //Check Row
    for (int i = 0; i < 9; i++)
    {
        unordered_set<char> row;
        for (int j = 0; j < 9; j++)
        {
            char item = board[i][j];
            if (item != '.' && !row.insert(item).second)
            {
                return false;
            }
        }
    }

    //Check Column
    for (int i = 0; i < 9; i++)
    {
        unordered_set<char> column;
        for (int j = 0; j < 9; j++)
        {
            char item = board[j][i];
            if (item != '.' && !column.insert(item).second)
            {
                return false;
            }
        }
    } 

    //Check Box
    vector<vector<int>> starts = {{0, 0}, {0, 3}, {0, 6},
                                    {3, 0}, {3, 3}, {3, 6},
                                    {6, 0}, {6, 3}, {6, 6}};
    for (auto& start: starts)
    {
        unordered_set<char> box;
        for (int row = start[0]; row < start[0] + 3; row++)
        {
            for (int column = start[1]; column < start[1] + 3; column++)
            {
                char item = board[row][column];
                if (item != '.' && !box.insert(item).second)
                {
                    return false;
                }
            }
        }
    }
    return true;
}
