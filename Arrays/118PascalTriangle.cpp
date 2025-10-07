#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> rows;
        if(numRows==1){
            return {{1}};
        }
        else if(numRows==2){
            return {{1},{1,1}};
        }
        else{
            for (auto i = 0; i < rows.size(); i++)
            {
                /* code */
            }
            
        }
    }
};

int main(){
    Solution A;
    A.generate(4);

    return 0;
}