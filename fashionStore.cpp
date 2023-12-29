#ifndef FASHIONSTORE_H
#define FASHIONSTORE_H
/* I'm using header files, they have a .h extension.
    After researching a cleaner way to organize my functions, I learned more about header files in C++.
    These can declare the interfaces of functions, classes that we want to be shared with other files.
    Source: https://www.geeksforgeeks.org/header-files-in-c-cpp-and-its-uses/

    NOTE: When proposing the PLP, I started with grocery store items, so items are referred to as products in the files as well.
*/

#include "node.cpp"

class FashionStore {
private:
    Node* head;
    Node* cartHead;

public:
    FashionStore() {
        head = nullptr;
        cartHead = nullptr;
    }

    void addProduct(string name, string material, string size, string color, double price, int quantity) {
        Node* newNode = new Node(name, material, size, color, price, quantity);
        newNode->next = head;
        head = newNode;
    }

    void displayProducts() {
        Node* current = head;
        while (current != nullptr) {
            cout << "Name: " << current->name << ", Material: " << current->material << ", Size: " << current->size << ", Color: " << current->color << ", Price: " << current->price << ", Quantity: " << current->quantity << endl;
            current = current->next;
        }
    }

    void addToCart(string name, int quantity) {
        while (true) {
            Node* current = head;
            bool found = false;
            while (current != nullptr) {
                if (current->name == name) {
                    found = true;
                    if (quantity <= 0) {
                        cout << "Invalid input, we apologize! ";
                        while (!(cin >> quantity)) { // Loop until a valid integer is entered
                            cout << "Please enter a valid positive integer: ";
                            cin.clear(); // Clear the error state
                            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard the input buffer
                        }
                        continue; // Restart the loop to revalidate the quantity
                    }
                    if (current->quantity >= quantity) {
                        Node* cartNode = new Node(current->name, current->material, current->size, current->color, current->price, quantity);
                        cartNode->next = cartHead;
                        cartHead = cartNode;
                        current->quantity -= quantity;
                        cout << quantity << " " << current->name << "(s) added to the cart." << endl;
                        return;
                    } else {
                        cout << "Insufficient quantity available for " << current->name << "." << endl;
                        return;
                    }
                }
                current = current->next;
            }
            if (!found) {
                cout << "Item not found. Please enter a valid items name or type 'EXIT' to cancel: ";
                cin >> name;
                if (name == "EXIT" or name == "exit" or name == "Exit") {
                    return; // Exit if the user wants to cancel
                }
            }
        }
    }

    // NTS: Come back to this to avoid loop. -- Update: check.
    void displayCart() {
        Node* current = cartHead;
        while (current != nullptr) {
            cout << "Item Name: " << current->name << ", Quantity: " << current->quantity << endl;
            current = current->next;
        }
    }
};

#endif
