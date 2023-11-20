# 舞蹈机器人软件组第一次考核任务——C++相关

>   **前言**
>
>   首先，欢迎大家参与我们舞蹈机器人软件组的考核任务。我们的任务以让大家学习为主要目的，所以不会特别为难大家。第一次的考核主要想让大家先掌握c++这一基础的语言，并加以一定的运用。考核分为基础部分和进阶部分，基础部分要求全部完成，进阶部分大家选做，但是请尽量完成。本次考核持续时间为两周，请在第二周的周日晚10 点前将考核任务按照各自组长的要求进行提交。
>
>   期待大家的精彩表现！

**==出于我个人的考虑，我计划把这次考核的任务分阶段发布==**😉

## 任务四

任务部分为文件中的 ==`二、C++的写实专家语法——矩阵类`==，由于所有部分均现均已公布，所以请大家下载文件来查看这部分的任务

<a href="assets/c++考核.pdf" download="c++考核.pdf">c++考核.pdf</a>

然后，由于这部分我认为确实对于大家有比较大的难度(考虑在几天之内完成等因素)，所以这部分内容我不强制要求完成，也对大家没有完成的期望(但第三个任务我期望大家能完成)，所以，换句话说就是，如果能完成，那么对我而言就是一个出乎意料的事，

大家根据自身的情况进行完成(全部)与否的选择，

而我也可以接受只完成部分任务，所以这个任务如果大家只完成了部分内容，也可以进行提交

==提交方法==是，与之前类似，将文件存放在仓库中的 `矩阵类` 文件夹中

## 任务三

在经过了前两个任务的练习，我认为大家应该已经具备了一定的编写代码的能力，所以在这个任务中，我希望能帮大家建立起**自行搜索信息、自行解决问题**的习惯和方法，因为正如我在上一个任务中也顺带提到，我认为拥有这项能力是非常关键的，

那么首先，任务是

![无标题5](assets/%E6%97%A0%E6%A0%87%E9%A2%985.png)

虽然这一个任务是属于提高部分的，但是我希望大家都尽可能去完成(因为我觉得不算特别特别的难)

这个任务的代码我**在 代码的美观程度 上也有一定的要求**

==提交方式==，和上一个任务差不多，将 `cpp` 文件放到仓库中的 `逆序对` 文件夹中即可，然后把仓库链接再发一次给我😂

### Hints

以下是我个人提供的一些关于自行搜索信息、使用工具来辅助自己的(我认为可能有用的)参考信息

==首先==是chatgpt，虽然我估计大家肯定都知道chatgpt很强大，但是有些时候它并不能准确的提供你想要的回答，所以我认为向gpt询问，或者说使用gpt也是有一定的技巧的

>   我曾经也在一个视频中看到了这样的说辞
>
>   ![无标题6](assets/%E6%97%A0%E6%A0%87%E9%A2%986.png)
>
>   >   还有一个就是来自科技的挑战
>   >
>   >   我们现在都知道
>   >
>   >   chatgpt
>   >
>   >   chatgpt对每个人来说不是同等的
>   >
>   >   你要有使用能力的
>   >
>   >   使用能力不是说你按键盘有多快
>   >
>   >   你提的问题越好 越特定
>   >
>   >   越有自己的思考
>   >
>   >   你得到的答案就越好
>   >
>   >   ...

所以我在下面提供了一段，我在任务二上使用gpt来辅助我时 的对话记录

