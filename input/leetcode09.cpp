#include <stack>
using namespace std;

class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x < 0)
        {
            return false;
        }
        // 定义了一个栈容器名叫s
        stack<int> s;
        int temp = x;
        // 入栈
        while (temp > 0)
        {
            s.push(temp % 10); // 取出最后一位(取余数)
            temp /= 10;        // 去掉最后一位
        }
        temp = x;
        while (!s.empty())
        {
            if (s.top() != temp % 10)
            { // top栈顶元素，与当前数最后一位相比
                return false;
            }
            s.pop();    // 出栈
            temp /= 10; // 去掉最后一位
        }
        return true;
    }
};