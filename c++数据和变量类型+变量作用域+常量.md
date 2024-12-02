<h1 id="aa09b223">C++ 数据类型</h1>
_<font style="color:rgb(51, 51, 51);">使用编程语言进行编程时，需要用到各种变量来存储各种信息。变量保留的是它所存储的值的内存位置。这意味着，当您创建一个变量时，就会在内存中保留一些空间。</font>_

_<font style="color:rgb(51, 51, 51);">您可能需要存储各种数据类型（比如字符型、宽字符型、整型、浮点型、双浮点型、布尔型等）的信息，操作系统会根据变量的数据类型，来分配内存和决定在保留内存中存储什么。</font>_

<h2 id="74a896c8"><font style="color:rgb(51, 51, 51);">基本的内置类型</font></h2>
<font style="color:rgb(51, 51, 51);">C++ 为程序员提供了种类丰富的内置数据类型和用户自定义的数据类型。下表列出了七种基本的 C++ 数据类型：</font>

| <font style="color:rgb(255, 255, 255);">类型</font> | <font style="color:rgb(255, 255, 255);">关键字</font> |
| --- | --- |
| <font style="color:rgb(51, 51, 51);">布尔型</font> | <font style="color:rgb(51, 51, 51);">bool</font> |
| <font style="color:rgb(51, 51, 51);">字符型</font> | <font style="color:rgb(51, 51, 51);">char</font> |
| <font style="color:rgb(51, 51, 51);">整型</font> | <font style="color:rgb(51, 51, 51);">int</font> |
| <font style="color:rgb(51, 51, 51);">浮点型</font> | <font style="color:rgb(51, 51, 51);">float</font> |
| <font style="color:rgb(51, 51, 51);">双浮点型</font> | <font style="color:rgb(51, 51, 51);">double</font> |
| <font style="color:rgb(51, 51, 51);">无类型</font> | <font style="color:rgb(51, 51, 51);">void</font> |
| <font style="color:rgb(51, 51, 51);">宽字符型</font> | <font style="color:rgb(51, 51, 51);">wchar_t</font> |


<font style="color:rgb(51, 51, 51);">其实 wchar_t 是这样来的：</font>

```plain
typedef short int wchar_t;
```

<font style="color:rgb(51, 51, 51);">所以 wchar_t 实际上的空间是和 short int 一样。</font>

<font style="color:rgb(51, 51, 51);">一些基本类型可以使用一个或多个类型修饰符进行修饰：</font>

+ <font style="color:rgb(51, 51, 51);">signed  //表明数据类型的符号是否需要</font>
+ <font style="color:rgb(51, 51, 51);">unsigned</font>
+ <font style="color:rgb(51, 51, 51);">short</font>
+ <font style="color:rgb(51, 51, 51);">long</font>

<font style="color:rgb(51, 51, 51);">下表显示了各种变量类型在内存中存储值时需要占用的内存，以及该类型的变量所能存储的最大值和最小值。</font>

**<font style="color:rgb(51, 51, 51);">注意：</font>**<font style="color:rgb(51, 51, 51);">不同系统会有所差异，一字节为 8 位。</font>

**<font style="color:rgb(51, 51, 51);">注意：</font>**<font style="color:rgb(51, 51, 51);">默认情况下，int、short、long都是带符号的，即 signed。</font>

**<font style="color:rgb(51, 51, 51);">注意：</font>**<font style="color:rgb(51, 51, 51);">long int 8 个字节，int 都是 4 个字节，早期的 C 编译器定义了 long int 占用 4 个字节，int 占用 2 个字节，新版的 C/C++ 标准兼容了早期的这一设定。</font>

