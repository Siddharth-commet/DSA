#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& arr) {
        map<int,int> hash;
        if (arr.empty()) return 0;
        for (auto it = arr.begin(); it != arr.end(); it++)
        {
            hash[*it]++;
        }
        int longest = 1;
        int currentStreak = 1;

        auto it = hash.begin();
        auto prev = it;
        it++;

        for (; it != hash.end(); it++) {
            if (it->first == prev->first + 1) {
                currentStreak++;
            } else {
                currentStreak = 1;
            }
            longest = max(longest, currentStreak);
            prev = it;
        }
        cout<<longest;
        return longest;
    }
};


int main(){
    vector<int> arr = {};
    Solution A;
    A.longestConsecutive(arr);

    return 0;
}