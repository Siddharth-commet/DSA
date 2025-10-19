#include<iostream>
using namespace std;


bool isSorted(int arr[], int n){
    if(n==0||n==1)return true;
    if(arr[n]<arr[n-1]){return false;};
    if (arr[n]>arr[n-1])
    {   
        return isSorted(arr, n-1);
    }
    
}


int main(){
    int arr[] = {1,2,3,4,9,5,6};
    int arr2[] = {1,2,3,4,7,9};
    int n1= 6;
    int n2 = 5;
    cout<<isSorted(arr,n1);
    cout<<isSorted(arr2,n2);

    

    return 0;
}