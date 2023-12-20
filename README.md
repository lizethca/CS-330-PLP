# C++ Programming Language Project
**Author:** Liz Campuzano Martínez
> Tutorial to C++ and where to start!

# Part 1: Background and Installation
## History
The C++ language was developed by Bjarne Stroustrup at Bell Telephone Laboratories (currently Nokia Bell Labs) in Murray Hill, New Jersey. The goals was to create a similar language to C but with flexibility. Stroustrup wanted to add features like "active type checking, basic inheritance, default functioning argument, classes, inlining, etc." (Pramanick)

The language was first implemented in 1979 under the name "C with classes" as it was considered a superset of the original C. It was later renamed to "C++" in 1983 referring to the language adding more to C.

### Uses for C++
**1. Operating Systems**
C++ exists within operating systems, from MacOS and Windows to mobile ones like iOS. As these systems require efficiency and processing speed, C++ allows developers to organize their code to achieve this as it is a low-level language.

**2. Game Development**

It has been used to create games like World of Warcraft, Counter-Strike, and StarCraft. There are game engines like Unreal Engine that also work with the language. Some gaming consoles that require speed use C++ such as Xbox, PlayStation, and Nintendo Switch.

**3. Database Management**

MySQL and MongoDB also work with C++. This means that companies that use these databases work with C++ as they need efficient storage, some of them are Google, Netflix, YouTube, and Adobe. 

### Educational Resources
> [!NOTE]
> All sources used in this tutorial can be found in references.

