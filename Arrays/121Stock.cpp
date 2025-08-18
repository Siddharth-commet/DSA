#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& arr) {
    int mini = arr[0];
    int profit = 0;
    int maxProfit = 0;
    for (auto it = arr.begin()+1; it != arr.end(); it++)
    {
        profit = *it - mini;
        mini  = min(mini, *it);
        maxProfit = max(maxProfit,profit);
    }
    cout<<maxProfit;
    return maxProfit;
    }
};

int main (){
    Solution A;
    vector<int> arr = {7,1,5,3,6,4};
    A.maxProfit(arr);
    return 0;
}