| <font style="color:rgb(255, 255, 255);">类型</font> | <font style="color:rgb(255, 255, 255);">位</font> | <font style="color:rgb(255, 255, 255);">范围</font> |
| --- | --- | --- |
| <font style="color:rgb(51, 51, 51);">char</font> | <font style="color:rgb(51, 51, 51);">1 个字节</font> | <font style="color:rgb(51, 51, 51);">-128 到 127 或者 0 到 255</font> |
| <font style="color:rgb(51, 51, 51);">unsigned char</font> | <font style="color:rgb(51, 51, 51);">1 个字节</font> | <font style="color:rgb(51, 51, 51);">0 到 255</font> |
| <font style="color:rgb(51, 51, 51);">signed char</font> | <font style="color:rgb(51, 51, 51);">1 个字节</font> | <font style="color:rgb(51, 51, 51);">-128 到 127</font> |
| <font style="color:rgb(51, 51, 51);">int</font> | <font style="color:rgb(51, 51, 51);">4 个字节</font> | <font style="color:rgb(51, 51, 51);">-2147483648 到 2147483647</font> |
| <font style="color:rgb(51, 51, 51);">unsigned int</font> | <font style="color:rgb(51, 51, 51);">4 个字节</font> | <font style="color:rgb(51, 51, 51);">0 到 4294967295</font> |
| <font style="color:rgb(51, 51, 51);">signed int</font> | <font style="color:rgb(51, 51, 51);">4 个字节</font> | <font style="color:rgb(51, 51, 51);">-2147483648 到 2147483647</font> |
| <font style="color:rgb(51, 51, 51);">short int</font> | <font style="color:rgb(51, 51, 51);">2 个字节</font> | <font style="color:rgb(51, 51, 51);">-32768 到 32767</font> |
| <font style="color:rgb(51, 51, 51);">unsigned short int</font> | <font style="color:rgb(51, 51, 51);">2 个字节</font> | <font style="color:rgb(51, 51, 51);">0 到 65,535</font> |
| <font style="color:rgb(51, 51, 51);">signed short int</font> | <font style="color:rgb(51, 51, 51);">2 个字节</font> | <font style="color:rgb(51, 51, 51);">-32768 到 32767</font> |
| <font style="color:rgb(51, 51, 51);">long int</font> | <font style="color:rgb(51, 51, 51);">8 个字节</font> | <font style="color:rgb(51, 51, 51);">-9,223,372,036,854,775,808 到 9,223,372,036,854,775,807</font> |
| <font style="color:rgb(51, 51, 51);">signed long int</font> | <font style="color:rgb(51, 51, 51);">8 个字节</font> | <font style="color:rgb(51, 51, 51);">-9,223,372,036,854,775,808 到 9,223,372,036,854,775,807</font> |
| <font style="color:rgb(51, 51, 51);">unsigned long int</font> | <font style="color:rgb(51, 51, 51);">8 个字节</font> | <font style="color:rgb(51, 51, 51);">0 到 18,446,744,073,709,551,615</font> |
| <font style="color:rgb(51, 51, 51);">float</font> | <font style="color:rgb(51, 51, 51);">4 个字节</font> | <font style="color:rgb(51, 51, 51);">精度型占4个字节（32位）内存空间，+/- 3.4e +/- 38 (~7 个数字)</font> |
| <font style="color:rgb(51, 51, 51);">double</font> | <font style="color:rgb(51, 51, 51);">8 个字节</font> | <font style="color:rgb(51, 51, 51);">双精度型占8 个字节（64位）内存空间，+/- 1.7e +/- 308 (~15 个数字)</font> |
| <font style="color:rgb(51, 51, 51);">long long</font> | <font style="color:rgb(51, 51, 51);">8 个字节</font> | <font style="color:rgb(51, 51, 51);">双精度型占8 个字节（64位）内存空间，表示 -9,223,372,036,854,775,807 到 9,223,372,036,854,775,807 的范围</font> |
| <font style="color:rgb(51, 51, 51);">long double</font> | <font style="color:rgb(51, 51, 51);">16 个字节</font> | <font style="color:rgb(51, 51, 51);">长双精度型 16 个字节（128位）内存空间，可提供18-19位有效数字。</font> |
| <font style="color:rgb(51, 51, 51);">wchar_t</font> | <font style="color:rgb(51, 51, 51);">2 或 4 个字节</font> | <font style="color:rgb(51, 51, 51);">1 个宽字符</font> |


_<font style="background-color:rgb(243, 247, 240);">注意，各种类型的存储大小与系统位数有关，但目前通用的以64位系统为主。</font>_

_<font style="background-color:rgb(243, 247, 240);">以下列出了32位系统与64位系统的存储大小的差别（windows 相同）：</font>_

