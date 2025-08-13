//find the Second largest Element in Array.

#include<bits/stdc++.h>
using namespace std;



int main(){
    int MaxElement;
    int secondMaxEle;
    vector<int> arr = {2,6,15,4,3,29,29,1};
    MaxElement = arr[0];
    secondMaxEle = INT_MAX;
    for (auto it = arr.begin(); it!=arr.end(); it++)
    {
        if(*it>MaxElement){
            secondMaxEle = MaxElement;
            MaxElement = *it;
        }

        else if(*it>secondMaxEle && *it!=MaxElement){
            secondMaxEle = *it;
        }
    }
    cout<<MaxElement<<'\n';
    cout<<secondMaxEle<<'\n';
    return 0;
}