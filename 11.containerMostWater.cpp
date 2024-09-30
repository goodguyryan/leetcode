#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int maxArea(vector<int>& height) 
{
    int L = 0;
    int R = height.size() - 1;
    int maxArea = -1;

    while (L < R)
    {
        int width = R - L;
        int maxheight = min(height[L], height[R]);
        int area = width*maxheight;
        maxArea = max(maxArea, area);

        if (height[L] < height[R])
        {
            L++;
        }
        else
        {
            R--;
        }
    }     
    return maxArea;
}