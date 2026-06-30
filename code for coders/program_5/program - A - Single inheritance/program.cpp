#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void eat() {
        cout << "Animal is eating." << endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    void bark() {
        cout << "Dog is barking." << endl;
    }
};

int main() {
    Dog d;
    int choice;

    cout << "===== MENU =====" << endl;
    cout << "1. Eat" << endl;
    cout << "2. Bark" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1) {
        d.eat();
    }
    else if (choice == 2) {
        d.bark();
    }
    else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}