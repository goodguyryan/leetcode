/*
    Space Complexity: O(m*n);
    Time Complexity: O(1);
    Method used: Array, Matrix;
*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix)
{
    int left = 0;
    int right = matrix[0].size();
    int top = 0;
    int bottom = matrix.size();
    vector<int> result;

    while (left < right && top < bottom)
    {               
        for (int i = left; i < right; i++)
        {
            result.push_back(matrix[top][i]);
        }
        top++;
        for (int i = top; i < bottom; i++)
        {
            result.push_back(matrix[i][right - 1]);
        }
        right--;

        if (left >= right || top >= bottom)
        {
            break;
        }

        for (int i = right-1; i > left-1; i--)
        {
            result.push_back(matrix[bottom-1][i]);
        }
        bottom--;
        for (int i = bottom-1; i > top-1; i--)
        {
            result.push_back(matrix[i][left]);
        }
        left++;
    }
    return result;
}