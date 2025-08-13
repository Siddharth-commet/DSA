#include<iostream>
#include<bits/stdc++.h>
#include<utility>
#include <vector>
using namespace std;
class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            vector<int,2> Ind={0,0};
            bool stop= false;
            sort(nums.begin(),nums.end());
            for (vector<int>::iterator it = nums.begin(); it != nums.end() && !stop; it++)
            {
                for (vector<int>::iterator itd = nums.begin(); itd != nums.end(); itd++)
                {
                    if(it==itd){
                        continue;
                    }
                    else if (*(it)+*(itd)==target)
                    {
                        Ind[0] = (it-nums.begin());
                        Ind[1] = (itd-nums.begin());
                        stop=true;
                        break;
                    }
                    
                }
            }
            return Ind;
            
        }
    };

int main(){
    return 0;
}