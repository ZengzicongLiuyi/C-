<h1 id="66716479">C++ 常量</h1>
_<font style="color:rgb(51, 51, 51);">常量是固定值，在程序执行期间不会改变。这些固定的值，又叫做</font>__**<font style="color:rgb(51, 51, 51);">字面量</font>**__<font style="color:rgb(51, 51, 51);">。</font>_

_<font style="color:rgb(51, 51, 51);">常量可以是任何的基本数据类型，可分为整型数字、浮点数字、字符、字符串和布尔值。</font>_

_<font style="color:rgb(51, 51, 51);">常量就像是常规的变量，只不过常量的值在定义后不能进行修改。</font>_

<h2 id="2c16da31"><font style="color:rgb(51, 51, 51);">整数常量</font></h2>
<font style="color:rgb(51, 51, 51);">整数常量可以是十进制、八进制或十六进制的常量。前缀指定基数：0x 或 0X 表示十六进制，0 表示八进制，不带前缀则默认表示十进制。</font>

<font style="color:rgb(51, 51, 51);">整数常量也可以带一个后缀，后缀是 U 和 L 的组合，U 表示无符号整数（unsigned），L 表示长整数（long）。后缀可以是大写，也可以是小写，U 和 L 的顺序任意。</font>

<font style="color:rgb(51, 51, 51);">下面列举几个整数常量的实例：</font>

```plain
212         // 合法的
215u        // 合法的
0xFeeL      // 合法的
078         // 非法的：8 不是八进制的数字
032UU       // 非法的：不能重复后缀
```

<font style="color:rgb(51, 51, 51);">以下是各种类型的整数常量的实例：</font>

```plain
85         // 十进制
0213       // 八进制 
0x4b       // 十六进制 
30         // 整数 
30u        // 无符号整数 
30l        // 长整数 
30ul       // 无符号长整数
```

<h2 id="c061c549"><font style="color:rgb(51, 51, 51);">浮点常量</font></h2>
<font style="color:rgb(51, 51, 51);">浮点常量由整数部分、小数点、小数部分和指数部分组成。您可以使用小数形式或者指数形式来表示浮点常量。</font>

<font style="color:rgb(51, 51, 51);">当使用小数形式表示时，必须包含整数部分、小数部分，或同时包含两者。当使用指数形式表示时， 必须包含小数点、指数，或同时包含两者。带符号的指数是用 e 或 E 引入的。</font>

<font style="color:rgb(51, 51, 51);">下面列举几个浮点常量的实例：</font>

```plain
3.14159       // 合法的 
314159E-5L    // 合法的 
510E          // 非法的：不完整的指数
210f          // 非法的：没有小数或指数
.e55          // 非法的：缺少整数或分数
```

<h2 id="9025d3a2"><font style="color:rgb(51, 51, 51);">布尔常量</font></h2>
<font style="color:rgb(51, 51, 51);">布尔常量共有两个，它们都是标准的 C++ 关键字：</font>

+ **<font style="color:rgb(51, 51, 51);">true</font>**<font style="color:rgb(51, 51, 51);"> </font><font style="color:rgb(51, 51, 51);">值代表真。</font>
+ **<font style="color:rgb(51, 51, 51);">false</font>**<font style="color:rgb(51, 51, 51);"> </font><font style="color:rgb(51, 51, 51);">值代表假。</font>

<font style="color:rgb(51, 51, 51);">我们不应把 true 的值看成 1，把 false 的值看成 0。</font>

<h2 id="929e0d37"><font style="color:rgb(51, 51, 51);">字符常量</font></h2>
<font style="color:rgb(51, 51, 51);">字符常量是括在单引号中。如果常量以 L（仅当大写时）开头，则表示它是一个宽字符常量（例如 L'x'），此时它必须存储在</font><font style="color:rgb(51, 51, 51);"> </font>**<font style="color:rgb(51, 51, 51);">wchar_t</font>**<font style="color:rgb(51, 51, 51);"> </font><font style="color:rgb(51, 51, 51);">类型的变量中。否则，它就是一个窄字符常量（例如 'x'），此时它可以存储在</font><font style="color:rgb(51, 51, 51);"> </font>**<font style="color:rgb(51, 51, 51);">char</font>**<font style="color:rgb(51, 51, 51);"> </font><font style="color:rgb(51, 51, 51);">类型的简单变量中。</font>

