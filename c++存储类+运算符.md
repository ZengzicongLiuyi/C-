# <font style="color:rgb(0, 0, 0);">C++ </font><font style="color:rgb(100, 133, 76);">存储类</font>
<font style="color:rgb(51, 51, 51);">存储类定义 C++ 程序中变量/函数的范围（可见性）和生命周期。这些说明符放置在它们所修饰的类型之前。下面列出 C++ 程序中可用的存储类：</font>

+ **<font style="color:rgb(51, 51, 51);">auto</font>**<font style="color:rgb(51, 51, 51);">：这是默认的存储类说明符，通常可以省略不写。auto 指定的变量具有自动存储期，即它们的生命周期仅限于定义它们的块（block）。auto 变量通常在栈上分配。</font>
+ **<font style="color:rgb(51, 51, 51);">register</font>**<font style="color:rgb(51, 51, 51);">：用于建议编译器将变量存储在CPU寄存器中以提高访问速度。在 C++11 及以后的版本中，register 已经是一个废弃的特性，不再具有实际作用。</font>
+ **<font style="color:rgb(51, 51, 51);">static</font>**<font style="color:rgb(51, 51, 51);">：用于定义具有静态存储期的变量或函数，它们的生命周期贯穿整个程序的运行期。在函数内部，static变量的值在函数调用之间保持不变。在文件内部或全局作用域，static变量具有内部链接，只能在定义它们的文件中访问。</font>
+ **<font style="color:rgb(51, 51, 51);">extern</font>**<font style="color:rgb(51, 51, 51);">：用于声明具有外部链接的变量或函数，它们可以在多个文件之间共享。默认情况下，全局变量和函数具有 extern 存储类。在一个文件中使用extern声明另一个文件中定义的全局变量或函数，可以实现跨文件共享。</font>
+ **<font style="color:rgb(51, 51, 51);">mutable (C++11)</font>**<font style="color:rgb(51, 51, 51);">：用于修饰类中的成员变量，允许在const成员函数中修改这些变量的值。通常用于缓存或计数器等需要在const上下文中修改的数据。</font>
+ **<font style="color:rgb(51, 51, 51);">thread_local (C++11)</font>**<font style="color:rgb(51, 51, 51);">：用于定义具有线程局部存储期的变量，每个线程都有自己的独立副本。线程局部变量的生命周期与线程的生命周期相同。</font>

<font style="color:rgb(51, 51, 51);">从 C++ 17 开始，auto 关键字不再是 C++ 存储类说明符，且 register 关键字被弃用。</font>

<font style="color:rgb(51, 51, 51);">中的存储类说明符为程序员提供了控制变量和函数生命周期及可见性的手段。</font>

<font style="color:rgb(51, 51, 51);">合理使用存储类说明符可以提高程序的可维护性和性能。</font>

<font style="color:rgb(51, 51, 51);">从 C++11 开始，register 已经失去了原有的作用，而 mutable 和 thread_local 则是新引入的特性，用于解决特定的编程问题。</font>

<font style="color:rgb(51, 51, 51);">下面是一个展示不同存储类说明符的实例：</font>

```cpp
#include <iostream>

// 全局变量，具有外部链接，默认存储类为extern
int globalVar;

void function() {
    // 局部变量，具有自动存储期，默认存储类为auto
    auto int localVar = 10;

    // 静态变量，具有静态存储期，生命周期贯穿整个程序
    static int staticVar = 20;

    const int constVar = 30; // const变量默认具有static存储期

    // 尝试修改const变量，编译错误
    // constVar = 40;

    // mutable成员变量，可以在const成员函数中修改
    class MyClass {
    public:
        mutable int mutableVar;

        void constMemberFunc() const {
            mutableVar = 50; // 允许修改mutable成员变量
        }
    };

    // 线程局部变量，每个线程有自己的独立副本
    thread_local int threadVar = 60;
}

int main() {
    extern int externalVar; // 声明具有外部链接的变量

    function();

    return 0;
}
```

## <font style="color:rgb(51, 51, 51);">auto 存储类</font>
<font style="color:rgb(51, 51, 51);">自 C++ 11 以来，</font>**<font style="color:rgb(51, 51, 51);">auto</font>**<font style="color:rgb(51, 51, 51);"> </font><font style="color:rgb(51, 51, 51);">关键字用于两种情况：声明变量时根据初始化表达式自动推断该变量的类型、声明函数时函数返回值的占位符。</font>

<font style="color:rgb(51, 51, 51);">C++98 标准中 auto 关键字用于自动变量的声明，但由于使用极少且多余，在 C++17 中已删除这一用法。</font>

<font style="color:rgb(51, 51, 51);">根据初始化表达式自动推断被声明的变量的类型，如：</font>

```cpp
auto f=3.14;      //double
auto s("hello");  //const char*
auto z = new auto(9); // int*
auto x1 = 5, x2 = 5.0, x3='r';//错误，必须是初始化为同一类型
```

## <font style="color:rgb(51, 51, 51);">register 存储类</font>
<font style="color:rgb(51, 51, 51);">register 是一种存储类（storage class），用于声明变量，并提示编译器将这些变量存储在寄存器中，以便快速访问。</font>

<font style="color:rgb(51, 51, 51);">使用 register 关键字可以提高程序的执行速度，因为它减少了对内存的访问次数。</font>

<font style="color:rgb(51, 51, 51);">然而，需要注意的是，register 存储类只是一种提示，编译器可以忽略它，因为现代的编译器通常会自动优化代码，选择合适的存储位置。</font>

**<font style="color:rgb(51, 51, 51);">语法格式：</font>**

```cpp
register data_type variable_name;
```

+ `<font style="color:rgb(51, 51, 51);">register</font>`<font style="color:rgb(51, 51, 51);"> </font><font style="color:rgb(51, 51, 51);">是存储类的关键字，用于提示编译器将变量存储在寄存器中。</font>
+ `<font style="color:rgb(51, 51, 51);">data_type</font>`<font style="color:rgb(51, 51, 51);"> </font><font style="color:rgb(51, 51, 51);">是变量的数据类型，可以是任何合法的 C++ 数据类型。</font>
+ `<font style="color:rgb(51, 51, 51);">variable_name</font>`<font style="color:rgb(51, 51, 51);"> </font><font style="color:rgb(51, 51, 51);">是变量的名称。</font>

```cpp
void loop() {
    register int i;
    for (i = 0; i < 1000; ++i) {
        // 循环体
    }
}
```

