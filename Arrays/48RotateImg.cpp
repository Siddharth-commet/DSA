#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void rotate(vector<vector<int>> &matrix)
    {
        int n = matrix.size();
        cout << n << "\n";
        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n / 2; j++)
            {
                swap(matrix[i][j], matrix[i][n - j - 1]);
            }
        }
    }
};

int main()
{
    Solution A;
    vector<vector<int>> mat = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    A.rotate(mat);

    return 0;
}