<font style="color:rgb(51, 51, 51);">字符常量可以是一个普通的字符（例如 'x'）、一个转义序列（例如 '\t'），或一个通用的字符（例如 '\u02C0'）。</font>

<font style="color:rgb(51, 51, 51);">在 C++ 中，有一些特定的字符，当它们前面有反斜杠时，它们就具有特殊的含义，被用来表示如换行符（\n）或制表符（\t）等。下表列出了一些这样的转义序列码：</font>

| <font style="color:rgb(255, 255, 255);">转义序列</font> | <font style="color:rgb(255, 255, 255);">含义</font> |
| --- | --- |
| <font style="color:rgb(51, 51, 51);">\\</font> | <font style="color:rgb(51, 51, 51);">\ 字符</font> |
| <font style="color:rgb(51, 51, 51);">\'</font> | <font style="color:rgb(51, 51, 51);">' 字符</font> |
| <font style="color:rgb(51, 51, 51);">\"</font> | <font style="color:rgb(51, 51, 51);">" 字符</font> |
| <font style="color:rgb(51, 51, 51);">\?</font> | <font style="color:rgb(51, 51, 51);">? 字符</font> |
| <font style="color:rgb(51, 51, 51);">\a</font> | <font style="color:rgb(51, 51, 51);">警报铃声</font> |
| <font style="color:rgb(51, 51, 51);">\b</font> | <font style="color:rgb(51, 51, 51);">退格键</font> |
| <font style="color:rgb(51, 51, 51);">\f</font> | <font style="color:rgb(51, 51, 51);">换页符</font> |
| <font style="color:rgb(51, 51, 51);">\n</font> | <font style="color:rgb(51, 51, 51);">换行符</font> |
| <font style="color:rgb(51, 51, 51);">\r</font> | <font style="color:rgb(51, 51, 51);">回车</font> |
| <font style="color:rgb(51, 51, 51);">\t</font> | <font style="color:rgb(51, 51, 51);">水平制表符</font> |
| <font style="color:rgb(51, 51, 51);">\v</font> | <font style="color:rgb(51, 51, 51);">垂直制表符</font> |
| <font style="color:rgb(51, 51, 51);">\ooo</font> | <font style="color:rgb(51, 51, 51);">一到三位的八进制数</font> |
| <font style="color:rgb(51, 51, 51);">\xhh . . .</font> | <font style="color:rgb(51, 51, 51);">一个或多个数字的十六进制数</font> |


<font style="color:rgb(51, 51, 51);">下面的实例显示了一些转义序列字符：</font>

```cpp
#include <iostream>
using namespace std;

int main()
{
    cout << "Hello\tWorld\n\n";   \t：制表    \n：换行
    return 0;
}
```

<font style="color:rgb(51, 51, 51);">当上面的代码被编译和执行时，它会产生下列结果：</font>

Hello   World

<h2 id="742e013b"><font style="color:rgb(51, 51, 51);">字符串常量</font></h2>
<font style="color:rgb(51, 51, 51);">字符串字面值或常量是括在双引号</font><font style="color:rgb(51, 51, 51);"> </font>**<font style="color:rgb(51, 51, 51);background-color:rgb(236, 234, 230);">""</font>**<font style="color:rgb(51, 51, 51);"> </font><font style="color:rgb(51, 51, 51);">中的。一个字符串包含类似于字符常量的字符：普通的字符、转义序列和通用的字符。</font>

**<font style="color:rgb(51, 51, 51);">您可以使用 </font>****<font style="color:rgb(51, 51, 51);background-color:rgb(236, 234, 230);">\</font>****<font style="color:rgb(51, 51, 51);"> 做分隔符，把一个很长的字符串常量进行分行。</font>**

