#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
int x=0;
    int singleNumber(vector<int>& arr) {
        for (auto it = arr.begin(); it != arr.end(); it++)
        {
            x=x^*it;
        }
        cout<<x;
        return x;
        
    };
};

int main(){
    vector<int> arr = {};
    Solution A;
    A.singleNumber(arr);
    return 0;
}