>    **user**:
>
>    ```cpp
>    #include <iostream>
>    #include "data_structures.h"
>
>    int main() {
>        your_data_type list;
>        std::cout << "Enter elements for the linked list (separated by spaces): ";
>        std::cin >> list;
>        std::cout << "LinkedList: " << list << std::endl;
>        int index;
>        std::cout << "Enter an index to access: ";
>        std::cin >> index;
>        int element = list[index];
>        std::cout << "Element at index " << index << ": " << element << std::endl;
>        int value;
>        std::cout << "Enter a value to search in the linked list: ";
>        std::cin >> value;
>        bool found = list.find(value);
>        if (found) {
>            std::cout << "Value " << value << " found in the linked list." << std::endl;
>        } else {
>            std::cout << "Value " << value << " not found in the linked list." << std::endl;
>        }
>        int valueToRemove;
>        std::cout << "Enter a value to remove from the linked list: ";
>        std::cin >> valueToRemove;
>        list.remove(valueToRemove);
>        std::cout << "LinkedList after removing " << valueToRemove << ": " << list << std::endl;
>        int oldValue, newValue;
>        std::cout << "Enter an old value to update and a new value: ";
>        std::cin >> oldValue >> newValue;
>        list.update(oldValue, newValue);
>        std::cout << "LinkedList after updating " << oldValue << " to " << newValue << ": " << list << std::endl;
>        return 0;
>    }
>    ```
>
>    explain this piece of code, pls
>
>    **bing**:
>
>    Certainly! This code seems to be a basic simulation or example of a program that operates on a custom data structure, presumably a linked list, defined in a header file named "data_structures.h". Let's break down the flow and functionality of this code:
>
>    1. **Includes and Declarations:**
>    - It includes the necessary header files: `iostream` for input/output operations and presumably "data_structures.h" that presumably holds a custom-defined data structure.
>    
>    2. **Main Function:**
>    - Declares an instance `list` of a user-defined data type, probably a linked list (`your_data_type`).
>    - Requests the user to input elements for the linked list, separated by spaces, and stores these values into the `list` object.
>    - Outputs the elements of the list using the overloaded `operator<<`.
>    - Asks the user to input an index and retrieves the element at that index using the overloaded `operator[]`.
>    - Asks for a value to search within the linked list using the `find()` method.
>    - Asks for a value to remove from the linked list using the `remove()` method.
>    - Asks for an old value and a new value to update within the linked list using the `update()` method.
>    - Finally, it prints the updated linked list after each operation.
>
>    3. **Missing Implementation:**
>    - This code assumes the existence of a custom data structure `your_data_type` and the associated methods such as `find`, `remove`, and `update`. These methods are not part of standard C++ libraries but are expected to be defined in the "data_structures.h" file.
>    - The input and output operations (`operator>>` and `operator<<`) for the `your_data_type` are also assumed to be overloaded in the "data_structures.h" file for handling input and output.
>
>    4. **User Interaction:**
>    - The program primarily interacts with the user through the console, requesting input for elements, indices, values to search, remove, and update within the linked list.
>
>    Overall, the code provides a basic interactive demonstration of operations on a user-defined linked list data structure, showcasing insertion, access by index, searching, removal, and updating of elements within the linked list. However, without the specific implementation details defined in the "data_structures.h" file, it's not possible to infer the exact behavior or functionality of these operations.
>
>    **user**:
>
>    translate to chinese
>
>    **bing**:
>
>    当然！这段代码似乎是一个基本的模拟程序，展示了对自定义数据结构（可能是一个链表）进行操作，该数据结构定义在名为 "data_structures.h" 的头文件中。让我们来解释一下代码的流程和功能：
>
>    1. **包含和声明：**
>    - 它包含了必要的头文件：`iostream` 用于输入/输出操作，可能还有名为 "data_structures.h" 的头文件，其中包含了自定义的数据结构。
>    
>    2. **主函数：**
>    - 声明了一个用户定义数据类型（可能是一个链表，称为 `your_data_type`）的实例 `list`。
>    - 要求用户输入用空格分隔的链表元素，并将这些值存储到 `list` 对象中。
>    - 使用重载的 `operator<<` 输出链表的元素。
>    - 要求用户输入一个索引，并使用重载的 `operator[]` 检索该索引处的元素。
>    - 要求用户输入一个值，使用 `find()` 方法在链表中查找该值。
>    - 要求用户输入要从链表中删除的值，使用 `remove()` 方法。
>    - 要求用户输入一个旧值和一个新值，在链表中使用 `update()` 方法进行更新。
>    - 最后，它打印每个操作后的更新链表。
>
>    3. **缺少的实现：**
>    - 此代码假设存在自定义数据结构 `your_data_type`，以及相关方法，如 `find`、`remove` 和 `update`。这些方法不是标准 C++ 库的一部分，但预计会在 "data_structures.h" 文件中定义。
>    - 用于 `your_data_type` 的输入和输出操作（`operator>>` 和 `operator<<`）也被假定在 "data_structures.h" 文件中进行了重载，以处理输入和输出。
>
>    4. **用户交互：**
>    - 该程序主要通过控制台与用户交互，请求输入元素、索引、要在链表中搜索、删除和更新的值。
>
>    总的来说，该代码提供了对用户定义的链表数据结构进行操作的基本交互演示，展示了在链表中插入、通过索引访问、搜索、移除和更新元素的功能。然而，没有 "data_structures.h" 文件中具体的实现细节，无法推断这些操作的确切行为或功能。
>
>    **user**:
>
>    pls give me a sample of `data_structures.h`
>
>    **bing**:
>
>    Certainly! Below is an example of how `data_structures.h` might define a simple linked list data structure along with methods like `find`, `remove`, and `update`, and overloading input and output operators for a custom data type (`your_data_type`):
>
>    ```cpp
>    #ifndef DATA_STRUCTURES_H
>    #define DATA_STRUCTURES_H
>
>    #include <iostream>
>
>    // Define a Node for the linked list
>    struct Node {
>        int data;
>        Node* next;
>        Node(int value) : data(value), next(nullptr) {}
>    };
>
>    class your_data_type {
>    private:
>        Node* head;
>
>    public:
>        // Constructor
>        your_data_type() : head(nullptr) {}
>
>        // Method to insert element into the linked list
>        void insert(int value) {
>            Node* newNode = new Node(value);
>            if (head == nullptr) {
>                head = newNode;
>            } else {
>                Node* temp = head;
>                while (temp->next != nullptr) {
>                    temp = temp->next;
>                }
>                temp->next = newNode;
>            }
>        }
>
>        // Overloading input operator for your_data_type
>        friend std::istream& operator>>(std::istream& input, your_data_type& list) {
>            int value;
>            while (input >> value) {
>                list.insert(value);
>            }
>            return input;
>        }
>
>        // Overloading output operator for your_data_type
>        friend std::ostream& operator<<(std::ostream& output, const your_data_type& list) {
>            Node* temp = list.head;
>            while (temp != nullptr) {
>                output << temp->data << " ";
>                temp = temp->next;
>            }
>            return output;
>        }
>
>        // Method to find a value in the linked list
>        bool find(int value) {
>            Node* temp = head;
>            while (temp != nullptr) {
>                if (temp->data == value) {
>                    return true;
>                }
>                temp = temp->next;
>            }
>            return false;
>        }
>
>        // Method to remove a value from the linked list
>        void remove(int value) {
>            Node* temp = head;
>            Node* prev = nullptr;
>
>            while (temp != nullptr && temp->data != value) {
>                prev = temp;
>                temp = temp->next;
>            }
>
>            if (temp == nullptr) {
>                std::cout << "Value not found in the list." << std::endl;
>                return;
>            }
>
>            if (prev == nullptr) {
>                head = temp->next;
>            } else {
>                prev->next = temp->next;
>            }
>            delete temp;
>        }
>
>        // Method to update a value in the linked list
>        void update(int oldValue, int newValue) {
>            Node* temp = head;
>            while (temp != nullptr) {
>                if (temp->data == oldValue) {
>                    temp->data = newValue;
>                }
>                temp = temp->next;
>            }
>        }
>
>        // Method to access element by index
>        int operator[](int index) {
>            Node* temp = head;
>            int count = 0;
>            while (temp != nullptr) {
>                if (count == index) {
>                    return temp->data;
>                }
>                count++;
>                temp = temp->next;
>            }
>            return -1; // Return -1 if index is out of range
>        }
>
>        // Destructor to free allocated memory
>        ~your_data_type() {
>            while (head != nullptr) {
>                Node* temp = head;
>                head = head->next;
>                delete temp;
>            }
>        }
>    };
>
>    #endif // DATA_STRUCTURES_H
>    ```
>
>    Please note that this is a basic implementation and might not cover all cases or be the most optimized version. It provides a general idea of how a simple linked list data structure along with related operations could be defined in the "data_structures.h" header file.
>
>    **user**:
>
>    Sorry, there should only be declarations for classes and functions
>
>    **bing**:
>
>    Absolutely, here's a simplified version of `data_structures.h` containing only class and function declarations without their definitions:
>
>    ```cpp
>    #ifndef DATA_STRUCTURES_H
>    #define DATA_STRUCTURES_H
>
>    #include <iostream>
>
>    struct Node {
>        int data;
>        Node* next;
>        Node(int value);
>    };
>
>    class your_data_type {
>    private:
>        Node* head;
>
>    public:
>        your_data_type();
>        void insert(int value);
>        bool find(int value) const;
>        void remove(int value);
>        void update(int oldValue, int newValue);
>        int operator[](int index) const;
>
>        friend std::istream& operator>>(std::istream& input, your_data_type& list);
>        friend std::ostream& operator<<(std::ostream& output, const your_data_type& list);
>
>        ~your_data_type();
>    };
>
>    #endif // DATA_STRUCTURES_H
>    ```
>
>    This header file provides declarations for a `Node` structure and a `your_data_type` class, including member functions like constructors, insertion, searching, removal, updating, overloads for input/output operators, and a destructor for cleanup.
>
>    These declarations serve as a blueprint for the functions and class structures, and their definitions should be implemented in corresponding `.cpp` files.

[https://ronald-luo.gitee.io/mypamphlet-blog/2023/09/27/chatgpt/](https://ronald-luo.gitee.io/mypamphlet-blog/2023/09/27/chatgpt/)

这上面的我的之前的一些记录也可以作为补充参考，大家不嫌长的话也可以去查看

==然后==是，我的第二点是一个建议，在搜索、查找一些计算机方面的信息时，在外网的 *Google 谷歌* 上搜索到的东西**有用的会占比更高一些**(我个人感觉是这样的)，

我曾有过切身的体会，为解决一个问题 在国内的搜索引擎上搜了很多方法但尝试后都无用，而在谷歌上搜索后就搜到了 *stackoverflow* 上的解决方法，尝试后成功

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

