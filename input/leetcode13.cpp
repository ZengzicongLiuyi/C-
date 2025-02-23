#include <string>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    int romanToInt(string s)
    {
        // 使用映射罗马数字到整数
        unordered_map<char, int> roman = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}};
        if (s == "IV")
            return 4;
        if (s == "IX")
            return 9;
        if (s == "XL")
            return 40;
        if (s == "XC")
            return 90;
        if (s == "CD")
            return 400;
        if (s == "CM")
            return 900;
        int result = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (i + 1 < s.length() && roman[s[i]] < roman[s[i + 1]])
            {
                result -= roman[s[i]];
            }
            else
            {
                result += roman[s[i]];
            }
        }
        return result;
    }
};