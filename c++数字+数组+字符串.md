# C++ 数字
_<font style="color:rgb(51, 51, 51);">通常，当我们需要用到数字时，我们会使用原始的数据类型，如 int、short、long、float 和 double 等等。这些用于数字的数据类型，其可能的值和数值范围，我们已经在 C++ 数据类型一章中讨论过。</font>_

## <font style="color:rgb(51, 51, 51);">C++ 定义数字</font>
<font style="color:rgb(51, 51, 51);">我们已经在之前章节的各种实例中定义过数字。下面是一个 C++ 中定义各种类型数字的综合实例：</font>

```cpp
#include <iostream>
using namespace std;
 
int main ()
{
   // 数字定义
   short  s;
   int    i;
   long   l;
   float  f;
   double d;
   
   // 数字赋值
   s = 10;      
   i = 1000;    
   l = 1000000; 
   f = 230.47;  
   d = 30949.374;
   
   // 数字输出
   cout << "short  s :" << s << endl;
   cout << "int    i :" << i << endl;
   cout << "long   l :" << l << endl;
   cout << "float  f :" << f << endl;
   cout << "double d :" << d << endl;
 
   return 0;
}	
```

<font style="color:rgb(51, 51, 51);">当上面的代码被编译和执行时，它会产生下列结果：</font>

```plain
short  s :10
int    i :1000
long   l :1000000
float  f :230.47
double d :30949.4
```

## <font style="color:rgb(51, 51, 51);">C++ 数学运算</font>
<font style="color:rgb(51, 51, 51);">在 C++ 中，除了可以创建各种函数，还包含了各种有用的函数供您使用。这些函数写在标准 C 和 C++ 库中，叫做</font>**<font style="color:rgb(51, 51, 51);">内置</font>**<font style="color:rgb(51, 51, 51);">函数。您可以在程序中引用这些函数。</font>

<font style="color:rgb(51, 51, 51);">C++ 内置了丰富的数学函数，可对各种数字进行运算。下表列出了 C++ 中一些有用的内置的数学函数。</font>

<font style="color:rgb(51, 51, 51);">为了利用这些函数，您需要引用数学头文件</font><font style="color:rgb(51, 51, 51);"> </font>**<font style="color:rgb(51, 51, 51);"><cmath></font>**<font style="color:rgb(51, 51, 51);">。</font>

| <font style="color:rgb(255, 255, 255);">序号</font> | <font style="color:rgb(255, 255, 255);">函数 & 描述</font> |
| --- | --- |
| <font style="color:rgb(51, 51, 51);">1</font> | **<font style="color:rgb(51, 51, 51);">double cos(double);</font>**<font style="color:rgb(51, 51, 51);">   </font><font style="color:rgb(51, 51, 51);">该函数返回弧度角（double 型）的余弦。</font> |
| <font style="color:rgb(51, 51, 51);">2</font> | **<font style="color:rgb(51, 51, 51);">double sin(double);</font>**<font style="color:rgb(51, 51, 51);">   </font><font style="color:rgb(51, 51, 51);">该函数返回弧度角（double 型）的正弦。</font> |
| <font style="color:rgb(51, 51, 51);">3</font> | **<font style="color:rgb(51, 51, 51);">double tan(double);</font>**<font style="color:rgb(51, 51, 51);">   </font><font style="color:rgb(51, 51, 51);">该函数返回弧度角（double 型）的正切。</font> |
| <font style="color:rgb(51, 51, 51);">4</font> | **<font style="color:rgb(51, 51, 51);">double log(double);</font>**<font style="color:rgb(51, 51, 51);">   </font><font style="color:rgb(51, 51, 51);">该函数返回参数的自然对数。</font> |
| <font style="color:rgb(51, 51, 51);">5</font> | **<font style="color:rgb(51, 51, 51);">double pow(double, double);</font>**<font style="color:rgb(51, 51, 51);">   </font><font style="color:rgb(51, 51, 51);">假设第一个参数为 x，第二个参数为 y，则该函数返回 x 的 y 次方。</font> |
| <font style="color:rgb(51, 51, 51);">6</font> | **<font style="color:rgb(51, 51, 51);">double hypot(double, double);</font>**<font style="color:rgb(51, 51, 51);">   </font><font style="color:rgb(51, 51, 51);">该函数返回两个参数的平方总和的平方根，也就是说，参数为一个直角三角形的两个直角边，函数会返回斜边的长度。</font> |
| <font style="color:rgb(51, 51, 51);">7</font> | **<font style="color:rgb(51, 51, 51);">double sqrt(double);</font>**<font style="color:rgb(51, 51, 51);">   </font><font style="color:rgb(51, 51, 51);">该函数返回参数的平方根。</font> |
| <font style="color:rgb(51, 51, 51);">8</font> | **<font style="color:rgb(51, 51, 51);">int abs(int);</font>**<font style="color:rgb(51, 51, 51);">   </font><font style="color:rgb(51, 51, 51);">该函数返回整数的绝对值。</font> |
| <font style="color:rgb(51, 51, 51);">9</font> | **<font style="color:rgb(51, 51, 51);">double fabs(double);</font>**<font style="color:rgb(51, 51, 51);">   </font><font style="color:rgb(51, 51, 51);">该函数返回任意一个浮点数的绝对值。</font> |
| <font style="color:rgb(51, 51, 51);">10</font> | **<font style="color:rgb(51, 51, 51);">double floor(double);</font>**<font style="color:rgb(51, 51, 51);">   </font><font style="color:rgb(51, 51, 51);">该函数返回一个小于或等于传入参数的最大整数。</font> |


