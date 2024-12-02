#include <bits/stdc++.h>
using namespace std;

bool check(string s);

int main()
{
    string s;
    cin >> s;
    check(s);
    return 0;
}
bool check(string s)
{
    stack<char> p;
    p.push('#');
    int sum1 = 0;
    int sum2 = 0;
    for (int i = 0; i < s.size(); i++)
    {
        char c = s[i];
        if (c != '(' && c != ')')
        {
            sum1 = sum2 = 0;
        }
        else if (c == '(' && s[i + 1] == '-' && s[i + 2] == ':')
        {
            if (p.top() != '(')
                return false;
            else
                p.pop();
                sum1 += 1;
        }
        else if (c == ')' && s[i + 1] == '-' && s[i + 2] == ':')
        {
            if (p.top() != ')')
                return false;
            else
                p.pop();
                sum2 += 1;
        }
        else
            p.push(c);
    }
    return (p.size() == 1);
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

//  :-) num > :-( num     为happy
//  :-) num < :-( num     为sad
//  :-) num = :-( num     为just so so
//  什么都没有为None