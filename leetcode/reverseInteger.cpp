#include<bits/stdc++.h>

class Solution {
    public:
        int reverse(int x) {
            int mul=1;
            int n = x;
            int rev = 0;
            int digits = 0;
            if (n == INT_MAX || n == INT_MIN) return 0;
            digits = n%10;
                if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && digits > 7)) return 0;
                if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && digits < -8)) return 0;
            if (n<0)
            {
                n = n*(-1);
            }
            while (n!=0)
            {
                digits = n%10;
                if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && digits > 7)) return 0;
                if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && digits < -8)) return 0;

                rev = rev*10 + digits; 
                n/=10;

            }
            if (x<0)
            {
                return (-1)*rev;
            }
            return rev;
        }
    };