![](https://cdn.nlark.com/yuque/0/2024/png/43034535/1732688123584-555450dd-9b57-4d7a-9748-c85b50174651.png)

<font style="color:rgb(51, 51, 51);">从上表可得知，变量的大小会根据编译器和所使用的电脑而有所不同。</font>

<font style="color:rgb(51, 51, 51);">下面实例会输出您电脑上各种数据类型的大小。</font>

<h2 id="480c216f"><font style="color:rgb(97, 127, 16);background-color:rgb(229, 238, 204);">实例</font></h2>
```cpp
#include<iostream>  
#include <limits>

using namespace std;  

int main()  
{  
    cout << "type: \t\t" << "************size**************"<< endl;  
    cout << "bool: \t\t" << "所占字节数：" << sizeof(bool);  
    cout << "\t最大值：" << (numeric_limits<bool>::max)();  
    cout << "\t\t最小值：" << (numeric_limits<bool>::min)() << endl;  
    cout << "char: \t\t" << "所占字节数：" << sizeof(char);  
    cout << "\t最大值：" << (numeric_limits<char>::max)();  
    cout << "\t\t最小值：" << (numeric_limits<char>::min)() << endl;  
    cout << "signed char: \t" << "所占字节数：" << sizeof(signed char);  
    cout << "\t最大值：" << (numeric_limits<signed char>::max)();  
    cout << "\t\t最小值：" << (numeric_limits<signed char>::min)() << endl;  
    cout << "unsigned char: \t" << "所占字节数：" << sizeof(unsigned char);  
    cout << "\t最大值：" << (numeric_limits<unsigned char>::max)();  
    cout << "\t\t最小值：" << (numeric_limits<unsigned char>::min)() << endl;  
    cout << "wchar_t: \t" << "所占字节数：" << sizeof(wchar_t);  
    cout << "\t最大值：" << (numeric_limits<wchar_t>::max)();  
    cout << "\t\t最小值：" << (numeric_limits<wchar_t>::min)() << endl;  
    cout << "short: \t\t" << "所占字节数：" << sizeof(short);  
    cout << "\t最大值：" << (numeric_limits<short>::max)();  
    cout << "\t\t最小值：" << (numeric_limits<short>::min)() << endl;  
    cout << "int: \t\t" << "所占字节数：" << sizeof(int);  
    cout << "\t最大值：" << (numeric_limits<int>::max)();  
    cout << "\t最小值：" << (numeric_limits<int>::min)() << endl;  
    cout << "unsigned: \t" << "所占字节数：" << sizeof(unsigned);  
    cout << "\t最大值：" << (numeric_limits<unsigned>::max)();  
    cout << "\t最小值：" << (numeric_limits<unsigned>::min)() << endl;  
    cout << "long: \t\t" << "所占字节数：" << sizeof(long);  
    cout << "\t最大值：" << (numeric_limits<long>::max)();  
    cout << "\t最小值：" << (numeric_limits<long>::min)() << endl;  
    cout << "unsigned long: \t" << "所占字节数：" << sizeof(unsigned long);  
    cout << "\t最大值：" << (numeric_limits<unsigned long>::max)();  
    cout << "\t最小值：" << (numeric_limits<unsigned long>::min)() << endl;  
    cout << "double: \t" << "所占字节数：" << sizeof(double);  
    cout << "\t最大值：" << (numeric_limits<double>::max)();  
    cout << "\t最小值：" << (numeric_limits<double>::min)() << endl;  
    cout << "long double: \t" << "所占字节数：" << sizeof(long double);  
    cout << "\t最大值：" << (numeric_limits<long double>::max)();  
    cout << "\t最小值：" << (numeric_limits<long double>::min)() << endl;  
    cout << "float: \t\t" << "所占字节数：" << sizeof(float);  
    cout << "\t最大值：" << (numeric_limits<float>::max)();  
    cout << "\t最小值：" << (numeric_limits<float>::min)() << endl;  
    cout << "size_t: \t" << "所占字节数：" << sizeof(size_t);  
    cout << "\t最大值：" << (numeric_limits<size_t>::max)();  
    cout << "\t最小值：" << (numeric_limits<size_t>::min)() << endl;  
    cout << "string: \t" << "所占字节数：" << sizeof(string) << endl;  
    // << "\t最大值：" << (numeric_limits<string>::max)() << "\t最小值：" << (numeric_limits<string>::min)() << endl;  
    cout << "type: \t\t" << "************size**************"<< endl;  
    return 0;  
}
```

<font style="color:rgb(51, 51, 51);">本实例使用了 </font>**<font style="color:rgb(51, 51, 51);">endl</font>**<font style="color:rgb(51, 51, 51);">，这将在每一行后插入一个换行符，并且刷新缓冲区，</font>**<font style="color:rgb(51, 51, 51);background-color:rgb(236, 234, 230);"><<</font>**<font style="color:rgb(51, 51, 51);"> 运算符用于向屏幕传多个值，</font>**<font style="color:rgb(51, 51, 51);">sizeof()</font>**<font style="color:rgb(51, 51, 51);"> 运算符用来获取各种数据类型的大小。</font>

<font style="color:rgb(51, 51, 51);">当上面的代码被编译和执行时，它会产生以下的结果，结果会根据所使用的计算机而有所不同：</font>

```cpp
type:              ************size**************
bool:            所占字节数：1    最大值：1                    最小值：0
char:            所占字节数：1    最大值：                     最小值：?
signed char:     所占字节数：1    最大值：                     最小值：?
unsigned char:   所占字节数：1    最大值：?                    最小值：
wchar_t:         所占字节数：4    最大值：2147483647           最小值：-2147483648
short:           所占字节数：2    最大值：32767                最小值：-32768
int:             所占字节数：4    最大值：2147483647           最小值：-2147483648
unsigned:        所占字节数：4    最大值：4294967295           最小值：0
long:            所占字节数：8    最大值：9223372036854775807  最小值：-9223372036854775808
unsigned long:   所占字节数：8    最大值：18446744073709551615 最小值：0
double:          所占字节数：8    最大值：1.79769e+308         最小值：2.22507e-308
long double:     所占字节数：16   最大值：1.18973e+4932        最小值：3.3621e-4932
float:           所占字节数：4    最大值：3.40282e+38          最小值：1.17549e-38
size_t:          所占字节数：8    最大值：18446744073709551615 最小值：0
string:          所占字节数：24
type:                ************size**************
```

<h2 id="61c752cb"><font style="color:rgb(51, 51, 51);">typedef 声明</font></h2>
<font style="color:rgb(51, 51, 51);">您可以使用</font><font style="color:rgb(51, 51, 51);"> </font>**<font style="color:rgb(51, 51, 51);">typedef</font>**<font style="color:rgb(51, 51, 51);"> </font><font style="color:rgb(51, 51, 51);">为一个已有的类型取一个新的名字。下面是使用 typedef 定义一个新类型的语法：</font>

```cpp
typedef type newname; 
```

<font style="color:rgb(51, 51, 51);">例如，下面的语句会告诉编译器，feet 是 int 的另一个名称：</font>

```cpp
typedef int feet;
```

<font style="color:rgb(51, 51, 51);">现在，下面的声明是完全合法的，它创建了一个整型变量 distance：</font>

```cpp
feet distance;
```

<h2 id="99b90c80"><font style="color:rgb(51, 51, 51);">枚举类型</font></h2>
<font style="color:rgb(51, 51, 51);">枚举类型(enumeration)是C++中的一种派生数据类型，它是由用户定义的若干枚举常量的集合。</font>

<font style="color:rgb(51, 51, 51);">如果一个变量只有几种可能的值，可以定义为枚举(enumeration)类型。所谓"枚举"是指将变量的值一一列举出来，变量的值只能在列举出来的值的范围内。</font>

<font style="color:rgb(51, 51, 51);">创建枚举，需要使用关键字</font><font style="color:rgb(51, 51, 51);"> </font>**<font style="color:rgb(51, 51, 51);">enum</font>**<font style="color:rgb(51, 51, 51);">。枚举类型的一般形式为：</font>

```plain
enum 枚举名{ 
     标识符[=整型常数], 
     标识符[=整型常数], 
... 
    标识符[=整型常数]
} 枚举变量;
```

<font style="color:rgb(51, 51, 51);">如果枚举没有初始化, 即省掉"=整型常数"时, 则从第一个标识符开始。</font>

<font style="color:rgb(51, 51, 51);">例如，下面的代码定义了一个颜色枚举，变量 c 的类型为 color。最后，c 被赋值为 "blue"。</font>

```cpp
enum color { red, green, blue } c;
c = blue;
```

<font style="color:rgb(51, 51, 51);">默认情况下，第一个名称的值为 0，第二个名称的值为 1，第三个名称的值为 2，以此类推。但是，您也可以给名称赋予一个特殊的值，只需要添加一个初始值即可。例如，在下面的枚举中，</font>**<font style="color:rgb(51, 51, 51);">green</font>**<font style="color:rgb(51, 51, 51);"> </font><font style="color:rgb(51, 51, 51);">的值为 5。</font>

enum color { red, green=5, blue };

<font style="color:rgb(51, 51, 51);">在这里，</font>**<font style="color:rgb(51, 51, 51);">blue</font>**<font style="color:rgb(51, 51, 51);"> 的值为 6，因为默认情况下，每个名称都会比它前面一个名称大 1，但 red 的值依然为 0。</font>

<h3 id="ZqrFn"><font style="color:rgb(51, 51, 51);">类型转换</font></h3>
<font style="color:rgb(51, 51, 51);">类型转换是将一个数据类型的值转换为另一种数据类型的值。</font>

<font style="color:rgb(51, 51, 51);">C++ 中有四种类型转换：静态转换、动态转换、常量转换和重新解释转换。</font>

<h3 id="0c45fb00"><font style="color:rgb(51, 51, 51);">静态转换（Static_Cast）</font></h3>
<font style="color:rgb(51, 51, 51);">静态转换是将一种数据类型的值强制转换为另一种数据类型的值。</font>

<font style="color:rgb(51, 51, 51);">静态转换通常用于比较类型相似的对象之间的转换，例如将 int 类型转换为 float 类型。</font>

<font style="color:rgb(51, 51, 51);">静态转换不进行任何运行时类型检查，因此可能会导致运行时错误。</font>

<font style="color:rgb(51, 51, 51);">格式：新的数据类型    新变量名称   =  static_cast<要转成的新类型>( 要转的变量名称 )</font>

```cpp
int i = 10;
float f = static_cast<float>(i); // 静态将int类型转换为float类型
```

<h3 id="a90c4906"><font style="color:rgb(51, 51, 51);">动态转换（Dynamic_Cast）</font></h3>
<font style="color:rgb(51, 51, 51);">动态转换通常用于将一个基</font>**<font style="color:rgb(51, 51, 51);">类指针或引用转换为派生类指针或引用</font>**<font style="color:rgb(51, 51, 51);">。动态转换在运行时进行类型检查，如果不能进行转换则返回空指针或引发异常。</font>

```cpp
class Base {};
class Derived : public Base {};
Base* ptr_base = new Derived;
Derived* ptr_derived = dynamic_cast<Derived*>(ptr_base); // 将基类指针转换为派生类指针
```

<h3 id="b1a4a701"><font style="color:rgb(51, 51, 51);">常量转换（Const_Cast）</font></h3>
<font style="color:rgb(51, 51, 51);">常量转换用于将 const 类型的对象转换为非 const 类型的对象。</font>

<font style="color:rgb(51, 51, 51);">常量转换只能用于转换掉 const 属性，不能改变对象的类型。</font>

```cpp
const int i = 10;
int& r = const_cast<int&>(i); // 常量转换，将const int转换为int
```

<h3 id="c2597173"><font style="color:rgb(51, 51, 51);">重新解释转换（Reinterpret Cast）</font></h3>
<font style="color:rgb(51, 51, 51);">重新解释转换将一个数据类型的值重新解释为另一个数据类型的值，通常用于在不同的数据类型之间进行转换。</font>

<font style="color:rgb(51, 51, 51);">重新解释转换不进行任何类型检查，因此可能会导致未定义的行为。</font>

```cpp
inti = 10; 
floatf = reinterpret_cast<float&>(i); // 重新解释将int类型转换为float类型
```

<h1 id="58f49729">C++ 变量类型</h1>
<font style="color:rgb(51, 51, 51);">变量其实只不过是程序可操作的存储区的名称。</font>

<font style="color:rgb(51, 51, 51);">在 C++ 中，有多种变量类型可用于存储不同种类的数据。</font>

<font style="color:rgb(51, 51, 51);">C++ 中每个变量都有指定的类型，类型决定了变量存储的大小和布局，该范围内的值都可以存储在内存中，运算符可应用于变量上。</font>

<font style="color:rgb(51, 51, 51);">变量的名称可以由字母、数字和下划线字符组成。它必须以字母或下划线开头。</font>

<font style="color:rgb(51, 51, 51);">大写字母和小写字母是不同的，因为 C++ 是大小写敏感的。</font>

<font style="color:rgb(51, 51, 51);">基于前一章讲解的基本类型，有以下几种基本的变量类型，将在下一章中进行讲解：</font>

| <font style="color:rgb(255, 255, 255);">类型</font> | <font style="color:rgb(255, 255, 255);">描述</font> |
| --- | --- |
| <font style="color:rgb(51, 51, 51);">bool</font> | <font style="color:rgb(51, 51, 51);">布尔类型，存储值 true 或 false，占用 1 个字节。</font> |
| <font style="color:rgb(51, 51, 51);">char</font> | <font style="color:rgb(51, 51, 51);">字符类型，用于存储 ASCII 字符，通常占用 1 个字节。</font> |
| <font style="color:rgb(51, 51, 51);">int</font> | <font style="color:rgb(51, 51, 51);">整数类型，通常用于存储普通整数，通常占用 4 个字节。</font> |
| <font style="color:rgb(51, 51, 51);">float</font> | <font style="color:rgb(51, 51, 51);">单精度浮点值，用于存储单精度浮点数。单精度是这样的格式，1 位符号，8 位指数，23 位小数，通常占用4个字节。</font><br/>![](https://cdn.nlark.com/yuque/0/2024/png/43034535/1732692520797-0ffa52bb-bd2b-4223-bc2a-825142fc8461.png) |
| <font style="color:rgb(51, 51, 51);">double</font> | <font style="color:rgb(51, 51, 51);">双精度浮点值，用于存储双精度浮点数。双精度是 1 位符号，11 位指数，52 位小数，通常占用 8 个字节。</font><br/>![](https://cdn.nlark.com/yuque/0/2024/png/43034535/1732692530565-c4146716-3be5-486d-bd33-e0ef7a3818f8.png) |
| <font style="color:rgb(51, 51, 51);">void</font> | <font style="color:rgb(51, 51, 51);">表示类型的缺失。</font> |
| <font style="color:rgb(51, 51, 51);">wchar_t</font> | <font style="color:rgb(51, 51, 51);">宽字符类型，用于存储更大范围的字符，通常占用 2 个或 4 个字节。</font> |


<font style="color:rgb(51, 51, 51);">C++ 也允许定义各种其他类型的变量，比如</font>**<font style="color:rgb(51, 51, 51);">枚举、指针、数组、引用、数据结构、类</font>**<font style="color:rgb(51, 51, 51);">等等，这将会在后续的章节中进行讲解。</font>

1. <font style="color:rgb(51, 51, 51);">整数类型（Integer Types）：</font>
    - `<font style="color:rgb(51, 51, 51);">int</font>`<font style="color:rgb(51, 51, 51);">：用于表示整数，通常占用4个字节。</font>
    - `<font style="color:rgb(51, 51, 51);">short</font>`<font style="color:rgb(51, 51, 51);">：用于表示短整数，通常占用2个字节。</font>
    - `<font style="color:rgb(51, 51, 51);">long</font>`<font style="color:rgb(51, 51, 51);">：用于表示长整数，通常占用4个字节。</font>
    - `<font style="color:rgb(51, 51, 51);">long long</font>`<font style="color:rgb(51, 51, 51);">：用于表示更长的整数，通常占用8个字节。</font>
2. <font style="color:rgb(51, 51, 51);">浮点类型（Floating-Point Types）：</font>
    - `<font style="color:rgb(51, 51, 51);">float</font>`<font style="color:rgb(51, 51, 51);">：用于表示单精度浮点数，通常占用4个字节。</font>
    - `<font style="color:rgb(51, 51, 51);">double</font>`<font style="color:rgb(51, 51, 51);">：用于表示双精度浮点数，通常占用8个字节。</font>
    - `<font style="color:rgb(51, 51, 51);">long double</font>`<font style="color:rgb(51, 51, 51);">：用于表示更高精度的浮点数，占用字节数可以根据实现而变化。</font>
3. <font style="color:rgb(51, 51, 51);">字符类型（Character Types）：</font>
    - `<font style="color:rgb(51, 51, 51);">char</font>`<font style="color:rgb(51, 51, 51);">：用于表示字符，通常占用1个字节。</font>
    - `<font style="color:rgb(51, 51, 51);">wchar_t</font>`<font style="color:rgb(51, 51, 51);">：用于表示宽字符，通常占用2或4个字节。</font>
    - `<font style="color:rgb(51, 51, 51);">char16_t</font>`<font style="color:rgb(51, 51, 51);">：用于表示16位Unicode字符，占用2个字节。</font>
    - `<font style="color:rgb(51, 51, 51);">char32_t</font>`<font style="color:rgb(51, 51, 51);">：用于表示32位Unicode字符，占用4个字节。</font>
4. <font style="color:rgb(51, 51, 51);">布尔类型（Boolean Type）：</font>
    - `<font style="color:rgb(51, 51, 51);">bool</font>`<font style="color:rgb(51, 51, 51);">：用于表示布尔值，只能取</font>`<font style="color:rgb(51, 51, 51);">true</font>`<font style="color:rgb(51, 51, 51);">或</font>`<font style="color:rgb(51, 51, 51);">false</font>`<font style="color:rgb(51, 51, 51);">。</font>
5. <font style="color:rgb(51, 51, 51);">枚举类型（Enumeration Types）：</font>
    - `<font style="color:rgb(51, 51, 51);">enum</font>`<font style="color:rgb(51, 51, 51);">：用于定义一组命名的整数常量。</font>
6. <font style="color:rgb(51, 51, 51);">指针类型（Pointer Types）：</font>
    - `<font style="color:rgb(51, 51, 51);">type*</font>`<font style="color:rgb(51, 51, 51);">：用于表示指向类型为</font>`<font style="color:rgb(51, 51, 51);">type</font>`<font style="color:rgb(51, 51, 51);">的对象的指针。</font>
7. <font style="color:rgb(51, 51, 51);">数组类型（Array Types）：</font>
    - `<font style="color:rgb(51, 51, 51);">type[]</font>`<font style="color:rgb(51, 51, 51);">或</font>`<font style="color:rgb(51, 51, 51);">type[size]</font>`<font style="color:rgb(51, 51, 51);">：用于表示具有相同类型的元素组成的数组。</font>
8. <font style="color:rgb(51, 51, 51);">结构体类型（Structure Types）：</font>
    - `<font style="color:rgb(51, 51, 51);">struct</font>`<font style="color:rgb(51, 51, 51);">：用于定义包含多个不同类型成员的结构。</font>
9. <font style="color:rgb(51, 51, 51);">类类型（Class Types）：</font>
    - `<font style="color:rgb(51, 51, 51);">class</font>`<font style="color:rgb(51, 51, 51);">：用于定义具有属性和方法的自定义类型。</font>
10. <font style="color:rgb(51, 51, 51);">共用体类型（Union Types）：</font>
    - `<font style="color:rgb(51, 51, 51);">union</font>`<font style="color:rgb(51, 51, 51);">：用于定义一种特殊的数据类型，它可以在相同的内存位置存储不同的数据类型。</font>

在 C++ 中，类型的长度（即占用的字节数）取决于编译器和计算机架构，然而，C++ 标准规定了不同整数类型的最小范围，而不是具体的字节数，这是为了确保代码在不同的系统上都能正确运行。

请注意，以上类型的范围只是 C++ 标准规定的最小要求，实际上，许多系统上这些类型可能占用更多的字节，例如，很多现代计算机上 int 通常占用 4 字节，而 long 可能占用 8 字节。

<font style="color:rgb(51, 51, 51);">下面我们将讲解如何定义、声明和使用各种类型的变量。</font>

<h2 id="77eb2257"><font style="color:rgb(51, 51, 51);">C++ 中的变量定义</font></h2>
<font style="color:rgb(51, 51, 51);">变量定义就是告诉编译器在何处创建变量的存储，以及如何创建变量的存储。</font>

![](https://cdn.nlark.com/yuque/0/2024/png/43034535/1732693230455-db0e2862-0140-4d8d-8a04-73434b78d95c.png)

<font style="color:rgb(51, 51, 51);">变量定义指定一个数据类型，并包含了该类型的一个或多个变量的列表，如下所示：</font>

```cpp
type variable_list;
```

<font style="color:rgb(51, 51, 51);">在这里，</font>**<font style="color:rgb(51, 51, 51);">type</font>**<font style="color:rgb(51, 51, 51);"> </font><font style="color:rgb(51, 51, 51);">必须是一个有效的 C++ 数据类型，可以是 char、wchar_t、int、float、double、bool 或任何用户自定义的对象，</font>**<font style="color:rgb(51, 51, 51);">variable_list</font>**<font style="color:rgb(51, 51, 51);"> </font><font style="color:rgb(51, 51, 51);">可以由一个或多个标识符名称组成，多个标识符之间用逗号分隔。下面列出几个有效的声明：</font>

```cpp
int    i, j, k;
char   c, ch;
float  f, salary;
double d;
```

<font style="color:rgb(51, 51, 51);">行</font><font style="color:rgb(51, 51, 51);"> </font>**<font style="color:rgb(51, 51, 51);">int i, j, k;</font>**<font style="color:rgb(51, 51, 51);"> </font><font style="color:rgb(51, 51, 51);">声明并定义了变量 i、j 和 k，这指示编译器创建类型为 int 的名为 i、j、k 的变量。</font>

<font style="color:rgb(51, 51, 51);">变量可以在声明的时候被初始化（指定一个初始值）。初始化器由一个等号，后跟一个常量表达式组成，如下所示：</font>

```cpp
typevariable_name = value;
```

<font style="color:rgb(51, 51, 51);">下面列举几个实例：</font>

```cpp
extern int d = 3, f = 5;    // d 和 f 的声明 
int d = 3, f = 5;           // 定义并初始化 d 和 f
byte z = 22;                // 定义并初始化 z
char x = 'x';               // 变量 x 的值为 'x'
```

<font style="color:rgb(51, 51, 51);">不带初始化的定义：带有静态存储持续时间的变量会被隐式初始化为 NULL（所有字节的值都是 0），其他所有变量的初始值是未定义的。</font>

<h2 id="0c2a1ec4"><font style="color:rgb(51, 51, 51);">C++ 中的变量声明</font></h2>
<font style="color:rgb(51, 51, 51);">变量声明向编译器保证变量以给定的类型和名称存在，这样编译器在不需要知道变量完整细节的情况下也能继续进一步的编译。变量声明只在编译时有它的意义，在程序连接时编译器需要实际的变量声明。</font>

<font style="color:rgb(51, 51, 51);">当您使用多个文件且只在其中一个文件中定义变量时（定义变量的文件在程序连接时是可用的），变量声明就显得非常有用。您可以使用</font><font style="color:rgb(51, 51, 51);"> </font>**<font style="color:rgb(51, 51, 51);">extern</font>**<font style="color:rgb(51, 51, 51);"> </font><font style="color:rgb(51, 51, 51);">关键字在任何地方声明一个变量。虽然您可以在 C++ 程序中多次声明一个变量，但变量只能在某个文件、函数或代码块中被定义一次。</font>

<h2 id="jJVMz"><font style="color:rgb(51, 51, 51);">实例</font></h2>
<font style="color:rgb(51, 51, 51);">尝试下面的实例，其中，变量在头部就已经被声明，但它们是在主函数内被定义和初始化的：</font>

<font style="color:rgb(51, 51, 51);">endl 是换行符号</font>

```cpp
#include <iostream>
using namespace std;
 
// 变量声明
extern int a, b;
extern int c;
extern float f;
  
int main ()
{
  // 变量定义
  int a, b;
  int c;
  float f;
 
  // 实际初始化
  a = 10;
  b = 20;
  c = a + b;
 
  cout << c << endl ;
 
  f = 70.0/3.0;
  cout << f << endl ;
 
  return 0;
}
```

<font style="color:rgb(51, 51, 51);">当上面的代码被编译和执行时，它会产生下列结果：</font>

```plain
30
23.3333
```

<font style="color:rgb(51, 51, 51);">同样的，在函数声明时，提供一个函数名，而函数的实际定义则可以在任何地方进行。例如：</font>

```cpp
// 函数声明
int func();

int main()
{
    // 函数调用
    int i = func();
}

// 函数定义
int func()
{
    return 0;
}
```

<h2 id="6a42a615"><font style="color:rgb(51, 51, 51);">C++ 中的左值（Lvalues）和右值（Rvalues）</font></h2>
<font style="color:rgb(51, 51, 51);">C++ 中有两种类型的表达式：</font>

+ **<font style="color:rgb(51, 51, 51);">左值（lvalue）：</font>**<font style="color:rgb(51, 51, 51);">指向内存位置的表达式被称为左值（lvalue）表达式。左值可以出现在赋值号的左边或右边。</font>
+ **<font style="color:rgb(51, 51, 51);">右值（rvalue）：</font>**<font style="color:rgb(51, 51, 51);">术语右值（rvalue）指的是存储在内存中某些地址的数值。右值是不能对其进行赋值的表达式，也就是说，右值可以出现在赋值号的右边，但不能出现在赋值号的左边。</font>

<font style="color:rgb(51, 51, 51);">变量是左值，因此可以出现在赋值号的左边。数值型的字面值是右值，因此不能被赋值，不能出现在赋值号的左边。下面是一个有效的语句：</font>

```cpp
int g = 20;
```

<font style="color:rgb(51, 51, 51);">但是下面这个就不是一个有效的语句，会生成编译时错误：</font>

```cpp
10 = 20;
```

<h1 id="a0a8ec8c">C++ 变量作用域</h1>
_<font style="color:rgb(51, 51, 51);">一般来说有三个地方可以定义变量：</font>_

+ _<font style="color:rgb(51, 51, 51);">在函数或一个代码块内部声明的变量，称为</font>__**<font style="color:rgb(51, 51, 51);">局部变量</font>**__<font style="color:rgb(51, 51, 51);">。</font>_
+ _<font style="color:rgb(51, 51, 51);">在函数参数的定义中声明的变量，称为</font>__**<font style="color:rgb(51, 51, 51);">形式参数</font>**__<font style="color:rgb(51, 51, 51);">。</font>_
+ _<font style="color:rgb(51, 51, 51);">在所有函数外部声明的变量，称为</font>__**<font style="color:rgb(51, 51, 51);">全局变量</font>**__<font style="color:rgb(51, 51, 51);">。</font>_

_<font style="color:rgb(51, 51, 51);">作用域是程序的一个区域，变量的作用域可以分为以下几种：</font>_

+ _**<font style="color:rgb(51, 51, 51);">局部作用域</font>**__<font style="color:rgb(51, 51, 51);">：在函数内部声明的变量具有局部作用域，它们只能在函数内部访问。局部变量在函数每次被调用时被创建，在函数执行完后被销毁。</font>_
+ _**<font style="color:rgb(51, 51, 51);">全局作用域</font>**__<font style="color:rgb(51, 51, 51);">：在所有函数和代码块之外声明的变量具有全局作用域，它们可以被程序中的任何函数访问。全局变量在程序开始时被创建，在程序结束时被销毁。</font>_
+ _**<font style="color:rgb(51, 51, 51);">块作用域</font>**__<font style="color:rgb(51, 51, 51);">：在代码块内部声明的变量具有块作用域，它们只能在代码块内部访问。块作用域变量在代码块每次被执行时被创建，在代码块执行完后被销毁。</font>_
+ _**<font style="color:rgb(51, 51, 51);">类作用域</font>**__<font style="color:rgb(51, 51, 51);">：在类内部声明的变量具有类作用域，它们可以被类的所有成员函数访问。类作用域变量的生命周期与类的生命周期相同。</font>_

**<font style="color:rgb(51, 51, 51);">注意：</font>**<font style="color:rgb(51, 51, 51);">如果在内部作用域中声明的变量与外部作用域中的变量同名，则内部作用域中的变量将覆盖外部作用域中的变量。</font>

<h2 id="974686e1"><font style="color:rgb(51, 51, 51);">局部变量</font></h2>
<font style="color:rgb(51, 51, 51);">在函数或一个代码块内部声明的变量，称为局部变量。它们只能被函数内部或者代码块内部的语句使用。下面的实例使用了局部变量：</font>

```cpp
#include <iostream>
using namespace std;
 
int main ()
{
  // 局部变量声明
  int a, b;
  int c;
 
  // 实际初始化
  a = 10;
  b = 20;
  c = a + b;
 
  cout << c;
 
  return 0;
}
```

<h2 id="fcfffbf5"><font style="color:rgb(51, 51, 51);">全局变量</font></h2>
<font style="color:rgb(51, 51, 51);">在所有函数外部定义的变量（通常是在程序的头部），称为全局变量。全局变量的值在程序的整个生命周期内都是有效的。</font>

<font style="color:rgb(51, 51, 51);">全局变量可以被任何函数访问。也就是说，全局变量一旦声明，在整个程序中都是可用的。下面的实例使用了全局变量和局部变量：</font>

```cpp
#include <iostream>
using namespace std;
 
// 全局变量声明
int g;
 
int main ()
{
  // 局部变量声明
  int a, b;
 
  // 实际初始化
  a = 10;
  b = 20;
  g = a + b;
 
  cout << g;
 
  return 0;
}
```

<font style="color:rgb(51, 51, 51);">在程序中，局部变量和全局变量的名称可以相同，但是在函数内，局部变量的值会覆盖全局变量的值。下面是一个实例：</font>

```cpp
#include <iostream>
using namespace std;
 
// 全局变量声明
int g = 20;
 
int main ()
{
  // 局部变量声明
  int g = 10;
 
  cout << g;
 
  return 0;
}
```

<font style="color:rgb(51, 51, 51);">当上面的代码被编译和执行时，它会产生下列结果：      </font>10

<h2 id="f553f5de"><font style="color:rgb(51, 51, 51);">初始化局部变量和全局变量</font></h2>
<font style="color:rgb(51, 51, 51);">当局部变量被定义时，系统不会对其初始化，您必须自行对其初始化。定义全局变量时，系统会自动初始化为下列值：</font>

| <font style="color:rgb(255, 255, 255);">数据类型</font> | <font style="color:rgb(255, 255, 255);">初始化默认值</font> |
| --- | --- |
| <font style="color:rgb(51, 51, 51);">int</font> | <font style="color:rgb(51, 51, 51);">0</font> |
| <font style="color:rgb(51, 51, 51);">char</font> | <font style="color:rgb(51, 51, 51);">'\0'</font> |
| <font style="color:rgb(51, 51, 51);">float</font> | <font style="color:rgb(51, 51, 51);">0</font> |
| <font style="color:rgb(51, 51, 51);">double</font> | <font style="color:rgb(51, 51, 51);">0</font> |
| <font style="color:rgb(51, 51, 51);">pointer</font> | <font style="color:rgb(51, 51, 51);">NULL</font> |


<font style="color:rgb(51, 51, 51);">正确地初始化变量是一个良好的编程习惯，否则有时候程序可能会产生意想不到的结果。</font>

---

<font style="color:rgb(51, 51, 51);">块作用域指的是在代码块内部声明的变量：</font>

```cpp
#include <iostream>

int main() {
    int a = 10;
    {
        int a = 20;  // 块作用域变量
        std::cout << "块变量: " << a << std::endl;
    }
    std::cout << "外部变量: " << a << std::endl;
    return 0;
}
```

<font style="color:rgb(51, 51, 51);">以上实例中，内部的代码块中声明了一个名为 a 的变量，它与外部作用域中的变量 a 同名。内部作用域中的变量 a 将覆盖外部作用域中的变量 a，在内部作用域中访问 a 时输出的是20，而在外部作用域中访问 a 时输出的是 10。</font>

<font style="color:rgb(51, 51, 51);">当上面的代码被编译和执行时，它会产生下列结果：</font>

```plain
块变量: 20
外部变量: 10
```

<h2 id="8a5b23d4"><font style="color:rgb(51, 51, 51);">类作用域</font></h2>
<font style="color:rgb(51, 51, 51);">类作用域指的是在类内部声明的变量：</font>

```cpp
#include <iostream>

class MyClass {
public:
static int class_var;  // 类作用域变量
};

int MyClass::class_var = 30;

int main() {
    std::cout << "类变量: " << MyClass::class_var << std::endl;
    return 0;
}
```

<font style="color:rgb(51, 51, 51);">以上实例中，MyClass 类中声明了一个名为 class_var 的类作用域变量。可以使用类名和作用域解析运算符 </font>**<font style="color:rgb(51, 51, 51);background-color:rgb(236, 234, 230);">: :</font>**<font style="color:rgb(51, 51, 51);"> 来访问这个变量。在 main() 函数中访问 class_var 时输出的是 30。</font>

