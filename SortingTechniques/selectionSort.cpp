#include<bits/stdc++.h>

using namespace std;
int main(){

    vector<int> arr = {10,6,52,46,83,33,33,48};
    int temp;
    auto prevMinIndex=arr.begin();
    auto curMin = *arr.begin() ,prevMin = *arr.begin();
    for (auto it = arr.begin(); it!=arr.end(); it++)
    {
        prevMin = *it;
        auto prevMinIndex = it;
        for (auto it2 = it; it2!=arr.end(); it2++)
        {
            curMin = *it2;
            if(curMin < prevMin ){
                prevMin = curMin;
                prevMinIndex = it2; 
            }
        }
        temp=*it;
        *it = prevMin;
        *prevMinIndex = temp; 
    }

    cout<<"Sorting done";

    for (auto it = arr.begin(); it != arr.end(); it++)
    {
        cout<<*it<<"\n";
    }
    
    


    return 0;
}