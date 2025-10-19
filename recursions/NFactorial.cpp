#include<iostream>
using namespace std;

int factorialFinder(int n){
    if(n==0){
        return 1;
    }
    return n*factorialFinder(n-1);
}

int main(){
    cout<<factorialFinder(1);

    return 0;
}