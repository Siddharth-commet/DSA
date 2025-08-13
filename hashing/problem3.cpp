#include<bits/stdc++.h>
using namespace std;
// array can be of [1e7] = 10^7 globally
// map<int, int> mpp ===> key,value
// In unordered_map===> time; avg&best = O(1); worst = O(n)

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    unordered_map<char,int>mpp;
    int curMaxCount=0;
    int prevMaxCount=0;
    for(int i = 0 ; i<256 ; i++){
        mpp[i]=0;
    }

    for (int i = 0 ; i < s.size() ; i++)
    {
        for (int  j = i+1; j < s.size(); j++)
        {
            if(s.size()==1){
                return 1;
            }
            if(mpp[s[j]]<1){
            mpp[s[j]]++;
            curMaxCount++;
            if(curMaxCount>prevMaxCount){
                prevMaxCount=curMaxCount;
            }
        }
        else if(mpp[s[j]]>=1){
            if(prevMaxCount<=curMaxCount){
                prevMaxCount=curMaxCount;
                curMaxCount = 0;
                mpp.clear();
                j--;
                
            }
        }
        }
        
        

    }
    return prevMaxCount;
    

    };
};
int main(){
    // array can be of [1e6] = 10^6 inside main.
    return 0;
}