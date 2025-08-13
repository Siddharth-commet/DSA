#include<bits/stdc++.h>
using namespace std;

int reverseArr(int arr[], int n = 0, int i = 0){
    n = (sizeof(arr)/sizeof(arr[0]))-1;


    cout<<i<<endl<<n<<endl;
    int temp = arr[n];
    arr[i] = arr[n-i];
    arr[n-i] = temp;
 
    if (i<((n/2)+(n%2)))
    {
        reverseArr(arr,n,i+=1);
    }

    // while (i)
    // {
    //     /* code */
    // }
    

    return 0;
}

int main(){
    int arr[]= {1,2,3,4,5,6};
    reverseArr(arr);
    cout<<"lkjh";
    return 0;
}