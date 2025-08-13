#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void rotate(vector<int>& arr, int k) {
        vector<int> temp1;
        int index = 0;
        while (k>arr.size())
        {
            k = k%arr.size();
        }
        
        if(k<=arr.size()){
            for (auto i = arr.end()-1; i > arr.end()-1-k; i--)
        {
            temp1.push_back(*i);
        }
        for (auto i = arr.begin(); i < arr.end()-k; i++)
        {
            temp1.push_back(*i);
        }
        for (auto i = temp1.begin(); i != temp1.end(); i++)
        {
            arr[index] = *i; 
        }
        }
        
    }
};

int main(){

    return 0;
}