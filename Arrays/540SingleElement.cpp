#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int singleNonDuplicate(vector<int> &arr)
    {
        int low = 0;
        int high = arr.size()-1;
        int mid = (low + high) / 2;
        
        return 0;
    }
};

int main()
{
    Solution A;
    vector<int> arr = {3, 3, 7, 7, 10, 11, 11};
    A.singleNonDuplicate(arr);

    return 0;
}