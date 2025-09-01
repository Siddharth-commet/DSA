#include<bits/stdc++.h>
using namespace std;
// class Solution {
// public:
//     int maxSubArray(vector<int>& arr) {
//         int sum = 0;
//         int maxSum;
//         vector<int> newVec;
//         for (auto it = arr.begin(); it != arr.end(); it++)
//         {
//             sum = sum + *it;
//         }
//         maxSum = sum;
//         for (auto i = arr.begin(), j = arr.end()-1; i != j;)
//         {
//             sum = sum - min(*i,*j);
//             maxSum = max(maxSum,sum);
//             if(*i<*j){
//                 i++;
//             }
//             if(*j<*i){
//                 j--;
//             }
//             else{
//                 while (&(*i) != &(*j))
//                 {
//                     if(*(i+1)<*(j-1)){
//                         i++;
//                         break;
//                     }
//                     if(*(i+1)>*(j-1)){
//                         j--;
//                         break;
//                     }
//                     else{
//                         i++;
//                         j--;
//                     }
//                 }
                
//             }
//         }
//         cout<<maxSum;
//         return maxSum;
         
//     }
// };
class Solution {
public:
    int maxSubArray(vector<int>& arr) {
        int sum=0;
        int maxi= INT_MIN;
        for(int i = 0; i<arr.size(); i++){
            sum+=arr[i];
            if(sum<0){
                sum=0;
            }
            maxi=max(maxi,sum);
        }
        cout<<maxi;
        return 0;
    };
};

int main(){
    vector<int> arr = {5,4,-1,7,8};
    vector<int> arr2 = {1};
    Solution A;
    A.maxSubArray(arr);
    return 0;
}




