<font style="color:rgb(51, 51, 51);">下面的实例显示了一些字符串常量：</font>

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string greeting = "hello, runoob";
    cout << greeting;
    cout << "\n";     // 换行符
    string greeting2 = "hello, \
                        runoob";
    cout << greeting2;
    return 0;
}
```

```plain
hello, runoob
hello, runoob
```

<h2 id="ca23acb3"><font style="color:rgb(51, 51, 51);">定义常量</font></h2>
<font style="color:rgb(51, 51, 51);">在 C++ 中，有两种简单的定义常量的方式：</font>

+ <font style="color:rgb(51, 51, 51);">使用</font><font style="color:rgb(51, 51, 51);"> </font>**<font style="color:rgb(51, 51, 51);">#define</font>**<font style="color:rgb(51, 51, 51);"> </font><font style="color:rgb(51, 51, 51);">预处理器。</font>
+ <font style="color:rgb(51, 51, 51);">使用</font><font style="color:rgb(51, 51, 51);"> </font>**<font style="color:rgb(51, 51, 51);">const</font>**<font style="color:rgb(51, 51, 51);"> </font><font style="color:rgb(51, 51, 51);">关键字。</font>

<h2 id="7a6be19e"><font style="color:rgb(51, 51, 51);">#define 预处理器</font></h2>
<font style="color:rgb(51, 51, 51);">下面是使用 #define 预处理器定义常量的形式：</font>

#define identifier value

<font style="color:rgb(51, 51, 51);">具体请看下面的实例：</font>

```cpp
#include <iostream>
using namespace std;
 
#define LENGTH 10   
#define WIDTH  5
#define NEWLINE '\n'
 
int main()
{
   int area;  
   area = LENGTH * WIDTH;
   cout << area;
   cout << NEWLINE;
   return 0;
}
```

<font style="color:rgb(51, 51, 51);">当上面的代码被编译和执行时，它会产生下列结果：       </font>50

<h2 id="f57bd973"><font style="color:rgb(51, 51, 51);">const 关键字</font></h2>
<font style="color:rgb(51, 51, 51);">您可以使用</font><font style="color:rgb(51, 51, 51);"> </font>**<font style="color:rgb(51, 51, 51);">const</font>**<font style="color:rgb(51, 51, 51);"> </font><font style="color:rgb(51, 51, 51);">前缀声明指定类型的常量，如下所示：</font>

const type variable = value;

<font style="color:rgb(51, 51, 51);">具体请看下面的实例：</font>

```cpp
#include <iostream>
using namespace std;
 
