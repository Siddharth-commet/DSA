#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int FFinder(int num){
    int a=0,b=1,c;
    for (int i = 0; i < num-1; i++)
    {
        c=b+a;
        a=b;
        b=c;
    }

    cout<<b;
    return 0;
    

}

int main(){
    int num;
    cin>>num;
   

    FFinder(num);

}