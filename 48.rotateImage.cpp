/*
    Time Complexity: O(n^2);
    Space Complexity: O(1);
    Methods used: To rotate an image, first take the transpose of the matrix. 
    Afterwards, reflect the matrix about the y-axis.
*/

#include <iostream>
#include <vector>
using namespace std;

void rotate(vector<vector<int>>& matrix) 
{
    int dimension = matrix.size();

    for (int i = 0; i < dimension; i++)
    {
        for (int j = i+1; j < dimension; j++)
        {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }

    for (int i = 0; i < dimension; i++)
    {
        for (int j = 0; j < dimension/2; j++)
        {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[i][dimension-j-1];
            matrix[i][dimension-j-1] = temp;
        }
    }
}