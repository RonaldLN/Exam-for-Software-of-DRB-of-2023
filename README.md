# 舞蹈机器人软件组第一次考核任务——C++相关

>   **前言**
>
>   首先，欢迎大家参与我们舞蹈机器人软件组的考核任务。我们的任务以让大家学习为主要目的，所以不会特别为难大家。第一次的考核主要想让大家先掌握c++这一基础的语言，并加以一定的运用。考核分为基础部分和进阶部分，基础部分要求全部完成，进阶部分大家选做，但是请尽量完成。本次考核持续时间为两周，请在第二周的周日晚10 点前将考核任务按照各自组长的要求进行提交。
>
>   期待大家的精彩表现！

**==出于我个人的考虑，我计划把这次考核的任务分阶段发布==**😉

## 任务二

![无标题4](assets/%E6%97%A0%E6%A0%87%E9%A2%984.png)

对于这一个任务，**==我的要求是==**，编写 `data_structures.h` **使得 `main.cpp` 能运行并输出对应正确的结果**

下面这段是 `main.cpp` 的代码：

```cpp
#include <iostream>
#include "data_structures.h"

int main() {
    linked_list list;
    std::cout << "Enter elements for the linked list (separated by spaces): ";
    std::cin >> list;
    std::cout << "LinkedList: " << list << std::endl;
    int index;
    std::cout << "Enter an index to access: ";
    std::cin >> index;
    int element = list[index];
    std::cout << "Element at index " << index << ": " << element << std::endl;
    int value;
    std::cout << "Enter a value to search in the linked list: ";
    std::cin >> value;
    bool found = list.is_found(value);
    if (found) {
        std::cout << "Value " << value << " found in the linked list." << std::endl;
    } else {
        std::cout << "Value " << value << " not found in the linked list." << std::endl;
    }
    int valueToRemove;
    std::cout << "Enter a value to remove from the linked list: ";
    std::cin >> valueToRemove;
    list.remove(valueToRemove);
    std::cout << "LinkedList after removing " << valueToRemove << ": " << list << std::endl;
    int oldValue, newValue;
    std::cout << "Enter an old value to update and a new value: ";
    std::cin >> oldValue >> newValue;
    list.update(oldValue, newValue);
    std::cout << "LinkedList after updating " << oldValue << " to " << newValue << ": " << list << std::endl;
    return 0;
}
```

**==提交的方式是==**，将 `data_structures.h` 以及(如果还有的话)其他的 `.h ` `.cpp` `.hpp` 等文件( `main.cpp` 不需要)传到与任务一相同的仓库中的 `linked_list` 文件夹中，然后再发一次仓库的链接给我(即告诉我已经完成了😅)

---

以下是我个人对任务的修改，出于我==个人==的考虑，决定给大家写好一个大致的框架，然后需要根据下面的指示来完成最后的代码(**==我的对任务进行修改的目的是，想让大家看到(我认为的)好的代码是什么样的(包括代码的风格，和代码的结构(即 大家能够看到我是如何去构建类，如何使得代码看起来有较高的可读性、简洁明了))，然后在自己编写代码的时候可以进行参考和模仿==**)

==因此，这个任务我会对大家最后提交的代码在 **可读性、代码美观** 上有一定的要求==

>   主要参考了 cs61a 中的 projects

**==当然==**，==如果有同学已经形成了非常完善的自己编写代码的风格，那么也完全可以不参照我提供的框架，自行完成任务，编写代码文件，我也是非常欢迎的😄==

### 任务指示

==提示：我编写的框架中，每一步都是循序渐进的，基本上 后面的步骤 在 前面步骤中的代码 都能找到一些参考==

<a href="assets/data_structures.h" download="data_structures.h">data_structures.h</a>

<a href="assets/data_structures.cpp" download="data_structures.cpp">data_structures.cpp</a>

(如果不会用 `.h` 头文件等，请自己在网上查找相关的信息(或者问gpt也都行)，**==拥有自己查询资料解决问题的能力是非常关键的==**)

#### STEP 1

参考 *析构函数 Destructor* 中==调用 `my_node` 的接口函数来编写代码的方式==，完成 `linked_list` 类的 *构造函数 Constructor*

#### STEP 2

**重载右移运算符(输入的函数)**

这里我已经写好了 `insert` 方法(插入方法算是链表的一个基本的方法)，只需要完成 右移运算符的重载 即可

>   在这一步中，也可以一道把 左移运算符的重载 完成了，因为按照 `main.cpp` 中出现的顺序，左移运算符的重载此时已经需要用上了，如果想写一步运行一下 `main.cpp` ，那么可以在这里完成
>
>   不过我原来的设想是把这个放在最后，总之都OK

#### STEP 3

完成方括号运算符的重载(假定输入的下标都已经存在对应数据)

#### STEP 4

完成 `find` 和 `is_found` 

#### STEP 5

完成 `remove` 

#### STEP 6

添加(或修改)剩余的东西，使得 `main.cpp` 能运行

---

#### 重要提示

如果按照这个步骤做完的话，应该能注意到我在注释中多次添加了 *使用已有的函数/接口，而不是直接访问数据或者直接粘贴代码* ，这其实上是涉及到了数据抽象的问题，

而我想让大家看到(我认为的)一份好的代码，是不会打破 不同层级的代码/函数之间的抽象层 的

而我也希望大家编写的代码是这样的

## 任务一

![无标题](assets/%E6%97%A0%E6%A0%87%E9%A2%98.png)

**==我的要求是==**，学习并简单掌握归并排序，编写一个*能运行的*cpp文件(输入输出格式/文字提示等可以自己定，我只要求能运行)，

**然后**，**==在 `gitee` 上(可以姑且理解为国内的 github)新建一个仓库，然后编辑 `README.md` 文件，将 c++ 的代码放到这个 `md` 文件的代码块中，像下面这个图片一样，再把仓库的链接*私发*给我(例如 [https://gitee.com/ronald-luo/test](https://gitee.com/ronald-luo/test))==** 

![无标题2](assets/%E6%97%A0%E6%A0%87%E9%A2%982.png)

---

以下是我==个人==推荐的完成方式，或者说==任务指南==，(当然大家也完全可以自己去查找相关的信息来完成任务，以下的东西不强求)

### Hints

**==如果按照这部分进行学习，我要求最后的代码不能直接复制up主已经写好的代码==**

<a href="assets/数据结构与算法（五）.md" download="数据结构与算法（五）.md">数据结构与算法（五）.md</a>

根据这个文件中的 *归并排序* 部分的介绍

![无标题3](assets/%E6%97%A0%E6%A0%87%E9%A2%983.png)

来学习归并排序，

或者可以根据它*B站上的原视频*来学习 归并排序

[排序：归并排序_哔哩哔哩_bilibili](https://www.bilibili.com/video/BV13W4y127Ey?p=85)

<iframe src="//player.bilibili.com/player.html?aid=941207928&bvid=BV13W4y127Ey&cid=826366023&p=85" scrolling="no" border="0" frameborder="no" framespacing="0" allowfullscreen="true"> </iframe>

