#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& arr) {
        int zero=0,one=0,two=0,index=0;
        for (auto it = arr.begin(); it != arr.end(); it++)
        {
            if(*it==0){
                zero++;
            }
            else if (*it==1)
            {
                one++;
            }
            else{
                two++;
            }   
        }
        for (int i = zero; i != 0; i--){arr[index] = 0; index++;}
        for (int i = one; i != 0; i--){arr[index] = 1; index++;}
        for (int i = two; i != 0; i--){arr[index] = 2; index++;}
    }
};

int main(){
    vector<int> arr ={0,1,2,0,1,2,0,1};
    Solution A;
    A.sortColors(arr);

    return 0;
}