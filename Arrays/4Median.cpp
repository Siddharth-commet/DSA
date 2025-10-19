#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int elements = nums1.size() + nums2.size();
        if(elements%2==0){
            int n1=elements/2;
            int n2 = n1-1;
            int first, second, flag=0;
            for (int i = 0; i <= n1; i++)
            {
                
            }
            
        }
    }
};

int main(){

    Solution A;
    vector<int> arr1={1,2,3,4};
    vector<int> arr2={1,2,3,5};
    A.findMedianSortedArrays(arr1,arr2);


    return 0;
}