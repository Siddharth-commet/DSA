#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>> &grid)
    {
        map<int, int> power;
        vector<int> ans = {0, 0};

        for (auto it = grid.begin(); it != grid.end(); it++)
        {
            for (auto it2 = it[0].begin(); it2 != it[0].end(); it2++)
            {
                power[*it2]++;
            }
        }

        ans[0] = power.begin()->first;
        ans[1] = (power.rbegin())->first;
    }
};

int main()
{
    Solution A;
    vector<vector<int>> grid = {{1, 3}, {2, 2}};
    A.findMissingAndRepeatedValues(grid);
    return 0;
}