YouTube channels like [CodeBeauty](https://www.youtube.com/@CodeBeauty/playlists) with tutorials catered for beginners.
Additionally, [W3Schools](https://www.w3schools.com/cpp/) website provides clear and direct explanations.

## Getting Started: Installation
> [!IMPORTANT]
> This tutorial uses Visual Studio Code as the IDE, but there are other IDEs available that can also work for C++ development.

### Step 1: C++ Compiler
You'll need a C++ compiler such as GCC (GNU Compiler Collection) or Clang. Install the compiler suitable for your platform and ensure it's accessible from the command line.

### Step 2: Visual Studio Code

Install Visual Studio Code from the [official website](https://code.visualstudio.com/).

### Step 3: C/C++ Extension

Install the "C/C++" extension if you haven't already. You can do this by clicking on the Extensions view icon on the Activity Bar on the side of the window (or by pressing `Ctrl+Shift+X`), searching for "C/C++", and clicking "Install".

### Step 4: Configure Visual Studio Code for C++ Development
Once the extension is installed, you may need to refresh Visual Studio Code to activate it.
Visual Studio Code "offers a large variety of features, is available on multiple platforms, GitHub integrated, and good extension support" (Hossain) Thus, it is the recommended IDE in this tutorial and from the experience of the author.
### Step 5: Set Up C++ Project in Visual Studio Code
1. Create a new folder for your C++ project or navigate to an existing one.
2. Inside your project folder, create a new file with a `.cpp` extension (e.g., `main.cpp`). This will be your C++ source file.
3. Open the newly created file in Visual Studio Code.
4. Write your C++ code in the file. Look into the next section to see how a simple "Hello, World!" program looks like in C++.

### Comments in C++

To comment in C++ just add a `//` at the start of the line, for example:
```cpp
// This is what a single-line comment looks like!
```

Multiple line comments can be written starting with a `/*` and end with a `*/`. For example:
```cpp
/* This
is what a multiple-line
comment looks like */
```
### Hello, World! Program
A simple "Hello, World!" program in C++ includes the iostream library, which indicates the use of input and output. The main() function is the entry point of the program. Inside main(), it uses std::cout to print "Hello, World!" to the console and then std::endl to move to the next line. Finally, it returns 0, to indicate a successful program execution.
```cpp
#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
```

# Part 2: Data Types and Naming Conventions
## Naming Conventions
- **Case Sensitivity:** Variable names in C++ are case-sensitive, meaning `vogue` and `Vogue` would be considered different variables.
- **Starting Characters:** Variable names must start with a letter or an underscore (_), followed by letters, digits, or underscores. They cannot start with a digit, meaning `six` and `_six` are valid variables, but `6six` is not.
- **Allowed Characters:** Variable names can contain letters, digits, and underscores.
- **Convention:** C++ programmers commonly use camel case for variable names as common practice, meaning the first letter of each word (except the first one) is capitalized (e.g., `laQuanSmith`, `carlyCushnie`).

## Code: Data Types
Here's how to work with the following data types and an example code on how to implement them.
### Integer: int
This is a snippet of the declaration of an `int` variable in C++:
```cpp
int theInteger = 6;
```
### String
Here's a full program using a main function with the purpose of declaring a variable `designer` to the string value `"Stella Jean"`:
```cpp
#include <string>

int main() {
    std::string designer = "Stella Jean";
    return 0;
}
```
### Floating-point Number
Here's a full program using a main function with the purpose of declaring a float number and printing the value:
```cpp
#include <iostream>

int main() {
    float theFloat = 14.2f; //
    std::cout << "Value: " << theFloat << std::endl;
    return 0;
}
```
### Boolean
The keyword for booleans is `bool`, this is a program that declares a boolean value and prints it:
```cpp
#include <iostream>

int main() {
    bool isJustTrue = true; // A boolean variable (bool)
    std::cout << "True? " << std::boolalpha << isJustTrue << std::endl;
    return 0;
}
```
`std::boolalpha` is used to print `true` instead of `1` and `false` instead of `0`
### Array/List
`std::vector` is commonly used to create a dynamic array, but C++ also provides other standard library containers like `std::array` and `std::list`:
```cpp
#include <vector>

int main() {
    std::vector<int> myVector = {1, 2, 3, 4};
    return 0;
}
```
### Dictionary
The way dictionaries are implemented in C++ commonly is through the Standard Library, for example:
```cpp
#include <iostream>
#include <map>
#include <string>

int main() {
    std::map<std::string, int> vogueMonths;
    vogueMonths["Billie Eilish"] = 1;
    vogueMonths["Priyanka Chopra Jonas"] = 2;
    vogueMonths["Erykah Badu"] = 3;
    vogueMonths["Cara Delevingne"] = 4;
    vogueMonths["Karl Lagerfeld: A celebration"] = 5;
    vogueMonths["Margot Robbie"] = 6;

    std::cout << "Month for the Billie Eilish issue: " << vogueMonths["Billie Eilish"] << std::endl;
    std::cout << "Month for the Erykah Badu issue: " << vogueMonths["Erykah Badu"] << std::endl;
    std::cout << "Month for the Margot Robbie issue: " << vogueMonths["Margot Robbie"] << std::endl;

    return 0;
}
```
### Pointer
```cpp
#include <iostream>

int main() {
    int number = 6;
    int* pointer = &number;

    std::cout << "Value: " << number << std::endl;
    std::cout << "Address: " << &number << std::endl;
    std::cout << "Pointer: " << pointer << std::endl;
    std::cout << "Value that is pointing to: " << *pointer << std::endl;

    return 0;
}
```
The line `int* pointer = &number;` is a pointer and initializes it with the memory address of the variable number.





## References

Pramanick, Sohom. “History of C.” GeeksforGeeks, GeeksforGeeks, 18 July 2019, www.geeksforgeeks.org/history-of-c/. Accessed 16 Sept. 2023.

Xiao, Lillian. “What Is C++ Used For?” Codecademy Blog, 10 May 2021, www.codecademy.com/resources/blog/what-is-c-plus-plus-used-for/. Accessed 16 Sept. 2023.

Hossain, Akhtar. “Best C++ IDEs and Editors in 2023.” Hackr.io, 2023, hackr.io/blog/cpp-ide. Accessed 18 Sept. 2023.

‌
