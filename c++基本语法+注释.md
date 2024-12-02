# C++ 基本语法
_<font style="color:rgb(51, 51, 51);">C++ 程序可以定义为对象的集合，这些对象通过调用彼此的方法进行交互。现在让我们简要地看一下什么是类、对象，方法、即时变量。</font>_

+ <font style="color:rgb(51, 51, 51);">对象 -</font><font style="color:rgb(51, 51, 51);"> </font><font style="color:rgb(51, 51, 51);">对象具有状态和行为。例如：一只狗的状态 - 颜色、名称、品种，行为 - 摇动、叫唤、吃。对象是类的实例。</font>
+ <font style="color:rgb(51, 51, 51);">类 -</font><font style="color:rgb(51, 51, 51);"> </font><font style="color:rgb(51, 51, 51);">类可以定义为描述对象行为/状态的模板/蓝图。</font>
+ <font style="color:rgb(51, 51, 51);">方法 -</font><font style="color:rgb(51, 51, 51);"> </font><font style="color:rgb(51, 51, 51);">从基本上说，一个方法表示一种行为。一个类可以包含多个方法。可以在方法中写入逻辑、操作数据以及执行所有的动作。</font>
+ <font style="color:rgb(51, 51, 51);">即时变量 - 每个对象都有其独特的即时变量。对象的状态是由这些即时变量的值创建的。</font>

## <font style="color:rgb(51, 51, 51);">C++ 程序结构</font>
<font style="color:rgb(51, 51, 51);">让我们看一段简单的代码，可以输出单词 </font>_<font style="color:rgb(51, 51, 51);">Hello World</font>_<font style="color:rgb(51, 51, 51);">。</font>

```cpp
#include<iostream>
usingnamespacestd; 
// main() 是程序开始执行的地方
intmain(){
    cout << "Hello World"; // 输出 Hello Worldreturn0; 
}
```

<font style="color:rgb(51, 51, 51);">接下来我们讲解一下上面这段程序：</font>

+ <font style="color:rgb(51, 51, 51);">C++ 语言定义了一些头文件，这些头文件包含了程序中必需的或有用的信息。上面这段程序中，包含了头文件</font><font style="color:rgb(51, 51, 51);"> </font>**<font style="color:rgb(51, 51, 51);"><iostream></font>**<font style="color:rgb(51, 51, 51);">。</font>
+ <font style="color:rgb(51, 51, 51);">下一行</font><font style="color:rgb(51, 51, 51);"> </font>**<font style="color:rgb(51, 51, 51);">using namespace std;</font>**<font style="color:rgb(51, 51, 51);"> </font><font style="color:rgb(51, 51, 51);">告诉编译器使用 std 命名空间。命名空间是 C++ 中一个相对新的概念。</font>
+ <font style="color:rgb(51, 51, 51);">下一行</font><font style="color:rgb(51, 51, 51);"> </font>**<font style="color:rgb(51, 51, 51);">// main() 是程序开始执行的地方</font>**<font style="color:rgb(51, 51, 51);"> </font><font style="color:rgb(51, 51, 51);">是一个单行注释。单行注释以 // 开头，在行末结束。</font>
+ <font style="color:rgb(51, 51, 51);">下一行</font><font style="color:rgb(51, 51, 51);"> </font>**<font style="color:rgb(51, 51, 51);">int main()</font>**<font style="color:rgb(51, 51, 51);"> </font><font style="color:rgb(51, 51, 51);">是主函数，程序从这里开始执行。</font>
+ <font style="color:rgb(51, 51, 51);">下一行</font><font style="color:rgb(51, 51, 51);"> </font>**<font style="color:rgb(51, 51, 51);">cout << "Hello World";</font>**<font style="color:rgb(51, 51, 51);"> </font><font style="color:rgb(51, 51, 51);">会在屏幕上显示消息 "Hello World"。</font>
+ <font style="color:rgb(51, 51, 51);">下一行</font><font style="color:rgb(51, 51, 51);"> </font>**<font style="color:rgb(51, 51, 51);">return 0;</font>**<font style="color:rgb(51, 51, 51);"> </font><font style="color:rgb(51, 51, 51);">终止 main( )函数，并向调用进程返回值 0。</font>

## <font style="color:rgb(51, 51, 51);">编译 & 执行 C++ 程序</font>
<font style="color:rgb(51, 51, 51);">接下来让我们看看如何把源代码保存在一个文件中，以及如何编译并运行它。下面是简单的步骤：</font>

