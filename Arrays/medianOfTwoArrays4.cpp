#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double med = (nums1[0]+nums1[sizeof(nums1)/sizeof(nums1[0])]/2 + nums2[0]+nums2[sizeof(nums2)/sizeof(nums2[0])]/2)/2 ;
        return med;
    }
};


int main(){

    return 0;
}