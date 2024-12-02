#include <iostream>
// 添加using namespace std来简化标准库元素的使用（也可以选择不用，每次写std::前缀）
using namespace std;

// 函数声明
void func(int);

static int count = 10; /* 全局变量 */

int main()
{
    while (count--)
    { // 调整代码风格，让大括号紧跟语句
        func(count);
    }
    return 0;
}

// 函数定义
void func(int curCount) // 修改函数参数，传递count的副本，避免并发访问隐患
{
    static int i = 5; // 局部静态变量
    i++;
    cout << "变量 i 为 " << i;
    cout << ", 变量 curCount 为 " << curCount << endl;
}