#include <iostream>
using namespace std;

class Father {
public:
    void showFather() { cout << "Father class\n"; }
};

class Mother {
public:
    void showMother() { cout << "Mother class\n"; }
};

class Child : public Father, public Mother {
public:
    void showChild() { cout << "Child class\n"; }
};

int main() {
    Child c;
    int ch;

    cout << "1.Father\n2.Mother\n3.Child\n4.All\nChoose: ";
    cin >> ch;

    switch (ch) {
        case 1: c.showFather(); break;
        case 2: c.showMother(); break;
        case 3: c.showChild(); break;
        case 4:
            c.showFather();
            c.showMother();
            c.showChild();
            break;
        default:
            cout << "Invalid choice";
    }

    return 0;
}