+ <font style="color:rgb(51, 51, 51);">打开一个文本编辑器，添加上述代码。</font>
+ <font style="color:rgb(51, 51, 51);">保存文件为 hello.cpp。</font>
+ <font style="color:rgb(51, 51, 51);">打开命令提示符，进入到保存文件所在的目录。</font>
+ <font style="color:rgb(51, 51, 51);">键入 'g++ hello.cpp '，输入回车，编译代码。如果代码中没有错误，命令提示符会跳到下一行，并生成 a.out 可执行文件。</font>
+ <font style="color:rgb(51, 51, 51);">现在，键入 ' a.out' 来运行程序。</font>
+ <font style="color:rgb(51, 51, 51);">您可以看到屏幕上显示 ' Hello World '。</font>

```plain
$ g++ hello.cpp      //这里使用终端命令行执行c++文件
$ ./a.out
Hello World
```

<font style="color:rgb(51, 51, 51);">请确保您的路径中已包含 g++ 编译器，并确保在包含源文件 hello.cpp 的目录中运行它。</font>

<font style="color:rgb(51, 51, 51);">您也可以使用 makefile 来编译 C/C++ 程序。</font>

## <font style="color:rgb(51, 51, 51);">C++ 中的分号 & 语句块</font>
<font style="color:rgb(51, 51, 51);">在 C++ 中，分号是语句结束符。也就是说，每个语句必须以分号结束。它表明一个逻辑实体的结束。</font>

<font style="color:rgb(51, 51, 51);">例如，下面是三个不同的语句：</font>

<font style="color:rgb(0, 85, 170);background-color:rgb(249, 249, 249);">x</font><font style="color:gray;background-color:rgb(249, 249, 249);"> = </font><font style="color:rgb(0, 85, 170);background-color:rgb(249, 249, 249);">y</font><font style="color:gray;background-color:rgb(249, 249, 249);">; </font>

<font style="color:rgb(0, 85, 170);background-color:rgb(249, 249, 249);">y</font><font style="color:gray;background-color:rgb(249, 249, 249);"> = </font><font style="color:rgb(0, 85, 170);background-color:rgb(249, 249, 249);">y</font><font style="color:gray;background-color:rgb(249, 249, 249);">+</font><font style="color:maroon;background-color:rgb(249, 249, 249);">1</font><font style="color:gray;background-color:rgb(249, 249, 249);">;</font>

<font style="color:gray;background-color:rgb(249, 249, 249);"> </font><font style="color:rgb(0, 85, 170);background-color:rgb(249, 249, 249);">add</font><font style="color:olive;background-color:rgb(249, 249, 249);">(</font><font style="color:rgb(0, 85, 170);background-color:rgb(249, 249, 249);">x</font><font style="color:gray;background-color:rgb(249, 249, 249);">, </font><font style="color:rgb(0, 85, 170);background-color:rgb(249, 249, 249);">y</font><font style="color:olive;background-color:rgb(249, 249, 249);">)</font><font style="color:gray;background-color:rgb(249, 249, 249);">;</font>

<font style="color:rgb(51, 51, 51);">语句块是一组使用大括号括起来的按逻辑连接的语句。例如：</font>

