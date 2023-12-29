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

# Part 3: Functions
## Functions in C++
To showcase how functions work in the language, here are different examples:
### Function that takes in two numbers, multiplies them, and returns the output:
```cpp
#include <iostream>

int multiply(int a, int b) {
    return a * b;
}

int main() {
    int result = multiply(5, 3);
    std::cout << "Result of multiplication: " << result << std::endl;
    return 0;
}
```
### Recursive function (calculating a factorial):
```cpp
#include <iostream>

int factorial(int n) {
    if (n <= 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int result = factorial(5);
    std::cout << "Factorial of 5: " << result << std::endl;
    return 0;
}
```
### Function that takes in a string and splits it into two:
```cpp
#include <iostream>
#include <string>

std::pair<std::string, std::string> splitString(const std::string& input) {
    size_t length = input.length();
    size_t half = length / 2;
    return std::make_pair(input.substr(0, half), input.substr(half));
}

int main() {
    std::pair<std::string, std::string> result = splitString("Hello, World!");
    std::cout << "First half: " << result.first << std::endl;
    std::cout << "Second half: " << result.second << std::endl;
    return 0;
}
```
### Function that tests whether C++ is pass-by-reference or pass-by-value:
```cpp
#include <iostream>

void testPassByValue(int x) {
    x = 100;
}

void testPassByReference(int& x) {
    x = 100;
}

int main() {
    int value = 50;
    testPassByValue(value);
    std::cout << "Value after pass by value: " << value << std::endl;

    testPassByReference(value);
    std::cout << "Value after pass by reference: " << value << std::endl;

    return 0;
}
```
## Key about Functions in C++
- To declare a function in C++, it is important to declare the return type and parameters it takes in.
- Functions in C++ can be placed anywhere within the file, but it needs to be declared before calling said function.
- C++ supports recursive functions, learn more about it [here](https://www.w3schools.com/cpp/cpp_functions_recursion.asp).
- Functions in C++ can accept more than parameter with different data types, look at Part 2 to review these data types.
- C++, unlike other languages, does not support multiple values being returned from a function, but there are methods to get around this.
- C++ as seen in the code previously shown, supports both pass-by-reference and pass-by-value. The default is passed-by-value, but you can use the other way through pointers.
- Parameters are stored on the stack or CPU registers through the function call. The local variables are stored on the stack, but you can also indicate you would like the variable to be stored dynamically using `static` so they are stored in a heap.
- C++ follows block scope rules, enclosed in curly braces.
- C++ allows for a function to modify something external to its own scope, also known as side-effects.
- C++ also supports function templates, overloading, and lambda expressions.
# Part 4: Selection, Loops and Conditionals
To showcase how these work in the language, here are different examples:
### One-condition if/else Statement
```cpp
#include <iostream>
using namespace std;

int main() {
    bool x = true;
    if (x) {
        cout << "x is true" << endl;
    } else {
        cout << "x is false" << endl;
    }
    return 0;
}
```
### Multi-condition if/else Statement
```cpp
#include <iostream>
using namespace std;

int main() {
    int x = 5;
    int y = 8;
    if (x > 0 && y < 10) {
        cout << "Both conditions are true" << endl;
    } else {
        cout << "At least one condition is false" << endl;
    }
    return 0;
}
```
### If/Elif/Else Statements
```cpp
#include <iostream>
using namespace std;

int main() {
    int x = 10;
    if (x > 0) {
        cout << "x is positive" << endl;
    } else if (x < 0) {
        cout << "x is negative" << endl;
    } else {
        cout << "x is zero" << endl;
    }
    return 0;
}
```
### Short-circuit Logic
```cpp
#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int y = 5;
    if (y != 0 && x / y > 2) {
        cout << "x / y is greater than 2" << endl;
    } else {
        cout << "Either y is zero or x / y is not greater than 2" << endl;
    }
    return 0;
}
```
### Switch-case Statement
```cpp
#include <iostream>
using namespace std;

int main() {
    int day = 3;
    switch (day) {
        case 1:
            cout << "Monday" << endl;
            break;
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        default:
            cout << "Another day" << endl;
    }
    return 0;
}
```
## Key about Selection, Loops and Conditionals in C++
- Boolean values in C++ are represented by the keywords `true` and `false`.
- C++ supports several types of conditional statements, including `if`, `if-else`, and `if-else if-else`.
- Code blocks under each condition are delimited by curly braces `{}`.
- In `switch` statements, `break` is used to exit after a case is matched, and `continue` is not used.
- The ["dangling else" problem](https://www.cs.drexel.edu/~popyack/Courses/GovSchool/2005/Sp04/lectures/08.2_nested_conditionals/DanglingElse.html?CurrentSlide=3#:~:text=The%20dangling%20else%20problem%20results,the%20last%20if%20statement%20used.) in C++ is resolved by associating an `else` with the nearest unmatched `if` statement in the same scope.
- C++ uses short-circuit evaluation in logical expressions.

# Part 5: Classes and Inheritance
To showcase how classes amd inheritance works in C++, here is an example:
### Person Class
```cpp
#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    string name;
    int age;

    void setDetails(string n, int a) {
        name = n;
        age = a;
    }

    void displayDetails() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// This is a derived class
class Student : public Person {
public:
    int studentId;

    void setStudentId(int id) {
        studentId = id;
    }

    void displayStudentId() {
        cout << "Student ID: " << studentId << endl;
    }
};

int main() {
    // Person object
    Person person;
    person.setDetails("Alice", 25);
    person.displayDetails();

    // Student object
    Student student;
    student.setDetails("Liz", 20);
    student.setStudentId(27839);
    student.displayDetails();
    student.displayStudentId();

    return 0;
}
```
In this program:
- `Person` class with attributes according to what a person would have.
- `Student` class inherits from `Person` and also adds its own attributes like `studentId`
- In `main()` we initiate objects for both classes and call their respective functions.

## Key about Classes and Inheritance in C++
- C++ supports objects through classes, which can store both attributes and functions.
- Structs in the language are similar to classes but by default are open to public access.
- For naming conventions, preferrably use camelCase or snake_case.
- The use of operator overloading, like <<, to customize output of objects, is standard.
- C++ does not support multiple inheritance as a method, but supports single inheritance directly.
- The language supports method overloading for functions with the same name as long as they have different parameters.
- Derived classes are open to overriding inheritance methods.

# Part 6: Project: Clothing Boutique
> [!NOTE]
> This project started as a grocery store, but developed into a fashion store.

## Objective
A program that simulates an online fashion store where users can view available items, manager their shopping cart, and view the contents of cart before completing their shopping experience.

## UML Diagram using C
```c
------------------             ------------------            -----------------------
|   FashionStore  |<>---------|      Node       |<>---------|    main.cpp           |
------------------             ------------------            -----------------------
| - head: Node*     |          | - name: string  |          | - choice: int         |
| - cartHead: Node* |          | - material: str |          | - itemName: string    |
|                   |          | - size: string  |          | - clientName: string  |
|                   |          | - color: string |          | - itemQuantity: int   |
|                   |          | - price: double |          | - store: FashionStore |
|                   |          | - quantity: int |          | - cout: ostream       |
|                   |          | - next: Node*   |          | - cin: istream        |
|                   |          |                 |          | - chrono: namespace   |
|                   |          |                 |          | - thread: namespace   |
|                   |          |                 |          | - std: namespace      |
------------------             ------------------            -----------------------
| + FashionStore()  |          | + Node(str, str,|
|                   |          |str, str, double,|
|                   |          |  int)           |
| + addProduct(str, |          | + main()        |
|  str, str, str,              |                 |
double, int)           |       |                 |
| + displayProducts()  |       |                 |
| + addToCart(str, int)|       |                 |
| + displayCart()      |       |                 |
-----------------------         -----------------         
```
## Description
- Designed to simulate an online clothing store, including the shopping experience and products.
- Implemented a linked list structure.
- User can view available products, with details such as name of the item, type, size, color, price, quantity, etc.

## Highlights
- **Memory management:** have the user add items to their cart, view items again and see the quantity they took subtracted from the initial one.
- **Display items:** show products and their attributes.
- **Room for improvement:** Starting point for more development like a credit card validator, checkout process, shipping, etc.

## Issues found throughout the Project
- **Infinite loops:** There was a lot of scenarios where the program could loop, so learning about features like `cin.ignore();` and mastering the node files was key and time consuming.
- **Managing files:** Having a lot of functions was difficult at first, as I wanted to avoid overriding values and seeked some control over access for each file to the others. However, this was fixed through implementing header files, as it was key to having a more efficient program.
- **User experience:** At the beginning draft of the code, the program was more like a display of a database than an actual simulation of the shopping process, so researching how to personalize the experience more and UI principles was essential. This was improved through asking the user for a name, adding welcome and introduction texts, etc.

> Refer to the code in this repository to see the finalized project files.

## References

Pramanick, Sohom. “History of C.” GeeksforGeeks, GeeksforGeeks, 18 July 2019, www.geeksforgeeks.org/history-of-c/.

Xiao, Lillian. “What Is C++ Used For?” Codecademy Blog, 10 May 2021, www.codecademy.com/resources/blog/what-is-c-plus-plus-used-for/.

Hossain, Akhtar. “Best C++ IDEs and Editors in 2023.” Hackr.io, 2023, hackr.io/blog/cpp-ide.

‌Goel, Aman. “C++ Language: Features, Uses, Applications & Advantages.” Hackr.io, 2023, hackr.io/blog/features-uses-applications-of-c-plus-plus-language. Accessed 11 Dec. 2023.

‌Cravey, David. “C++: Functional-Style Programming in C++.” Microsoft, 27 Jan. 2016, learn.microsoft.com/en-us/archive/msdn-magazine/2012/august/c-functional-style-programming-in-c. Accessed 12 Dec. 2023.

Geeks for Geeks. “Header Files in C/C++ and Its Uses.” GeeksforGeeks, GeeksforGeeks, 2 July 2020, www.geeksforgeeks.org/header-files-in-c-cpp-and-its-uses/.
