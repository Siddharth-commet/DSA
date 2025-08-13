#include<bits/stdc++.h>
using namespace std;// namespace std;
int printer(int n,int sum=1){
    
    if (n<1)
    {
        cout<<sum;
        return sum;
    }
    cout<<sum<<endl;
    printer(n-1,sum*n);
}

int main(){
    int num;
    cout<<"enter number: ";
    cin>>num;

    cout<<"sum is: "<<printer(num);
    return 0;
}