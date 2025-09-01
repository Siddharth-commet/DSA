#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& arr) {
        int val;
        int count = 0;

        for (auto it = arr.begin(); it != arr.end(); it++) 
        {
            if (count == 0) {
                val = *it;
                count = 1;   
            }
            else if (val == *it) {
                count++;
            }
            else {
                count--;
            }
        }

        cout << val;
        return val;
    }
};


int main(){
    vector<int> arr = {1,2,1,1,1,2,2,3,3,3,3,3,3,3,3,3,3};
    Solution A;
    A.majorityElement(arr);

    return 0;
}