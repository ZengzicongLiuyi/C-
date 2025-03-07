#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            bool isSingle = true; // 假设当前 nums[i] 只出现一次
            for (int j = 0; j < n; j++)
            {
                if (i != j && nums[i] == nums[j])
                { // 如果找到相同的元素
                    isSingle = false;
                    break; // 发现 nums[i] 有重复的，退出循环
                }
            }
            if (isSingle)
                return nums[i]; // 如果它仍然是单个的，直接返回
        }
        return -1;
    }
};