<font style="color:rgb(51, 51, 51);">下面是一个关于数学运算的简单实例：</font>

```cpp
#include <iostream>
#include <cmath>
using namespace std;
 
int main ()
{
   // 数字定义
   short  s = 10;
   int    i = -1000;
   long   l = 100000;
   float  f = 230.47;
   double d = 200.374;
 
   // 数学运算
   cout << "sin(d) :" << sin(d) << endl;
   cout << "abs(i)  :" << abs(i) << endl;
   cout << "floor(d) :" << floor(d) << endl;
   cout << "sqrt(f) :" << sqrt(f) << endl;
   cout << "pow( d, 2) :" << pow(d, 2) << endl;
 
   return 0;
}
```

<font style="color:rgb(51, 51, 51);">当上面的代码被编译和执行时，它会产生下列结果：</font>

```plain
sin(d) :-0.634939
abs(i)  :1000
floor(d) :200
sqrt(f) :15.1812
pow( d, 2 ) :40149.7
```

## <font style="color:rgb(51, 51, 51);">C++ 随机数</font>
<font style="color:rgb(51, 51, 51);">在许多情况下，需要生成随机数。关于随机数生成器，有两个相关的函数。一个是</font><font style="color:rgb(51, 51, 51);"> </font>**<font style="color:rgb(51, 51, 51);">rand()</font>**<font style="color:rgb(51, 51, 51);">，该函数只返回一个伪随机数。生成随机数之前必须先调用</font><font style="color:rgb(51, 51, 51);"> </font>**<font style="color:rgb(51, 51, 51);">srand()</font>**<font style="color:rgb(51, 51, 51);"> </font><font style="color:rgb(51, 51, 51);">函数。</font>

<font style="color:rgb(51, 51, 51);">下面是一个关于生成随机数的简单实例。实例中使用了</font><font style="color:rgb(51, 51, 51);"> </font>**<font style="color:rgb(51, 51, 51);">time()</font>**<font style="color:rgb(51, 51, 51);"> </font><font style="color:rgb(51, 51, 51);">函数来获取系统时间的秒数，通过调用 rand() 函数来生成随机数：</font>

