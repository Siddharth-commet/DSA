#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix)
    {
        
        int rowMax = matrix.size();
        int colMax = matrix[0].size();
        int sizee = rowMax*colMax;
        vector<int> arr;
        int rowMin = 0;
        int colMin = 0;
        while (rowMin<rowMax  && colMin < colMax)
        {
            for (int j = colMin; j < colMax; j++)
            {
                arr.push_back(matrix[rowMin][j]);
            }
            rowMin++;
            for (int i = rowMin; i < rowMax; i++)
            {
                arr.push_back(matrix[i][colMax-1]);
            }
            colMax--;
            for (int j = colMax-1; j >= colMin && rowMin < rowMax; j--)
            {
                arr.push_back(matrix[rowMax-1][j]);
            }
            rowMax--;
            for (int i = rowMax-1; i >= rowMin && colMin < colMax; i--)
            {
                arr.push_back(matrix[i][colMin]);
            }
            colMin++;
        }
        // for (auto it = arr.begin(); it != arr.end(); it++)
        // {
        //     cout<<*it<<" ";
        // }
        return arr;
    }
};

int main()
{
    Solution A;
    vector<vector<int>> arr = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    //cout << arr.size();
    A.spiralOrder(arr);
    return 0;
}