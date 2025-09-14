#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void setZeroes(vector<vector<int>> &arr)
    {
        vector<pair<int, int>> locations;
        for (int i = 0; i < arr.size(); i++)
        {
            for (int j = 0; j < arr[0].size(); j++)
            {
                if (arr[i][j] == 0)
                {
                    locations.push_back({i, j});
                }
            }
        }
        for (int i = 0; i < locations.size(); i++)
        {
            for (int j = 0; j < arr[0].size(); j++)
            {
                arr[locations[i].first][j] = 0;
            }
            for (int k = 0; k < arr.size(); k++)
            {
                arr[k][locations[i].second]=0;
            }  
        }
    };
};

int main()
{
    vector<vector<int>> arr;
    arr = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
    Solution A;
    A.setZeroes(arr);

    return 0;
}