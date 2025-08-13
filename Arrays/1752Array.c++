#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool check(vector<int>& arr) {
        int Minelement = arr[0];
        int previousEle = arr[0];
        int flag = 0;
        for (auto it = arr.begin()+1,i=arr.begin(); it != arr.end(); it++,i++)
        {
            if(*i>*it && flag==0){
                //cout<<"entered Inside Loop";
                flag=1;
                for (auto it2 = it+1,j=it; it2 != arr.end(); it2++,j++){
                    if(*j>*it2){
                        cout<<"False";
                        return false;
                    }
                }
                auto enVal = arr.end()-1;
                auto beVal = arr.begin();
                if(*enVal>*beVal){
                    cout<<"False";
                    return false;
                }

            }
        }
        cout<<"True";
        return true;
        
    }
};

int main(){
    vector<int> arr= {8,5,4,5,1,4,5,2,2};
    vector<int> arr2= {3,4,5,1,2};
    vector<int> arr3 = {1,3,2};
    Solution A;
    A.check(arr3);
    return 0;
}