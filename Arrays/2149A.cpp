#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>positives;
        vector<int>negatives;
        for (auto i = nums.begin(); i != nums.end(); i++)
        {
            if(*i>0){
                positives.push_back(*i);
            }
            else{
                negatives.push_back(*i);
            }
        }
        for (auto i = 0,index=0; i < nums.size(); i++)
        {
            if(i%2==0){
                nums[i]=positives[i/2];
            }
            else{
                nums[i]=negatives[i/2];
            }
        }
        
        
        
    }
};

int main(){
    vector<int> arr = {3,1,-2,-5,2,-4};
    Solution A;
    A.rearrangeArray(arr);
    return 0;
}