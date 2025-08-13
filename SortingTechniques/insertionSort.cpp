#include<bits/stdc++.h>
using namespace std;

void insertion_sort(vector<int>arr){
    for (auto it = arr.begin(); it != arr.end(); it++)
    {
        auto it2 = it;
        while (it2>arr.begin() && *(it2-1)>*(it2))
        {
            swap(*(it2-1),*(it2));
            it2--;
        }      
    }
    for (auto i = arr.begin(); i != arr.end(); i++)
    {
        cout<<*i<<"\n";
    }
    
}
//TIME complexity 
//best =
//worst =
//avg =

int main(){
    vector<int> arr = {10,6,52,46,83,33,33,48};
    // for (auto  it = arr.begin()+1; it != arr.end(); it++)
    // {
    //     for (auto it2 = arr.begin(); it2 != it; it2++)
    //     {
    //         if(*it2>*(it2+1)){
    //             swap(*it2,*(it2+1));
    //             it2=arr.begin();
    //         }
    //     }
        
    // }
    for (auto i = arr.begin(); i != arr.end(); i++)
    {
        cout<<*i<<"\n";
    }
    cout<<"\n";
    cout<<"\n";
    cout<<"\n";
    insertion_sort(arr);
    
    return 0;
}