#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            // 如果找到了目标值
            if (nums[i] == target)
            {
                return i;
            }
            // 如果目标值小于当前元素，就返回当前元素的索引
            else if (nums[i] > target)
            {
                return i;
            }
        }
        // 如果遍历完数组都没有找到目标，说明 target 应该插入到数组的末尾
        return nums.size();
    }
};
