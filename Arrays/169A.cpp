#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int majorityElement(vector<int> &arr)
    {
        map<int, int> hash;
        for (auto it = arr.begin(); it != arr.end(); it++)
        {
            hash[*it]++;
        }
        for (auto it : hash)
        {
            if (it.second > (arr.size() / 2))
            {
                cout << it.first;
                return it.first;
            }
        }
    }
};

int main()
{
    vector<int> arr = {3, 2, 3, 2, 6, 2, 3, 3, 3};
    Solution A;
    A.majorityElement(arr);

    return 0;
}