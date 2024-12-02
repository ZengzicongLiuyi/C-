# C++ 指针
<font style="color:rgb(51, 51, 51);">学习 C++ 的指针既简单又有趣。通过指针，可以简化一些 C++ 编程任务的执行，还有一些任务，如动态内存分配，没有指针是无法执行的。所以，想要成为一名优秀的 C++ 程序员，学习指针是很有必要的。</font>

<font style="color:rgb(51, 51, 51);">正如您所知道的，每一个变量都有一个内存位置，每一个内存位置都定义了可使用连字号（&）运算符访问的地址，它表示了在内存中的一个地址。请看下面的实例，它将输出定义的变量地址：</font>

```cpp
#include <iostream>
 
using namespace std;
 
int main ()
{
   int  var1;
   char var2[10];
 
   cout << "var1 变量的地址： ";
   cout << &var1 << endl;
 
   cout << "var2 变量的地址： ";
   cout << &var2 << endl;
 
   return 0;
}
```

<font style="color:rgb(51, 51, 51);">当上面的代码被编译和执行时，它会产生下列结果：</font>

```cpp
var1 变量的地址： 0xbfebd5c0
var2 变量的地址： 0xbfebd5b6
```

<font style="color:rgb(51, 51, 51);">通过上面的实例，我们了解了什么是内存地址以及如何访问它。接下来让我们看看什么是指针。</font>

## <font style="color:rgb(51, 51, 51);">什么是指针？</font>
**<font style="color:rgb(51, 51, 51);">指针</font>**<font style="color:rgb(51, 51, 51);">是一个变量，其值为另一个变量的地址，即，内存位置的直接地址。就像其他变量或常量一样，您必须在使用指针存储其他变量地址之前，对其进行声明。指针变量声明的一般形式为：</font>

```cpp
type *var-name;
```

<font style="color:rgb(51, 51, 51);">在这里，</font>**<font style="color:rgb(51, 51, 51);">type</font>**<font style="color:rgb(51, 51, 51);"> </font><font style="color:rgb(51, 51, 51);">是指针的基类型，它必须是一个有效的 C++ 数据类型，</font>**<font style="color:rgb(51, 51, 51);">var-name</font>**<font style="color:rgb(51, 51, 51);"> </font><font style="color:rgb(51, 51, 51);">是指针变量的名称。用来声明指针的星号 * 与乘法中使用的星号是相同的。但是，在这个语句中，星号是用来指定一个变量是指针。以下是有效的指针声明：</font>

```plain
int    *ip;    /* 一个整型的指针 */
double *dp;    /* 一个 double 型的指针 */
float  *fp;    /* 一个浮点型的指针 */
char   *ch;    /* 一个字符型的指针 */
```

<font style="color:rgb(51, 51, 51);">所有指针的值的实际数据类型，不管是整型、浮点型、字符型，还是其他的数据类型，都是一样的，都是一个代表内存地址的长的十六进制数。不同数据类型的指针之间唯一的不同是，指针所指向的变量或常量的数据类型不同。</font>

## <font style="color:rgb(51, 51, 51);">C++ 中使用指针</font>
<font style="color:rgb(51, 51, 51);">使用指针时会频繁进行以下几个操作：定义一个指针变量、把变量地址赋值给指针、访问指针变量中可用地址的值。这些是通过使用一元运算符</font><font style="color:rgb(51, 51, 51);"> </font>**<font style="color:rgb(51, 51, 51);">*</font>**<font style="color:rgb(51, 51, 51);"> </font><font style="color:rgb(51, 51, 51);">来返回位于操作数所指定地址的变量的值。下面的实例涉及到了这些操作：</font>

```cpp
#include <iostream>
 
using namespace std;
 
int main ()
{
   int  var = 20;   // 实际变量的声明
   int  *ip;        // 指针变量的声明
 
   ip = &var;       // 在指针变量中存储 var 的地址
 
   cout << "Value of var variable: ";
   cout << var << endl;
 
   // 输出在指针变量中存储的地址
   cout << "Address stored in ip variable: ";
   cout << ip << endl;
 
   // 访问指针中地址的值
   cout << "Value of *ip variable: ";
   cout << *ip << endl;
 
   return 0;
}
```

<font style="color:rgb(51, 51, 51);">当上面的代码被编译和执行时，它会产生下列结果：</font>

```plain
Value of var variable: 20
Address stored in ip variable: 0xbfc601ac
Value of *ip variable: 20
```

## <font style="color:rgb(51, 51, 51);">C++ 指针详解</font>
<font style="color:rgb(51, 51, 51);">在 C++ 中，有很多指针相关的概念，这些概念都很简单，但是都很重要。下面列出了 C++ 程序员必须清楚的一些与指针相关的重要概念：</font>

