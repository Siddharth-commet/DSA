
// timeComplexity
// log2(n);
#include <bits/stdc++.h>
using namespace std;

void merger(vector<int> &arr, vector<int>::iterator low, vector<int>::iterator mid, vector<int>::iterator high)
{
    vector<int> temp;
    vector<int>::iterator right = mid + 1;
    vector<int>::iterator left = low;

    while (left <= mid && right <= high)
    {
        if (*left <= *right)
        {
            temp.push_back(*left);
            left++;
        }
        else
        {
            temp.push_back(*right);
            right++;
        }
    }
    while (left <= mid)
    {
        temp.push_back(*left);
        left++;
    }
    while (right <= high)
    {
        temp.push_back(*right);
        right++;
    }
    auto t = temp.begin();
    for (auto i = low; t != temp.end(); ++i, ++t)
    {
        *i = *t;
    }
}

void mergeSort(vector<int> &arr, vector<int>::iterator low, vector<int>::iterator high)
{
    if (low >= high)
    {
        return;
    }
    vector<int>::iterator mid = low + (high - low) / 2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);
    merger(arr, low, mid, high);

    for (auto i = arr.begin(); i != arr.end(); i++)
    {
        cout << *i << endl;
    }
    cout << "\n";
}

int main()
{
    vector<int> arr = {6, 5, 4, 3, 2, 1};
    int sizeArr = sizeof(arr) / sizeof(arr[0]);
    mergeSort(arr, arr.begin(), arr.end() - 1);
    return 0;
}