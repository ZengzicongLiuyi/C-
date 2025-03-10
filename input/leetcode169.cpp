#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int count = 1;
        int ans = nums[0];
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == ans)
            {
                count += 1;
            }
            else
            {
                count -= 1;
                if (count == 0)
                {
                    ans = nums[i];
                    count = 1;
                }
            }
        }
        return ans;
    }
};