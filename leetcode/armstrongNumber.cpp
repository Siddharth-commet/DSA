#include<bits/stdc++.h>
class Solution {
    public:
        bool isArmstrong(int n) {
            int digit=0;
            int x=n;
            int num;
            int number;
            while (n!=0)
            {
                n/=10;
                digit+=1;
            }
            int n = x;
            while (n!=0)
            {
                num = n%10;
                number= number+(pow(num,digit));
                n/=10;
            }

            if (number==x)
            {
                return true;
            }
            return false;
            
            


            
        }
    };