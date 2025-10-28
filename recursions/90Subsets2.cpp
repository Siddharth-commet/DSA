#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void subsetsfinder(vector<int>& arr, vector<int>& ans, int i, vector<vector<int>>& soln){
        int index;
        if (i==arr.size())
        {
            soln.push_back({ans});
            return;
        }
        ans.push_back(arr[i]);
        subsetsfinder(arr,ans,i+1,soln);
        ans.pop_back();
        index = i+1;
        while (index<arr.size() && arr[i]==arr[index])
        {       
            index++;
        }
        subsetsfinder(arr,ans,index,soln);
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> sol;
        vector<int> ans;
        sort(nums.begin(), nums.end());
        subsetsfinder(nums,ans,0,sol);
        return sol;
    }
};



int main(){
    Solution A;
    vector<int> arr = {1,2,2};
    A.subsetsWithDup(arr);
    vector<vector<int>> arr1 = A.subsetsWithDup(arr);
    for (auto  val: arr1)
    {          
        for (auto i:val)
        {
            cout<<i;
        }
        cout<<endl;
    }
    return 0;
}