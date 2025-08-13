//find the largest Element in Array.

#include<bits/stdc++.h>
using namespace std;



int main(){
    int MaxElement;
    vector<int> arr = {6,5,4,6,3,2,1,1,1,6,6,6,3,3};
    MaxElement = arr[0];
    for (auto it = arr.begin(); it!=arr.end(); it++)
    {
        if(*it>MaxElement){
            MaxElement = *it;
        }
    }
    
    cout<<MaxElement<<'\n';
    return 0;
}