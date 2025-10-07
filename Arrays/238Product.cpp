#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> productExceptSelf1(vector<int> &nums)
    {
        vector<int> temp(nums.size(), 1);
        int product = 1;
        for (auto it = nums.begin(), it2 = temp.begin() + 1; it != nums.end() && it2 != temp.end(); it++, it2++)
        {
            product = product * (*it);
            *it2 = product;
        }

        product = 1;
        for (auto it = nums.end() - 1, it2 = temp.end() - 2; it != nums.begin() && it2 != temp.begin() - 1; it--, it2--)
        {
            product = product * (*it);
            *it2 = (*it2) * product;
        }
        for (auto i = temp.begin(); i != temp.end(); i++)
        {
            cout << *i << endl;
        }
        return temp;
    }
    vector<int> productExceptSelf(vector<int> &nums)
    {
        int temp1,temp2,flag=1,product1=1,product2=1;
        for (auto it1 = nums.begin(),it2=nums.end()-1; it1 != nums.end()-1,it2!=nums.begin()+1; it1++,it2--)
        {
            product1=product1*(*it1);
            product2=product2*(*it2);
            
            if(flag){
                temp1=*it1;
                temp2=*it2;
            }
            
        }
        
    }
};

int main()
{
    Solution A;
    vector<int> nums = {-1, 1, 0, -3, 3};
    A.productExceptSelf(nums);
    return 0;
}