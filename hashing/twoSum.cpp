#include <iostream>
#include <vector>
#include <algorithm>

#include<stdio.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (auto it = nums.begin(); it!= nums.end(); it++)
        {
            for (auto it2 = nums.begin()+1; it2!=nums.end(); it2++)
            {
                if(*it + *it2 == target){
                    vector<int> finalVect = {it,it2} ;
                    return finalVect;
                }
            }
            
        }
        
    }
};

int main(){
    
    return 0;
}