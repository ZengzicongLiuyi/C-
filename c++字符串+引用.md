# C++ 字符串
_<font style="color:rgb(51, 51, 51);">C++ 提供了以下两种类型的字符串表示形式：</font>_

+ <font style="color:rgb(51, 51, 51);">C 风格字符串</font>
+ <font style="color:rgb(51, 51, 51);">C++ 引入的 string 类类型</font>

## <font style="color:rgb(51, 51, 51);">C 风格字符串</font>
<font style="color:rgb(51, 51, 51);">C 风格的字符串起源于 C 语言，并在 C++ 中继续得到支持。字符串实际上是使用</font><font style="color:rgb(51, 51, 51);"> </font>**<font style="color:rgb(51, 51, 51);">null</font>**<font style="color:rgb(51, 51, 51);"> </font><font style="color:rgb(51, 51, 51);">字符</font><font style="color:rgb(51, 51, 51);"> </font>**<font style="color:rgb(51, 51, 51);background-color:rgb(236, 234, 230);">\0</font>**<font style="color:rgb(51, 51, 51);"> </font><font style="color:rgb(51, 51, 51);">终止的一维字符数组。因此，一个以 null 结尾的字符串，包含了组成字符串的字符。</font>

<font style="color:rgb(51, 51, 51);">下面的声明和初始化创建了一个</font><font style="color:rgb(51, 51, 51);"> </font>**<font style="color:rgb(51, 51, 51);">RUNOOB</font>**<font style="color:rgb(51, 51, 51);"> </font><font style="color:rgb(51, 51, 51);">字符串。由于在数组的末尾存储了空字符，所以字符数组的大小比单词</font><font style="color:rgb(51, 51, 51);"> </font>**<font style="color:rgb(51, 51, 51);">RUNOOB</font>**<font style="color:rgb(51, 51, 51);"> </font><font style="color:rgb(51, 51, 51);">的字符数多一个。</font>

```cpp
char site[7] = {'R', 'U', 'N', 'O', 'O', 'B', '\0'};
```

<font style="color:rgb(51, 51, 51);">依据数组初始化规则，您可以把上面的语句写成以下语句：</font>

```cpp
char site[] = "RUNOOB";
```

<font style="color:rgb(51, 51, 51);">以下是 C/C++ 中定义的字符串的内存表示：</font>

