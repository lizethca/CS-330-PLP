#include <iostream>
#include "fashionStore.cpp"
#include <chrono>
#include <thread>

using namespace std;

int main() {
    FashionStore store;
    // Items sampled from actual stores, for timing purposes, only one size per item was picked.
    store.addProduct("Shirt", "Cotton", "M", "Blue", 9.99, 5);
    store.addProduct("Jeans", "Denim", "28", "Dark Blue", 49.99, 5);
    store.addProduct("Dress", "Cotton", "S", "Black", 79.99, 5);
    store.addProduct("Cardigan", "Cotton", "XL", "White", 59.99, 5);
    store.addProduct("Shoes", "Nylon", "8", "Red", 89.99, 5);
    store.addProduct("Boots", "Faux Leather", "5", "Black", 109.99, 5);
    store.addProduct("Blazer", "Cotton", "S", "Black", 29.99, 5);
    store.addProduct("Sweatshirt", "Cotton", "M", "Black", 19.99, 5);
    store.addProduct("Hoodie", "Cotton", "L", "Black", 59.99, 5);

    int choice;
    string itemName;
    string clientName;
    // IMPROVEMENT: More personalized user experience.
    cout << "Welcome to Liz's Fashion Boutique!" << endl;
    cout << "To start your shopping experience with us, let us get to know you, please enter your name: ";
    cin >> clientName;
    cout << "Perfect, " << clientName << ", let's begin!" << endl;

    do {        
        cout << "1. See the items" << endl;
        cout << "2. Add an item to my Cart" << endl;
        cout << "3. Show my Cart" << endl;
        cout << "4. All done!" << endl;
        cout << "What would you like to do next? Enter: ";
        cin >> choice;
        cin.ignore(); // Thanks W3Schools -- fixed infinite loop by ignoring the remaining characters that were making the input loop.

        switch (choice) {
            case 1:
                cout << "These are the available items and details: " << endl;
                store.displayProducts();
                break;
            case 2:
                int itemQuantity;  // Declare itemQuantity here
                cout << "Enter the name of the item you would like to add to your Cart: ";
                cin >> itemName;
                cout << "How many of this item would you like to add? ";
                cin >> itemQuantity;
                store.addToCart(itemName, itemQuantity);
                break;
            case 3:
                cout << clientName << "'s Cart: " << endl;
                store.displayCart();
                break;
            case 4:
                cout << "Thank you for shopping with us, " << clientName << ". Follow us on Instagram @LizsBoutiqueBOS and come back soon!" << endl;
                break;
            default:
                cout << "Invalid choice, we apologize! Please try again or ask our Customer service for help." << endl;
        }
        
        cout << endl; // Thanks random coding website -- Added a blank line to make the program cleaner after every option.

        cout << "Returning to the main menu... Please wait." << endl; 
        this_thread::sleep_for(chrono::seconds(1)); // Readability purposes! -- Source: GeeksForGeeks, only the structure of it.
    } while (choice != 4);

    return 0;
}