```cpp
#include <iostream>
#include <ctime>
#include <cstdlib>
 
using namespace std;
 
int main ()
{
   int i,j;
 
   // 设置种子
   srand( (unsigned)time( NULL ) );
 
   /* 生成 10 个随机数 */
   for( i = 0; i < 10; i++ )
   {
      // 生成实际的随机数
      j= rand();
      cout <<"随机数： " << j << endl;
   }
 
   return 0;
}
```

<font style="color:rgb(51, 51, 51);">当上面的代码被编译和执行时，它会产生下列结果：</font>

```plain
随机数： 1748144778
随机数： 630873888
随机数： 2134540646
随机数： 219404170
随机数： 902129458
随机数： 920445370
随机数： 1319072661
随机数： 257938873
随机数： 1256201101
随机数： 580322989
```

# C++ 数组
_<font style="color:rgb(51, 51, 51);">C++ 支持</font>__**<font style="color:rgb(51, 51, 51);">数组</font>**__<font style="color:rgb(51, 51, 51);">数据结构，它可以存储一个固定大小的相同类型元素的顺序集合。数组是用来存储一系列数据，但它往往被认为是一系列相同类型的变量。</font>_

_<font style="color:rgb(51, 51, 51);">数组的声明并不是声明一个个单独的变量，比如 number0、number1、...、number99，而是声明一个数组变量，比如 numbers，然后使用 numbers[0]、numbers[1]、...、numbers[99] 来代表一个个单独的变量。数组中的特定元素可以通过索引访问。</font>_

_<font style="color:rgb(51, 51, 51);">所有的数组都是由连续的内存位置组成。最低的地址对应第一个元素，最高的地址对应最后一个元素。</font>_

## <font style="color:rgb(51, 51, 51);">声明数组</font>
<font style="color:rgb(51, 51, 51);">在 C++ 中要声明一个数组，需要指定元素的类型和元素的数量，如下所示：</font>

```cpp
type arrayName [ arraySize ];
```

<font style="color:rgb(51, 51, 51);">这叫做一维数组。</font>**<font style="color:rgb(51, 51, 51);">arraySize</font>**<font style="color:rgb(51, 51, 51);"> </font><font style="color:rgb(51, 51, 51);">必须是一个大于零的整数常量，</font>**<font style="color:rgb(51, 51, 51);">type</font>**<font style="color:rgb(51, 51, 51);"> </font><font style="color:rgb(51, 51, 51);">可以是任意有效的 C++ 数据类型。例如，要声明一个类型为 double 的包含 10 个元素的数组</font><font style="color:rgb(51, 51, 51);"> </font>**<font style="color:rgb(51, 51, 51);">balance</font>**<font style="color:rgb(51, 51, 51);">，声明语句如下：</font>

```cpp
double balance[10];
```

<font style="color:rgb(51, 51, 51);">现在</font><font style="color:rgb(51, 51, 51);"> </font>_<font style="color:rgb(51, 51, 51);">balance</font>_<font style="color:rgb(51, 51, 51);"> </font><font style="color:rgb(51, 51, 51);">是一个可用的数组，可以容纳 10 个类型为 double 的数字。</font>

## <font style="color:rgb(51, 51, 51);">初始化数组</font>
<font style="color:rgb(51, 51, 51);">在 C++ 中，您可以逐个初始化数组，也可以使用一个初始化语句，如下所示：</font>

```cpp
double balance[5] = {1000.0, 2.0, 3.4, 7.0, 50.0};
```

<font style="color:rgb(51, 51, 51);">大括号 { } 之间的值的数目不能大于我们在数组声明时在方括号 [ ] 中指定的元素数目。</font>

<font style="color:rgb(51, 51, 51);">如果您省略掉了数组的大小，数组的大小则为初始化时元素的个数。因此，如果：</font>

```cpp
double balance[] = {1000.0, 2.0, 3.4, 7.0, 50.0};
```

<font style="color:rgb(51, 51, 51);">您将创建一个数组，它与前一个实例中所创建的数组是完全相同的。下面是一个为数组中某个元素赋值的实例：</font>

```cpp
balance[4] = 50.0;
```