| <font style="color:rgb(255, 255, 255);">概念</font> | <font style="color:rgb(255, 255, 255);">描述</font> |
| --- | --- |
| [<font style="color:rgb(51, 51, 51);">C++ Null 指针</font>](https://www.runoob.com/cplusplus/cpp-null-pointers.html) | <font style="color:rgb(51, 51, 51);">C++ 支持空指针。NULL 指针是一个定义在标准库中的值为零的常量。</font> |
| [<font style="color:rgb(51, 51, 51);">C++ 指针的算术运算</font>](https://www.runoob.com/cplusplus/cpp-pointer-arithmetic.html) | <font style="color:rgb(51, 51, 51);">可以对指针进行四种算术运算：++、--、+、-</font> |
| [<font style="color:rgb(51, 51, 51);">C++ 指针 vs 数组</font>](https://www.runoob.com/cplusplus/cpp-pointers-vs-arrays.html) | <font style="color:rgb(51, 51, 51);">指针和数组之间有着密切的关系。</font> |
| [<font style="color:rgb(51, 51, 51);">C++ 指针数组</font>](https://www.runoob.com/cplusplus/cpp-array-of-pointers.html) | <font style="color:rgb(51, 51, 51);">可以定义用来存储指针的数组。</font> |
| [<font style="color:rgb(51, 51, 51);">C++ 指向指针的指针</font>](https://www.runoob.com/cplusplus/cpp-pointer-to-pointer.html) | <font style="color:rgb(51, 51, 51);">C++ 允许指向指针的指针。</font> |
| [<font style="color:rgb(51, 51, 51);">C++ 传递指针给函数</font>](https://www.runoob.com/cplusplus/cpp-passing-pointers-to-functions.html) | <font style="color:rgb(51, 51, 51);">通过引用或地址传递参数，使传递的参数在调用函数中被改变。</font> |
| [<font style="color:rgb(51, 51, 51);">C++ 从函数返回指针</font>](https://www.runoob.com/cplusplus/cpp-return-pointer-from-functions.html) | <font style="color:rgb(51, 51, 51);">C++ 允许函数返回指针到局部变量、静态变量和动态内存分配。</font> |


---

# C++ Null 指针
<font style="color:rgb(51, 51, 51);">在变量声明的时候，如果没有确切的地址可以赋值，为指针变量赋一个 NULL 值是一个良好的编程习惯。赋为 NULL 值的指针被称为</font>**<font style="color:rgb(51, 51, 51);">空</font>**<font style="color:rgb(51, 51, 51);">指针。</font>

<font style="color:rgb(51, 51, 51);">NULL 指针是一个定义在标准库中的值为零的常量。请看下面的程序：</font>

```cpp
#include <iostream>

using namespace std;

int main ()
{
   int  *ptr = NULL;

   cout << "ptr 的值是 " << ptr ;
 
   return 0;
}
```

<font style="color:rgb(51, 51, 51);">当上面的代码被编译和执行时，它会产生下列结果：</font>

```plain
ptr 的值是 0
```

<font style="color:rgb(51, 51, 51);">在大多数的操作系统上，程序不允许访问地址为 0 的内存，因为该内存是操作系统保留的。然而，内存地址 0 有特别重要的意义，它表明该指针不指向一个可访问的内存位置。但按照惯例，如果指针包含空值（零值），则假定它不指向任何东西。</font>

<font style="color:rgb(51, 51, 51);">如需检查一个空指针，您可以使用 if 语句，如下所示：</font>

```plain
if(ptr)     /* 如果 ptr 非空，则完成 */
if(!ptr)    /* 如果 ptr 为空，则完成 */
```

<font style="color:rgb(51, 51, 51);">因此，如果所有未使用的指针都被赋予空值，同时避免使用空指针，就可以防止误用一个未初始化的指针。很多时候，未初始化的变量存有一些垃圾值，导致程序难以调试。</font>

# C++ 指针的算术运算
_<font style="color:rgb(51, 51, 51);">指针是一个用数值表示的地址。因此，您可以对指针执行算术运算。可以对指针进行四种算术运算：++、--、+、-。</font>_

_<font style="color:rgb(51, 51, 51);">假设</font>__<font style="color:rgb(51, 51, 51);"> </font>__**<font style="color:rgb(51, 51, 51);">ptr</font>**__<font style="color:rgb(51, 51, 51);"> </font>__<font style="color:rgb(51, 51, 51);">是一个指向地址 1000 的整型指针，是一个 32 位的整数，让我们对该指针执行下列的算术运算：</font>_

```plain
ptr++
```

_<font style="color:rgb(51, 51, 51);">执行 ptr++ 后，指针 ptr 会向前移动 4 个字节，指向下一个整型元素的地址。这是由于指针算术运算会根据指针的类型和大小来决定移动的距离。在这种情况下，由于是一个 32 位整数指针，每个整数占据 4 个字节，因此 ptr++ 会将指针 ptr 向前移动 4 个字节，指向下一个整型元素的地址。</font>_

_<font style="color:rgb(51, 51, 51);">如果</font>__<font style="color:rgb(51, 51, 51);"> </font>__**<font style="color:rgb(51, 51, 51);">ptr</font>**__<font style="color:rgb(51, 51, 51);"> </font>__<font style="color:rgb(51, 51, 51);">指向一个地址为 1000 的字符，执行 ptr++ 指针 ptr 的值会增加，指向下一个字符元素的地址，由于 ptr 是一个字符指针，每个字符占据 1 个字节，因此 ptr++ 会将 ptr 的值增加 1，执行后 ptr 指向地址 1001。</font>_

_<font style="color:rgb(51, 51, 51);">指针算术运算的详细解析：</font>_

+ _<font style="color:rgb(51, 51, 51);">加法运算：可以对指针进行加法运算。当一个指针p加上一个整数n时，结果是指针p向前移动n个元素的大小。例如，如果p是一个int类型的指针，每个int占4个字节，那么p + 1将指向p所指向的下一个int元素。</font>_
+ _<font style="color:rgb(51, 51, 51);">减法运算：可以对指针进行减法运算。当一个指针p减去一个整数n时，结果是指针p向后移动n个元素的大小。例如，如果p是一个int类型的指针，每个int占4个字节，那么p - 1将指向p所指向的前一个int元素。</font>_
+ _<font style="color:rgb(51, 51, 51);">指针与指针之间的减法运算：可以计算两个指针之间的距离。当从一个指针p减去另一个指针q时，结果是两个指针之间的元素个数。例如，如果p和q是两个int类型的指针，每个int占4个字节，那么p - q将得到两个指针之间的元素个数。</font>_
+ _<font style="color:rgb(51, 51, 51);">指针与整数之间的比较运算：可以将指针与整数进行比较运算。可以使用关系运算符（如<、>、<=、>=）对指针和整数进行比较。这种比较通常用于判断指针是否指向某个有效的内存位置。</font>_

## <font style="color:rgb(51, 51, 51);">递增一个指针</font>
<font style="color:rgb(51, 51, 51);">在C++中，指针是一个变量，它存储一个内存地址。递增一个指针意味着将指针指向下一个内存位置，这通常是指向下一个数组元素。递增一个指针会根据指针所指向的数据类型自动调整指针的值。</font>

<font style="color:rgb(51, 51, 51);">例如，如果指针指向一个 int 类型的数组元素，那么递增指针将使其指向下一个 int 元素。下面是一个简单的示例，演示了如何递增一个指针：</font>

```cpp
#include <iostream>

int main() {
    // 定义一个数组
    int arr[] = {10, 20, 30, 40, 50};

    // 定义一个指向数组第一个元素的指针
    int* ptr = arr;

    // 输出指针指向的元素
    std::cout << "指针当前指向的元素: " << *ptr << std::endl;

    // 递增指针
    ptr++;

    // 输出指针指向的元素
    std::cout << "递增指针后指向的元素: " << *ptr << std::endl;

    return 0;
}
```

<font style="color:rgb(51, 51, 51);">当上面的代码被编译和执行时，它会产生下列结果：</font>

```plain
指针当前指向的元素: 10
递增指针后指向的元素: 20
```

<font style="color:rgb(51, 51, 51);">在这个示例中，指针</font><font style="color:rgb(51, 51, 51);"> </font>`<font style="color:rgb(51, 51, 51);">ptr</font>`<font style="color:rgb(51, 51, 51);"> </font><font style="color:rgb(51, 51, 51);">最初指向数组</font><font style="color:rgb(51, 51, 51);"> </font>`<font style="color:rgb(51, 51, 51);">arr</font>`<font style="color:rgb(51, 51, 51);"> </font><font style="color:rgb(51, 51, 51);">的第一个元素。通过执行</font><font style="color:rgb(51, 51, 51);"> </font>`<font style="color:rgb(51, 51, 51);">ptr++</font>`<font style="color:rgb(51, 51, 51);">，指针</font><font style="color:rgb(51, 51, 51);"> </font>`<font style="color:rgb(51, 51, 51);">ptr</font>`<font style="color:rgb(51, 51, 51);"> </font><font style="color:rgb(51, 51, 51);">被递增以指向数组的下一个元素（即第二个元素）。</font>

<font style="color:rgb(51, 51, 51);">递增指针时，指针的值将增加一个偏移量，该偏移量等于指针所指向数据类型的大小。例如，如果指针是</font><font style="color:rgb(51, 51, 51);"> </font>`<font style="color:rgb(51, 51, 51);">int*</font>`<font style="color:rgb(51, 51, 51);"> </font><font style="color:rgb(51, 51, 51);">类型，每次递增指针将增加4个字节（假设</font><font style="color:rgb(51, 51, 51);"> </font>`<font style="color:rgb(51, 51, 51);">int</font>`<font style="color:rgb(51, 51, 51);"> </font><font style="color:rgb(51, 51, 51);">类型占4个字节）。</font>

<font style="color:rgb(51, 51, 51);">需要注意的是，当使用指针操作时，要确保指针指向有效的内存区域，否则可能会导致未定义行为或程序崩溃。在操作数组时，尤其要小心避免指针超出数组的范围。</font>

## <font style="color:rgb(51, 51, 51);">递减一个指针</font>
<font style="color:rgb(51, 51, 51);">在C++中，指针不仅可以递增，也可以递减。递减一个指针意味着将指针指向前一个内存位置。与递增指针类似，递减指针也会根据指针所指向的数据类型自动调整指针的值。</font>

<font style="color:rgb(51, 51, 51);">下面是一个简单的示例，演示了如何递减一个指针：</font>

```cpp
#include <iostream>
 
int main() {
    // 定义一个数组
    int arr[] = {10, 20, 30, 40, 50};
    
    // 定义一个指向数组第二个元素的指针
    int* ptr = &arr[1];
    
    // 输出指针当前指向的元素
    std::cout << "指针当前指向的元素: " << *ptr << std::endl;
    
    // 递减指针
    ptr--;
    
    // 输出指针递减后指向的元素
    std::cout << "递减指针后指向的元素: " << *ptr << std::endl;
    
    return 0;
}
```

<font style="color:rgb(51, 51, 51);">当上面的代码被编译和执行时，它会产生下列结果：</font>

```plain
指针当前指向的元素: 20
递减指针后指向的元素: 10
```

<font style="color:rgb(51, 51, 51);">在这个示例中，指针</font><font style="color:rgb(51, 51, 51);"> </font>`<font style="color:rgb(51, 51, 51);">ptr</font>`<font style="color:rgb(51, 51, 51);"> </font><font style="color:rgb(51, 51, 51);">最初指向数组</font><font style="color:rgb(51, 51, 51);"> </font>`<font style="color:rgb(51, 51, 51);">arr</font>`<font style="color:rgb(51, 51, 51);"> </font><font style="color:rgb(51, 51, 51);">的第二个元素。通过执行</font><font style="color:rgb(51, 51, 51);"> </font>`<font style="color:rgb(51, 51, 51);">ptr--</font>`<font style="color:rgb(51, 51, 51);">，指针</font><font style="color:rgb(51, 51, 51);"> </font>`<font style="color:rgb(51, 51, 51);">ptr</font>`<font style="color:rgb(51, 51, 51);"> </font><font style="color:rgb(51, 51, 51);">被递减以指向数组的第一个元素。</font>

<font style="color:rgb(51, 51, 51);">递减指针时，指针的值将减少一个偏移量，该偏移量等于指针所指向数据类型的大小。例如，如果指针是</font><font style="color:rgb(51, 51, 51);"> </font>`<font style="color:rgb(51, 51, 51);">int*</font>`<font style="color:rgb(51, 51, 51);"> </font><font style="color:rgb(51, 51, 51);">类型，每次递减指针将减少4个字节（假设</font><font style="color:rgb(51, 51, 51);"> </font>`<font style="color:rgb(51, 51, 51);">int</font>`<font style="color:rgb(51, 51, 51);"> </font><font style="color:rgb(51, 51, 51);">类型占4个字节）。</font>

## <font style="color:rgb(51, 51, 51);">指针的比较</font>
<font style="color:rgb(51, 51, 51);">在C++中，指针的比较操作可以用于确定两个指针是否指向相同的位置、一个指针是否指向的位置在另一个指针之前或之后等。指针的比较主要包括以下几种：</font>

+ **<font style="color:rgb(51, 51, 51);">相等性比较</font>**<font style="color:rgb(51, 51, 51);"> </font><font style="color:rgb(51, 51, 51);">(</font>`<font style="color:rgb(51, 51, 51);">==</font>`<font style="color:rgb(51, 51, 51);"> </font><font style="color:rgb(51, 51, 51);">和</font><font style="color:rgb(51, 51, 51);"> </font>`<font style="color:rgb(51, 51, 51);">!=</font>`<font style="color:rgb(51, 51, 51);">)</font>
+ **<font style="color:rgb(51, 51, 51);">关系比较</font>**<font style="color:rgb(51, 51, 51);"> </font><font style="color:rgb(51, 51, 51);">(</font>`<font style="color:rgb(51, 51, 51);"><</font>`<font style="color:rgb(51, 51, 51);">,</font><font style="color:rgb(51, 51, 51);"> </font>`<font style="color:rgb(51, 51, 51);"><=</font>`<font style="color:rgb(51, 51, 51);">,</font><font style="color:rgb(51, 51, 51);"> </font>`<font style="color:rgb(51, 51, 51);">></font>`<font style="color:rgb(51, 51, 51);">,</font><font style="color:rgb(51, 51, 51);"> </font>`<font style="color:rgb(51, 51, 51);">>=</font>`<font style="color:rgb(51, 51, 51);">)</font>

### <font style="color:rgb(51, 51, 51);">相等性比较</font>
<font style="color:rgb(51, 51, 51);">相等性比较用于检查两个指针是否指向相同的位置。</font>

```cpp
#include <iostream>

int main() {
    int a = 10;
    int b = 20;
    int* ptr1 = &a;
    int* ptr2 = &a;
    int* ptr3 = &b;

    // 比较指针是否相等
    if (ptr1 == ptr2) {
        std::cout << "ptr1 和 ptr2 指向相同的位置" << std::endl;
    } else {
        std::cout << "ptr1 和 ptr2 指向不同的位置" << std::endl;
    }

    if (ptr1 != ptr3) {
        std::cout << "ptr1 和 ptr3 指向不同的位置" << std::endl;
    } else {
        std::cout << "ptr1 和 ptr3 指向相同的位置" << std::endl;
    }

    return 0;
}
```

<font style="color:rgb(51, 51, 51);">当上面的代码被编译和执行时，它会产生下列结果：</font>

```plain
ptr1 和 ptr2 指向相同的位置
ptr1 和 ptr3 指向不同的位置
```

### <font style="color:rgb(51, 51, 51);">关系比较</font>
<font style="color:rgb(51, 51, 51);">关系比较用于确定一个指针是否指向的位置在另一个指针之前或之后。这通常在指针指向同一个数组的元素时有意义。</font>

```cpp
#include <iostream>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int* ptr1 = &arr[1]; // 指向数组的第二个元素
    int* ptr2 = &arr[3]; // 指向数组的第四个元素

    // 比较指针的相对位置
    if (ptr1 < ptr2) {
        std::cout << "ptr1 指向的元素在 ptr2 指向的元素之前" << std::endl;
    } else {
        std::cout << "ptr1 指向的元素不在 ptr2 指向的元素之前" << std::endl;
    }

    if (ptr2 > ptr1) {
        std::cout << "ptr2 指向的元素在 ptr1 指向的元素之后" << std::endl;
    } else {
        std::cout << "ptr2 指向的元素不在 ptr1 指向的元素之后" << std::endl;
    }

    return 0;
}
```

<font style="color:rgb(51, 51, 51);">当上面的代码被编译和执行时，它会产生下列结果：</font>

```plain
ptr1 指向的元素在 ptr2 指向的元素之前
ptr2 指向的元素在 ptr1 指向的元素之后
```

<font style="color:rgb(51, 51, 51);">指针比较的完整例子：</font>

```cpp
#include <iostream>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int* ptr1 = &arr[1]; // 指向数组的第二个元素
    int* ptr2 = &arr[3]; // 指向数组的第四个元素
    int* ptr3 = &arr[1]; // 指向数组的第二个元素

    // 相等性比较
    if (ptr1 == ptr3) {
        std::cout << "ptr1 和 ptr3 指向相同的位置" << std::endl;
    } else {
        std::cout << "ptr1 和 ptr3 指向不同的位置" << std::endl;
    }

    if (ptr1 != ptr2) {
        std::cout << "ptr1 和 ptr2 指向不同的位置" << std::endl;
    } else {
        std::cout << "ptr1 和 ptr2 指向相同的位置" << std::endl;
    }

    // 关系比较
    if (ptr1 < ptr2) {
        std::cout << "ptr1 指向的元素在 ptr2 指向的元素之前" << std::endl;
    } else {
        std::cout << "ptr1 指向的元素不在 ptr2 指向的元素之前" << std::endl;
    }

    if (ptr2 > ptr1) {
        std::cout << "ptr2 指向的元素在 ptr1 指向的元素之后" << std::endl;
    } else {
        std::cout << "ptr2 指向的元素不在 ptr1 指向的元素之后" << std::endl;
    }

    return 0;
}
```

<font style="color:rgb(51, 51, 51);">当上面的代码被编译和执行时，它会产生下列结果：</font>

```plain
ptr1 和 ptr3 指向相同的位置
ptr1 和 ptr2 指向不同的位置
ptr1 指向的元素在 ptr2 指向的元素之前
ptr2 指向的元素在 ptr1 指向的元素之后
```

### <font style="color:rgb(51, 51, 51);">注意事项</font>
+ **<font style="color:rgb(51, 51, 51);">同一数组范围内的比较</font>**<font style="color:rgb(51, 51, 51);">： 关系比较（如</font><font style="color:rgb(51, 51, 51);"> </font>`<font style="color:rgb(51, 51, 51);"><</font>`<font style="color:rgb(51, 51, 51);">,</font><font style="color:rgb(51, 51, 51);"> </font>`<font style="color:rgb(51, 51, 51);">></font>`<font style="color:rgb(51, 51, 51);">,</font><font style="color:rgb(51, 51, 51);"> </font>`<font style="color:rgb(51, 51, 51);"><=</font>`<font style="color:rgb(51, 51, 51);">,</font><font style="color:rgb(51, 51, 51);"> </font>`<font style="color:rgb(51, 51, 51);">>=</font>`<font style="color:rgb(51, 51, 51);">）在同一数组的元素之间进行是有意义的。如果指针不属于同一个数组，关系比较的结果是未定义的。</font>
+ **<font style="color:rgb(51, 51, 51);">指针为空</font>**<font style="color:rgb(51, 51, 51);">： 在比较指针之前，确保指针不是空指针（</font>`<font style="color:rgb(51, 51, 51);">nullptr</font>`<font style="color:rgb(51, 51, 51);">），否则可能会导致未定义行为。</font>

# C++ 指针 vs 数组


<font style="color:rgb(51, 51, 51);">指针和数组是密切相关的。事实上，指针和数组在很多情况下是可以互换的。例如，一个指向数组开头的指针，可以通过使用指针的算术运算或数组索引来访问数组。请看下面的程序：</font>

```cpp
#include <iostream>
 
using namespace std;
const int MAX = 3;
 
int main ()
{
   int  var[MAX] = {10, 100, 200};
   int  *ptr;
 
   // 指针中的数组地址
   ptr = var;
   for (int i = 0; i < MAX; i++)
   {
      cout << "var[" << i << "]的内存地址为 ";
      cout << ptr << endl;
 
      cout << "var[" << i << "] 的值为 ";
      cout << *ptr << endl;
 
      // 移动到下一个位置
      ptr++;
   }
   return 0;
}
```

<font style="color:rgb(51, 51, 51);">当上面的代码被编译和执行时，它会产生下列结果：</font>

```plain
var[0]的内存地址为 0x7fff59707adc
var[0] 的值为 10
var[1]的内存地址为 0x7fff59707ae0
var[1] 的值为 100
var[2]的内存地址为 0x7fff59707ae4
var[2] 的值为 200
```

<font style="color:rgb(51, 51, 51);">然而，指针和数组并不是完全互换的。例如，请看下面的程序：</font>

## <font style="color:rgb(97, 127, 16);background-color:rgb(229, 238, 204);">实例</font>
<font style="color:rgb(0, 0, 0);background-color:rgb(249, 249, 249);">#include</font><font style="color:rgb(139, 0, 0);background-color:rgb(249, 249, 249);"><</font><font style="color:rgb(170, 17, 17);background-color:rgb(249, 249, 249);">iostream</font><font style="color:rgb(139, 0, 0);background-color:rgb(249, 249, 249);">></font><font style="color:green;background-color:rgb(249, 249, 249);">using</font><font style="color:rgb(0, 0, 0);background-color:rgb(249, 249, 249);">namespace</font><font style="color:rgb(0, 85, 170);background-color:rgb(249, 249, 249);">std</font><font style="color:gray;background-color:rgb(249, 249, 249);">; </font><font style="color:rgb(0, 0, 0);background-color:rgb(249, 249, 249);">const</font><font style="color:rgb(0, 0, 0);background-color:rgb(249, 249, 249);">int</font><font style="color:rgb(0, 0, 0);background-color:rgb(249, 249, 249);">MAX</font><font style="color:gray;background-color:rgb(249, 249, 249);"> = </font><font style="color:maroon;background-color:rgb(249, 249, 249);">3</font><font style="color:gray;background-color:rgb(249, 249, 249);">; </font><font style="color:rgb(0, 0, 0);background-color:rgb(249, 249, 249);">int</font><font style="color:rgb(0, 85, 170);background-color:rgb(249, 249, 249);">main</font><font style="color:olive;background-color:rgb(249, 249, 249);">(</font><font style="color:olive;background-color:rgb(249, 249, 249);">)</font><font style="color:olive;background-color:rgb(249, 249, 249);">{</font><font style="color:rgb(0, 0, 0);background-color:rgb(249, 249, 249);">int</font><font style="color:rgb(0, 85, 170);background-color:rgb(249, 249, 249);">var</font><font style="color:olive;background-color:rgb(249, 249, 249);">[</font><font style="color:rgb(0, 0, 0);background-color:rgb(249, 249, 249);">MAX</font><font style="color:olive;background-color:rgb(249, 249, 249);">]</font><font style="color:gray;background-color:rgb(249, 249, 249);"> = </font><font style="color:olive;background-color:rgb(249, 249, 249);">{</font><font style="color:maroon;background-color:rgb(249, 249, 249);">10</font><font style="color:gray;background-color:rgb(249, 249, 249);">, </font><font style="color:maroon;background-color:rgb(249, 249, 249);">100</font><font style="color:gray;background-color:rgb(249, 249, 249);">, </font><font style="color:maroon;background-color:rgb(249, 249, 249);">200</font><font style="color:olive;background-color:rgb(249, 249, 249);">}</font><font style="color:gray;background-color:rgb(249, 249, 249);">; </font><font style="color:green;background-color:rgb(249, 249, 249);">for</font><font style="color:olive;background-color:rgb(249, 249, 249);">(</font><font style="color:rgb(0, 0, 0);background-color:rgb(249, 249, 249);">int</font><font style="color:rgb(0, 85, 170);background-color:rgb(249, 249, 249);">i</font><font style="color:gray;background-color:rgb(249, 249, 249);"> = </font><font style="color:maroon;background-color:rgb(249, 249, 249);">0</font><font style="color:gray;background-color:rgb(249, 249, 249);">; </font><font style="color:rgb(0, 85, 170);background-color:rgb(249, 249, 249);">i</font><font style="color:gray;background-color:rgb(249, 249, 249);"> < </font><font style="color:rgb(0, 0, 0);background-color:rgb(249, 249, 249);">MAX</font><font style="color:gray;background-color:rgb(249, 249, 249);">; </font><font style="color:rgb(0, 85, 170);background-color:rgb(249, 249, 249);">i</font><font style="color:gray;background-color:rgb(249, 249, 249);">++</font><font style="color:olive;background-color:rgb(249, 249, 249);">)</font><font style="color:olive;background-color:rgb(249, 249, 249);">{</font><font style="color:gray;background-color:rgb(249, 249, 249);"> *</font><font style="color:rgb(0, 85, 170);background-color:rgb(249, 249, 249);">var</font><font style="color:gray;background-color:rgb(249, 249, 249);"> = </font><font style="color:rgb(0, 85, 170);background-color:rgb(249, 249, 249);">i</font><font style="color:gray;background-color:rgb(249, 249, 249);">; </font><font style="color:rgb(170, 85, 0);background-color:rgb(249, 249, 249);">// 这是正确的语法</font><font style="color:rgb(0, 85, 170);background-color:rgb(249, 249, 249);">var</font><font style="color:gray;background-color:rgb(249, 249, 249);">++; </font><font style="color:rgb(170, 85, 0);background-color:rgb(249, 249, 249);">// 这是不正确的</font><font style="color:olive;background-color:rgb(249, 249, 249);">}</font><font style="color:green;background-color:rgb(249, 249, 249);">return</font><font style="color:maroon;background-color:rgb(249, 249, 249);">0</font><font style="color:gray;background-color:rgb(249, 249, 249);">; </font><font style="color:olive;background-color:rgb(249, 249, 249);">}</font>



<font style="color:rgb(51, 51, 51);">把指针运算符 * 应用到 var 上是完全可以的，但修改 var 的值是非法的。这是因为 var 是一个指向数组开头的常量，不能作为左值。</font>

<font style="color:rgb(51, 51, 51);">由于一个数组名对应一个指针常量，只要不改变数组的值，仍然可以用指针形式的表达式。例如，下面是一个有效的语句，把 var[2] 赋值为 500：</font>

<font style="color:rgb(51, 51, 51);">*(var + 2) = 500;</font>

<font style="color:rgb(51, 51, 51);">上面的语句是有效的，且能成功编译，因为 var 未改变。</font>

# <font style="color:rgb(0, 0, 0);">C+</font>+ 指针数组
[<font style="color:rgb(51, 51, 51);">C++ 指针</font>](https://www.runoob.com/cplusplus/cpp-pointers.html)

<font style="color:rgb(51, 51, 51);">在我们讲解指针数组的概念之前，先让我们来看一个实例，它用到了一个由 3 个整数组成的数组：</font>

```cpp
#include <iostream>
 
using namespace std;
const int MAX = 3;
 
int main ()
{
   int  var[MAX] = {10, 100, 200};
 
   for (int i = 0; i < MAX; i++)
   {
      cout << "Value of var[" << i << "] = ";
      cout << var[i] << endl;
   }
   return 0;
}
```

<font style="color:rgb(51, 51, 51);">当上面的代码被编译和执行时，它会产生下列结果：</font>

```plain
Value of var[0] = 10
Value of var[1] = 100
Value of var[2] = 200
```

<font style="color:rgb(51, 51, 51);">可能有一种情况，我们想要让数组存储指向 int 或 char 或其他数据类型的指针。下面是一个指向整数的指针数组的声明：</font>

```plain
int *ptr[MAX];
```

<font style="color:rgb(51, 51, 51);">在这里，把</font><font style="color:rgb(51, 51, 51);"> </font>**<font style="color:rgb(51, 51, 51);">ptr</font>**<font style="color:rgb(51, 51, 51);"> </font><font style="color:rgb(51, 51, 51);">声明为一个数组，由 MAX 个整数指针组成。因此，ptr 中的每个元素，都是一个指向 int 值的指针。下面的实例用到了三个整数，它们将存储在一个指针数组中，如下所示：</font>

```cpp
#include <iostream>
 
using namespace std;
const int MAX = 3;
 
int main ()
{
   int  var[MAX] = {10, 100, 200};
   int *ptr[MAX];
 
   for (int i = 0; i < MAX; i++)
   {
      ptr[i] = &var[i]; // 赋值为整数的地址
   }
   for (int i = 0; i < MAX; i++)
   {
      cout << "Value of var[" << i << "] = ";
      cout << *ptr[i] << endl;
   }
   return 0;
}
```

<font style="color:rgb(51, 51, 51);">当上面的代码被编译和执行时，它会产生下列结果：</font>

```plain
Value of var[0] = 10
Value of var[1] = 100
Value of var[2] = 200
```

<font style="color:rgb(51, 51, 51);">您也可以用一个指向字符的指针数组来存储一个字符串列表，如下：</font>

```cpp
#include <iostream>
 
using namespace std;
const int MAX = 4;
 
int main ()
{
 const char *names[MAX] = {
                   "Zara Ali",
                   "Hina Ali",
                   "Nuha Ali",
                   "Sara Ali",
   };
 
   for (int i = 0; i < MAX; i++)
   {
      cout << "Value of names[" << i << "] = ";
      cout << names[i] << endl;
   }
   return 0;
}
```

<font style="color:rgb(51, 51, 51);">当上面的代码被编译和执行时，它会产生下列结果：</font>

```plain
Value of names[0] = Zara Ali
Value of names[1] = Hina Ali
Value of names[2] = Nuha Ali
Value of names[3] = Sara Ali
```

# C++ 指向指针的指针（多级间接寻址）
<font style="color:rgb(51, 51, 51);">指向指针的指针是一种多级间接寻址的形式，或者说是一个指针链。</font>

<font style="color:rgb(51, 51, 51);">指针的指针就是将指针的地址存放在另一个指针里面。</font>

<font style="color:rgb(51, 51, 51);">通常，一个指针包含一个变量的地址。当我们定义一个指向指针的指针时，第一个指针包含了第二个指针的地址，第二个指针指向包含实际值的位置。</font>

![](https://cdn.nlark.com/yuque/0/2024/png/43034535/1732927813554-15bcde64-e0e5-4cdb-8a46-69915f70c6dd.png)

<font style="color:rgb(51, 51, 51);">一个指向指针的指针变量必须如下声明，即在变量名前放置两个星号。例如，下面声明了一个指向 int 类型指针的指针：</font>

```cpp
int **var;
```

<font style="color:rgb(51, 51, 51);">当一个目标值被一个指针间接指向到另一个指针时，访问这个值需要使用两个星号运算符，如下面实例所示：</font>

```cpp
#include <iostream>
 
using namespace std;
 
int main ()
{
    int  var;
    int  *ptr;
    int  **pptr;
 
    var = 3000;
 
    // 获取 var 的地址
    ptr = &var;
 
    // 使用运算符 & 获取 ptr 的地址
    pptr = &ptr;
 
    // 使用 pptr 获取值
    cout << "var 值为 :" << var << endl;
    cout << "*ptr 值为:" << *ptr << endl;
    cout << "**pptr 值为:" << **pptr << endl;
 
    return 0;
}
```

<font style="color:rgb(51, 51, 51);">当上面的代码被编译和执行时，它会产生下列结果：</font>

```plain
var 值为 :3000
*ptr 值为:3000
**pptr 值为:3000
```

# C++ 传递指针给函数
<font style="color:rgb(51, 51, 51);">C++ 允许您传递指针给函数，只需要简单地声明函数参数为指针类型即可。</font>

<font style="color:rgb(51, 51, 51);">下面的实例中，我们传递一个无符号的 long 型指针给函数，并在函数内改变这个值：</font>

```plain
#include <iostream>
#include <ctime>
 
using namespace std;
 
// 在写函数时应习惯性的先声明函数，然后在定义函数
void getSeconds(unsigned long *par);
 
int main ()
{
   unsigned long sec;
 
 
   getSeconds( &sec );
 
   // 输出实际值
   cout << "Number of seconds :" << sec << endl;
 
   return 0;
}
 
void getSeconds(unsigned long *par)
{
   // 获取当前的秒数
   *par = time( NULL );
   return;
}
```

<font style="color:rgb(51, 51, 51);">当上面的代码被编译和执行时，它会产生下列结果：</font>

Number of seconds :1294450468

<font style="color:rgb(51, 51, 51);">能接受指针作为参数的函数，也能接受数组作为参数，如下所示：</font>

```plain
#include <iostream>
using namespace std;
 
// 函数声明
double getAverage(int *arr, int size);
 
int main ()
{
   // 带有 5 个元素的整型数组
   int balance[5] = {1000, 2, 3, 17, 50};
   double avg;
 
   // 传递一个指向数组的指针作为参数
   avg = getAverage( balance, 5 ) ;
 
   // 输出返回值
   cout << "Average value is: " << avg << endl; 
    
   return 0;
}
 
double getAverage(int *arr, int size)
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

<font style="color:rgb(51, 51, 51);">当上面的代码被编译和执行时，它会产生下列结果：</font>

```plain
Average value is: 214.4
```

# C++ 从函数返回指针
<font style="color:rgb(51, 51, 51);">在上一章中，我们已经了解了 C++ 中如何从函数返回数组，类似地，C++ 允许您从函数返回指针。为了做到这点，您必须声明一个返回指针的函数，如下所示：</font>

```plain
int * myFunction()
{
.
.
.
}
```

**<font style="color:rgb(51, 51, 51);">另外，C++ 不支持在函数外返回局部变量的地址，除非定义局部变量为 static变量。</font>**

<font style="color:rgb(51, 51, 51);">现在，让我们来看下面的函数，它会生成 10 个随机数，并使用表示指针的数组名（即第一个数组元素的地址）来返回它们，具体如下：</font>

```plain
#include <iostream>
#include <ctime>
#include <cstdlib>
 
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