![](https://cdn.nlark.com/yuque/0/2024/png/43034535/1732869798587-1f1e6714-0f20-4b21-9439-7ac3742fde2e.png)

<font style="color:rgb(51, 51, 51);">其实，您不需要把</font><font style="color:rgb(51, 51, 51);"> </font>**<font style="color:rgb(51, 51, 51);">null</font>**<font style="color:rgb(51, 51, 51);"> </font><font style="color:rgb(51, 51, 51);">字符放在字符串常量的末尾。C++ 编译器会在初始化数组时，自动把</font><font style="color:rgb(51, 51, 51);"> </font>**<font style="color:rgb(51, 51, 51);background-color:rgb(236, 234, 230);">\0</font>**<font style="color:rgb(51, 51, 51);"> </font><font style="color:rgb(51, 51, 51);">放在字符串的末尾。让我们尝试输出上面的字符串：</font>

```cpp
#include <iostream>
 
using namespace std;
 
int main ()
{
   char site[7] = {'R', 'U', 'N', 'O', 'O', 'B', '\0'};
 
   cout << "菜鸟教程: ";
   cout << site << endl;
 
   return 0;
}
```

<font style="color:rgb(51, 51, 51);">当上面的代码被编译和执行时，它会产生下列结果：</font>

菜鸟教程: RUNOOB

<font style="color:rgb(51, 51, 51);">C++ 中有大量的函数用来操作以 null 结尾的字符串:</font>

| <font style="color:rgb(255, 255, 255);">序号</font> | <font style="color:rgb(255, 255, 255);">函数 & 目的</font> |
| --- | --- |
| <font style="color:rgb(51, 51, 51);">1</font> | **<font style="color:rgb(51, 51, 51);">strcpy(s1, s2);</font>**<font style="color:rgb(51, 51, 51);">   </font><font style="color:rgb(51, 51, 51);">复制字符串 s2 到字符串 s1。</font> |
| <font style="color:rgb(51, 51, 51);">2</font> | **<font style="color:rgb(51, 51, 51);">strcat(s1, s2);</font>**<font style="color:rgb(51, 51, 51);">   </font><font style="color:rgb(51, 51, 51);">连接字符串 s2 到字符串 s1 的末尾。连接字符串也可以用 </font>**<font style="color:rgb(51, 51, 51);background-color:rgb(236, 234, 230);">+</font>**<font style="color:rgb(51, 51, 51);"> 号，例如:</font><br/>```plain string str1 = "runoob"; string str2 = "google"; string str = str1 + str2; ```  |
| <font style="color:rgb(51, 51, 51);">3</font> | **<font style="color:rgb(51, 51, 51);">strlen(s1);</font>**<font style="color:rgb(51, 51, 51);">   </font><font style="color:rgb(51, 51, 51);">返回字符串 s1 的长度。</font> |
| <font style="color:rgb(51, 51, 51);">4</font> | **<font style="color:rgb(51, 51, 51);">strcmp(s1, s2);</font>**<font style="color:rgb(51, 51, 51);">   </font><font style="color:rgb(51, 51, 51);">如果 s1 和 s2 是相同的，则返回 0；如果 s1<s2 则返回值小于 0；如果 s1>s2 则返回值大于 0。</font> |
| <font style="color:rgb(51, 51, 51);">5</font> | **<font style="color:rgb(51, 51, 51);">strchr(s1, ch);</font>**<font style="color:rgb(51, 51, 51);">   </font><font style="color:rgb(51, 51, 51);">返回一个指针，指向字符串 s1 中字符 ch 的第一次出现的位置。</font> |
| <font style="color:rgb(51, 51, 51);">6</font> | **<font style="color:rgb(51, 51, 51);">strstr(s1, s2);</font>**<font style="color:rgb(51, 51, 51);">   </font><font style="color:rgb(51, 51, 51);">返回一个指针，指向字符串 s1 中字符串 s2 的第一次出现的位置。</font> |


<font style="color:rgb(51, 51, 51);">下面的实例使用了上述的一些函数：</font>

```cpp
#include <iostream>
#include <cstring>
 
using namespace std;
 
int main ()
{
   char str1[13] = "runoob";
   char str2[13] = "google";
   char str3[13];
   int  len ;
 
   // 复制 str1 到 str3
   strcpy( str3, str1);
   cout << "strcpy( str3, str1) : " << str3 << endl;
 
   // 连接 str1 和 str2
   strcat( str1, str2);
   cout << "strcat( str1, str2): " << str1 << endl;
 
   // 连接后，str1 的总长度
   len = strlen(str1);
   cout << "strlen(str1) : " << len << endl;
 
   return 0;
}
```

<font style="color:rgb(51, 51, 51);">当上面的代码被编译和执行时，它会产生下列结果：</font>

```plain
strcpy( str3, str1) : runoob
strcat( str1, str2): runoobgoogle
strlen(str1) : 12
```

## <font style="color:rgb(51, 51, 51);">C++ 中的 String 类</font>
<font style="color:rgb(51, 51, 51);">C++ 标准库提供了</font><font style="color:rgb(51, 51, 51);"> </font>**<font style="color:rgb(51, 51, 51);">string</font>**<font style="color:rgb(51, 51, 51);"> </font><font style="color:rgb(51, 51, 51);">类类型，支持上述所有的操作，另外还增加了其他更多的功能。我们将学习 C++ 标准库中的这个类，现在让我们先来看看下面这个实例：</font>

<font style="color:rgb(51, 51, 51);">现在您可能还无法透彻地理解这个实例，因为到目前为止我们还没有讨论类和对象。所以现在您可以只是粗略地看下这个实例，等理解了面向对象的概念之后再回头来理解这个实例。</font>

```cpp
#include <iostream>
#include <string>
 
using namespace std;
 
int main ()
{
   string str1 = "runoob";
   string str2 = "google";
   string str3;
   int  len ;
 
   // 复制 str1 到 str3
   str3 = str1;
   cout << "str3 : " << str3 << endl;
 
   // 连接 str1 和 str2
   str3 = str1 + str2;
   cout << "str1 + str2 : " << str3 << endl;
 
   // 连接后，str3 的总长度
   len = str3.size();
   cout << "str3.size() :  " << len << endl;
   cin << slen   //cin 是输入
   return 0;
}
```

<font style="color:rgb(51, 51, 51);">当上面的代码被编译和执行时，它会产生下列结果：</font>

```plain
str3 : runoob
str1 + str2 : runoobgoogle
str3.size() :  12
```

# C++ 引用
<font style="color:rgb(51, 51, 51);">引用变量是一个别名，也就是说，它是某个已存在变量的另一个名字。一旦把引用初始化为某个变量，就可以使用该引用名称或变量名称来指向变量。</font>

## <font style="color:rgb(51, 51, 51);">C++ 引用 vs 指针</font>
<font style="color:rgb(51, 51, 51);">引用很容易与指针混淆，它们之间有三个主要的不同：</font>

+ <font style="color:rgb(51, 51, 51);">不存在空引用。引用必须连接到一块合法的内存。</font>
+ <font style="color:rgb(51, 51, 51);">一旦引用被初始化为一个对象，就不能被指向到另一个对象。指针可以在任何时候指向到另一个对象。</font>
+ <font style="color:rgb(51, 51, 51);">引用必须在创建时被初始化。指针可以在任何时间被初始化。</font>

## <font style="color:rgb(51, 51, 51);">C++ 中创建引用</font>
<font style="color:rgb(51, 51, 51);">试想变量名称是变量附属在内存位置中的标签，您可以把引用当成是变量附属在内存位置中的第二个标签。因此，您可以通过原始变量名称或引用来访问变量的内容。例如：</font>

int i = 17;

<font style="color:rgb(51, 51, 51);">我们可以为 i 声明引用变量，如下所示：</font>

```plain
int&  r = i;
double& s = d;
```

<font style="color:rgb(51, 51, 51);">在这些声明中，& 读作</font>**<font style="color:rgb(51, 51, 51);">引用</font>**<font style="color:rgb(51, 51, 51);">。因此，第一个声明可以读作 "r 是一个初始化为 i 的整型引用"，第二个声明可以读作 "s 是一个初始化为 d 的 double 型引用"。下面的实例使用了 int 和 double 引用：</font>

```cpp
#include <iostream>

using namespace std;

int main ()
{
    // 声明简单的变量
    int    i;
    double d;

    // 声明引用变量
    int&    r = i;
    double& s = d;

    i = 5;
    cout << "Value of i : " << i << endl;
    cout << "Value of i reference : " << r  << endl;

    d = 11.7;
    cout << "Value of d : " << d << endl;
    cout << "Value of d reference : " << s  << endl;

    return 0;
}
```

<font style="color:rgb(51, 51, 51);">当上面的代码被编译和执行时，它会产生下列结果：</font>

```cpp
Value of i : 5
Value of i reference : 5
Value of d : 11.7
Value of d reference : 11.7
```

<font style="color:rgb(51, 51, 51);">引用通常用于函数参数列表和函数返回值。下面列出了 C++ 程序员必须清楚的两个与 C++ 引用相关的重要概念：</font>

| <font style="color:rgb(255, 255, 255);">概念</font> | <font style="color:rgb(255, 255, 255);">描述</font> |
| --- | --- |
| [<font style="color:rgb(51, 51, 51);">把引用作为参数</font>](https://www.runoob.com/cplusplus/passing-parameters-by-references.html) | <font style="color:rgb(51, 51, 51);">C++ 支持把引用作为参数传给函数，这比传一般的参数更安全。</font> |
| [<font style="color:rgb(51, 51, 51);">把引用作为返回值</font>](https://www.runoob.com/cplusplus/returning-values-by-reference.html) | <font style="color:rgb(51, 51, 51);">可以从 C++ 函数中返回引用，就像返回其他数据类型一样。</font> |


# C++ 把引用作为参数
<font style="color:rgb(51, 51, 51);">我们已经讨论了如何使用指针来实现引用调用函数。下面的实例使用了引用来实现引用调用函数。</font>

```cpp
#include <iostream>
using namespace std;
 
// 函数声明
void swap(int& x, int& y);
 
int main ()
{
   // 局部变量声明
   int a = 100;
   int b = 200;
 
   cout << "交换前，a 的值：" << a << endl;
   cout << "交换前，b 的值：" << b << endl;
 
   /* 调用函数来交换值 */
   swap(a, b);
 
   cout << "交换后，a 的值：" << a << endl;
   cout << "交换后，b 的值：" << b << endl;
 
   return 0;
}
 
// 函数定义
void swap(int& x, int& y)
{
   int temp;
   temp = x; /* 保存地址 x 的值 */
   x = y;    /* 把 y 赋值给 x */
   y = temp; /* 把 x 赋值给 y  */
  
   return;
}
```

<font style="color:rgb(51, 51, 51);">当上面的代码被编译和执行时，它会产生下列结果：</font>

```plain
交换前，a 的值： 100
交换前，b 的值： 200
交换后，a 的值： 200
交换后，b 的值： 100
```

# C++ 把引用作为返回值
<font style="color:rgb(51, 51, 51);">通过使用引用来替代指针，会使 C++ 程序更容易阅读和维护。C++ 函数可以返回一个引用，方式与返回一个指针类似。</font>

<font style="color:rgb(51, 51, 51);">当函数返回一个引用时，则返回一个指向返回值的隐式指针。这样，函数就可以放在赋值语句的左边。例如，请看下面这个简单的程序：</font>

```cpp
#include <iostream>
 
using namespace std;
 
double vals[] = {10.1, 12.6, 33.1, 24.1, 50.0};
 
double& setValues(int i) {  
   double& ref = vals[i];    
   return ref;   //返回第 i 个元素的引用，ref 是一个引用变量，ref 引用 vals[i]
}
 
//要调用上面定义函数的主函数
int main ()
{
 
   cout << "改变前的值" << endl;
   for ( int i = 0; i < 5; i++ )
   {
       cout << "vals[" << i << "] = ";
       cout << vals[i] << endl;
   }
   setValues(1) = 20.23; // 改变第 2 个元素
   setValues(3) = 70.8;  // 改变第 4 个元素
   cout << "改变后的值" << endl;
   for ( int i = 0; i < 5; i++ )
   {
       cout << "vals[" << i << "] = ";
       cout << vals[i] << endl;
   }
   return 0;
}
```

<font style="color:rgb(51, 51, 51);">当上面的代码被编译和执行时，它会产生下列结果：</font>

```plain
改变前的值
vals[0] = 10.1
vals[1] = 12.6
vals[2] = 33.1
vals[3] = 24.1
vals[4] = 50
改变后的值
vals[0] = 10.1
vals[1] = 20.23
vals[2] = 33.1
vals[3] = 70.8
vals[4] = 50
```

<font style="color:rgb(51, 51, 51);">当返回一个引用时，要注意被引用的对象不能超出作用域。所以返回一个对局部变量的引用是不合法的，但是，可以返回一个对静态变量的引用。</font>

```cpp
int& func() {
    int q;
    //! return q; // 在编译时发生错误
    static int x;
    return x;     // 安全，x 在函数作用域外依然是有效的
}
```

<font style="color:rgb(51, 51, 51);">以下是一个实例，演示了返回对静态变量的引用：</font>

```cpp
#include <iostream>
using namespace std;

// 返回对静态变量的引用
int& getStaticRef() {
    static int num = 5; // 静态变量
    return num;
}

int main() {
    int& ref = getStaticRef(); // 获取对静态变量的引用
    cout << "初始值：" << ref << endl;

    ref = 10; // 修改静态变量的值

    cout << "修改后的值：" << ref << endl;
    cout << "再次调用函数后的值：" << getStaticRef() << endl;

    return 0;
}
```

<font style="color:rgb(51, 51, 51);">getStaticRef() 函数返回了对静态变量 num 的引用。</font>

<font style="color:rgb(51, 51, 51);">输出结果为：</font>

```plain
初始值：5
修改后的值：10
再次调用函数后的值：10
```

