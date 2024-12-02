# C++ 循环
_<font style="color:rgb(51, 51, 51);">有的时候，可能需要多次执行同一块代码。一般情况下，语句是顺序执行的：函数中的第一个语句先执行，接着是第二个语句，依此类推。</font>_

_<font style="color:rgb(51, 51, 51);">编程语言提供了允许更为复杂的执行路径的多种控制结构。</font>_

_<font style="color:rgb(51, 51, 51);">循环语句允许我们多次执行一个语句或语句组，下面是大多数编程语言中循环语句的一般形式：</font>_

![](https://cdn.nlark.com/yuque/0/2024/png/43034535/1732812339190-96330587-e55e-4749-908e-3f48e160d0ba.png)

## <font style="color:rgb(51, 51, 51);">循环类型</font>
<font style="color:rgb(51, 51, 51);">C++ 编程语言提供了以下几种循环类型。点击链接查看每个类型的细节。</font>

| <font style="color:rgb(255, 255, 255);">循环类型</font> | <font style="color:rgb(255, 255, 255);">描述</font> |
| --- | --- |
| [<font style="color:rgb(51, 51, 51);">while 循环</font>](https://www.runoob.com/cplusplus/cpp-while-loop.html) | <font style="color:rgb(51, 51, 51);">当给定条件为真时，重复语句或语句组。它会在执行循环主体之前测试条件。</font> |
| [<font style="color:rgb(51, 51, 51);">for 循环</font>](https://www.runoob.com/cplusplus/cpp-for-loop.html) | <font style="color:rgb(51, 51, 51);">多次执行一个语句序列，简化管理循环变量的代码。</font> |
| [<font style="color:rgb(51, 51, 51);">do...while 循环</font>](https://www.runoob.com/cplusplus/cpp-do-while-loop.html) | <font style="color:rgb(51, 51, 51);">除了它是在循环主体结尾测试条件外，其他与 while 语句类似。</font> |
| [<font style="color:rgb(51, 51, 51);">嵌套循环</font>](https://www.runoob.com/cplusplus/cpp-nested-loops.html) | <font style="color:rgb(51, 51, 51);">您可以在 while、for 或 do..while 循环内使用一个或多个循环。</font> |


## <font style="color:rgb(51, 51, 51);">循环控制语句</font>
<font style="color:rgb(51, 51, 51);">循环控制语句更改执行的正常序列。当执行离开一个范围时，所有在该范围中创建的自动对象都会被销毁。</font>

<font style="color:rgb(51, 51, 51);">C++ 提供了下列的控制语句。点击链接查看每个语句的细节。</font>

| <font style="color:rgb(255, 255, 255);">控制语句</font> | <font style="color:rgb(255, 255, 255);">描述</font> |
| --- | --- |
| [<font style="color:rgb(51, 51, 51);">break 语句</font>](https://www.runoob.com/cplusplus/cpp-break-statement.html) | <font style="color:rgb(51, 51, 51);">终止</font><font style="color:rgb(51, 51, 51);"> </font>**<font style="color:rgb(51, 51, 51);">loop</font>**<font style="color:rgb(51, 51, 51);"> </font><font style="color:rgb(51, 51, 51);">或</font><font style="color:rgb(51, 51, 51);"> </font>**<font style="color:rgb(51, 51, 51);">switch</font>**<font style="color:rgb(51, 51, 51);"> </font><font style="color:rgb(51, 51, 51);">语句，程序流将继续执行紧接着 loop 或 switch 的下一条语句。</font> |
| [<font style="color:rgb(51, 51, 51);">continue 语句</font>](https://www.runoob.com/cplusplus/cpp-continue-statement.html) | <font style="color:rgb(51, 51, 51);">引起循环跳过主体的剩余部分，立即重新开始测试条件。</font> |
| [<font style="color:rgb(51, 51, 51);">goto 语句</font>](https://www.runoob.com/cplusplus/cpp-goto-statement.html) | <font style="color:rgb(51, 51, 51);">将控制转移到被标记的语句。但是不建议在程序中使用 goto 语句。</font> |


## <font style="color:rgb(51, 51, 51);">无限循环</font>
<font style="color:rgb(51, 51, 51);">如果条件永远不为假，则循环将变成无限循环。</font>**<font style="color:rgb(51, 51, 51);">for</font>**<font style="color:rgb(51, 51, 51);"> </font><font style="color:rgb(51, 51, 51);">循环在传统意义上可用于实现无限循环。由于构成循环的三个表达式中任何一个都不是必需的，您可以将某些条件表达式留空来构成一个无限循环。</font>

```cpp
#include <iostream>
using namespace std;
 
int main ()
{
 
   for( ; ; )
   {
      printf("This loop will run forever.\n");
   }
 
   return 0;
}
```

<font style="color:rgb(51, 51, 51);">当条件表达式不存在时，它被假设为真。您也可以设置一个初始值和增量表达式，但是一般情况下，C++ 程序员偏向于使用 for(;;) 结构来表示一个无限循环。</font>

**<font style="color:rgb(51, 51, 51);">注意：</font>**<font style="color:rgb(51, 51, 51);">您可以按 Ctrl + C 键终止一个无限循环。</font>

# C++ 判断
_<font style="color:rgb(51, 51, 51);">判断结构要求程序员指定一个或多个要评估或测试的条件，以及条件为真时要执行的语句（必需的）和条件为假时要执行的语句（可选的）。</font>_

_<font style="color:rgb(51, 51, 51);">下面是大多数编程语言中典型的判断结构的一般形式：</font>_

![](https://cdn.nlark.com/yuque/0/2024/png/43034535/1732812608457-c4f98431-4242-41ba-98f0-0c07b5b05244.png)

## <font style="color:rgb(51, 51, 51);">判断语句</font>
<font style="color:rgb(51, 51, 51);">C++ 编程语言提供了以下类型的判断语句。点击链接查看每个语句的细节。</font>

| <font style="color:rgb(255, 255, 255);">语句</font> | <font style="color:rgb(255, 255, 255);">描述</font> |
| --- | --- |
| [<font style="color:rgb(51, 51, 51);">if 语句</font>](https://www.runoob.com/cplusplus/cpp-if.html) | <font style="color:rgb(51, 51, 51);">一个</font><font style="color:rgb(51, 51, 51);"> </font>**<font style="color:rgb(51, 51, 51);">if 语句</font>**<font style="color:rgb(51, 51, 51);"> </font><font style="color:rgb(51, 51, 51);">由一个布尔表达式后跟一个或多个语句组成。</font> |
| [<font style="color:rgb(51, 51, 51);">if...else 语句</font>](https://www.runoob.com/cplusplus/cpp-if-else.html) | <font style="color:rgb(51, 51, 51);">一个</font><font style="color:rgb(51, 51, 51);"> </font>**<font style="color:rgb(51, 51, 51);">if 语句</font>**<font style="color:rgb(51, 51, 51);"> </font><font style="color:rgb(51, 51, 51);">后可跟一个可选的</font><font style="color:rgb(51, 51, 51);"> </font>**<font style="color:rgb(51, 51, 51);">else 语句</font>**<font style="color:rgb(51, 51, 51);">，else 语句在布尔表达式为假时执行。</font> |
| [<font style="color:rgb(51, 51, 51);">嵌套 if 语句</font>](https://www.runoob.com/cplusplus/cpp-nested-if.html) | <font style="color:rgb(51, 51, 51);">您可以在一个</font><font style="color:rgb(51, 51, 51);"> </font>**<font style="color:rgb(51, 51, 51);">if</font>**<font style="color:rgb(51, 51, 51);"> </font><font style="color:rgb(51, 51, 51);">或</font><font style="color:rgb(51, 51, 51);"> </font>**<font style="color:rgb(51, 51, 51);">else if</font>**<font style="color:rgb(51, 51, 51);"> </font><font style="color:rgb(51, 51, 51);">语句内使用另一个</font><font style="color:rgb(51, 51, 51);"> </font>**<font style="color:rgb(51, 51, 51);">if</font>**<font style="color:rgb(51, 51, 51);"> </font><font style="color:rgb(51, 51, 51);">或</font><font style="color:rgb(51, 51, 51);"> </font>**<font style="color:rgb(51, 51, 51);">else if</font>**<font style="color:rgb(51, 51, 51);"> </font><font style="color:rgb(51, 51, 51);">语句。</font> |
| [<font style="color:rgb(51, 51, 51);">switch 语句</font>](https://www.runoob.com/cplusplus/cpp-switch.html) | <font style="color:rgb(51, 51, 51);">一个</font><font style="color:rgb(51, 51, 51);"> </font>**<font style="color:rgb(51, 51, 51);">switch</font>**<font style="color:rgb(51, 51, 51);"> </font><font style="color:rgb(51, 51, 51);">语句允许测试一个变量等于多个值时的情况。</font> |
| [<font style="color:rgb(51, 51, 51);">嵌套 switch 语句</font>](https://www.runoob.com/cplusplus/cpp-nested-switch.html) | <font style="color:rgb(51, 51, 51);">您可以在一个</font><font style="color:rgb(51, 51, 51);"> </font>**<font style="color:rgb(51, 51, 51);">switch</font>**<font style="color:rgb(51, 51, 51);"> </font><font style="color:rgb(51, 51, 51);">语句内使用另一个</font><font style="color:rgb(51, 51, 51);"> </font>**<font style="color:rgb(51, 51, 51);">switch</font>****<font style="color:rgb(51, 51, 51);"> </font>**<font style="color:rgb(51, 51, 51);">语句。</font> |


## <font style="color:rgb(51, 51, 51);">? : 运算符</font>
<font style="color:rgb(51, 51, 51);">我们已经在前面的章节中讲解了</font><font style="color:rgb(51, 51, 51);"> </font>[<font style="color:rgb(51, 51, 51);">条件运算符 ? :</font>](https://www.runoob.com/cplusplus/cpp-conditional-operator.html)<font style="color:rgb(51, 51, 51);">，可以用来替代</font><font style="color:rgb(51, 51, 51);"> </font>**<font style="color:rgb(51, 51, 51);">if...else</font>**<font style="color:rgb(51, 51, 51);"> </font><font style="color:rgb(51, 51, 51);">语句。它的一般形式如下：</font>

<font style="color:rgb(51, 51, 51);">Exp1 ? Exp2 : Exp3;</font>

<font style="color:rgb(51, 51, 51);">其中，Exp1、Exp2 和 Exp3 是表达式。请注意，冒号的使用和位置。</font>

<font style="color:rgb(51, 51, 51);">? 表达式的值是由 Exp1 决定的。如果 Exp1 为真，则计算 Exp2 的值，结果即为整个 ? 表达式的值。如果 Exp1 为假，则计算 Exp3 的值，结果即为整个 ? 表达式的值。</font>

# C++ 函数
_<font style="color:rgb(51, 51, 51);">函数是一组一起执行一个任务的语句。每个 C++ 程序都至少有一个函数，即主函数</font>__<font style="color:rgb(51, 51, 51);"> </font>__**<font style="color:rgb(51, 51, 51);">main()</font>**__<font style="color:rgb(51, 51, 51);"> </font>__<font style="color:rgb(51, 51, 51);">，所有简单的程序都可以定义其他额外的函数。</font>_

_<font style="color:rgb(51, 51, 51);">您可以把代码划分到不同的函数中。如何划分代码到不同的函数中是由您来决定的，但在逻辑上，划分通常是根据每个函数执行一个特定的任务来进行的。</font>_

_<font style="color:rgb(51, 51, 51);">函数</font>__**<font style="color:rgb(51, 51, 51);">声明</font>**__<font style="color:rgb(51, 51, 51);">告诉编译器函数的名称、返回类型和参数。函数</font>__**<font style="color:rgb(51, 51, 51);">定义</font>**__<font style="color:rgb(51, 51, 51);">提供了函数的实际主体。</font>_

_<font style="color:rgb(51, 51, 51);">C++ 标准库提供了大量的程序可以调用的内置函数。例如，函数</font>__<font style="color:rgb(51, 51, 51);"> </font>__**<font style="color:rgb(51, 51, 51);">strcat()</font>**__<font style="color:rgb(51, 51, 51);"> </font>__<font style="color:rgb(51, 51, 51);">用来连接两个字符串，函数</font>__<font style="color:rgb(51, 51, 51);"> </font>__**<font style="color:rgb(51, 51, 51);">memcpy()</font>**__<font style="color:rgb(51, 51, 51);"> </font>__<font style="color:rgb(51, 51, 51);">用来复制内存到另一个位置。</font>_

_<font style="color:rgb(51, 51, 51);">函数还有很多叫法，比如方法、子例程或程序，等等。</font>_

## <font style="color:rgb(51, 51, 51);">定义函数</font>
<font style="color:rgb(51, 51, 51);">C++ 中的函数定义的一般形式如下：</font>

```cpp
return_type function_name( parameter list )
{
   body of the function
}
```

<font style="color:rgb(51, 51, 51);">在 C++ 中，函数由一个函数头和一个函数主体组成。下面列出一个函数的所有组成部分：</font>

+ **<font style="color:rgb(51, 51, 51);">返回类型：</font>**<font style="color:rgb(51, 51, 51);">一个函数可以返回一个值。</font>**<font style="color:rgb(51, 51, 51);">return_type</font>**<font style="color:rgb(51, 51, 51);"> </font><font style="color:rgb(51, 51, 51);">是函数返回的值的数据类型。有些函数执行所需的操作而不返回值，在这种情况下，return_type 是关键字</font><font style="color:rgb(51, 51, 51);"> </font>**<font style="color:rgb(51, 51, 51);">void</font>**<font style="color:rgb(51, 51, 51);">。</font>
+ **<font style="color:rgb(51, 51, 51);">函数名称：</font>**<font style="color:rgb(51, 51, 51);">这是函数的实际名称。函数名和参数列表一起构成了函数签名。</font>
+ **<font style="color:rgb(51, 51, 51);">参数：</font>**<font style="color:rgb(51, 51, 51);">参数就像是占位符。当函数被调用时，您向参数传递一个值，这个值被称为实际参数。参数列表包括函数参数的类型、顺序、数量。参数是可选的，也就是说，函数可能不包含参数。</font>
+ **<font style="color:rgb(51, 51, 51);">函数主体：</font>**<font style="color:rgb(51, 51, 51);">函数主体包含一组定义函数执行任务的语句。</font>

## <font style="color:rgb(51, 51, 51);">实例</font>
<font style="color:rgb(51, 51, 51);">以下是</font><font style="color:rgb(51, 51, 51);"> </font>**<font style="color:rgb(51, 51, 51);">max()</font>**<font style="color:rgb(51, 51, 51);"> </font><font style="color:rgb(51, 51, 51);">函数的源代码。该函数有两个参数 num1 和 num2，会返回这两个数中较大的那个数：</font>

```cpp
// 函数返回两个数中较大的那个数 
int max(int num1, int num2) 
{
   // 局部变量声明
   int result;
   if (num1 > num2)
      result = num1;
   else
      result = num2;
   return result; 
}
```

<font style="color:rgb(51, 51, 51);">函数</font>**<font style="color:rgb(51, 51, 51);">声明</font>**<font style="color:rgb(51, 51, 51);">会告诉编译器函数名称及如何调用函数。函数的实际主体可以单独定义。</font>

<font style="color:rgb(51, 51, 51);">函数声明包括以下几个部分：</font>

```cpp
return_type function_name( parameter list );
```

<font style="color:rgb(51, 51, 51);">针对上面定义的函数 max()，以下是函数声明：</font>

```cpp
int max(int num1, int num2);
```

<font style="color:rgb(51, 51, 51);">在函数声明中，参数的名称并不重要，只有参数的类型是必需的，因此下面也是有效的声明：</font>

```cpp
int max(int, int);
```

<font style="color:rgb(51, 51, 51);">当您在一个源文件中定义函数且在另一个文件中调用函数时，函数声明是必需的。在这种情况下，您应该在调用函数的文件顶部声明函数。</font>

## <font style="color:rgb(51, 51, 51);">调用函数</font>
<font style="color:rgb(51, 51, 51);">创建 C++ 函数时，会定义函数做什么，然后通过调用函数来完成已定义的任务。</font>

<font style="color:rgb(51, 51, 51);">当程序调用函数时，程序控制权会转移给被调用的函数。被调用的函数执行已定义的任务，当函数的返回语句被执行时，或到达函数的结束括号时，会把程序控制权交还给主程序。</font>

<font style="color:rgb(51, 51, 51);">调用函数时，传递所需参数，如果函数返回一个值，则可以存储返回值。例如：</font>

```cpp
#include <iostream>
using namespace std;
 
// 函数声明
int max(int num1, int num2);
 
int main ()
{
   // 局部变量声明
   int a = 100;
   int b = 200;
   int ret;
 
   // 调用函数来获取最大值
   ret = max(a, b);
 
   cout << "Max value is : " << ret << endl;
 
   return 0;
}
 
// 函数返回两个数中较大的那个数
int max(int num1, int num2) 
{
   // 局部变量声明
   int result;
 
   if (num1 > num2)
      result = num1;
   else
      result = num2;
 
   return result; 
}
```

<font style="color:rgb(51, 51, 51);">把 max() 函数和 main() 函数放一块，编译源代码。当运行最后的可执行文件时，会产生下列结果：</font>

<font style="color:rgb(51, 51, 51);">Max value is : 200</font>

## <font style="color:rgb(51, 51, 51);">函数参数</font>
<font style="color:rgb(51, 51, 51);">如果函数要使用参数，则必须声明接受参数值的变量。这些变量称为函数的</font>**<font style="color:rgb(51, 51, 51);">形式参数</font>**<font style="color:rgb(51, 51, 51);">。</font>

<font style="color:rgb(51, 51, 51);">形式参数就像函数内的其他局部变量，在进入函数时被创建，退出函数时被销毁。</font>

<font style="color:rgb(51, 51, 51);">当调用函数时，有三种向函数传递参数的方式：</font>

| <font style="color:rgb(255, 255, 255);">调用类型</font> | <font style="color:rgb(255, 255, 255);">描述</font> |
| --- | --- |
| [<font style="color:rgb(51, 51, 51);">传值调用</font>](https://www.runoob.com/cplusplus/cpp-function-call-by-value.html) | <font style="color:rgb(51, 51, 51);">该方法把参数的实际值赋值给函数的形式参数。在这种情况下，修改函数内的形式参数对实际参数没有影响。</font> |
| [<font style="color:rgb(51, 51, 51);">指针调用</font>](https://www.runoob.com/cplusplus/cpp-function-call-by-pointer.html) | <font style="color:rgb(51, 51, 51);">该方法把参数的地址赋值给形式参数。在函数内，该地址用于访问调用中要用到的实际参数。这意味着，修改形式参数会影响实际参数。</font> |
| [<font style="color:rgb(51, 51, 51);">引用调用</font>](https://www.runoob.com/cplusplus/cpp-function-call-by-reference.html) | <font style="color:rgb(51, 51, 51);">该方法把参数的引用赋值给形式参数。在函数内，该引用用于访问调用中要用到的实际参数。这意味着，修改形式参数会影响实际参数。</font> |


<font style="color:rgb(51, 51, 51);">默认情况下，C++ 使用</font>**<font style="color:rgb(51, 51, 51);">传值调用</font>**<font style="color:rgb(51, 51, 51);">来传递参数。一般来说，这意味着函数内的代码不能改变用于调用函数的参数。之前提到的实例，调用 max() 函数时，使用了相同的方法。</font>

## <font style="color:rgb(51, 51, 51);">参数的默认值</font>
<font style="color:rgb(51, 51, 51);">当您定义一个函数，您可以为参数列表中后边的每一个参数指定默认值。当调用函数时，如果实际参数的值留空，则使用这个默认值。</font>

<font style="color:rgb(51, 51, 51);">这是通过在函数定义中使用赋值运算符来为参数赋值的。调用函数时，如果未传递参数的值，则会使用默认值，如果指定了值，则会忽略默认值，使用传递的值。请看下面的实例：</font>

```cpp
#include <iostream>
using namespace std;
 
int sum(int a, int b=20)
{
  int result;
 
  result = a + b;
  
  return (result);
}
 
int main ()
{
   // 局部变量声明
   int a = 100;
   int b = 200;
   int result;
 
   // 调用函数来添加值
   result = sum(a, b);
   cout << "Total value is :" << result << endl;
 
   // 再次调用函数
   result = sum(a);
   cout << "Total value is :" << result << endl;
 
   return 0;
}
```

<font style="color:rgb(51, 51, 51);">当上面的代码被编译和执行时，它会产生下列结果：</font>

```plain
Total value is :300
Total value is :120
```

---

## <font style="color:rgb(51, 51, 51);">Lambda 函数与表达式</font>
<font style="color:rgb(51, 51, 51);">C++11 提供了对匿名函数的支持,称为 Lambda 函数(也叫 Lambda 表达式)。</font>

<font style="color:rgb(51, 51, 51);">Lambda 表达式把函数看作对象。Lambda 表达式可以像对象一样使用，比如可以将它们赋给变量和作为参数传递，还可以像函数一样对其求值。</font>

<font style="color:rgb(51, 51, 51);">Lambda 表达式本质上与函数声明非常类似。Lambda 表达式具体形式如下:</font>

```cpp
[capture](parameters)->return-type{body}

```

<font style="color:rgb(51, 51, 51);">例如：</font>

```cpp
[](int x, int y){ return x < y ; }
```

<font style="color:rgb(51, 51, 51);">如果没有返回值可以表示为：</font>

```cpp
[capture](parameters){body}
```

<font style="color:rgb(51, 51, 51);">例如：</font>

```cpp
[]{ ++global_x; } 
```

<font style="color:rgb(51, 51, 51);">在一个更为复杂的例子中，返回类型可以被明确的指定如下：</font>

```cpp
[](int x, int y) -> int { int z = x + y; return z + x; }
```

<font style="color:rgb(51, 51, 51);">本例中，一个临时的参数 z 被创建用来存储中间结果。如同一般的函数，z 的值不会保留到下一次该不具名函数再次被调用时。</font>

<font style="color:rgb(51, 51, 51);">如果 lambda 函数没有传回值（例如 void），其返回类型可被完全忽略。</font>

<font style="color:rgb(51, 51, 51);">在Lambda表达式内可以访问当前作用域的变量，这是Lambda表达式的闭包（Closure）行为。 与JavaScript闭包不同，C++变量传递有传值和传引用的区别。可以通过前面的[]来指定：</font>

```plain
[]      // 沒有定义任何变量。使用未定义变量会引发错误。
[x, &y] // x以传值方式传入（默认），y以引用方式传入。
[&]     // 任何被使用到的外部变量都隐式地以引用方式加以引用。
[=]     // 任何被使用到的外部变量都隐式地以传值方式加以引用。
[&, x]  // x显式地以传值方式加以引用。其余变量以引用方式加以引用。
[=, &z] // z显式地以引用方式加以引用。其余变量以传值方式加以引用。
```

<font style="color:rgb(51, 51, 51);">另外有一点需要注意。对于[=]或[&]的形式，lambda 表达式可以直接使用 this 指针。但是，对于[]的形式，如果要使用 this 指针，必须显式传入：</font>

```cpp
[this]() { this->someFunc(); }();
```

