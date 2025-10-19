#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int peakIndexInMountainArray(vector<int> &arr)
    {
        int low = 0;
        int high = arr.size();
        int mid = (low + high) / 2;
        while (low < high)
        {
            if (arr[mid] > arr[mid + 1] && arr[mid] > arr[mid - 1])
            {
                cout << "index: " << mid << "value: " << arr[mid] << endl;
                return mid;
            };
            if (arr[mid] > arr[mid - 1] && arr[mid] < arr[mid + 1])
            {
                low = mid;
                mid = (low + mid) / 2;
            }
            else if (arr[mid] < arr[mid - 1] && arr[mid] > arr[mid + 1])
            {
                high = mid;
                mid = (low + mid) / 2;
            }
        }
    }
};

int main()
{
    vector<int> arr = {0, 2, 1, 0};
    Solution A;
    A.peakIndexInMountainArray(arr);

    return 0;
}