<font style="color:olive;background-color:rgb(249, 249, 249);">{</font><font style="color:rgb(0, 85, 170);background-color:rgb(249, 249, 249);">cout</font><font style="color:gray;background-color:rgb(249, 249, 249);"> << </font><font style="color:rgb(139, 0, 0);background-color:rgb(249, 249, 249);">"</font><font style="color:rgb(170, 17, 17);background-color:rgb(249, 249, 249);">Hello World</font><font style="color:rgb(139, 0, 0);background-color:rgb(249, 249, 249);">"</font><font style="color:gray;background-color:rgb(249, 249, 249);">; </font><font style="color:rgb(170, 85, 0);background-color:rgb(249, 249, 249);">// 输出 Hello World</font><font style="color:green;background-color:rgb(249, 249, 249);">return</font><font style="color:maroon;background-color:rgb(249, 249, 249);">0</font><font style="color:gray;background-color:rgb(249, 249, 249);">; </font><font style="color:olive;background-color:rgb(249, 249, 249);">}</font>

<font style="color:rgb(51, 51, 51);">C++ 不以行末作为结束符的标识，因此，您可以在一行上放置多个语句。例如：</font>

<font style="color:rgb(0, 85, 170);background-color:rgb(249, 249, 249);">x</font><font style="color:gray;background-color:rgb(249, 249, 249);"> = </font><font style="color:rgb(0, 85, 170);background-color:rgb(249, 249, 249);">y</font><font style="color:gray;background-color:rgb(249, 249, 249);">; </font>

<font style="color:rgb(0, 85, 170);background-color:rgb(249, 249, 249);">y</font><font style="color:gray;background-color:rgb(249, 249, 249);"> = </font><font style="color:rgb(0, 85, 170);background-color:rgb(249, 249, 249);">y</font><font style="color:gray;background-color:rgb(249, 249, 249);">+</font><font style="color:maroon;background-color:rgb(249, 249, 249);">1</font><font style="color:gray;background-color:rgb(249, 249, 249);">; </font>

<font style="color:rgb(0, 85, 170);background-color:rgb(249, 249, 249);">add</font><font style="color:olive;background-color:rgb(249, 249, 249);">(</font><font style="color:rgb(0, 85, 170);background-color:rgb(249, 249, 249);">x</font><font style="color:gray;background-color:rgb(249, 249, 249);">, </font><font style="color:rgb(0, 85, 170);background-color:rgb(249, 249, 249);">y</font><font style="color:olive;background-color:rgb(249, 249, 249);">)</font><font style="color:gray;background-color:rgb(249, 249, 249);">;</font>

<font style="color:rgb(51, 51, 51);">等同于</font>

<font style="color:rgb(0, 85, 170);background-color:rgb(249, 249, 249);">x</font><font style="color:gray;background-color:rgb(249, 249, 249);"> = </font><font style="color:rgb(0, 85, 170);background-color:rgb(249, 249, 249);">y</font><font style="color:gray;background-color:rgb(249, 249, 249);">; </font><font style="color:rgb(0, 85, 170);background-color:rgb(249, 249, 249);">y</font><font style="color:gray;background-color:rgb(249, 249, 249);"> = </font><font style="color:rgb(0, 85, 170);background-color:rgb(249, 249, 249);">y</font><font style="color:gray;background-color:rgb(249, 249, 249);">+</font><font style="color:maroon;background-color:rgb(249, 249, 249);">1</font><font style="color:gray;background-color:rgb(249, 249, 249);">; </font><font style="color:rgb(0, 85, 170);background-color:rgb(249, 249, 249);">add</font><font style="color:olive;background-color:rgb(249, 249, 249);">(</font><font style="color:rgb(0, 85, 170);background-color:rgb(249, 249, 249);">x</font><font style="color:gray;background-color:rgb(249, 249, 249);">, </font><font style="color:rgb(0, 85, 170);background-color:rgb(249, 249, 249);">y</font><font style="color:olive;background-color:rgb(249, 249, 249);">)</font><font style="color:gray;background-color:rgb(249, 249, 249);">;</font>

## <font style="color:rgb(51, 51, 51);">C++ 标识符</font>
<font style="color:rgb(51, 51, 51);">C++ 标识符是用来标识变量、函数、类、模块，或任何其他用户自定义项目的名称。一个标识符以字母 A-Z 或 a-z 或下划线 _ 开始，后跟零个或多个字母、下划线和数字（0-9）。</font>

<font style="color:rgb(51, 51, 51);">C++ 标识符内不允许出现标点字符，比如 @、& 和 %。C++ 是区分大小写的编程语言。因此，在 C++ 中，</font>**<font style="color:rgb(51, 51, 51);">Manpower</font>**<font style="color:rgb(51, 51, 51);"> </font><font style="color:rgb(51, 51, 51);">和</font><font style="color:rgb(51, 51, 51);"> </font>**<font style="color:rgb(51, 51, 51);">manpower</font>**<font style="color:rgb(51, 51, 51);"> </font><font style="color:rgb(51, 51, 51);">是两个不同的标识符。</font>

<font style="color:rgb(51, 51, 51);">下面列出几个有效的标识符：</font>

```plain
mohd       zara    abc   move_name  a_123
myname50   _temp   j     a23b9      retVal
```

## <font style="color:rgb(51, 51, 51);">C++ 关键字</font>
<font style="color:rgb(51, 51, 51);">下表列出了 C++ 中的保留字。这些保留字不能作为常量名、变量名或其他标识符名称。</font>

| <font style="color:rgb(51, 51, 51);">asm</font> | <font style="color:rgb(51, 51, 51);">else</font> | <font style="color:rgb(51, 51, 51);">new</font> | <font style="color:rgb(51, 51, 51);">this</font> |
| --- | --- | --- | --- |
| <font style="color:rgb(51, 51, 51);">auto</font> | <font style="color:rgb(51, 51, 51);">enum</font> | <font style="color:rgb(51, 51, 51);">operator</font> | <font style="color:rgb(51, 51, 51);">throw</font> |
| <font style="color:rgb(51, 51, 51);">bool</font> | <font style="color:rgb(51, 51, 51);">explicit</font> | <font style="color:rgb(51, 51, 51);">private</font> | <font style="color:rgb(51, 51, 51);">true</font> |
| <font style="color:rgb(51, 51, 51);">break</font> | <font style="color:rgb(51, 51, 51);">export</font> | <font style="color:rgb(51, 51, 51);">protected</font> | <font style="color:rgb(51, 51, 51);">try</font> |
| <font style="color:rgb(51, 51, 51);">case</font> | <font style="color:rgb(51, 51, 51);">extern</font> | <font style="color:rgb(51, 51, 51);">public</font> | <font style="color:rgb(51, 51, 51);">typedef</font> |
| <font style="color:rgb(51, 51, 51);">catch</font> | <font style="color:rgb(51, 51, 51);">false</font> | <font style="color:rgb(51, 51, 51);">register</font> | <font style="color:rgb(51, 51, 51);">typeid</font> |
| <font style="color:rgb(51, 51, 51);">char</font> | <font style="color:rgb(51, 51, 51);">float</font> | <font style="color:rgb(51, 51, 51);">reinterpret_cast</font> | <font style="color:rgb(51, 51, 51);">typename</font> |
| <font style="color:rgb(51, 51, 51);">class</font> | <font style="color:rgb(51, 51, 51);">for</font> | <font style="color:rgb(51, 51, 51);">return</font> | <font style="color:rgb(51, 51, 51);">union</font> |
| <font style="color:rgb(51, 51, 51);">const</font> | <font style="color:rgb(51, 51, 51);">friend</font> | <font style="color:rgb(51, 51, 51);">short</font> | <font style="color:rgb(51, 51, 51);">unsigned</font> |
| <font style="color:rgb(51, 51, 51);">const_cast</font> | <font style="color:rgb(51, 51, 51);">goto</font> | <font style="color:rgb(51, 51, 51);">signed</font> | <font style="color:rgb(51, 51, 51);">using</font> |
| <font style="color:rgb(51, 51, 51);">continue</font> | <font style="color:rgb(51, 51, 51);">if</font> | <font style="color:rgb(51, 51, 51);">sizeof</font> | <font style="color:rgb(51, 51, 51);">virtual</font> |
| <font style="color:rgb(51, 51, 51);">default</font> | <font style="color:rgb(51, 51, 51);">inline</font> | <font style="color:rgb(51, 51, 51);">static</font> | <font style="color:rgb(51, 51, 51);">void</font> |
| <font style="color:rgb(51, 51, 51);">delete</font> | <font style="color:rgb(51, 51, 51);">int</font> | <font style="color:rgb(51, 51, 51);">static_cast</font> | <font style="color:rgb(51, 51, 51);">volatile</font> |
| <font style="color:rgb(51, 51, 51);">do</font> | <font style="color:rgb(51, 51, 51);">long</font> | <font style="color:rgb(51, 51, 51);">struct</font> | <font style="color:rgb(51, 51, 51);">wchar_t</font> |
| <font style="color:rgb(51, 51, 51);">double</font> | <font style="color:rgb(51, 51, 51);">mutable</font> | <font style="color:rgb(51, 51, 51);">switch</font> | <font style="color:rgb(51, 51, 51);">while</font> |
| <font style="color:rgb(51, 51, 51);">dynamic_cast</font> | <font style="color:rgb(51, 51, 51);">namespace</font> | <font style="color:rgb(51, 51, 51);">template</font> | <font style="color:rgb(51, 51, 51);"> </font> |


<font style="color:rgb(51, 51, 51);">完整关键字介绍可查阅：</font>[<font style="color:rgb(51, 51, 51);">C++ 的关键字（保留字）完整介绍</font>](https://www.runoob.com/w3cnote/cpp-keyword-intro.html)

## <font style="color:rgb(51, 51, 51);">三字符组</font>
<font style="color:rgb(51, 51, 51);">三字符组就是用于表示另一个字符的三个字符序列，又称为三字符序列。三字符序列总是以两个问号开头。</font>

<font style="color:rgb(51, 51, 51);">三字符序列不太常见，但 C++ 标准允许把某些字符指定为三字符序列。以前为了表示键盘上没有的字符，这是必不可少的一种方法。</font>

<font style="color:rgb(51, 51, 51);">三字符序列可以出现在任何地方，包括字符串、字符序列、注释和预处理指令。</font>

<font style="color:rgb(51, 51, 51);"></font>

<font style="color:rgb(51, 51, 51);">个人认为不用记三字符组，你只需知道的替换的符号是什么就好了</font>

<font style="color:rgb(51, 51, 51);">下面列出了最常用的三字符序列：</font>

| <font style="color:rgb(255, 255, 255);">三字符组</font> | <font style="color:rgb(255, 255, 255);">替换</font> |
| --- | --- |
| <font style="color:rgb(51, 51, 51);">??=</font> | <font style="color:rgb(51, 51, 51);">#</font> |
| <font style="color:rgb(51, 51, 51);">??/</font> | <font style="color:rgb(51, 51, 51);">\</font> |
| <font style="color:rgb(51, 51, 51);">??'</font> | <font style="color:rgb(51, 51, 51);">^</font> |
| <font style="color:rgb(51, 51, 51);">??(</font> | <font style="color:rgb(51, 51, 51);">[</font> |
| <font style="color:rgb(51, 51, 51);">??)</font> | <font style="color:rgb(51, 51, 51);">]</font> |
| <font style="color:rgb(51, 51, 51);">??!</font> | <font style="color:rgb(51, 51, 51);">|</font> |
| <font style="color:rgb(51, 51, 51);">??<</font> | <font style="color:rgb(51, 51, 51);">{</font> |
| <font style="color:rgb(51, 51, 51);">??></font> | <font style="color:rgb(51, 51, 51);">}</font> |
| <font style="color:rgb(51, 51, 51);">??-</font> | <font style="color:rgb(51, 51, 51);">~</font> |


<font style="color:rgb(51, 51, 51);">如果希望在源程序中有两个连续的问号，且不希望被预处理器替换，这种情况出现在字符常量、字符串字面值或者是程序注释中，可选办法是用字符串的自动连接："...?""?..."或者转义序列："...?\?..."。</font>

<font style="color:rgb(51, 51, 51);">从Microsoft Visual C++ 2010版开始，该编译器默认不再自动替换三字符组。如果需要使用三字符组替换（如为了兼容古老的软件代码），需要设置编译器命令行选项/Zc:trigraphs</font>

<font style="color:rgb(51, 51, 51);">g++仍默认支持三字符组，但会给出编译警告。</font>

## <font style="color:rgb(51, 51, 51);">C++ 中的空格</font>
<font style="color:rgb(51, 51, 51);">只包含空格的行，被称为空白行，可能带有注释，C++ 编译器会完全忽略它。</font>

<font style="color:rgb(51, 51, 51);">在 C++ 中，空格用于描述空白符、制表符、换行符和注释。空格分隔语句的各个部分，让编译器能识别语句中的某个元素（比如 int）在哪里结束，下一个元素在哪里开始。因此，在下面的语句中：</font>

int age;

<font style="color:rgb(51, 51, 51);">在这里，int 和 age 之间必须至少有一个空格字符（通常是一个空白符），这样编译器才能够区分它们。另一方面，在下面的语句中：</font>

fruit = apples + oranges;   // 获取水果的总数

<font style="color:rgb(51, 51, 51);">fruit 和 =，或者 = 和 apples 之间的空格字符不是必需的，但是为了增强可读性，您可以根据需要适当增加一些空格。</font>

# C++ 注释
<font style="color:rgb(51, 51, 51);">程序的注释是解释性语句，您可以在 C++ 代码中包含注释，这将提高源代码的可读性。所有的编程语言都允许某种形式的注释。</font>

<font style="color:rgb(51, 51, 51);">C++ 支持单行注释和多行注释。注释中的所有字符会被 C++ 编译器忽略。</font>

<font style="color:rgb(51, 51, 51);">C++ 注释一般有两种：</font>

+ **<font style="color:rgb(51, 51, 51);background-color:rgb(236, 234, 230);">//</font>**<font style="color:rgb(51, 51, 51);"> </font><font style="color:rgb(51, 51, 51);">- 一般用于单行注释。</font>
+ <font style="color:rgb(51, 51, 51);">/</font>**<font style="color:rgb(51, 51, 51);background-color:rgb(236, 234, 230);">* ... */</font>**<font style="color:rgb(51, 51, 51);"> - 一般用于多行注释。</font>

