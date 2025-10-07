#include<iostream>
using namespace std;

class Solution {
public:
    double myPow(double x, int n) {
        long BinaryForm=n;
        double ans=1;
        if (n==0)return 1;
        if (x==0)return 0;
        if (x==1)return 1;
        if (n==0)return 0;
        if(x==-1 && n%2==0) return 1;
        
        if(n<0){
            x=1/x;
            BinaryForm= -BinaryForm;
        }
        while (BinaryForm>0)
        {
            if (BinaryForm%2==1)
            {
                ans*=x;
            }
            x*=x;
            BinaryForm/=2;
        }
        cout<<ans;
        return ans;
    }
};

int main(){
    Solution A;
    A.myPow(2,10);
    A.myPow(2,-10);
    return 0;
}