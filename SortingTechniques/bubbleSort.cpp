#include<bits/stdc++.h>
using namespace std;

int main(){
    int didSwap=0;
    vector<int> arr = {1,2,3,4,5,6};
    auto it2 = arr.begin();
    for (auto it3 = arr.end(); it3 != arr.begin(); it3--)
    {
        for (auto it = arr.begin(); it != it3 - 1; it++)
        {
            it2=it+1;
            if(*it>*it2){
                swap(*it,*it2);
                didSwap=1;
                }
            
        }
        if(didSwap==0){
            break;
        }
        cout<<"run"<<"\n";
}

for (auto it = arr.begin(); it != arr.end(); it++)
    {
        cout<<*it<<"\n";
    }

    return 0;
}

//Time complexity best case: O(N)
//Time complexity worst/Avg case: O(N^2);