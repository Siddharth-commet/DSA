#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:
    void subsetsfinder(vector<int>& arr, vector<int>& ans, int i, vector<vector<int>>& soln){
        if (i==arr.size())
        {
            soln.push_back({ans});
            return;
        }
        ans.push_back(arr[i]);
        subsetsfinder(arr,ans,i+1,soln);

        ans.pop_back();
        subsetsfinder(arr,ans,i+1,soln);
        
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> sol;
        vector<int> ans;
        subsetsfinder(nums,ans,0,sol);
        return sol;
    }
};

int main(){
    vector<int> nums = {1,2,3,4};
    Solution A;
    A.subsets(nums);
    vector<vector<int>> arr = A.subsets(nums);
    for (auto  val: arr)
    {          
        for (auto i:val)
        {
            cout<<i;
        }
        cout<<endl;
    }
    

    return 0;
}