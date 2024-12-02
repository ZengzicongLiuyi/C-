// // 本题为考试多行输入输出规范示例，无需提交，不计分。
// #include <iostream>
// #include <cstdio>

// using namespace std;

// int main()
// {
//     // freopen("1.in","r",stdin);
//     int n, ans = 0;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             int x;
//             scanf("%d", &x);
//             ans += x;
//         }
//     }
//     cout << ans << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n = 0;
//     int k = 0;
//     cin >> n;
//     cin >> k;
//     int result = dfs(n, k);
//     cout << result;
// }
// int dfs(int n, int k)
// {
//     int a[n] = {};
//     int b[n] = {};
//     int sum = 0;
//     int k = 0;
//     cin >> a[n];
//     for (int i = 0; i < n; i++)
//     {
//         if (n = 1 && a[i] > k)
//         {
//             return 0;
//         }
//         if (n > 2 && a[i] <= k)
//         {
//             b[i] = 1;
//             sum += a[i];
//             if (sum > k)
//             {
//                 for (int j = 0; j < n; j++)
//                 {
//                     if (b[j] = 1)
//                     {
//                         k += 1;
//                     }
//                 }
//                 return k;
//             }
//         }
//         else
//         {
//             b[i] = 0;
//         }
//     }
// }

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void check(string s);

int main()
{
    string s;
    int sum1 = 0;
    int sum2 = 0;
    cin >> s;
    stack<char> p;
    p.push('#');
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(' && s[i + 1] == '-' && s[i + 2] == ':')
        {
            if (p.top() != '(')
            {
                return false;
            }
            else
            {
                p.pop();
                sum1 += 1;
            }
        }
        else if (s[i] == ')' && s[i + 1] == '-' && s[i + 2] == ':')
        {
            if (p.top() != ')')
            {
                return false;
            }
            else
            {
                p.pop();
                sum2 += 1;
            }
        }
    }
    if (sum1 == sum2 && sum1 == 0 && sum2 == 0)
    {
        cout << "None";
    }
    else if (sum1 < sum2)
    {
        cout << "Happy";
    }
    else if (sum1 == sum2 && sum1 != 0 && sum2 != 0)
    {
        cout << "Just so so";
    }
    else if (sum1 > sum2)
    {
        cout << "Sad";
    }
}