int main()
{
   const int  LENGTH = 10;
   const int  WIDTH  = 5;
   const char NEWLINE = '\n';
   int area;  
   
   area = LENGTH * WIDTH;
   cout << area;
   cout << NEWLINE;
   return 0;
}
```

<font style="color:rgb(51, 51, 51);">当上面的代码被编译和执行时，它会产生下列结果：</font>

50

<font style="color:rgb(51, 51, 51);">请注意，把常量定义为大写字母形式，是一个很好的编程实践。</font>

<h1 id="47f9ec96">C++ 修饰符类型</h1>
<font style="color:rgb(51, 51, 51);">C++ 允许在</font><font style="color:rgb(51, 51, 51);"> </font>**<font style="color:rgb(51, 51, 51);">char、int 和 double</font>**<font style="color:rgb(51, 51, 51);"> </font><font style="color:rgb(51, 51, 51);">数据类型前放置修饰符。</font>

<font style="color:rgb(51, 51, 51);">修饰符是用于改变变量类型的行为的关键字，它更能满足各种情境的需求。</font>

<font style="color:rgb(51, 51, 51);">下面列出了数据类型修饰符：</font>

+ <font style="color:rgb(51, 51, 51);">signed：表示变量可以存储负数。对于整型变量来说，signed 可以省略，因为整型变量默认为有符号类型。</font>
+ <font style="color:rgb(51, 51, 51);">unsigned：表示变量不能存储负数。对于整型变量来说，unsigned 可以将变量范围扩大一倍。</font>
+ <font style="color:rgb(51, 51, 51);">short：表示变量的范围比 int 更小。short int 可以缩写为 short。</font>
+ <font style="color:rgb(51, 51, 51);">long：表示变量的范围比 int 更大。long int 可以缩写为 long。</font>
+ <font style="color:rgb(51, 51, 51);">long long：表示变量的范围比 long 更大。C++11 中新增的数据类型修饰符。</font>
+ <font style="color:rgb(51, 51, 51);">float：表示单精度浮点数。</font>
+ <font style="color:rgb(51, 51, 51);">double：表示双精度浮点数。</font>
+ <font style="color:rgb(51, 51, 51);">bool：表示布尔类型，只有 true 和 false 两个值。</font>
+ <font style="color:rgb(51, 51, 51);">char：表示字符类型。</font>
+ <font style="color:rgb(51, 51, 51);">wchar_t：表示宽字符类型，可以存储 Unicode 字符。</font>

<font style="color:rgb(51, 51, 51);">修饰符</font><font style="color:rgb(51, 51, 51);"> </font>**<font style="color:rgb(51, 51, 51);">signed、unsigned、long 和 short</font>**<font style="color:rgb(51, 51, 51);"> </font><font style="color:rgb(51, 51, 51);">可应用于整型，</font>**<font style="color:rgb(51, 51, 51);">signed</font>**<font style="color:rgb(51, 51, 51);"> </font><font style="color:rgb(51, 51, 51);">和</font><font style="color:rgb(51, 51, 51);"> </font>**<font style="color:rgb(51, 51, 51);">unsigned</font>**<font style="color:rgb(51, 51, 51);"> </font><font style="color:rgb(51, 51, 51);">可应用于字符型，</font>**<font style="color:rgb(51, 51, 51);">long</font>**<font style="color:rgb(51, 51, 51);"> </font><font style="color:rgb(51, 51, 51);">可应用于双精度型。</font>

<font style="color:rgb(51, 51, 51);">这些修饰符也可以组合使用，修饰符</font><font style="color:rgb(51, 51, 51);"> </font>**<font style="color:rgb(51, 51, 51);">signed</font>**<font style="color:rgb(51, 51, 51);"> </font><font style="color:rgb(51, 51, 51);">和</font><font style="color:rgb(51, 51, 51);"> </font>**<font style="color:rgb(51, 51, 51);">unsigned</font>**<font style="color:rgb(51, 51, 51);"> </font><font style="color:rgb(51, 51, 51);">也可以作为</font><font style="color:rgb(51, 51, 51);"> </font>**<font style="color:rgb(51, 51, 51);">long</font>**<font style="color:rgb(51, 51, 51);"> </font><font style="color:rgb(51, 51, 51);">或</font><font style="color:rgb(51, 51, 51);"> </font>**<font style="color:rgb(51, 51, 51);">short</font>**<font style="color:rgb(51, 51, 51);"> </font><font style="color:rgb(51, 51, 51);">修饰符的前缀。例如：</font>**<font style="color:rgb(51, 51, 51);">unsigned long int</font>**<font style="color:rgb(51, 51, 51);">。</font>

<font style="color:rgb(51, 51, 51);">C++ 允许使用速记符号来声明</font>**<font style="color:rgb(51, 51, 51);">无符号短整数</font>**<font style="color:rgb(51, 51, 51);">或</font>**<font style="color:rgb(51, 51, 51);">无符号长整数</font>**<font style="color:rgb(51, 51, 51);">。您可以不写 int，只写单词</font><font style="color:rgb(51, 51, 51);"> </font>**<font style="color:rgb(51, 51, 51);">unsigned、short</font>**<font style="color:rgb(51, 51, 51);"> </font><font style="color:rgb(51, 51, 51);">或</font><font style="color:rgb(51, 51, 51);"> </font>**<font style="color:rgb(51, 51, 51);">long</font>**<font style="color:rgb(51, 51, 51);">，</font>**<font style="color:rgb(51, 51, 51);">int</font>**<font style="color:rgb(51, 51, 51);"> </font><font style="color:rgb(51, 51, 51);">是隐含的。例如，下面的两个语句都声明了无符号整型变量。</font>

```cpp
signed int num1 = -10; // 定义有符号整型变量 num1，初始值为 -10
unsigned int num2 = 20; // 定义无符号整型变量 num2，初始值为 20

short int num1 = 10; // 定义短整型变量 num1，初始值为 10
long int num2 = 100000; // 定义长整型变量 num2，初始值为 100000

long long int num1 = 10000000000; // 定义长长整型变量 num1，初始值为 10000000000

float num1 = 3.14f; // 定义单精度浮点数变量 num1，初始值为 3.14
double num2 = 2.71828; // 定义双精度浮点数变量 num2，初始值为 2.71828

bool flag = true; // 定义布尔类型变量 flag，初始值为 true

char ch1 = 'a'; // 定义字符类型变量 ch1，初始值为 'a'
wchar_t ch2 = L'你'; // 定义宽字符类型变量 ch2，初始值为 '你'
```

<font style="color:rgb(51, 51, 51);">为了理解 C++ 解释有符号整数和无符号整数修饰符之间的差别，我们来运行一下下面这个短程序：</font>

```cpp
#include <iostream>
using namespace std;
 
