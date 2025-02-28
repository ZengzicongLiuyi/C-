#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        int n = digits.size();
        // 从最低位开始遍历
        for (int i = n - 1; i >= 0; i--)
        {
            if (digits[i] < 9)
            {
                digits[i] += 1;
                return digits; // 直接返回
            }
            digits[i] = 0; // 当前位变为 0，继续进位
        }
        digits.insert(digits.begin(), 1);
        return digits;
    }
};