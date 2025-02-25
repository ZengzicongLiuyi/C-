#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> stk; // 只使用一个栈
        for (char ch : s)
        {
            if (ch == '(' || ch == '{' || ch == '[')
            {
                stk.push(ch); // 左括号入栈
            }
            else
            {
                if (stk.empty())
                    return false; // 栈为空，右括号多了
                char top = stk.top();
                if ((ch == ')' && top == '(') ||
                    (ch == '}' && top == '{') ||
                    (ch == ']' && top == '['))
                {
                    stk.pop(); // 匹配成功，出栈
                }
                else
                {
                    return false; // 括号不匹配
                }
            }
        }
        return stk.empty(); // 如果栈为空，说明全部匹配成功
    }
};