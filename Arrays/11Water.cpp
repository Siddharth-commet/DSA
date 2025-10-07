#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int maxVol=0;
        int currVol;
        auto low = height.begin();
        auto high = height.end()-1; 
        while (high-low>0)
        {
            currVol = (high-low)*(min(*high,*low));
            maxVol = max(currVol,maxVol);
            if (*high <= *low)
            {
                high--;
            }
            else{
                low++;
            }
            
        }
        
        cout<<maxVol;
        return maxVol;
    }
};



int main()
{
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    Solution A;
    A.maxArea(height);
    return 0;
}
