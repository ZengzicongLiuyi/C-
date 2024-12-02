# 队列
![](https://cdn.nlark.com/yuque/0/2024/png/43034535/1732524465489-f4bdd1bd-9eda-4be2-b41a-473913e246cb.png)

# 栈
从栈顶删除和添加元素

## 常见操作：
1. 判断栈是否为空
2. 查询栈的大小
3. 访问栈顶元素
4. 栈顶加入元素
5. 删除栈顶元素

## 基本用法
![](https://cdn.nlark.com/yuque/0/2024/png/43034535/1732524762474-0a7da1e4-3c2c-494d-856c-9ae82bb6f1f2.png)

说明：栈和队列一样，没有clear之类的函数，如果想清空一个栈，需要循环调用出栈函数。

## 栈的实例介绍
![](https://cdn.nlark.com/yuque/0/2024/png/43034535/1732525232949-10aa0f46-72bc-4cbc-b49e-662e06b2e726.png)

![](https://cdn.nlark.com/yuque/0/2024/png/43034535/1732525281262-6059be82-5d42-4854-b572-81ecf00b0368.png)

# 符号匹配
![](https://cdn.nlark.com/yuque/0/2024/png/43034535/1732525435109-e762e6ad-d260-4e56-a620-bc4f115ddaf8.png)

```cpp
#include <bits/stdc++.h>
using namespace std;

// 函数check用于检查输入的字符串s
bool check(string s);

int main()
{
    string s;
    // 循环读取输入，直到输入结束
    while (cin >> s)
        {
            // 如果check函数返回true，输出"yes"
            if (check(s))
                cout << "yes" << endl;
                // 如果check函数返回false，输出"no"
            else
                cout << "no" << endl;
        }
    return 0;
}

// 函数check的实现
bool check(string s)
{
    stack<char> p;
    // 首先将'#'压入栈，作为"哨兵"，防止栈为空时进行非法操作
    p.push('#');
    for (int i = 0; i < s.size(); i++)
        {
            char c = s[i];
            // 如果字符是'('，将其压入栈
            if (c == '(')
            {
                if (p.top()!= '(')
                    return false;
                else
                    p.pop();
            }
                // 如果字符是')'，进行相应操作
            else if (c == ')')
            {
                if (p.top()!= '(')
                    return false;
                else
                    p.pop();
            }
                // 如果字符不是括号，将其压入栈
            else
                p.push(c);
        }
    // 检查栈中是否只剩下"哨兵"，如果是，返回true，表示括号匹配正确
    return (p.size() == 1);
}
```

# String类
## String对象的声明
string str；

string str1 = “ qwertyui”;

## 求String对象的长度
string strTest = “test”;

strTest.length();    //结果为4

strTest.size();       //结果为4

## String对象的连接
可以使用+和+=运算符对string对象执行字符串的连接操作，（还有append成员函数实现字符串连接）

## String对象的比较
可以用<、 <=、 ==、 !=、 >=、 >运算符比较string对象，（还有compare成员函数用于比较字符串）

## 求String对象的子串：
substr成员函数可以用于求子串（n,m）；

调用时，如果省略n和m超过了字符串的长度，则求出来的子串就是从下标n开始一直到字符串结束的部分。

![](https://cdn.nlark.com/yuque/0/2024/png/43034535/1732526792453-f42c8e6c-a937-4d46-bb91-7faa48ca9f70.png)

## 插入字符串：
insert成员函数可以在string对象中插入另一个字符串，返回值为对象自身的引用。

![](https://cdn.nlark.com/yuque/0/2024/png/43034535/1732527293641-07835c44-50eb-4bb3-a1af-e59ce4d3deec.png)

## 删除子串
erase成员函数可以删除string对象中的子串，返回值为对象自身的引用。

![](https://cdn.nlark.com/yuque/0/2024/png/43034535/1732527399762-92f6a6e6-1f79-466f-a829-3580f0be10d0.png)

## 交换两个string对象的内容
swap成员函数可以交换两个string对象的内容：

![](https://cdn.nlark.com/yuque/0/2024/png/43034535/1732527622676-1e68cfb9-da33-4979-b506-5c568d7c06e6.png)

## 字符串的查找操作
![](https://cdn.nlark.com/yuque/0/2024/png/43034535/1732527667462-75c1a937-b7ab-44e1-adc6-dfea94473f99.png)

## 用STL算法操作string对象
![](https://cdn.nlark.com/yuque/0/2024/png/43034535/1732527782158-af317220-d01a-45aa-b3bf-9271895e0249.png)

end为最后一个字符的下一个位置

next_permutation    求这个串的下一个全排列

reverse    翻转操作

# Vector（向量/动态数组）的应用
![](https://cdn.nlark.com/yuque/0/2024/png/43034535/1732528061859-aeccf153-8d3f-44a3-afd2-831efd2e96c6.png)

## STL中vector的基本用法
![](https://cdn.nlark.com/yuque/0/2024/png/43034535/1732528418893-ae8e5606-a32a-42b4-a673-15ae2cf07a8a.png)

## STL中vector的经典应用——邻接表
![](https://cdn.nlark.com/yuque/0/2024/png/43034535/1732532396031-2a504134-2ff2-4d29-bdd1-29f03913233c.png)

## STL中的迭代器
迭代器：遍历容器中数据的对象。对存储于容器中的数据进行处理时，迭代器能按预先定义的顺序从一个成员移向另一个成员。

也就是说，通过迭代器可以在不了解容器内部原理的情况下遍历容器。

总之，迭代器的作用就是提供一个遍历容器内部所有元素的接口，内部有一个与容器相关联的指针，然后重载各种运算操作来实现元素的遍历。

![](https://cdn.nlark.com/yuque/0/2024/png/43034535/1732533015560-53b07f15-7c6f-42db-93da-2fff73aaf758.png)

# set（集合）
![](https://cdn.nlark.com/yuque/0/2024/png/43034535/1732533838664-56cea6eb-be8e-4bd6-a9a5-fbc80e4effc3.png)

## STL中set的基本用法
![](https://cdn.nlark.com/yuque/0/2024/png/43034535/1732533950741-0968d7c7-7720-4430-a41c-75815e3ddaa9.png)

**set最主要的用途：自动去重并按升序排序；**

**set只能通过迭代器（iterator）访问**

![](https://cdn.nlark.com/yuque/0/2024/png/43034535/1732534379124-d47a1948-4aae-4830-b9d5-20a75818e5a3.png)

![](https://cdn.nlark.com/yuque/0/2024/png/43034535/1732534513917-2175b2ad-00c2-487c-83b6-a21f54dd45e4.png)

# map
## STL中的map（映射）
+ map是一个键值对（key/value）容器，对于迭代器来说，可以修改value，而不能修改key。map会根据key自动排序
+ map类型通常可理解为关联数组：可使用键作为下标来获取一个值。关联的本质在于：元素的值与某个特定的键相关联，而并非通过元素在数组中的位置来获取。
+ 特别说明：key不一定就是int类型！只要是——重载了“<”操作符的类型均可！

## STL中map的基本用法
![](https://cdn.nlark.com/yuque/0/2024/png/43034535/1732534963715-a594a5da-443b-4119-bac5-b36d314082ff.png)

## STL中map的元素插入和遍历（1）
![](https://cdn.nlark.com/yuque/0/2024/png/43034535/1732535063056-7a1300c5-e81e-4c2a-a0e2-dfcbfbb32b2c.png)

    - int作为key，而string作为值。
    - first就是key，second就是value。

## 例子2（转义，翻译）
![](https://cdn.nlark.com/yuque/0/2024/png/43034535/1732535422814-9541252a-89b5-4c59-a283-f9578caad688.png)

![](https://cdn.nlark.com/yuque/0/2024/png/43034535/1732535523367-d54d0418-5bb5-4c86-b2f9-5bdda13fbf0a.png)

# STL中的算法（next_permutation）
![](https://cdn.nlark.com/yuque/0/2024/png/43034535/1732535767356-4f765628-c36b-4696-816a-0c7dbcaf6875.png)

# STL中的算法（prev——permutation）
![](https://cdn.nlark.com/yuque/0/2024/png/43034535/1732535824311-b60eaf3f-a9d3-4397-adbe-b8447de0af39.png)

## 例子3
![](https://cdn.nlark.com/yuque/0/2024/png/43034535/1732535852195-2496851d-eab6-4b7f-9cad-75caad7fd1f0.png)

```cpp
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int N, M;
    std::cin >> N >> M;

    // 创建一个包含1到N的向量
    std::vector<int> nums;
    for (int i = 1; i <= N; ++i) {
        nums.push_back(i);
    }

    // 使用next_permutation函数M - 1次
    for (int i = 0; i < M - 1; ++i) {
        std::next_permutation(nums.begin(), nums.end());
    }

    // 输出结果
    for (int num : nums) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
```



































































































