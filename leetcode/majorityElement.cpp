#include<iostream>
#include<bits/stdc++.h>
#include<utility>
#include <vector>
using namespace std;
class Solution {
    public:
        int majorityElement(vector<int>& nums) {
            int majElem,count;

            for (vector<int>::iterator it = nums.begin(); it!=nums.end();it++)
            {
                for (vector<int>::iterator itd = nums.begin(); itd!=nums.end();itd++)
                {
                    if(it==itd){
                        continue;
                    }
                    if(*(it)==*(itd)){
                        count++;
                        if(count>=(nums.size())/2){
                            majElem==*(it);
                            break;
                        }
                    }
                }
                
            }
            return majElem;
            
            
            
        }
    };

int main(){
    int i;
    cout<<"enter length";
    cin>>i;
    vector<int> nums;
    for (int j = 0; j < i; j++)
    {
        cin>>nums[j];
    }
    

    return 0;
}