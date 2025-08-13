#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(std::vector<int>& arr) {
        if (arr.empty()) return 0;

        auto prevEle = arr.begin();
        for (auto it = arr.begin() + 1; it != arr.end();) {
            if (*prevEle == *it) {
                it = arr.erase(it); // erase returns the next valid iterator
            } else {
                prevEle = it; // move prevEle forward
                ++it;         // advance to next element
            }
        }
        int arrSize = arr.size();
        std::cout << arrSize << "\n";
        return arrSize;
    }
};


int main(){
    vector<int> arr = {1,1,2,2,3,3,4,4,5,5};
    Solution A;
    A.removeDuplicates(arr);
    return 0;
}