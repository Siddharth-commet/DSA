#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& arr) {
        for (auto i = arr.end()-1; i != arr.begin(); i--)
        {
            for (auto j = arr.end()-1; j != arr.begin()-1; j--)
            {
                if(*j==0 && j!= arr.end()-1){
                    swap(*j,*(j+1));
                }
            }
        }
    }
};


int main(){

    return 0;
}