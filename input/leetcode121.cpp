#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int x = prices[0]; // 记录当前的最低买入价格（初始值设为第一天的价格）
        int d = prices[0]; // 记录从当前最低买入价 `x` 开始的最高价格
        int ans = 0;       // 记录当前计算出的最大利润

        for (int i = 1; i < prices.size(); i++)
        {
            if (prices[i] <= x) // 如果当前价格比 `x` 还低，意味着找到更低的买入价格
            {
                x = prices[i]; // 更新最低买入价
                d = prices[i]; // 重新开始计算，从这个最低点开始找最高价
            }
            else // 当前价格比 `x` 高，意味着可以有机会卖出赚取利润
            {
                d = max(d, prices[i]); // 更新当前区间内的最高卖出价
                ans = max(ans, d - x); // 计算当前最大利润，并更新 `ans`
            }
        }

        return ans; // 返回最大利润
    }
};