<font style="color:rgb(51, 51, 51);">上述的语句把数组中第五个元素的值赋为 50.0。所有的数组都是以 0 作为它们第一个元素的索引，也被称为基索引，数组的最后一个索引是数组的总大小减去 1。以下是上面所讨论的数组的的图形表示：</font>

![](https://cdn.nlark.com/yuque/0/2024/png/43034535/1732848183127-2123dbb0-a5af-4595-88c9-93ccdc596b63.png)

## <font style="color:rgb(51, 51, 51);">访问数组元素</font>
<font style="color:rgb(51, 51, 51);">数组元素可以通过数组名称加索引进行访问。元素的索引是放在方括号内，跟在数组名称的后边。例如：</font>

double salary = balance[9];

<font style="color:rgb(51, 51, 51);">上面的语句将把数组中第 10 个元素的值赋给 salary 变量。下面的实例使用了上述的三个概念，即，声明数组、数组赋值、访问数组：</font>

```cpp
#include <iostream>
using namespace std;
 
#include <iomanip>
using std::setw;
 
int main ()
{
   int n[ 10 ]; // n 是一个包含 10 个整数的数组
 
   // 初始化数组元素          
   for ( int i = 0; i < 10; i++ )
   {
      n[ i ] = i + 100; // 设置元素 i 为 i + 100
   }
   cout << "Element" << setw( 13 ) << "Value" << endl;
 
   // 输出数组中每个元素的值                     
   for ( int j = 0; j < 10; j++ )
   {
      cout << setw( 7 )<< j << setw( 13 ) << n[ j ] << endl;
   }
 
   return 0;
}
```

<font style="color:rgb(51, 51, 51);">上面的程序使用了</font><font style="color:rgb(51, 51, 51);"> </font>[**<font style="color:rgb(51, 51, 51);">setw() 函数</font>**](https://www.runoob.com/w3cnote/cpp-func-setw.html)<font style="color:rgb(51, 51, 51);"> </font><font style="color:rgb(51, 51, 51);">来格式化输出。当上面的代码被编译和执行时，它会产生下列结果：</font>

```plain
Element        Value
      0          100
      1          101
      2          102
      3          103
      4          104
      5          105
      6          106
      7          107
      8          108
      9          109
```

## <font style="color:rgb(51, 51, 51);">C++ 中数组详解</font>
<font style="color:rgb(51, 51, 51);">在 C++ 中，数组是非常重要的，我们需要了解更多有关数组的细节。下面列出了 C++ 程序员必须清楚的一些与数组相关的重要概念：</font>

| <font style="color:rgb(255, 255, 255);">概念</font> | <font style="color:rgb(255, 255, 255);">描述</font> |
| --- | --- |
| [<font style="color:rgb(51, 51, 51);">多维数组</font>](https://www.runoob.com/cplusplus/cpp-multi-dimensional-arrays.html) | <font style="color:rgb(51, 51, 51);">C++ 支持多维数组。多维数组最简单的形式是二维数组。</font> |
| [<font style="color:rgb(51, 51, 51);">指向数组的指针</font>](https://www.runoob.com/cplusplus/cpp-pointer-to-an-array.html) | <font style="color:rgb(51, 51, 51);">您可以通过指定不带索引的数组名称来生成一个指向数组中第一个元素的指针。</font> |
| [<font style="color:rgb(51, 51, 51);">传递数组给函数</font>](https://www.runoob.com/cplusplus/cpp-passing-arrays-to-functions.html) | <font style="color:rgb(51, 51, 51);">您可以通过指定不带索引的数组名称来给函数传递一个指向数组的指针。</font> |
| [<font style="color:rgb(51, 51, 51);">从函数返回数组</font>](https://www.runoob.com/cplusplus/cpp-return-arrays-from-function.html) | <font style="color:rgb(51, 51, 51);">C++ 允许从函数返回数组。</font> |


# C++ 多维数组
[<font style="color:rgb(51, 51, 51);">C++ 数组</font>](https://www.runoob.com/cplusplus/cpp-arrays.html)

_<font style="color:rgb(51, 51, 51);">C++ 支持多维数组。多维数组声明的一般形式如下：</font>_

```cpp
type name[size1][size2]...[sizeN];
```

_<font style="color:rgb(51, 51, 51);">例如，下面的声明创建了一个三维 5 . 10 . 4 整型数组：</font>_

```cpp
int threedim[5][10][4];
```

## <font style="color:rgb(51, 51, 51);">二维数组</font>
<font style="color:rgb(51, 51, 51);">多维数组最简单的形式是二维数组。一个二维数组，在本质上，是一个一维数组的列表。声明一个 x 行 y 列的二维整型数组，形式如下：</font>

```cpp
type arrayName [ x ][ y ];
```

<font style="color:rgb(51, 51, 51);">其中，</font>**<font style="color:rgb(51, 51, 51);">type</font>**<font style="color:rgb(51, 51, 51);"> </font><font style="color:rgb(51, 51, 51);">可以是任意有效的 C++ 数据类型，</font>**<font style="color:rgb(51, 51, 51);">arrayName</font>**<font style="color:rgb(51, 51, 51);"> </font><font style="color:rgb(51, 51, 51);">是一个有效的 C++ 标识符。</font>

<font style="color:rgb(51, 51, 51);">一个二维数组可以被认为是一个带有 x 行和 y 列的表格。下面是一个二维数组，包含 3 行和 4 列：</font>

![](https://cdn.nlark.com/yuque/0/2024/png/43034535/1732848532669-33202a15-6174-4bf1-897b-6c5b211a24be.png)

<font style="color:rgb(51, 51, 51);">因此，数组中的每个元素是使用形式为 a[ i , j ] 的元素名称来标识的，其中 a 是数组名称，i 和 j 是唯一标识 a 中每个元素的下标。</font>

### <font style="color:rgb(51, 51, 51);">初始化二维数组</font>
<font style="color:rgb(51, 51, 51);">多维数组可以通过在括号内为每行指定值来进行初始化。下面是一个带有 3 行 4 列的数组。</font>

```cpp
int a[3][4] = {  
    {0, 1, 2, 3} ,   /*  初始化索引号为 0 的行 */
    {4, 5, 6, 7} ,   /*  初始化索引号为 1 的行 */
    {8, 9, 10, 11}   /*  初始化索引号为 2 的行 */
};
```

<font style="color:rgb(51, 51, 51);">内部嵌套的括号是可选的，下面的初始化与上面是等同的：</font>

```cpp
int a[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11};
```

### <font style="color:rgb(51, 51, 51);">访问二维数组元素</font>
<font style="color:rgb(51, 51, 51);">二维数组中的元素是通过使用下标（即数组的行索引和列索引）来访问的。例如：</font>

```cpp
int val = a[2][3];
```

<font style="color:rgb(51, 51, 51);">上面的语句将获取数组中第 3 行第 4 个元素。您可以通过上面的示意图来进行验证。让我们来看看下面的程序，我们将使用嵌套循环来处理二维数组：</font>

```cpp
#include <iostream>
using namespace std;
 
int main ()
{
   // 一个带有 5 行 2 列的数组
   int a[5][2] = { {0,0}, {1,2}, {2,4}, {3,6},{4,8}};
 
   // 输出数组中每个元素的值                      
   for ( int i = 0; i < 5; i++ )
      for ( int j = 0; j < 2; j++ )
      {
         cout << "a[" << i << "][" << j << "]: ";
         cout << a[i][j]<< endl;
      }
 
   return 0;
}
```

<font style="color:rgb(51, 51, 51);">当上面的代码被编译和执行时，它会产生下列结果：</font>

```plain
a[0][0]: 0
a[0][1]: 0
a[1][0]: 1
a[1][1]: 2
a[2][0]: 2
a[2][1]: 4
a[3][0]: 3
a[3][1]: 6
a[4][0]: 4
a[4][1]: 8
```

<font style="color:rgb(51, 51, 51);">如上所述，您可以创建任意维度的数组，但是一般情况下，我们创建的数组是一维数组和二维数组。</font>

# C++ 指向数组的指针
<font style="color:rgb(51, 51, 51);">您可以先跳过本章，等了解了 C++ 指针的概念之后，再来学习本章的内容。</font>

<font style="color:rgb(51, 51, 51);">如果您对 C++ 指针的概念有所了解，那么就可以开始本章的学习。数组名是指向数组中第一个元素的常量指针。因此，在下面的声明中：</font>

```plain
double runoobAarray[50];
```

**<font style="color:rgb(51, 51, 51);">runoobAarray</font>**<font style="color:rgb(51, 51, 51);"> </font><font style="color:rgb(51, 51, 51);">是一个指向 &runoobAarray[0] 的指针，即数组 runoobAarray 的第一个元素的地址。因此，下面的程序片段把</font><font style="color:rgb(51, 51, 51);"> </font>**<font style="color:rgb(51, 51, 51);">p</font>**<font style="color:rgb(51, 51, 51);"> </font><font style="color:rgb(51, 51, 51);">赋值为</font><font style="color:rgb(51, 51, 51);"> </font>**<font style="color:rgb(51, 51, 51);">runoobAarray</font>**<font style="color:rgb(51, 51, 51);"> </font><font style="color:rgb(51, 51, 51);">的第一个元素的地址：</font>

```plain
double *p;
double runoobAarray[10];

p = runoobAarray;
```

<font style="color:rgb(51, 51, 51);">使用数组名作为常量指针是合法的，反之亦然。因此，*(runoobAarray + 4) 是一种访问 runoobAarray[4] 数据的合法方式。</font>

<font style="color:rgb(51, 51, 51);">一旦您把第一个元素的地址存储在 p 中，您就可以使用 *p、*(p+1)、*(p+2) 等来访问数组元素。下面的实例演示了上面讨论到的这些概念：</font>

```cpp
#include <iostream>
using namespace std;
 
int main ()
{
   // 带有 5 个元素的双精度浮点型数组
   double runoobAarray[5] = {1000.0, 2.0, 3.4, 17.0, 50.0};
   double *p;
 
   p = runoobAarray;
 
   // 输出数组中每个元素的值
   cout << "使用指针的数组值 " << endl; 
   for ( int i = 0; i < 5; i++ )
   {
       cout << "*(p + " << i << ") : ";
       cout << *(p + i) << endl;
   }
 
   cout << "使用 runoobAarray 作为地址的数组值 " << endl;
   for ( int i = 0; i < 5; i++ )
   {
       cout << "*(runoobAarray + " << i << ") : ";
       cout << *(runoobAarray + i) << endl;
   }
 
   return 0;
}
```

<font style="color:rgb(51, 51, 51);">当上面的代码被编译和执行时，它会产生下列结果：</font>

```plain
使用指针的数组值 
*(p + 0) : 1000
*(p + 1) : 2
*(p + 2) : 3.4
*(p + 3) : 17
*(p + 4) : 50
使用 runoobAarray 作为地址的数组值 
*(runoobAarray + 0) : 1000
*(runoobAarray + 1) : 2
*(runoobAarray + 2) : 3.4
*(runoobAarray + 3) : 17
*(runoobAarray + 4) : 50
```

<font style="color:rgb(51, 51, 51);">在上面的实例中，p 是一个指向 double 型的指针，这意味着它可以存储一个 double 类型的变量。一旦我们有了 p 中的地址，</font>**<font style="color:rgb(51, 51, 51);">*p</font>**<font style="color:rgb(51, 51, 51);"> 将给出存储在 p 中相应地址的值，正如上面实例中所演示的。</font>

# C++ 传递数组给函数
[<font style="color:rgb(51, 51, 51);">C++ 数组</font>](https://www.runoob.com/cplusplus/cpp-arrays.html)

_<font style="color:rgb(51, 51, 51);">C++ 中您可以通过指定不带索引的数组名来传递一个指向数组的指针。</font>_

_<font style="color:rgb(51, 51, 51);">C++ 传数组给一个函数，数组类型自动转换为指针类型，因而传的实际是地址。</font>_

_<font style="color:rgb(51, 51, 51);">如果您想要在函数中传递一个一维数组作为参数，您必须以下面三种方式来声明函数形式参数，这三种声明方式的结果是一样的，因为每种方式都会告诉编译器将要接收一个整型指针。同样地，您也可以传递一个多维数组作为形式参数。</font>_

### <font style="color:rgb(51, 51, 51);">方式 1</font>
_<font style="color:rgb(51, 51, 51);">形式参数是一个指针：</font>_

```plain
void myFunction(int *param)
{
.
.
.
}
```

### <font style="color:rgb(51, 51, 51);">方式 2</font>
_<font style="color:rgb(51, 51, 51);">形式参数是一个已定义大小的数组：</font>_

```plain
void myFunction(int param[10])
{
.
.
.
}
```

### <font style="color:rgb(51, 51, 51);">方式 3</font>
_<font style="color:rgb(51, 51, 51);">形式参数是一个未定义大小的数组：</font>_

```plain
void myFunction(int param[])
{
.
.
.
}
```

## <font style="color:rgb(51, 51, 51);">实例</font>
<font style="color:rgb(51, 51, 51);">现在，让我们来看下面这个函数，它把数组作为参数，同时还传递了另一个参数，根据所传的参数，会返回数组中各元素的平均值：</font>

```cpp
double getAverage(int arr[], int size)
{
  int    i, sum = 0;       
  double avg;          
 
  for (i = 0; i < size; ++i)
  {
    sum += arr[i];
   }
 
  avg = double(sum) / size;
 
  return avg;
}
```

<font style="color:rgb(51, 51, 51);">现在，让我们调用上面的函数，如下所示：</font>

```cpp
#include <iostream>
using namespace std;
 
// 函数声明
double getAverage(int arr[], int size);
 
int main ()
{
   // 带有 5 个元素的整型数组
   int balance[5] = {1000, 2, 3, 17, 50};
   double avg;
 
   // 传递一个指向数组的指针作为参数
   avg = getAverage( balance, 5 ) ;
 
   // 输出返回值
   cout << "平均值是：" << avg << endl; 
    
   return 0;
}
```

<font style="color:rgb(51, 51, 51);">当上面的代码被编译和执行时，它会产生下列结果：</font>

平均值是： 214.4

<font style="color:rgb(51, 51, 51);">您可以看到，就函数而言，数组的长度是无关紧要的，因为 C++ 不会对形式参数执行边界检查。</font>

# C++ 从函数返回数组
[<font style="color:rgb(51, 51, 51);">C++ 数组</font>](https://www.runoob.com/cplusplus/cpp-arrays.html)

<font style="color:rgb(51, 51, 51);">C++ 不允许返回一个完整的数组作为函数的参数。但是，您可以通过指定不带索引的数组名来返回一个指向数组的指针。</font>

<font style="color:rgb(51, 51, 51);">如果您想要从函数返回一个一维数组，您必须声明一个返回指针的函数，如下：</font>

```cpp
int * myFunction() {
    //. . .
}
```

<font style="color:rgb(51, 51, 51);">如下实例：</font>

```cpp
int* myFunction()
{
   int myArray[3] = {1, 2, 3};
   return myArray;
}
```

**<font style="color:rgb(51, 51, 51);">注意：</font>**<font style="color:rgb(51, 51, 51);">你不能简单地返回指向局部数组的指针，因为当函数结束时，局部数组将被销毁，指向它的指针将变得无效。</font>

<font style="color:rgb(51, 51, 51);">C++ 不支持在函数外返回局部变量的地址，除非定义局部变量为</font><font style="color:rgb(51, 51, 51);"> </font>**<font style="color:rgb(51, 51, 51);">static</font>**<font style="color:rgb(51, 51, 51);"> </font><font style="color:rgb(51, 51, 51);">变量。</font>

<font style="color:rgb(51, 51, 51);">为了避免以上情况，你可以使用静态数组或者动态分配数组。</font>

<font style="color:rgb(51, 51, 51);">使用静态数组需要在函数内部创建一个静态数组，并将其地址返回，例如：</font>

```cpp
int* myFunction()
{
   static int myArray[3] = {1, 2, 3};
   return myArray;
}
```

<font style="color:rgb(51, 51, 51);">现在，让我们来看下面的函数，它会生成 10 个随机数，并使用数组来返回它们，具体如下：</font>

```cpp
#include <iostream>
#include <cstdlib>
#include <ctime>
 
using namespace std;
 
// 要生成和返回随机数的函数
int * getRandom( )
{
  static int  r[10];
 
  // 设置种子
  srand( (unsigned)time( NULL ) );
  for (int i = 0; i < 10; ++i)
  {
    r[i] = rand();
    cout << r[i] << endl;
  }
 
  return r;
}
 
// 要调用上面定义函数的主函数
int main ()
{
   // 一个指向整数的指针
   int *p;
 
   p = getRandom();
   for ( int i = 0; i < 10; i++ )
   {
       cout << "*(p + " << i << ") : ";
       cout << *(p + i) << endl;
   }
 
   return 0;
}
```

<font style="color:rgb(51, 51, 51);">当上面的代码被编译和执行时，它会产生下列结果：</font>

```plain
624723190
1468735695
807113585
976495677
613357504
1377296355
1530315259
1778906708
1820354158
667126415
*(p + 0) : 624723190
*(p + 1) : 1468735695
*(p + 2) : 807113585
*(p + 3) : 976495677
*(p + 4) : 613357504
*(p + 5) : 1377296355
*(p + 6) : 1530315259
*(p + 7) : 1778906708
*(p + 8) : 1820354158
*(p + 9) : 667126415
```

<font style="color:rgb(51, 51, 51);">使用动态分配数组需要在函数内部使用 new 运算符来分配一个数组，并在函数结束时使用 delete 运算符释放该数组，例如：</font>

```cpp
int* myFunction()
{
   int* myArray = new int[3];
   myArray[0] = 1;
   myArray[1] = 2;
   myArray[2] = 3;
   return myArray;
}

int main()
{
   int* result = myFunction();
   // 使用 result
   delete[] result;
   return 0;
}
```

<font style="color:rgb(51, 51, 51);">以下是一个简单的应用实例，演示了如何从函数中返回数组：</font>

```cpp
#include <iostream>
using namespace std;

int* createArray(int size) {
    int* arr = new int[size];
    for (int i = 0; i < size; i++) {
        arr[i] = i + 1;
    }
    return arr;
}

int main() {
    int* myArray = createArray(5);
    for (int i = 0; i < 5; i++) {
        cout << myArray[i] << " ";
    }
    cout << endl;
    delete[] myArray; // 释放内存
    return 0;
}
```

<font style="color:rgb(51, 51, 51);">在上面的例子中，我们声明了一个名为 createArray 的函数，它接受一个整数参数 size，并返回一个由整数填充的整数数组。我们使用 new 运算符在堆上动态分配了一个数组，并在函数内部填充了数组。最后，函数返回了指向数组的指针。</font>

<font style="color:rgb(51, 51, 51);">在 main 函数中，我们调用了 createArray 函数，并将返回的数组指针存储在 myArray 中。然后我们遍历了数组并打印了每个元素的值。最后，我们使用 delete[] 运算符释放了 myArray 所占用的内存，以避免内存泄漏。</font>

<font style="color:rgb(51, 51, 51);">当上面的代码被编译和执行时，它会产生下列结果：</font>

```cpp
1 2 3 4 5 
```

**<font style="color:rgb(51, 51, 51);">注意：</font>**<font style="color:rgb(51, 51, 51);">当使用动态分配数组时，调用函数的代码负责释放返回的数组。这是因为在函数内部分配的数组在函数结束时不会自动释放。</font>