<font style="color:rgb(51, 51, 51);">register 存储类用于提示编译器将变量存储在寄存器中，以便提高访问速度。然而，由于现代编译器的自动优化能力，使用 register 关键字并不是必需的，而且在实践中很少使用。</font>

<font style="color:rgb(51, 51, 51);">在 C++11 标准中，register 关键字不再是一个存储类说明符，而是一个废弃的特性。这意味着在 C++11 及以后的版本中，使用 register 关键字将不会对程序产生任何影响。</font>

<font style="color:rgb(51, 51, 51);">在 C++ 中，可以使用引用或指针来提高访问速度，尤其是在处理大型数据结构时。</font>

## <font style="color:rgb(51, 51, 51);">static 存储类</font>
**<font style="color:rgb(51, 51, 51);">static</font>**<font style="color:rgb(51, 51, 51);"> </font><font style="color:rgb(51, 51, 51);">存储类指示编译器在程序的生命周期内保持局部变量的存在，而不需要在每次它进入和离开作用域时进行创建和销毁。因此，使用 static 修饰局部变量可以在函数调用之间保持局部变量的值。</font>

<font style="color:rgb(51, 51, 51);">static 修饰符也可以应用于全局变量。当 static 修饰全局变量时，会使变量的作用域限制在声明它的文件内。</font>

<font style="color:rgb(51, 51, 51);">在 C++ 中，当 static 用在类数据成员上时，会导致仅有一个该成员的副本被类的所有对象共享。</font>

```cpp
#include <iostream>
 
// 函数声明 
void func(void);
 
static int count = 10; /* 全局变量 */
 
int main()
{
    while(count--)
    {
       func();
    }
    return 0;
}
// 函数定义
void func( void )
{
    static int i = 5; // 局部静态变量
    i++;
    std::cout << "变量 i 为 " << i ;
    std::cout << " , 变量 count 为 " << count << std::endl;
}
```

<font style="color:rgb(51, 51, 51);">当上面的代码被编译和执行时，它会产生下列结果：</font>

```plain
变量 i 为 6 , 变量 count 为 9
变量 i 为 7 , 变量 count 为 8
变量 i 为 8 , 变量 count 为 7
变量 i 为 9 , 变量 count 为 6
变量 i 为 10 , 变量 count 为 5
变量 i 为 11 , 变量 count 为 4
变量 i 为 12 , 变量 count 为 3
变量 i 为 13 , 变量 count 为 2
变量 i 为 14 , 变量 count 为 1
变量 i 为 15 , 变量 count 为 0
```

## <font style="color:rgb(51, 51, 51);">extern 存储类</font>
**<font style="color:rgb(51, 51, 51);">extern</font>**<font style="color:rgb(51, 51, 51);"> </font><font style="color:rgb(51, 51, 51);">存储类用于提供一个全局变量的引用，全局变量对所有的程序文件都是可见的。当您使用 'extern' 时，对于无法初始化的变量，会把变量名指向一个之前定义过的存储位置。</font>

<font style="color:rgb(51, 51, 51);">当您有多个文件且定义了一个可以在其他文件中使用的全局变量或函数时，可以在其他文件中使用</font><font style="color:rgb(51, 51, 51);"> </font>_<font style="color:rgb(51, 51, 51);">extern</font>_<font style="color:rgb(51, 51, 51);"> </font><font style="color:rgb(51, 51, 51);">来得到已定义的变量或函数的引用。可以这么理解，</font>_<font style="color:rgb(51, 51, 51);">extern</font>_<font style="color:rgb(51, 51, 51);"> </font><font style="color:rgb(51, 51, 51);">是用来在另一个文件中声明一个全局变量或函数。</font>

<font style="color:rgb(51, 51, 51);">extern 修饰符通常用于当有两个或多个文件共享相同的全局变量或函数的时候，如下所示：</font>

<font style="color:rgb(51, 51, 51);">第一个文件：main.cpp</font>

```cpp
#include <iostream>

int count ;
extern void write_extern();

int main()
{
    count = 5;
    write_extern();
}
```

<font style="color:rgb(51, 51, 51);">第二个文件：support.cpp</font>

```cpp
#include <iostream>
 
extern int count;
 
void write_extern(void)
{
   std::cout << "Count is " << count << std::endl;
}
```

<font style="color:rgb(51, 51, 51);">在这里，第二个文件中的</font><font style="color:rgb(51, 51, 51);"> </font>_<font style="color:rgb(51, 51, 51);">extern</font>_<font style="color:rgb(51, 51, 51);"> </font><font style="color:rgb(51, 51, 51);">关键字用于声明已经在第一个文件 main.cpp 中定义的 count。现在 ，编译这两个文件，如下所示：</font>

$ g++ main.cpp support.cpp -o write

<font style="color:rgb(51, 51, 51);">这会产生</font><font style="color:rgb(51, 51, 51);"> </font>**<font style="color:rgb(51, 51, 51);">write</font>**<font style="color:rgb(51, 51, 51);"> </font><font style="color:rgb(51, 51, 51);">可执行程序，尝试执行</font><font style="color:rgb(51, 51, 51);"> </font>**<font style="color:rgb(51, 51, 51);">write</font>**<font style="color:rgb(51, 51, 51);">，它会产生下列结果：</font>

```plain
$ ./write
Count is 5
```

## <font style="color:rgb(51, 51, 51);">mutable 存储类</font>
<font style="color:rgb(51, 51, 51);">mutable 是一个关键字，用于修饰类的成员变量，使其能够在 const 成员函数中被修改。通常情况下，const 成员函数不能修改对象的状态，但如果某个成员变量被声明为 mutable，则可以在 const 函数中对其进行修改。</font>

**<font style="color:rgb(51, 51, 51);">特点：</font>**

+ **<font style="color:rgb(51, 51, 51);">允许修改</font>**<font style="color:rgb(51, 51, 51);">：</font>`<font style="color:rgb(51, 51, 51);">mutable</font>`<font style="color:rgb(51, 51, 51);"> </font><font style="color:rgb(51, 51, 51);">成员变量可以在</font><font style="color:rgb(51, 51, 51);"> </font>`<font style="color:rgb(51, 51, 51);">const</font>`<font style="color:rgb(51, 51, 51);"> </font><font style="color:rgb(51, 51, 51);">成员函数内被改变。</font>
+ **<font style="color:rgb(51, 51, 51);">设计目的</font>**<font style="color:rgb(51, 51, 51);">：通常用于需要在不改变对象外部状态的情况下进行状态管理的场景，比如缓存、延迟计算等</font>

