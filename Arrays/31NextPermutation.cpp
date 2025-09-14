#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& arr) {
        int temp;
        int justGreater=*(arr.end()-1);
        for (auto it = arr.end()-2; it != arr.begin(); it--)
        {
            for(auto it2 = it+1; it2!= arr.end();it2++){
                if(*it2>*it){
                    justGreater=*it2;
                    temp = *it;
                }
                justGreater=min(justGreater,*it2);

            }
        }
        
    }
};

int main(){
    Solution A;
    vector arr = {1,2,3};
    A.nextPermutation(arr);
    return 0;
}