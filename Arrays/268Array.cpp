#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int missingNumber(vector<int>& arr) {
        int arrSize = arr.size();
        int sum = (arrSize)*(arrSize+1)/2;
        for (auto it = arr.begin(); it != arr.end(); it++)
        {
            sum = sum - *it;
        }
        
        cout<<sum;
        return sum;
    }
};

int main(){
    vector<int> arr = {3,0,1};
    Solution A;
    A.missingNumber(arr);
    return 0;
}