```cpp
#include <iostream>

class Example {
public:
    Example() : value(0), cachedValue(0) {}

    // 常量成员函数
    int getValue() const {
        return value; // 读取常量成员
    }

    // 修改 mutable 成员
    void increment() {
        ++value;
        cachedValue = value * 2; // 修改 mutable 成员
    }

    int getCachedValue() const {
        return cachedValue; // 读取 mutable 成员
    }

private:
    int value;                 // 常规成员，不能在 const 函数中修改
    mutable int cachedValue;   // 可修改成员，可以在 const 函数中修改
};

int main() {
    const Example ex;
    // ex.increment(); // 错误：无法在 const 对象上调用非 const 函数
    // ex.value = 10;  // 错误：无法修改 const 对象的成员

    std::cout << "Value: " << ex.getValue() << std::endl;
    std::cout << "Cached Value: " << ex.getCachedValue() << std::endl; // 输出为 0

    return 0;
}
```

**<font style="color:rgb(51, 51, 51);">适用场景：</font>**

+ **<font style="color:rgb(51, 51, 51);">缓存</font>**<font style="color:rgb(51, 51, 51);">：在</font><font style="color:rgb(51, 51, 51);"> </font>`<font style="color:rgb(51, 51, 51);">const</font>`<font style="color:rgb(51, 51, 51);"> </font><font style="color:rgb(51, 51, 51);">函数中计算并缓存结果，而不影响对象的外部状态。</font>
+ **<font style="color:rgb(51, 51, 51);">状态跟踪</font>**<font style="color:rgb(51, 51, 51);">：如日志计数器，跟踪调用次数等信息，避免对类的逻辑进行侵入式修改。</font>

**<font style="color:rgb(51, 51, 51);">注意事项：</font>**

+ `<font style="color:rgb(51, 51, 51);">mutable</font>`<font style="color:rgb(51, 51, 51);"> </font><font style="color:rgb(51, 51, 51);">变量的使用应谨慎，以免导致意外的状态变化，影响代码的可读性和可维护性。</font>
+ `<font style="color:rgb(51, 51, 51);">mutable</font>`<font style="color:rgb(51, 51, 51);"> </font><font style="color:rgb(51, 51, 51);">适用于需要在</font><font style="color:rgb(51, 51, 51);"> </font>`<font style="color:rgb(51, 51, 51);">const</font>`<font style="color:rgb(51, 51, 51);"> </font><font style="color:rgb(51, 51, 51);">环境中更改状态的特定情况，而不是普遍的设计模式。</font>

## <font style="color:rgb(51, 51, 51);">thread_local 存储类</font>
<font style="color:rgb(51, 51, 51);">thread_local 是 C++11 引入的一种存储类，用于在多线程环境中管理线程特有的变量。</font>

<font style="color:rgb(51, 51, 51);">使用 thread_local 修饰的变量在每个线程中都有独立的实例，因此每个线程对该变量的操作不会影响其他线程。</font>

+ **<font style="color:rgb(51, 51, 51);">独立性</font>**<font style="color:rgb(51, 51, 51);">：每个线程都有自己独立的变量副本，不同线程之间的读写操作互不干扰。</font>
+ **<font style="color:rgb(51, 51, 51);">生命周期</font>**<font style="color:rgb(51, 51, 51);">：</font>`<font style="color:rgb(51, 51, 51);">thread_local</font>`<font style="color:rgb(51, 51, 51);"> </font><font style="color:rgb(51, 51, 51);">变量在其线程结束时自动销毁。</font>
+ **<font style="color:rgb(51, 51, 51);">初始化</font>**<font style="color:rgb(51, 51, 51);">：</font>`<font style="color:rgb(51, 51, 51);">thread_local</font>`<font style="color:rgb(51, 51, 51);"> </font><font style="color:rgb(51, 51, 51);">变量可以进行静态初始化或动态初始化，支持在声明时初始化。</font>

<font style="color:rgb(51, 51, 51);">thread_local 适合用于需要存储线程状态、缓存或者避免数据竞争的场景，如线程池、请求上下文等。</font>

<font style="color:rgb(51, 51, 51);">以下演示了可以被声明为 thread_local 的变量：</font>

```cpp
#include <iostream>
#include <thread>
 
thread_local int threadSpecificVar = 0; // 每个线程都有自己的 threadSpecificVar
 
void threadFunction(int id) {
    threadSpecificVar = id; // 设置线程特有的变量
    std::cout << "Thread " << id << ": threadSpecificVar = " << threadSpecificVar << std::endl;
}
 
int main() {
    std::thread t1(threadFunction, 1);
    std::thread t2(threadFunction, 2);
 
    t1.join();
    t2.join();
 
    return 0;
}
```

**<font style="color:rgb(51, 51, 51);">注意事项：</font>**

+ **<font style="color:rgb(51, 51, 51);">性能</font>**<font style="color:rgb(51, 51, 51);">：由于每个线程都有独立的副本，</font>`<font style="color:rgb(51, 51, 51);">thread_local</font>`<font style="color:rgb(51, 51, 51);"> </font><font style="color:rgb(51, 51, 51);">变量的访问速度可能比全局或静态变量稍慢。</font>
+ **<font style="color:rgb(51, 51, 51);">静态存储</font>**<font style="color:rgb(51, 51, 51);">：</font>`<font style="color:rgb(51, 51, 51);">thread_local</font>`<font style="color:rgb(51, 51, 51);"> 变量的存储类型为静态存储持续时间，因此在程序整个运行期间会一直存在。</font>

# C++ 运算符
_<font style="color:rgb(51, 51, 51);">运算符是一种告诉编译器执行特定的数学或逻辑操作的符号。C++ 内置了丰富的运算符，并提供了以下类型的运算符：</font>_

+ <font style="color:rgb(51, 51, 51);">算术运算符</font>
+ <font style="color:rgb(51, 51, 51);">关系运算符</font>
+ <font style="color:rgb(51, 51, 51);">逻辑运算符</font>
+ <font style="color:rgb(51, 51, 51);">位运算符</font>
+ <font style="color:rgb(51, 51, 51);">赋值运算符</font>
+ <font style="color:rgb(51, 51, 51);">杂项运算符</font>

_<font style="color:rgb(51, 51, 51);">本章将逐一介绍算术运算符、关系运算符、逻辑运算符、位运算符、赋值运算符和其他运算符。</font>_

