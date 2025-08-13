#include<bits/stdc++.h>

class Solution {
    public:
        bool isPalindrome(int x) {
            int mul=1;
            int n = x;
            int rev = 0;
            int digits = 0;
            if (n == INT_MAX || n == INT_MIN) return false;
            digits = n%10;
            if (n<0)
            {
                n = n*(-1);
            }
            while (n!=0)
            {
                digits = n%10;
                if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && digits > 7)) return false;
                if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && digits < -8)) return false;

                rev = rev*10 + digits; 
                n/=10;

            }
            if (rev==x)
            {
                return true;
            }
        };
    };