/* 
 * 这个程序演示了有符号整数和无符号整数之间的差别
*/
int main()
{
   short int i;           // 有符号短整数
   short unsigned int j;  // 无符号短整数
 
   j = 50000;
 
   i = j;
   cout << i << " " << j;
 
   return 0;
}
```

<font style="color:rgb(51, 51, 51);">当上面的程序运行时，会输出下列结果：</font>

<font style="color:rgb(51, 51, 51);">-15536 50000</font>

<font style="color:rgb(51, 51, 51);">上述结果中，无符号短整数 50,000 的位模式被解释为有符号短整数 -15,536。</font>

---

<h2 id="f5a011fc"><font style="color:rgb(51, 51, 51);">C++ 中的类型限定符</font></h2>
<font style="color:rgb(51, 51, 51);">类型限定符提供了变量的额外信息，用于在定义变量或函数时改变它们的默认行为的关键字。</font>

| <font style="color:rgb(255, 255, 255);">限定符</font> | <font style="color:rgb(255, 255, 255);">含义</font> |
| --- | --- |
| <font style="color:rgb(51, 51, 51);">const</font> | **<font style="color:rgb(51, 51, 51);">const</font>**<font style="color:rgb(51, 51, 51);"> </font><font style="color:rgb(51, 51, 51);">定义常量，表示该变量的值不能被修改。</font> |
| <font style="color:rgb(51, 51, 51);">volatile</font> | <font style="color:rgb(51, 51, 51);">修饰符</font><font style="color:rgb(51, 51, 51);"> </font>**<font style="color:rgb(51, 51, 51);">volatile</font>**<font style="color:rgb(51, 51, 51);"> </font><font style="color:rgb(51, 51, 51);">告诉该变量的值可能会被程序以外的因素改变，如硬件或其他线程。。</font> |
| <font style="color:rgb(51, 51, 51);">restrict</font> | <font style="color:rgb(51, 51, 51);">由</font><font style="color:rgb(51, 51, 51);"> </font>**<font style="color:rgb(51, 51, 51);">restrict</font>**<font style="color:rgb(51, 51, 51);"> </font><font style="color:rgb(51, 51, 51);">修饰的指针是唯一一种访问它所指向的对象的方式。只有 C99 增加了新的类型限定符 restrict。</font> |
| <font style="color:rgb(51, 51, 51);">mutable</font> | <font style="color:rgb(51, 51, 51);">mutable 用于修饰类的成员变量。被 mutable 修饰的成员变量可以被修改，即使它们所在的对象是 const 的。</font> |
| <font style="color:rgb(51, 51, 51);">static</font> | <font style="color:rgb(51, 51, 51);">用于定义静态变量，表示该变量的作用域仅限于当前文件或当前函数内，不会被其他文件或函数访问。</font> |
| <font style="color:rgb(51, 51, 51);">register</font> | <font style="color:rgb(51, 51, 51);">用于定义寄存器变量，表示该变量被频繁使用，可以存储在CPU的寄存器中，以提高程序的运行效率。</font> |


<h3 id="8866d192"><font style="color:rgb(51, 51, 51);">const 实例</font></h3>
```cpp
const int NUM = 10; // 定义常量 NUM，其值不可修改
const int* ptr = &NUM; // 定义指向常量的指针，指针所指的值不可修改
int const* ptr2 = &NUM; // 和上面一行等价
```

<h3 id="2d940460"><font style="color:rgb(51, 51, 51);">volatile 实例</font></h3>
```cpp
volatile int num = 20; // 定义变量 num，其值可能会在未知的时间被改变
```

<h3 id="f53cd0ba"><font style="color:rgb(51, 51, 51);">mutable 实例</font></h3>
```cpp
class Example {
public:
int get_value() const {
    return value_; // const 关键字表示该成员函数不会修改对象中的数据成员
}
void set_value(int value) const {
    value_ = value; // mutable 关键字允许在 const 成员函数中修改成员变量
}
private:
mutable int value_;
};
```

<h3 id="c91a35af"><font style="color:rgb(51, 51, 51);">static 实例</font></h3>
```cpp
void example_function() {
    static int count = 0; // static 关键字使变量 count 存储在程序生命周期内都存在
    count++;
}
```

<h3 id="d6b2a776"><font style="color:rgb(51, 51, 51);">register 实例</font></h3>
```cpp
void example_function(register int num) {
    // register 关键字建议编译器将变量 num 存储在寄存器中
    // 以提高程序执行速度
    // 但是实际上是否会存储在寄存器中由编译器决定
}
```

