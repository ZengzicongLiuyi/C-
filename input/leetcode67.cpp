#include <bits/stdc++.h>
using namespace std;
#include <iostream>
using namespace std;

class Solution
{
public:
    string addBinary(string a, string b)
    {
        string result = "";
        int carry = 0; // 进位
        int i = a.length() - 1, j = b.length() - 1;

        while (i >= 0 || j >= 0 || carry)
        {
            int sum = carry;
            if (i >= 0)
                sum += a[i--] - '0'; // 转换字符为数字
            if (j >= 0)
                sum += b[j--] - '0';

            result = char(sum % 2 + '0') + result; // 计算当前位，并拼接到结果字符串前
            carry = sum / 2;                       // 计算进位
        }

        return result;
    }
};