## <font style="color:rgb(51, 51, 51);">算术运算符</font>
<font style="color:rgb(51, 51, 51);">下表显示了 C++ 支持的算术运算符。</font>

<font style="color:rgb(51, 51, 51);">假设变量 A 的值为 10，变量 B 的值为 20，则：</font>

| <font style="color:rgb(255, 255, 255);">运算符</font> | <font style="color:rgb(255, 255, 255);">描述</font> | <font style="color:rgb(255, 255, 255);">实例</font> |
| --- | --- | --- |
| <font style="color:rgb(51, 51, 51);">+</font> | <font style="color:rgb(51, 51, 51);">把两个操作数相加</font> | <font style="color:rgb(51, 51, 51);">A + B 将得到 30</font> |
| <font style="color:rgb(51, 51, 51);">-</font> | <font style="color:rgb(51, 51, 51);">从第一个操作数中减去第二个操作数</font> | <font style="color:rgb(51, 51, 51);">A - B 将得到 -10</font> |
| <font style="color:rgb(51, 51, 51);">*</font> | <font style="color:rgb(51, 51, 51);">把两个操作数相乘</font> | <font style="color:rgb(51, 51, 51);">A * B 将得到 200</font> |
| <font style="color:rgb(51, 51, 51);">/</font> | <font style="color:rgb(51, 51, 51);">分子除以分母</font> | <font style="color:rgb(51, 51, 51);">B / A 将得到 2</font> |
| <font style="color:rgb(51, 51, 51);">%</font> | <font style="color:rgb(51, 51, 51);">取模运算符，整除后的余数</font> | <font style="color:rgb(51, 51, 51);">B % A 将得到 0</font> |
| <font style="color:rgb(51, 51, 51);">++</font> | [<font style="color:rgb(51, 51, 51);">自增运算符</font>](https://www.runoob.com/cplusplus/cpp-increment-decrement-operators.html)<br/><font style="color:rgb(51, 51, 51);">，整数值增加 1</font> | <font style="color:rgb(51, 51, 51);">A++ 将得到 11</font> |
| <font style="color:rgb(51, 51, 51);">--</font> | [<font style="color:rgb(51, 51, 51);">自减运算符</font>](https://www.runoob.com/cplusplus/cpp-increment-decrement-operators.html)<br/><font style="color:rgb(51, 51, 51);">，整数值减少 1</font> | <font style="color:rgb(51, 51, 51);">A-- 将得到 9</font> |


### <font style="color:rgb(51, 51, 51);">实例</font>
<font style="color:rgb(51, 51, 51);">请看下面的实例，了解 C++ 中可用的算术运算符。</font>

<font style="color:rgb(51, 51, 51);">复制并粘贴下面的 C++ 程序到 test.cpp 文件中，编译并运行程序。</font>

```cpp
#include <iostream>
using namespace std;
 
int main()
{
   int a = 21;
   int b = 10;
   int c;
 
   c = a + b;
   cout << "Line 1 - c 的值是 " << c << endl ;
   c = a - b;
   cout << "Line 2 - c 的值是 " << c << endl ;
   c = a * b;
   cout << "Line 3 - c 的值是 " << c << endl ;
   c = a / b;
   cout << "Line 4 - c 的值是 " << c << endl ;
   c = a % b;
   cout << "Line 5 - c 的值是 " << c << endl ;
 
   int d = 10;   //  测试自增、自减
   c = d++;
   cout << "Line 6 - c 的值是 " << c << endl ;
 
   d = 10;    // 重新赋值
   c = d--;
   cout << "Line 7 - c 的值是 " << c << endl ;
   return 0;
}
```

<font style="color:rgb(51, 51, 51);">当上面的代码被编译和执行时，它会产生以下结果：</font>

```plain
Line 1 - c 的值是 31
Line 2 - c 的值是 11
Line 3 - c 的值是 210
Line 4 - c 的值是 2
Line 5 - c 的值是 1
Line 6 - c 的值是 10
Line 7 - c 的值是 10
```

## <font style="color:rgb(51, 51, 51);">关系运算符</font>
<font style="color:rgb(51, 51, 51);">下表显示了 C++ 支持的关系运算符。</font>

<font style="color:rgb(51, 51, 51);">假设变量 A 的值为 10，变量 B 的值为 20，则：</font>

| <font style="color:rgb(255, 255, 255);">运算符</font> | <font style="color:rgb(255, 255, 255);">描述</font> | <font style="color:rgb(255, 255, 255);">实例</font> |
| --- | --- | --- |
| <font style="color:rgb(51, 51, 51);">==</font> | <font style="color:rgb(51, 51, 51);">检查两个操作数的值是否相等，如果相等则条件为真。</font> | <font style="color:rgb(51, 51, 51);">(A == B) 不为真。</font> |
| <font style="color:rgb(51, 51, 51);">!=</font> | <font style="color:rgb(51, 51, 51);">检查两个操作数的值是否相等，如果不相等则条件为真。</font> | <font style="color:rgb(51, 51, 51);">(A != B) 为真。</font> |
| <font style="color:rgb(51, 51, 51);">></font> | <font style="color:rgb(51, 51, 51);">检查左操作数的值是否大于右操作数的值，如果是则条件为真。</font> | <font style="color:rgb(51, 51, 51);">(A > B) 不为真。</font> |
| <font style="color:rgb(51, 51, 51);"><</font> | <font style="color:rgb(51, 51, 51);">检查左操作数的值是否小于右操作数的值，如果是则条件为真。</font> | <font style="color:rgb(51, 51, 51);">(A < B) 为真。</font> |
| <font style="color:rgb(51, 51, 51);">>=</font> | <font style="color:rgb(51, 51, 51);">检查左操作数的值是否大于或等于右操作数的值，如果是则条件为真。</font> | <font style="color:rgb(51, 51, 51);">(A >= B) 不为真。</font> |
| <font style="color:rgb(51, 51, 51);"><=</font> | <font style="color:rgb(51, 51, 51);">检查左操作数的值是否小于或等于右操作数的值，如果是则条件为真。</font> | <font style="color:rgb(51, 51, 51);">(A <= B) 为真。</font> |


### <font style="color:rgb(51, 51, 51);">实例</font>
<font style="color:rgb(51, 51, 51);">请看下面的实例，了解 C++ 中可用的关系运算符。</font>

<font style="color:rgb(51, 51, 51);">复制并黏贴下面的 C++ 程序到 test.cpp 文件中，编译并运行程序。</font>

```cpp
#include <iostream>
using namespace std;
 
int main()
{
   int a = 21;
   int b = 10;
   int c ;
 
   if( a == b )
   {
      cout << "Line 1 - a 等于 b" << endl ;
   }
   else
   {
      cout << "Line 1 - a 不等于 b" << endl ;
   }
   if ( a < b )
   {
      cout << "Line 2 - a 小于 b" << endl ;
   }
   else
   {
      cout << "Line 2 - a 不小于 b" << endl ;
   }
   if ( a > b )
   {
      cout << "Line 3 - a 大于 b" << endl ;
   }
   else
   {
      cout << "Line 3 - a 不大于 b" << endl ;
   }
   /* 改变 a 和 b 的值 */
   a = 5;
   b = 20;
   if ( a <= b )
   {
      cout << "Line 4 - a 小于或等于 b" << endl ;
   }
   if ( b >= a )
   {
      cout << "Line 5 - b 大于或等于 a" << endl ;
   }
   return 0;
}
```

<font style="color:rgb(51, 51, 51);">当上面的代码被编译和执行时，它会产生以下结果：</font>

```plain
Line 1 - a 不等于 b
Line 2 - a 不小于 b
Line 3 - a 大于 b
Line 4 - a 小于或等于 b
Line 5 - b 大于或等于 a
```

## <font style="color:rgb(51, 51, 51);">逻辑运算符</font>
<font style="color:rgb(51, 51, 51);">下表显示了 C++ 支持的关系逻辑运算符。</font>

<font style="color:rgb(51, 51, 51);">假设变量 A 的值为 1，变量 B 的值为 0，则：</font>

| <font style="color:rgb(255, 255, 255);">运算符</font> | <font style="color:rgb(255, 255, 255);">描述</font> | <font style="color:rgb(255, 255, 255);">实例</font> |
| --- | --- | --- |
| <font style="color:rgb(51, 51, 51);">&&</font> | <font style="color:rgb(51, 51, 51);">称为逻辑与运算符。如果两个操作数都 true，则条件为 true。</font> | <font style="color:rgb(51, 51, 51);">(A && B) 为 false。</font> |
| <font style="color:rgb(51, 51, 51);">||</font> | <font style="color:rgb(51, 51, 51);">称为逻辑或运算符。如果两个操作数中有任意一个 true，则条件为 true。</font> | <font style="color:rgb(51, 51, 51);">(A || B) 为 true。</font> |
| <font style="color:rgb(51, 51, 51);">!</font> | <font style="color:rgb(51, 51, 51);">称为逻辑非运算符。用来逆转操作数的逻辑状态，如果条件为 true 则逻辑非运算符将使其为 false。</font> | <font style="color:rgb(51, 51, 51);">!(A && B) 为 true。</font> |


### <font style="color:rgb(51, 51, 51);">实例</font>
<font style="color:rgb(51, 51, 51);">请看下面的实例，了解 C++ 中可用的逻辑运算符。</font>

<font style="color:rgb(51, 51, 51);">复制并黏贴下面的 C++ 程序到 test.cpp 文件中，编译并运行程序。</font>

```cpp
#include <iostream>
using namespace std;
 
int main()
{
   int a = 5;
   int b = 20;
   int c ;
 
   if ( a && b )
   {
      cout << "Line 1 - 条件为真"<< endl ;
   }
   if ( a || b )
   {
      cout << "Line 2 - 条件为真"<< endl ;
   }
   /* 改变 a 和 b 的值 */
   a = 0;
   b = 10;
   if ( a && b )
   {
      cout << "Line 3 - 条件为真"<< endl ;
   }
   else
   {
      cout << "Line 4 - 条件不为真"<< endl ;
   }
   if ( !(a && b) )
   {
      cout << "Line 5 - 条件为真"<< endl ;
   }
   return 0;
}
```

<font style="color:rgb(51, 51, 51);">当上面的代码被编译和执行时，它会产生以下结果：</font>

```plain
Line 1 - 条件为真
Line 2 - 条件为真
Line 4 - 条件不为真
Line 5 - 条件为真
```

## <font style="color:rgb(51, 51, 51);">位运算符</font>
<font style="color:rgb(51, 51, 51);">位运算符作用于位，并逐位执行操作。&、 | 和 ^ 的真值表如下所示：</font>

| <font style="color:rgb(255, 255, 255);">p</font> | <font style="color:rgb(255, 255, 255);">q</font> | <font style="color:rgb(255, 255, 255);">p & q</font> | <font style="color:rgb(255, 255, 255);">p | q</font> | <font style="color:rgb(255, 255, 255);">p ^ q</font> |
| --- | --- | --- | --- | --- |
| <font style="color:rgb(51, 51, 51);">0</font> | <font style="color:rgb(51, 51, 51);">0</font> | <font style="color:rgb(51, 51, 51);">0</font> | <font style="color:rgb(51, 51, 51);">0</font> | <font style="color:rgb(51, 51, 51);">0</font> |
| <font style="color:rgb(51, 51, 51);">0</font> | <font style="color:rgb(51, 51, 51);">1</font> | <font style="color:rgb(51, 51, 51);">0</font> | <font style="color:rgb(51, 51, 51);">1</font> | <font style="color:rgb(51, 51, 51);">1</font> |
| <font style="color:rgb(51, 51, 51);">1</font> | <font style="color:rgb(51, 51, 51);">1</font> | <font style="color:rgb(51, 51, 51);">1</font> | <font style="color:rgb(51, 51, 51);">1</font> | <font style="color:rgb(51, 51, 51);">0</font> |
| <font style="color:rgb(51, 51, 51);">1</font> | <font style="color:rgb(51, 51, 51);">0</font> | <font style="color:rgb(51, 51, 51);">0</font> | <font style="color:rgb(51, 51, 51);">1</font> | <font style="color:rgb(51, 51, 51);">1</font> |


<font style="color:rgb(51, 51, 51);">假设如果 A = 60，且 B = 13，现在以二进制格式表示，它们如下所示：</font>

<font style="color:rgb(51, 51, 51);">A = 0011 1100</font>

<font style="color:rgb(51, 51, 51);">B = 0000 1101</font>

<font style="color:rgb(51, 51, 51);">-----------------</font>

<font style="color:rgb(51, 51, 51);">A&B = 0000 1100</font>

<font style="color:rgb(51, 51, 51);">A|B = 0011 1101</font>

<font style="color:rgb(51, 51, 51);">A^B = 0011 0001</font>

<font style="color:rgb(51, 51, 51);">~A  = 1100 0011</font>

<font style="color:rgb(51, 51, 51);">下表显示了 C++ 支持的位运算符。假设变量 A 的值为 60，变量 B 的值为 13，则：</font>

| <font style="color:rgb(255, 255, 255);">运算符</font> | <font style="color:rgb(255, 255, 255);">描述</font> | <font style="color:rgb(255, 255, 255);">实例</font> |
| --- | --- | --- |
| <font style="color:rgb(51, 51, 51);">&</font> | <font style="color:rgb(51, 51, 51);">按位与操作，按二进制位进行"与"运算。运算规则：</font><br/>```plain 0&0=0;    0&1=0;     1&0=0;      1&1=1; ```  | <font style="color:rgb(51, 51, 51);">(A & B) 将得到 12，即为 0000 1100</font> |
| <font style="color:rgb(51, 51, 51);">|</font> | <font style="color:rgb(51, 51, 51);">按位或运算符，按二进制位进行"或"运算。运算规则：</font><br/>```plain 0|0=0;    0|1=1;    1|0=1;     1|1=1; ```  | <font style="color:rgb(51, 51, 51);">(A | B) 将得到 61，即为 0011 1101</font> |
| <font style="color:rgb(51, 51, 51);">^</font> | <font style="color:rgb(51, 51, 51);">异或运算符，按二进制位进行"异或"运算。运算规则：</font><br/>```plain 0^0=0;    0^1=1;    1^0=1;   1^1=0; ```  | <font style="color:rgb(51, 51, 51);">(A ^ B) 将得到 49，即为 0011 0001</font> |
| <font style="color:rgb(51, 51, 51);">~</font> | <font style="color:rgb(51, 51, 51);">取反运算符，按二进制位进行"取反"运算。运算规则：</font><br/>```plain ~1=-2;    ~0=-1; ```  | <font style="color:rgb(51, 51, 51);">(~A ) 将得到 -61，即为 1100 0011，一个有符号二进制数的补码形式。</font> |
| <font style="color:rgb(51, 51, 51);"><<</font> | <font style="color:rgb(51, 51, 51);">二进制左移运算符。将一个运算对象的各二进制位全部左移若干位（左边的二进制位丢弃，右边补0）。</font> | <font style="color:rgb(51, 51, 51);">A << 2 将得到 240，即为 1111 0000</font> |
| <font style="color:rgb(51, 51, 51);">>></font> | <font style="color:rgb(51, 51, 51);">二进制右移运算符。将一个数的各二进制位全部右移若干位，正数左补0，负数左补1，右边丢弃。</font> | <font style="color:rgb(51, 51, 51);">A >> 2 将得到 15，即为 0000 1111</font> |


### <font style="color:rgb(51, 51, 51);">实例</font>
<font style="color:rgb(51, 51, 51);">请看下面的实例，了解 C++ 中可用的位运算符。</font>

<font style="color:rgb(51, 51, 51);">复制并黏贴下面的 C++ 程序到 test.cpp 文件中，编译并运行程序。</font>

## <font style="color:rgb(97, 127, 16);background-color:rgb(229, 238, 204);">实例</font>
```cpp
#include <iostream>
using namespace std;

int main()
{
    unsigned int a = 60;      // 60 = 0011 1100  
    unsigned int b = 13;      // 13 = 0000 1101
    int c = 0;           

    c = a & b;             // 12 = 0000 1100
    cout << "Line 1 - c 的值是 " << c << endl ;

    c = a | b;             // 61 = 0011 1101
    cout << "Line 2 - c 的值是 " << c << endl ;

    c = a ^ b;             // 49 = 0011 0001
    cout << "Line 3 - c 的值是 " << c << endl ;

    c = ~a;                // -61 = 1100 0011
    cout << "Line 4 - c 的值是 " << c << endl ;

    c = a << 2;            // 240 = 1111 0000
    cout << "Line 5 - c 的值是 " << c << endl ;

    c = a >> 2;            // 15 = 0000 1111
    cout << "Line 6 - c 的值是 " << c << endl ;

    return 0;
}
```

<font style="color:rgb(51, 51, 51);">当上面的代码被编译和执行时，它会产生以下结果：</font>

```plain
Line 1 - c 的值是 12
Line 2 - c 的值是 61
Line 3 - c 的值是 49
Line 4 - c 的值是 -61
Line 5 - c 的值是 240
Line 6 - c 的值是 15
```

## <font style="color:rgb(51, 51, 51);">赋值运算符</font>
<font style="color:rgb(51, 51, 51);">下表列出了 C++ 支持的赋值运算符：</font>

| <font style="color:rgb(255, 255, 255);">运算符</font> | <font style="color:rgb(255, 255, 255);">描述</font> | <font style="color:rgb(255, 255, 255);">实例</font> |
| --- | --- | --- |
| <font style="color:rgb(51, 51, 51);">=</font> | <font style="color:rgb(51, 51, 51);">简单的赋值运算符，把右边操作数的值赋给左边操作数</font> | <font style="color:rgb(51, 51, 51);">C = A + B 将把 A + B 的值赋给 C</font> |
| <font style="color:rgb(51, 51, 51);">+=</font> | <font style="color:rgb(51, 51, 51);">加且赋值运算符，把右边操作数加上左边操作数的结果赋值给左边操作数</font> | <font style="color:rgb(51, 51, 51);">C += A 相当于 C = C + A</font> |
| <font style="color:rgb(51, 51, 51);">-=</font> | <font style="color:rgb(51, 51, 51);">减且赋值运算符，把左边操作数减去右边操作数的结果赋值给左边操作数</font> | <font style="color:rgb(51, 51, 51);">C -= A 相当于 C = C - A</font> |
| <font style="color:rgb(51, 51, 51);">*=</font> | <font style="color:rgb(51, 51, 51);">乘且赋值运算符，把右边操作数乘以左边操作数的结果赋值给左边操作数</font> | <font style="color:rgb(51, 51, 51);">C *= A 相当于 C = C * A</font> |
| <font style="color:rgb(51, 51, 51);">/=</font> | <font style="color:rgb(51, 51, 51);">除且赋值运算符，把左边操作数除以右边操作数的结果赋值给左边操作数</font> | <font style="color:rgb(51, 51, 51);">C /= A 相当于 C = C / A</font> |
| <font style="color:rgb(51, 51, 51);">%=</font> | <font style="color:rgb(51, 51, 51);">求模且赋值运算符，求两个操作数的模赋值给左边操作数</font> | <font style="color:rgb(51, 51, 51);">C %= A 相当于 C = C % A</font> |
| <font style="color:rgb(51, 51, 51);"><<=</font> | <font style="color:rgb(51, 51, 51);">左移且赋值运算符</font> | <font style="color:rgb(51, 51, 51);">C <<= 2 等同于 C = C << 2</font> |
| <font style="color:rgb(51, 51, 51);">>>=</font> | <font style="color:rgb(51, 51, 51);">右移且赋值运算符</font> | <font style="color:rgb(51, 51, 51);">C >>= 2 等同于 C = C >> 2</font> |
| <font style="color:rgb(51, 51, 51);">&=</font> | <font style="color:rgb(51, 51, 51);">按位与且赋值运算符</font> | <font style="color:rgb(51, 51, 51);">C &= 2 等同于 C = C & 2</font> |
| <font style="color:rgb(51, 51, 51);">^=</font> | <font style="color:rgb(51, 51, 51);">按位异或且赋值运算符</font> | <font style="color:rgb(51, 51, 51);">C ^= 2 等同于 C = C ^ 2</font> |
| <font style="color:rgb(51, 51, 51);">|=</font> | <font style="color:rgb(51, 51, 51);">按位或且赋值运算符</font> | <font style="color:rgb(51, 51, 51);">C |= 2 等同于 C = C | 2</font> |


### <font style="color:rgb(51, 51, 51);">实例</font>
<font style="color:rgb(51, 51, 51);">请看下面的实例，了解 C++ 中可用的赋值运算符。</font>

<font style="color:rgb(51, 51, 51);">复制并黏贴下面的 C++ 程序到 test.cpp 文件中，编译并运行程序。</font>

```cpp
#include <iostream>
using namespace std;
 
int main()
{
   int a = 21;
   int c ;
 
   c =  a;
   cout << "Line 1 - =  运算符实例，c 的值 = : " <<c<< endl ;
 
   c +=  a;
   cout << "Line 2 - += 运算符实例，c 的值 = : " <<c<< endl ;
 
   c -=  a;
   cout << "Line 3 - -= 运算符实例，c 的值 = : " <<c<< endl ;
 
   c *=  a;
   cout << "Line 4 - *= 运算符实例，c 的值 = : " <<c<< endl ;
 
   c /=  a;
   cout << "Line 5 - /= 运算符实例，c 的值 = : " <<c<< endl ;
 
   c  = 200;
   c %=  a;
   cout << "Line 6 - %= 运算符实例，c 的值 = : " <<c<< endl ;
 
   c <<=  2;
   cout << "Line 7 - <<= 运算符实例，c 的值 = : " <<c<< endl ;
 
   c >>=  2;
   cout << "Line 8 - >>= 运算符实例，c 的值 = : " <<c<< endl ;
 
   c &=  2;
   cout << "Line 9 - &= 运算符实例，c 的值 = : " <<c<< endl ;
 
   c ^=  2;
   cout << "Line 10 - ^= 运算符实例，c 的值 = : " <<c<< endl ;
 
   c |=  2;
   cout << "Line 11 - |= 运算符实例，c 的值 = : " <<c<< endl ;
 
   return 0;
}
```

<font style="color:rgb(51, 51, 51);">和执行时，它会产生以下结果：</font>

```plain
Line 1 - =  运算符实例，c 的值 = 21
Line 2 - += 运算符实例，c 的值 = 42
Line 3 - -= 运算符实例，c 的值 = 21
Line 4 - *= 运算符实例，c 的值 = 441
Line 5 - /= 运算符实例，c 的值 = 21
Line 6 - %= 运算符实例，c 的值 = 11
Line 7 - <<= 运算符实例，c 的值 = 44
Line 8 - >>= 运算符实例，c 的值 = 11
Line 9 - &= 运算符实例，c 的值 = 2
Line 10 - ^= 运算符实例，c 的值 = 0
Line 11 - |= 运算符实例，c 的值 = 2
```

## <font style="color:rgb(51, 51, 51);">杂项运算符</font>
<font style="color:rgb(51, 51, 51);">下表列出了 C++ 支持的其他一些重要的运算符。</font>

| <font style="color:rgb(255, 255, 255);">运算符</font> | <font style="color:rgb(255, 255, 255);">描述</font> |
| --- | --- |
| <font style="color:rgb(51, 51, 51);">sizeof</font> | [<font style="color:rgb(51, 51, 51);">sizeof 运算符</font>](https://www.runoob.com/cplusplus/cpp-sizeof-operator.html)<br/><font style="color:rgb(51, 51, 51);">返回变量的大小。例如，sizeof(a) 将返回 4，其中 a 是整数。</font> |
| <font style="color:rgb(51, 51, 51);">Condition ? X : Y</font> | [<font style="color:rgb(51, 51, 51);">条件运算符</font>](https://www.runoob.com/cplusplus/cpp-conditional-operator.html)<br/><font style="color:rgb(51, 51, 51);">。如果 Condition 为真 ? 则值为 X : 否则值为 Y。</font> |
| <font style="color:rgb(51, 51, 51);">,</font> | [<font style="color:rgb(51, 51, 51);">逗号运算符</font>](https://www.runoob.com/cplusplus/cpp-comma-operator.html)<br/><font style="color:rgb(51, 51, 51);">会顺序执行一系列运算。整个逗号表达式的值是以逗号分隔的列表中的最后一个表达式的值。</font> |
| <font style="color:rgb(51, 51, 51);">.（点）和 ->（箭头）</font> | [<font style="color:rgb(51, 51, 51);">成员运算符</font>](https://www.runoob.com/cplusplus/cpp-member-operators.html)<br/><font style="color:rgb(51, 51, 51);">用于引用类、结构和共用体的成员。</font> |
| <font style="color:rgb(51, 51, 51);">Cast</font> | [<font style="color:rgb(51, 51, 51);">强制转换运算符</font>](https://www.runoob.com/cplusplus/cpp-casting-operators.html)<br/><font style="color:rgb(51, 51, 51);">把一种数据类型转换为另一种数据类型。例如，int(2.2000) 将返回 2。</font> |
| <font style="color:rgb(51, 51, 51);">&</font> | [<font style="color:rgb(51, 51, 51);">指针运算符 &</font>](https://www.runoob.com/cplusplus/cpp-pointer-operators.html)<br/><font style="color:rgb(51, 51, 51);"> </font><font style="color:rgb(51, 51, 51);">返回变量的地址。例如 &a; 将给出变量的实际地址。</font> |
| <font style="color:rgb(51, 51, 51);">*</font> | [<font style="color:rgb(51, 51, 51);">指针运算符 *</font>](https://www.runoob.com/cplusplus/cpp-pointer-operators.html)<br/><font style="color:rgb(51, 51, 51);"> </font><font style="color:rgb(51, 51, 51);">指向一个变量。例如，*var; 将指向变量 var。</font> |


## <font style="color:rgb(51, 51, 51);">C++ 中的运算符优先级</font>
<font style="color:rgb(51, 51, 51);">运算符的优先级确定表达式中项的组合。这会影响到一个表达式如何计算。某些运算符比其他运算符有更高的优先级，例如，乘除运算符具有比加减运算符更高的优先级。</font>

<font style="color:rgb(51, 51, 51);">例如 x = 7 + 3 * 2，在这里，x 被赋值为 13，而不是 20，因为运算符 * 具有比 + 更高的优先级，所以首先计算乘法 3*2，然后再加上 7。</font>

<font style="color:rgb(51, 51, 51);">下表将按运算符优先级从高到低列出各个运算符，具有较高优先级的运算符出现在表格的上面，具有较低优先级的运算符出现在表格的下面。在表达式中，较高优先级的运算符会优先被计算。</font>

| <font style="color:rgb(255, 255, 255);">类别 </font> | <font style="color:rgb(255, 255, 255);">运算符 </font> | <font style="color:rgb(255, 255, 255);">结合性 </font> |
| --- | --- | --- |
| <font style="color:rgb(51, 51, 51);">后缀 </font> | <font style="color:rgb(51, 51, 51);">() [] -> . ++ - -  </font> | <font style="color:rgb(51, 51, 51);">从左到右 </font> |
| <font style="color:rgb(51, 51, 51);">一元 </font> | <font style="color:rgb(51, 51, 51);">+ - ! ~ ++ - - (type)* & sizeof </font> | <font style="color:rgb(51, 51, 51);">从右到左 </font> |
| <font style="color:rgb(51, 51, 51);">乘除 </font> | <font style="color:rgb(51, 51, 51);">* / % </font> | <font style="color:rgb(51, 51, 51);">从左到右 </font> |
| <font style="color:rgb(51, 51, 51);">加减 </font> | <font style="color:rgb(51, 51, 51);">+ - </font> | <font style="color:rgb(51, 51, 51);">从左到右 </font> |
| <font style="color:rgb(51, 51, 51);">移位 </font> | <font style="color:rgb(51, 51, 51);"><< >> </font> | <font style="color:rgb(51, 51, 51);">从左到右 </font> |
| <font style="color:rgb(51, 51, 51);">关系 </font> | <font style="color:rgb(51, 51, 51);">< <= > >= </font> | <font style="color:rgb(51, 51, 51);">从左到右 </font> |
| <font style="color:rgb(51, 51, 51);">相等 </font> | <font style="color:rgb(51, 51, 51);">== != </font> | <font style="color:rgb(51, 51, 51);">从左到右 </font> |
| <font style="color:rgb(51, 51, 51);">位与 AND </font> | <font style="color:rgb(51, 51, 51);">& </font> | <font style="color:rgb(51, 51, 51);">从左到右 </font> |
| <font style="color:rgb(51, 51, 51);">位异或 XOR </font> | <font style="color:rgb(51, 51, 51);">^ </font> | <font style="color:rgb(51, 51, 51);">从左到右 </font> |
| <font style="color:rgb(51, 51, 51);">位或 OR </font> | <font style="color:rgb(51, 51, 51);">| </font> | <font style="color:rgb(51, 51, 51);">从左到右 </font> |
| <font style="color:rgb(51, 51, 51);">逻辑与 AND </font> | <font style="color:rgb(51, 51, 51);">&& </font> | <font style="color:rgb(51, 51, 51);">从左到右 </font> |
| <font style="color:rgb(51, 51, 51);">逻辑或 OR </font> | <font style="color:rgb(51, 51, 51);">|| </font> | <font style="color:rgb(51, 51, 51);">从左到右 </font> |
| <font style="color:rgb(51, 51, 51);">条件 </font> | <font style="color:rgb(51, 51, 51);">?: </font> | <font style="color:rgb(51, 51, 51);">从右到左 </font> |
| <font style="color:rgb(51, 51, 51);">赋值 </font> | <font style="color:rgb(51, 51, 51);">= += -= *= /= %=>>= <<= &= ^= |= </font> | <font style="color:rgb(51, 51, 51);">从右到左 </font> |
| <font style="color:rgb(51, 51, 51);">逗号 </font> | <font style="color:rgb(51, 51, 51);">, </font> | <font style="color:rgb(51, 51, 51);">从左到右 </font> |


### <font style="color:rgb(51, 51, 51);">实例</font>
<font style="color:rgb(51, 51, 51);">请看下面的实例，了解 C++ 中运算符的优先级。</font>

<font style="color:rgb(51, 51, 51);">复制并黏贴下面的 C++ 程序到 test.cpp 文件中，编译并运行程序。</font>

<font style="color:rgb(51, 51, 51);">对比有括号和没有括号时的区别，这将产生不同的结果。因为 ()、 /、 * 和 + 有不同的优先级，高优先级的操作符将优先计算。</font>

```cpp
#include <iostream>
using namespace std;
 
int main()
{
   int a = 20;
   int b = 10;
   int c = 15;
   int d = 5;
   int e;
 
   e = (a + b) * c / d;      // ( 30 * 15 ) / 5
   cout << "(a + b) * c / d 的值是 " << e << endl ;
 
   e = ((a + b) * c) / d;    // (30 * 15 ) / 5
   cout << "((a + b) * c) / d 的值是 " << e << endl ;
 
   e = (a + b) * (c / d);   // (30) * (15/5)
   cout << "(a + b) * (c / d) 的值是 " << e << endl ;
 
   e = a + (b * c) / d;     //  20 + (150/5)
   cout << "a + (b * c) / d 的值是 " << e << endl ;
  
   return 0;
}
```

<font style="color:rgb(51, 51, 51);">当上面的代码被编译和执行时，它会产生以下结果：</font>

```plain
(a + b) * c / d 的值是 90
((a + b) * c) / d 的值是 90
(a + b) * (c / d) 的值是 90
a + (b * c) / d 的值是 50
```

