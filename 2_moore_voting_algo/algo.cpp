#include<bits/stdc++.h>
using namespace std;


class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int freq = 0;
        int ans = 0;
        for (int i = 0; i < nums.size(); i++)
        {

            if (freq == 0)
            {
                ans = nums[i];
            }
            if (nums[i] == ans)
            {
                freq++;
            }
            else
            {
                freq--;
            }
        }

        return ans;
    }
};

int main()
{
    
    return 0;
}