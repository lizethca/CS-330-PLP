#ifndef NODE_H
#define NODE_H
/* I'm using header files, they have a .h extension.
    After researching a cleaner way to organize my functions, I learned more about header files in C++.
    These can declare the interfaces of functions, classes that we want to be shared with other files.
    Source: https://www.geeksforgeeks.org/header-files-in-c-cpp-and-its-uses/
*/

#include <iostream>
#include <string>
using namespace std;

class Node {
public:
    string name;
    string material;
    string size;
    string color;
    double price;
    int quantity;
    Node* next;

    Node(string n, string m, string s, string c, double p, int q) {
        name = n;
        material = m;
        size = s;
        color = c;
        price = p;
        quantity = q;
        next = nullptr; // Source: Windows, nullptr stands for null pointer value.
    }
};

#endif
